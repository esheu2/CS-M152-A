`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:15:40 03/15/2019
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

	// Outputs
	wire [3:0] an;
	wire [7:0] seg;

	// Bidirs
	wire [7:0] JA;
	reg output_value_valid;
	reg [7:0] output_value;
	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.JA(JA), 
		.an(an), 
		.seg(seg)
	);
	assign JA = (output_value_valid==1'b1)? output_value : 8'hZZ;
	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		output_value = 8'b0111_0000;
		output_value_valid = 1;
	end
   always
	#0.002 clk = ~clk;
endmodule

