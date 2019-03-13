`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:48:43 03/10/2019 
// Design Name: 
// Module Name:    cheat_fp_mult 
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
module cheat_fp_mult(
		input  wire     clk,
		input  wire[31:0] a,
		input  wire[31:0] b,
		output wire[31:0] y
    );
	 
		wire[31:0] ca;
		wire[31:0] cb;
		reg [31:0] a_temp;
		reg [31:0] b_temp;
		
		always @ (a,b) 
			begin
				a_temp <= a;
				b_temp <= b;
				if(!a_temp[22:0])
					a_temp[0] <= 1'b1;
				if(!b_temp[22:0])
					b_temp[0] <= 1'b1;
			end
			
		assign ca = a_temp;
		assign cb = b_temp;
		
		fp_mult fpm(
			.clk(clk),
			.a(ca),
			.b(cb),
			.y(y)
			);
        reg [31:0] asdf;

endmodule
