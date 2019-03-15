`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:41:52 03/11/2019
// Design Name:   matrix_mult
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/matrix_mult_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: matrix_mult
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module matrix_mult_tb;

	// Inputs
	reg clk;
	reg [31:0] arr1_0;
	reg [31:0] arr1_1;
	reg [31:0] arr1_2;
	reg [31:0] arr1_3;
	reg [31:0] arr2_0;
	reg [31:0] arr2_1;
	reg [31:0] arr2_2;
	reg [31:0] arr2_3;

	// Outputs
	wire [31:0] ans;

	// Instantiate the Unit Under Test (UUT)
	matrix_mult uut (
		.clk(clk),
		.arr1_0(arr1_0), 
		.arr1_1(arr1_1), 
		.arr1_2(arr1_2), 
		.arr1_3(arr1_3), 
		.arr2_0(arr2_0), 
		.arr2_1(arr2_1), 
		.arr2_2(arr2_2), 
		.arr2_3(arr2_3), 
		.ans(ans)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		arr1_0 = 0;
		arr1_1 = 0;
		arr1_2 = 0;
		arr1_3 = 0;
		arr2_0 = 0;
		arr2_1 = 0;
		arr2_2 = 0;
		arr2_3 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		arr1_0 = 32'b00111111100000000000000000000000;
		arr1_1 = 32'b00111111100000000000000000000000;
		arr1_2 = 32'b00111111100000000000000000000000;
		arr1_3 = 32'b00111111100000000000000000000000;
		arr2_0 = 32'b00111111100000000000000000000000;
		arr2_1 = 32'b00111111100000000000000000000000;
		arr2_2 = 32'b00111111100000000000000000000000;
		arr2_3 = 32'b00111111100000000000000000000000;
	end
	always 
	#1 clk = ~clk;
endmodule

