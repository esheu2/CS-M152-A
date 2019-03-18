`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:19:46 03/09/2019
// Design Name:   multiplier
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/float_mult_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module float_mult_tb;

	// Inputs
	reg [31:0] input_a;
	reg [31:0] input_b;
	reg input_a_stb;
	reg input_b_stb;
	reg output_z_ack;
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] output_z;
	wire output_z_stb;
	wire input_a_ack;
	wire input_b_ack;

	// Instantiate the Unit Under Test (UUT)
	multiplier uut (
		.input_a(input_a), 
		.input_b(input_b), 
		.input_a_stb(input_a_stb), 
		.input_b_stb(input_b_stb), 
		.output_z_ack(output_z_ack), 
		.clk(clk), 
		.rst(rst), 
		.output_z(output_z), 
		.output_z_stb(output_z_stb), 
		.input_a_ack(input_a_ack), 
		.input_b_ack(input_b_ack)
	);

	initial begin
		// Initialize Inputs
		input_a = 0;
		input_b = 0;
		input_a_stb = 0;
		input_b_stb = 0;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		input_a = 32'b00111111100000000000000000000000;
		input_b = 32'b00111111100000000000000000000000;
		input_a_stb = 1;
		input_b_stb = 1;
	end
      always
		#1 clk = ~clk;
endmodule

