`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:28:52 03/15/2019
// Design Name:   fp_add
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/fp_add_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fp_add
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fp_add_tb;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	fp_add uut (
		.a(a), 
		.b(b), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a = 32'b01000001011100000000000000000000;   // 15
		b = 32'b01000001101000000000000000000000;   // 20
		#100;
		a = 32'b01000001011100000000000000000000;   // 15
		b = 32'b0;   // 0
	end
      
endmodule

