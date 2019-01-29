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
	wire [2:0] E;
	wire [3:0] F;

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
        D = 12'b0000_1010_1010;
		// Wait 100 ns for global reset to finish
        
        #100;
        D = 12'b1010_0100_0100;
		// Add stimulus here
        
        #100;
        D = 12'b1111_1111_1111;
        
        #100;
        D = 12'b1000_0000_0000;
        
        #100;
        D = 12'b0000_0010_1100;
        
        #100;
        D = 12'b0000_0010_1101;
        
        #100;
        D = 12'b0000_0010_1110;
        
        #100;
        D = 12'b0000_0010_1111;
        
        #100;
        D = 12'b1000_0010_1111;
        
        #100;
        D = 12'b0000_0001_0001;

	end
      
endmodule

