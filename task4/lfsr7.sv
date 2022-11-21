module lfsr7 (
        input logic         clk,    //input clock
        input logic         en,     //enable
        input logic         rst,    //reset
        output logic        [6:0] data_out     //serial data out 
);

        logic [7:1] sreg;       //shift register

        always_ff @ (posedge clk)
            if (rst)
                sreg <= 7'b1;
            else begin
                sreg <= en ? {sreg[6:1], sreg[3] ^ sreg[7] } : sreg;
            end
        assign data_out = sreg[7:1];

endmodule
