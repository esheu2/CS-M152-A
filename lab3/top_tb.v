`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:02:54 02/27/2019
// Design Name:   top
// Module Name:   /home/ise/Desktop/CS-M152-A/lab3/top_tb.v
// Project Name:  lab3
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
	reg pause;
	reg rst;
	reg sel;
	reg adj;

	// Outputs
	wire [7:0] seg;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.pause(pause), 
		.rst(rst), 
		.sel(sel), 
		.adj(adj), 
		.seg(seg), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		pause = 0;
		rst = 0;
		sel = 0;
		adj = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
			adj = 0;
			#50
			
			adj = 1;
			#50
			
			sel = 1;
			#50
			
			adj = 0;
			pause = 1;
			#2
			pause = 0;
			
			rst = 1;
			#100
			
			rst = 0;
			#100
			
			pause = 1;
			#2
			pause = 0;
			#300; $finish;
	end
	
   always #0.0000000002 clk = ~clk;
	
endmodule

