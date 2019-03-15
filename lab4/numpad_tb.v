`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:25:27 03/15/2019
// Design Name:   numpad
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/numpad_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: numpad
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module numpad_tb;

	// Inputs
	reg clk;
	reg i_tx_busy;
	reg [7:0] i_inst;
	reg i_inst_valid;

	// Outputs
	wire [3:0] o_tx_data1;
	wire [3:0] o_tx_data2;
	wire [3:0] o_tx_data3;
	wire [3:0] o_tx_data4;
	wire o_tx_valid;

	// Instantiate the Unit Under Test (UUT)
	numpad uut (
		.o_tx_data1(o_tx_data1), 
		.o_tx_data2(o_tx_data2), 
		.o_tx_data3(o_tx_data3), 
		.o_tx_data4(o_tx_data4), 
		.o_tx_valid(o_tx_valid), 
		.clk(clk), 
		.i_tx_busy(i_tx_busy), 
		.i_inst(i_inst), 
		.i_inst_valid(i_inst_valid)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		i_tx_busy = 0;
		i_inst = 0;
		i_inst_valid = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

