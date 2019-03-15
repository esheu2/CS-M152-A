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
    output [3:0] an,
    output [7:0] seg
    );

wire [3:0] sl, sw, pl, pw;


wire [3:0] species;
wire [31:0] final;

assign sl = 4'd5;
assign sw = 4'd3;
assign pl = 4'd1;
assign pw = 4'd6;

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
