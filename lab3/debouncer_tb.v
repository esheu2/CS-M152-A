`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:29:02 02/27/2019
// Design Name:   debouncer
// Module Name:   /home/ise/Desktop/CS-M152-A/lab3/debouncer_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: debouncer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module debouncer_tb;

	// Inputs
	reg clk;
	reg btn;

	// Outputs
	wire is_btn_posedge;

	// Instantiate the Unit Under Test (UUT)
	debouncer uut (
		.clk(clk), 
		.btn(btn), 
		.is_btn_posedge(is_btn_posedge)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		btn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		btn = 1;
		#50
		btn = 0;
		
		btn = 1;
		#5
		btn = 0;
	end
	
	always #1 clk = ~clk;
      
endmodule

