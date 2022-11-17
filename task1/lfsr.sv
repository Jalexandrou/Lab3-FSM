module lfsr (
        input logic         clk,    //input clock
        input logic         rst,     //reset
        input logic         en,     //enable
        output logic         [3:0] data_out     //serial data out 
);

        logic [4:1] sreg;       //shift register

        always_ff @ (posedge clk, posedge rst)
            if (rst)
                sreg <= 4'b1;
            else begin
                sreg <= en ? {sreg[3:1], sreg[3] ^ sreg[4] } : sreg;
            end
        assign data_out = sreg[4:1];

endmodule
