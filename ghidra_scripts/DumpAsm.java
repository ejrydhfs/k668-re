import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import java.io.*;

public class DumpAsm extends GhidraScript {
    public void run() throws Exception {
        String outFile = System.getenv("DECOMP_OUT");
        if (outFile == null) { outFile = "/tmp/asm.txt"; }
        long lo = Long.decode(System.getenv("RANGE_LO") == null ? "0x0" : System.getenv("RANGE_LO"));
        long hi = Long.decode(System.getenv("RANGE_HI") == null ? "0x1000" : System.getenv("RANGE_HI"));

        Address start = toAddr(lo);
        DisassembleCommand cmd = new DisassembleCommand(start, null, true);
        cmd.applyTo(currentProgram, monitor);
        long[] extra = {0x0066, 0x0050, 0x04f0, 0x0506, 0x051b, 0x0522, 0x0527, 0x0529, 0x0532, 0x0535,
                        0x9AAF, 0x9E56, 0xA3F5, 0x0529, 0x0800, 0x0900, 0x9A00};
        for (long e : extra) {
            DisassembleCommand c2 = new DisassembleCommand(toAddr(e), null, true);
            c2.applyTo(currentProgram, monitor);
        }

        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(outFile)));
        Listing lst = currentProgram.getListing();
        for (long a = lo; a < hi; ) {
            Address addr = toAddr(a);
            Instruction ins = lst.getInstructionAt(addr);
            if (ins == null) {
                pw.printf("%04x: .db %02x%n", a, currentProgram.getMemory().getByte(addr) & 0xff);
                a++;
            } else {
                pw.printf("%04x: %-24s %s%n", a, ins.getMnemonicString(), ins.toString());
                a += ins.getLength();
            }
        }
        pw.close();
        println("DONE -> " + outFile);
    }
}
