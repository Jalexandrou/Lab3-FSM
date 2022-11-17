module f1_fsm (
        input logic         clk,    //input clock
        input logic         rst,     //reset
        input logic         en,     //enable
        output logic        [7:0] data_out     //serial data out 
);
        //define states
        typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8} my_state;
        my_state current_state, next_state;

        // state registers
        always_ff @ (posedge clk, posedge rst)
            if (rst)    current_state <= S0;
            else        current_state <= en ? next_state : current_state;

        always_comb 
            case (current_state)
                    S0: begin next_state = S1; data_out = 8'b0; end
                    S1: begin next_state = S2; data_out = 8'b1; end
                    S2: begin next_state = S3; data_out = 8'b11; end
                    S3: begin next_state = S4; data_out = 8'b111; end
                    S4: begin next_state = S5; data_out = 8'b1111; end
                    S5: begin next_state = S6; data_out = 8'b11111; end
                    S6: begin next_state = S7; data_out = 8'b111111; end
                    S7: begin next_state = S8; data_out = 8'b1111111; end
                    S8: begin next_state = S0; data_out = 8'b11111111; end
                    default: begin next_state = S0; data_out = 8'b0; end
            endcase

endmodule
