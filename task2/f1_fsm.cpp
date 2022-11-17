#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

Verilated::commandArgs(argc, argv);
// init top verilog instance
Vf1_fsm* top = new Vf1_fsm;
//init trace dump
Verilated::traceEverOn(true);
VerilatedVcdC* tfp = new VerilatedVcdC;
top->trace (tfp, 99);
tfp->open ("f1_fsm.vcd");

//init Vbuddy
if (vbdOpen()!=1) return(-1);
vbdHeader("f1_fsm");
vbdSetMode(1);

//initialize simulation inputs
top->clk = 0;
top->rst = 0;
top->en = 1;

//run simulation for many clock cycles 
for (i=0; i<100000; i++){
    
    //dump variables into VCD file and toggle clock
    for(clk=0; clk<2; clk++) {
        tfp->dump (2*i+clk);
        top->clk = !top->clk;
        top->eval ();
    }

    //++++ Send output to Vbuddy
    vbdBar(top->data_out & 0xFF);
    vbdCycle(i+1);
    //---- end of Vbuddy output section

    //change input stimuli
    top->rst = (i<2);
    top->en = vbdFlag();
    
      // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')){
        vbdClose();
        tfp->close();
        exit(0);    
    }           // ... exit if finish OR 'q' pressed
}

}