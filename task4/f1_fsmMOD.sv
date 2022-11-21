module f1_fsmMOD (
        input logic         clk,    //input clock
        input logic         rst,     //reset
        input logic         en,     //enable
        input logic         trigger,  //trigger
        output logic        cmd_seq,
        output logic        cmd_delay,
        output logic        [7:0] data_out     //serial data out 
);
        //define states
        typedef enum {S1, S2, S3, S4, S5, S6, S7, S8, S0} my_state;
        my_state current_state, next_state;

        // state registers
        always_ff @ (posedge clk)
            if (rst)    current_state <= S0;
            else        current_state <= en ? next_state : current_state;

        always_comb begin
            if (rst) cmd_seq = 0;
            case (current_state)
                    S0: begin 
                        if (trigger == 1'b1) cmd_seq = 1'b1;
                        next_state = S1;
                        data_out = 8'b0;
                        cmd_delay = 1'b0;
                        end
                    S1: begin next_state = S2; data_out = 8'b1; cmd_seq = 1'b1;end
                    S2: begin next_state = S3; data_out = 8'b11; cmd_seq = 1'b1; end
                    S3: begin next_state = S4; data_out = 8'b111; cmd_seq = 1'b1; end
                    S4: begin next_state = S5; data_out = 8'b1111; cmd_seq = 1'b1; end
                    S5: begin next_state = S6; data_out = 8'b11111; cmd_seq = 1'b1; end
                    S6: begin next_state = S7; data_out = 8'b111111; cmd_seq = 1'b1; end
                    S7: begin next_state = S8; data_out = 8'b1111111; cmd_seq = 1'b1; end
                    S8: begin  
                        next_state = S0;
                        cmd_seq = 1'b0;
                        cmd_delay = 1'b1;
                        data_out = 8'b11111111; 
                        end
                    default: begin next_state = S0; data_out = 8'b0; end
            endcase
        end

endmodule
