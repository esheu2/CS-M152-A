`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:53:16 03/14/2019
// Design Name:   fp_mult
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/fp_mult_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fp_mult
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fp_mult_tb;

	// Inputs
	reg clk;
	reg [31:0] a;
	reg [31:0] b;

	// Outputs
	wire [31:0] y;

	// Instantiate the Unit Under Test (UUT)
	fp_mult uut (
		.clk(clk), 
		.a(a), 
		.b(b), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a = 32'b00111111100000000000000000000000;
		b = 32'b00111111100000000000000000000000;
		#100;
	end
      always
		#1 clk = ~clk;
endmodule

