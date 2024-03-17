module TrafficLite(
    input EWCar, 
    input NSCar, 
    output EWLite, 
    output NSLite, 
    input clock
);

    reg state; // start from either 

    initial state=0; 

    // follwing two assignments set the output, which is based only on the state variable
    assign NSLite = ~ state; // 1 for NSLite
    assign EWLite = state;  // 0 for EWLite

    always @(posedge clock) begin
        case(state)
            0: state <= EWCar;
            1: state <= NSCar;
        endcase
    end

endmodule