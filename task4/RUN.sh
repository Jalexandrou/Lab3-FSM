#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f *.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace TOP.sv clktick.sv f1_fsmMOD.sv delay.sv lfsr7.sv --exe TOP.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f VTOP.mk VTOP

# run executable simulation file
echo "\nRunning simulation"
obj_dir/VTOP
echo "\nSimulation completed"

