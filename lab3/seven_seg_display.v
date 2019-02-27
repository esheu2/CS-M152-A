`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:28:51 02/27/2019
// Design Name:   seven_seg_display
// Module Name:   /home/ise/Desktop/CS-M152-A/lab3/seven_seg_display.v
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

module seven_seg_display;

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

	end
      
endmodule

