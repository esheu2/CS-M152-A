`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:57:26 01/16/2019
// Design Name:   FPCVT
// Module Name:   E:/lab1/FPCVT_TB.v
// Project Name:  lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FPCVT_TB;

	// Inputs
	reg [11:0] D;
	reg [2:0] E;
	reg [3:0] F;

	// Outputs
	wire S;

	// Instantiate the Unit Under Test (UUT)
	FPCVT uut (
		.D(D), 
		.S(S), 
		.E(E), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		assign D = 12'b0000_0000_0000;
		assign E = 3'b000;
		assign F = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
        #20;
        assign D = 12'b0000_1010_1010;
        
        #40;
        assign D = 12'b1010_0100_0100;
		// Add stimulus here

	end
      
endmodule

