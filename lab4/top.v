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
	 input RsRx,
	 output RsTx,
    output [3:0] an,
    output [7:0] seg
    );

wire [3:0] sl, sw, pl, pw;

`include "seq_definitions.v"
   
   // USB-UART
   input        RsRx;
   output       RsTx;
	wire [7:0]           uart_rx_data;           // From uart_top_ of uart_top.v
   wire                 uart_rx_valid;          // From uart_top_ of uart_top.v
   wire                 uart_tx_busy;           // From uart_top_ of uart_top.v

wire [3:0] species;
wire [31:0] final;
wire asdf, valid;		//todo: valid for smthn


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
	 .clk(clk),
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
		  


	// ===========================================================================
   // UART controller
   // ===========================================================================

   uart_top uart_top_ (// Outputs
                       .o_tx            (RsTx),
                       .o_tx_busy       (uart_tx_busy),
                       .o_rx_data       (uart_rx_data[7:0]),
                       .o_rx_valid      (uart_rx_valid),
                       // Inputs
                       //.i_tx_reg        (inst_wd[5:4]),
                       .i_rx            (RsRx),
                       .i_tx_data       (species),//send the shit here i guess
                       .i_tx_stb        (valid),
                       /*AUTOINST*/
                       // Inputs
                       .clk             (clk),
                       .rst             (rst));

endmodule
