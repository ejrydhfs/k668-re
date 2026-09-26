import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;

public class DumpRange extends GhidraScript {
    public void run() throws Exception {
        String outFile = System.getenv("DECOMP_OUT");
        if (outFile == null) { outFile = "/tmp/range.c"; }
        long lo = Long.decode(System.getenv("RANGE_LO") == null ? "0x440000" : System.getenv("RANGE_LO"));
        long hi = Long.decode(System.getenv("RANGE_HI") == null ? "0x470000" : System.getenv("RANGE_HI"));
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(outFile)));
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        FunctionManager fm = currentProgram.getFunctionManager();
        ConsoleTaskMonitor mon = new ConsoleTaskMonitor();
        int n = 0;
        for (Function f : fm.getFunctions(true)) {
            long a = f.getEntryPoint().getOffset();
            if (a >= lo && a < hi) {
                n++;
                DecompileResults res = ifc.decompileFunction(f, 120, mon);
                pw.println("//==== FUNC " + f.getEntryPoint() + "  " + f.getName() + " ====");
                if (res != null && res.decompileCompleted()) {
                    pw.println(res.getDecompiledFunction().getC());
                } else {
                    pw.println("// DECOMP-FAILED");
                }
            }
        }
        pw.close();
        println("DONE " + n + " funcs -> " + outFile);
    }
}
