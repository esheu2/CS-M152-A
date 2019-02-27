`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:30:19 02/27/2019
// Design Name:   seven_seg_display
// Module Name:   /home/ise/Desktop/CS-M152-A/lab3/seven_seg_display_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seven_seg_display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module seven_seg_display_tb;

	// Inputs
	reg [3:0] number;

	// Outputs
	wire [7:0] seven_seg;

	// Instantiate the Unit Under Test (UUT)
	seven_seg_display uut (
		.number(number), 
		.seven_seg(seven_seg)
	);

	initial begin
		// Initialize Inputs
		number = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		number = 1;
		#100
		number = 2;
		#100
		number = 3;
		#100
		number = 4;
		#100
		number = 5;
		#100
		number = 6;
		#100
		number = 7;
		#100
		number = 8;
		#100
		number = 9;
		#100
		number = 10;
		#100;
	end
      
endmodule

