#include "VMult4to1.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    VMult4to1* top = new VMult4to1;

    // Test the multiplexer with different select signals
    for (int sel = 0; sel < 4; ++sel) {
        top->in1 = 10; // Example values for inputs
        top->in2 = 20;
        top->in3 = 30;
        top->in4 = 40;
        top->sel = sel;
        top->eval();
        std::cout << "sel=" << sel << " Out=" << top->Out << std::endl;
    }

    delete top;
    exit(0);
}
