module and_gate( // modules are similar to classes in C++
    input wire a, // wire specifies combination signal
    input wire b,
    output wire out
);

assign out = a & b;

endmodule