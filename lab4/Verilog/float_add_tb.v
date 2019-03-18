`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:50:27 03/08/2019
// Design Name:   float_add
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/float_add_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: float_add
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module float_add_tb;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	reg clk;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	float_add uut (
		.a(a), 
		.b(b), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a = 32'b01000000101000000000000000000000;
		b = 32'b01000001001000000000000000000000;
		#100;
	end
	
   always
	#1 clk = ~clk;
	
endmodule

