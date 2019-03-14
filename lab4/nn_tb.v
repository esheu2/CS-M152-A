`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:30:00 03/13/2019
// Design Name:   nn
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/nn_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: nn
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module nn_tb;

	// Inputs
	reg clk;
	reg [3:0] sl;
	reg [3:0] sw;
	reg [3:0] pl;
	reg [3:0] pw;

	// Outputs
	wire [3:0] species;
	wire [31:0] final;

	// Instantiate the Unit Under Test (UUT)
	nn uut (
		.clk(clk), 
		.sl(sl), 
		.sw(sw), 
		.pl(pl), 
		.pw(pw), 
		.species(species),
		.final(final)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		sl = 0;
		sw = 0;
		pl = 0;
		pw = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		sl = 5;
		sw = 3;
		pl = 1;
		pw = 6;
		#100;
		
		//1
		
		sl = 5;
		sw = 3;
		pl = 1;
		pw = 1;
		#100;
		
		//2
		sl = 9;
		sw = 9;
		pl = 9;
		pw = 9;
		#100;
	end
      always
		#1 clk = ~clk;
endmodule

