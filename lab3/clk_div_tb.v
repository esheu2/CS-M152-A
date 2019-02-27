`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:39:12 02/27/2019
// Design Name:   clk_div
// Module Name:   /home/ise/Desktop/CS-M152-A/lab3/clk_div_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_div_tb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire twoHz;
	wire oneHz;
	wire refreshHz;
	wire blinkHz;

	// Instantiate the Unit Under Test (UUT)
	clk_div uut (
		.clk(clk), 
		.rst(rst), 
		.twoHz(twoHz), 
		.oneHz(oneHz), 
		.refreshHz(refreshHz), 
		.blinkHz(blinkHz)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rst = 1;
		#100;
		rst = 0;  
		// Add stimulus here
	end
	
	always
		#0.0000000002 clk = ~clk;
	
endmodule

