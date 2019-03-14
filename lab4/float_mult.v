`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:05 03/07/2019 
// Design Name: 
// Module Name:    float_mult 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module fp_mult(input  wire clk,
			  input  wire[31:0] a,
              input  wire[31:0] b,
              output wire[31:0] y);

    reg [7:0] e;
    reg s;
	 
	 reg S;
	 
	 reg [47:0] rm;
	 
	 always @(a, b)
	 begin
		s = a[31] ^ b[31];
		e = a[30:23] + b[30:23] - 8'd127;
		rm = {1'b1, a[22:0]} * {1'b1, b[22:0]};
		if(!rm[46])
		begin
			e = e + 1;
			rm = rm >> 1;
		end
		S = |rm[21:0];
	  end
	 
	 assign y = (!a || !b) ? 0 : {s, e, rm[45:23] + (rm[23] & (rm[22] | S))};
	 
endmodule 
