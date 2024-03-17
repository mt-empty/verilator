#include "VTrafficLite.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    VTrafficLite* trafficDir = new VTrafficLite;

    // Test the multiplexer with different select signals
    for (int tick = 0; tick < 2; ++tick) {
        trafficDir->EWCar = !tick; // Example values for inputs
        trafficDir->NSCar = tick;
        trafficDir->clock = tick;
        trafficDir->eval();
        std::cout << "tick=" << tick << " NSLite=" << (int)trafficDir->NSLite << std::endl;
        std::cout << "tick=" << tick << " EWLite=" << (int)trafficDir->EWLite << std::endl;
    }

    delete trafficDir;
    exit(0);
}
