`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:08:32 02/27/2019
// Design Name:   stopwatch
// Module Name:   /home/ise/Desktop/CS-M152-A/lab3/stopwatch_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: stopwatch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module stopwatch_tb;

	// Inputs
	reg hz1clk;
	reg hz2clk;
	reg rst_deb;
	reg pause_deb;
	reg sel;
	reg adj;

	// Outputs
	wire [3:0] min10;
	wire [3:0] min1;
	wire [3:0] sec10;
	wire [3:0] sec1;

	// Instantiate the Unit Under Test (UUT)
	stopwatch uut (
		.hz1clk(hz1clk), 
		.hz2clk(hz2clk), 
		.rst_deb(rst_deb), 
		.pause_deb(pause_deb), 
		.sel(sel), 
		.adj(adj), 
		.min10(min10), 
		.min1(min1), 
		.sec10(sec10), 
		.sec1(sec1)
	);
	
	initial begin
		// Initialize Inputs
		hz1clk = 0;
		hz2clk = 0;
		rst_deb = 0;
		pause_deb = 0;
		sel = 0;
		adj = 0;

		// Wait 100 ns for global reset to finish
		#100;		
	end
	
	always
		begin
			#10 hz1clk = ~hz1clk;
      end
		
	always
		begin
			#5 hz2clk = ~hz2clk;
		end
		
	initial 
		begin
			adj = 0;
			#50
			
			adj = 1;
			#50
			
			sel = 1;
			#50
			
			adj = 0;
			pause_deb = 1;
			#2
			pause_deb = 0;
			
			rst_deb = 1;
			#100
			
			rst_deb = 0;
			#100
			
			pause_deb = 1;
			#2
			pause_deb = 0;
			#300; $finish;
		end
endmodule

