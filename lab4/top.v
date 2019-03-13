`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:46:41 03/06/2019 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
    input clk,
    input [7:0] JA,
    output [3:0] an,
    output [7:0] seg
    );

wire [3:0] sl, sw, pl, pw;


wire [3:0] species;
wire [31:0] final;
wire asdf;


numpad pad(
        .o_tx_data1(sl),
        .o_tx_data2(sw),
        .o_tx_data3(pl),
        .o_tx_data4(pw),
        .o_tx_valid(asdf),
        .clk(clk),
        .i_tx_busy(0),
        .i_inst(JA),
        .i_inst_valid(1)
        );

nn net(
    .sl(sl),
    .sw(sw),
    .pl(pl),
    .pw(pw),
    .species(species),
    .final(final)
    );
    
display_stuff disp(
        .class(species),
        .seg(seg),
        .an(an)
        );


endmodule
