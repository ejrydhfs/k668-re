// Dump decompilation of HID transport functions + their callers (+ optional address range).
// Env: DECOMP_OUT (output path), LO/HI (optional hex range), XREF_RW=1 to add WriteFile/ReadFile xrefs.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.Symbol;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.LinkedHashSet;
import java.util.Set;

public class DumpRe2 extends GhidraScript {
    public void run() throws Exception {
        String outFile = System.getenv("DECOMP_OUT");
        if (outFile == null) { outFile = "/tmp/decomp2.c"; }
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(outFile)));

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        FunctionManager fm = currentProgram.getFunctionManager();
        ConsoleTaskMonitor mon = new ConsoleTaskMonitor();

        Set<Function> transport = new LinkedHashSet<Function>();
        Set<Function> targets = new LinkedHashSet<Function>();

        String[] hidNames = { "HidD_SetFeature", "HidD_GetFeature", "HidD_GetInputReport", "HidD_SetOutputReport",
                              "HidD_GetAttributes", "HidD_GetPreparsedData", "HidD_GetHidGuid", "HidD_FreePreparsedData" };
        for (String nm : hidNames) {
            for (Symbol sym : currentProgram.getSymbolTable().getSymbols(nm)) {
                Address addr = sym.getAddress();
                for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(addr)) {
                    Function f = fm.getFunctionContaining(ref.getFromAddress());
                    if (f != null) { transport.add(f); }
                }
            }
        }

        if ("1".equals(System.getenv("XREF_RW"))) {
            for (String nm : new String[]{"WriteFile", "ReadFile"}) {
                for (Symbol sym : currentProgram.getSymbolTable().getSymbols(nm)) {
                    Address addr = sym.getAddress();
                    for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(addr)) {
                        Function f = fm.getFunctionContaining(ref.getFromAddress());
                        if (f != null) { transport.add(f); }
                    }
                }
            }
        }

        // transport functions themselves
        targets.addAll(transport);
        // one level UP: callers of transport (command builders)
        Set<Function> level1 = new LinkedHashSet<Function>();
        for (Function t : transport) {
            Address entry = t.getEntryPoint();
            for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(entry)) {
                Function f = fm.getFunctionContaining(ref.getFromAddress());
                if (f != null) { level1.add(f); targets.add(f); }
            }
        }
        // optional two levels UP: callers of builders (high-level apply logic)
        if ("1".equals(System.getenv("CALLERS2"))) {
            for (Function t : level1) {
                Address entry = t.getEntryPoint();
                for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(entry)) {
                    Function f = fm.getFunctionContaining(ref.getFromAddress());
                    if (f != null) { targets.add(f); }
                }
            }
        }

        // optional address range
        String loS = System.getenv("LO"), hiS = System.getenv("HI");
        if (loS != null && hiS != null) {
            long lo = Long.parseLong(loS, 16), hi = Long.parseLong(hiS, 16);
            for (Function f : fm.getFunctions(true)) {
                long a = f.getEntryPoint().getOffset();
                if (a >= lo && a < hi) { targets.add(f); }
            }
        }

        pw.println("// TRANSPORT FUNCTIONS:");
        for (Function f : transport) { pw.println("//   " + f.getEntryPoint() + " " + f.getName()); }
        pw.println("// TOTAL TARGET FUNCTIONS: " + targets.size());
        for (Function f : targets) {
            DecompileResults res = ifc.decompileFunction(f, 120, mon);
            if (res != null && res.decompileCompleted()) {
                pw.println("//==== FUNC " + f.getEntryPoint() + "  " + f.getName() + " ====");
                pw.println(res.getDecompiledFunction().getC());
            } else {
                pw.println("//==== FUNC " + f.getEntryPoint() + "  " + f.getName() + " DECOMP-FAILED ====");
            }
        }
        pw.close();
        println("DONE -> " + outFile + " transport=" + transport.size() + " targets=" + targets.size());
    }
}
