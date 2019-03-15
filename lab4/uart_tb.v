`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:12:09 03/15/2019
// Design Name:   uart_top
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/uart_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module uart_tb;

	// Inputs
	reg i_rx;
	reg [3:0] i_tx_data;
	reg i_tx_stb;
	reg clk;
	reg rst;

	// Outputs
	wire o_tx;
	wire o_tx_busy;
	wire [7:0] o_rx_data;
	wire o_rx_valid;

	// Instantiate the Unit Under Test (UUT)
	uart_top uut (
		.o_tx(o_tx), 
		.o_tx_busy(o_tx_busy), 
		.o_rx_data(o_rx_data), 
		.o_rx_valid(o_rx_valid), 
		.i_rx(i_rx), 
		.i_tx_data(i_tx_data), 
		.i_tx_stb(i_tx_stb), 
		.clk(clk), 
		.rst(rst)
	);

	initial begin
		// Initialize Inputs
		i_rx = 0;
		i_tx_data = 0;
		i_tx_stb = 0;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		i_rx = 0;
		i_tx_data = 4'd2;
		i_tx_stb = 1;

	end
      
endmodule

