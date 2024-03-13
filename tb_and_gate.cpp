#include "Vand_gate.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vand_gate* and_gate = new Vand_gate;

    for (int i = 0; i < 4; i++) {
        and_gate->a = i & 1;
        and_gate->b = (i >> 1) & 1;
        and_gate->eval();
        std::cout << "a=" << (int)and_gate->a << ", b=" << (int)and_gate->b << ", out=" << (int)and_gate->out << std::endl;
    }

    delete and_gate;
    exit(0);
}
