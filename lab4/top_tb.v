`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:41:10 03/15/2019
// Design Name:   top
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/top_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg clk;
	reg [7:0] JA;

	// Outputs
	wire [3:0] an;
	wire [7:0] seg;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.JA(JA), 
		.an(an), 
		.seg(seg)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		JA = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		JA = 8'd1;
		#100;
		JA = 8'd2;
		#100;
		JA = 8'd3;
		#100;
		JA = 8'd4;
		#100;

	end
   always
	#1 clk = ~clk;
endmodule

