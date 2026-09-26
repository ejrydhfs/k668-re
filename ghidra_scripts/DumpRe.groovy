// Dump decompilation of HID-related + address-range functions for K668 RE.
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;

String outFile = System.getenv("DECOMP_OUT") ?: "/tmp/decomp.c";
PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(outFile)));

DecompInterface ifc = new DecompInterface();
ifc.openProgram(currentProgram);
FunctionManager fm = currentProgram.getFunctionManager();
ConsoleTaskMonitor mon = new ConsoleTaskMonitor();

Set<Function> targets = new LinkedHashSet<>();

// 1) functions in the driver region
long lo = 0x00440000L, hi = 0x00470000L;
for (Function f : fm.getFunctions(true)) {
    long a = f.getEntryPoint().getOffset();
    if (a >= lo && a < hi) targets.add(f);
}

// 2) functions referencing HID imports
String[] hidNames = ["HidD_SetFeature","HidD_GetFeature","HidD_GetAttributes","HidD_GetPreparsedData","HidD_GetHidGuid","HidD_FreePreparsedData"];
for (String nm : hidNames) {
    for (Symbol sym : currentProgram.getSymbolTable().getSymbols(nm)) {
        Address addr = sym.getAddress();
        for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(addr)) {
            Function f = fm.getFunctionContaining(ref.getFromAddress());
            if (f != null) targets.add(f);
        }
    }
}

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
println("DONE -> " + outFile);
