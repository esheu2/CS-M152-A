`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:30:48 03/13/2019
// Design Name:   int_to_float
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/int_to_float_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: int_to_float
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module int_to_float_tb;

	// Inputs
	reg [3:0] a;

	// Outputs
	wire [31:0] b;

	// Instantiate the Unit Under Test (UUT)
	int_to_float uut (
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		a = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a = 4'b0001;
		#10;
		a = 4'b0010;
		#10;
		a = 4'b0010;
		#10;
		a = 4'b0011;
		#10;
		a = 4'b0100;
		#10;
		a = 4'b0101;
		#10;
		a = 4'b0110;
		#10;
		a = 4'b0111;
		#10;
		a = 4'b1000;
		#10;
		a = 4'b1001;
		#10;
		a = 4'b1111;
		#100;
	end
      
endmodule

