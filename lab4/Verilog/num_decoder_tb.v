`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:04:41 03/15/2019
// Design Name:   Decoder
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/num_decoder_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Decoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module num_decoder_tb;

	// Inputs
	reg clk;
	reg [3:0] Row;

	// Outputs
	wire [3:0] Col;
	wire [3:0] DecodeOut1;
	wire [3:0] DecodeOut2;
	wire [3:0] DecodeOut3;
	wire [3:0] DecodeOut4;

	// Instantiate the Unit Under Test (UUT)
	Decoder uut (
		.clk(clk), 
		.Row(Row), 
		.Col(Col), 
		.DecodeOut1(DecodeOut1), 
		.DecodeOut2(DecodeOut2), 
		.DecodeOut3(DecodeOut3), 
		.DecodeOut4(DecodeOut4)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		Row = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Row = 0;
		// Add stimulus here
		/*Row = 4'b0111;
		#10;
		Row = 4'b1011;
		#10;
		Row = 4'b1101;
		#10;
		Row = 4'b1110;
		#10;*/
	end
      always
		#0.002 clk = ~clk;
endmodule

