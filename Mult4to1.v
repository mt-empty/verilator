// Computer organisation and design
// B.4.2 Averilog definition of a 4-to-1 multiplexor with 32-bit inuts, using a case statement

module Mult4to1 (
    in1, in2, in3, in4, sel, Out
);
input [31:0] in1, in2, in3, in4;
input [1:0] sel;
output reg [31:0] Out;
always @(in1, in2, in3, in4, sel) begin
    case (sel)
        0: Out = in1; // had to swithc to blocking, because non-blocking was not working <=
        1: Out = in2; 
        2: Out = in3; 
        default: Out = in4;
    endcase
end
    
endmodule