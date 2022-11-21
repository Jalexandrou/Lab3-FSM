#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VTOP.h"
#include "vbuddy.cpp"     // include vbuddy code

#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  bool timing = 0;
  bool timing_ready = 0;
  bool flag;

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  VTOP * top = new VTOP;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("TOP.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("REACTION TIME");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  top->trigger = 0;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    vbdBar(top->data_out & 0xFF);

    if (top->data_out == 0b11111111){
      timing_ready = true; 
    } 

    if (timing_ready && top->data_out == 0) {  
      timing_ready = false;
      timing = true;
      vbdInitWatch();
    }

    flag = vbdFlag();

    if (timing && flag) {
      
      int time = vbdElapsed();

      vbdHex(4, (int)(time / 1000 % 10) & 0xFF);
      vbdHex(3, (int)(time / 100 % 10) & 0xFF);
      vbdHex(2, (int)(time / 10 % 10) & 0xFF);
      vbdHex(1, (int)(time % 10) & 0xFF);
      
      timing = false;

    } else {
      top->trigger = flag;
    }
    // set up input signals of testbench
    top->rst = (simcyc < 2);    // assert reset for 1st cycle
    vbdCycle(simcyc);

    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')){
      vbdClose();
      tfp->close();
      exit(0);    
    }   
  }

}
