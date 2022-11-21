module TOP (
    input logic             clk,
    input logic             rst,
    input logic             trigger,
    output logic      [7:0] data_out
);

logic tick;
logic time_out;
logic cmd_seq;
logic cmd_delay;
logic [6:0] K;

lfsr7 lfsr(
    .clk(clk),
    .rst(rst),
    .en(1),
    .data_out(K)
);

clktick clktick(
    .N(61),
    .en(cmd_seq),
    .rst(rst),
    .clk(clk),
    .tick(tick)
);

delay delay(
    .n(K),
    .trigger(cmd_delay),
    .rst(rst),
    .clk(clk),
    .time_out(time_out)
);

f1_fsmMOD f1_fsm(
    .rst(rst),
    .clk(clk),
    .en(cmd_seq ? tick : time_out),
    .trigger(trigger),
    .data_out(data_out),
    .cmd_seq(cmd_seq),
    .cmd_delay(cmd_delay)
);

endmodule
