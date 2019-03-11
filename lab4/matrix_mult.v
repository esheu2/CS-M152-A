`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:46:08 03/06/2019 
// Design Name: 
// Module Name:    matrix_mult 
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
// Only accepts floating point numbers to multiply
module matrix_mult(
	 clk,
    arr1_0,
    arr1_1,
    arr1_2,
    arr1_3,
    arr2_0,
    arr2_1,
    arr2_2,
    arr2_3,
    ans
    );

input clk;
input wire [31:0] arr1_0;
input wire [31:0] arr1_1;
input wire [31:0] arr1_2;
input wire [31:0] arr1_3;

input wire [31:0] arr2_0;
input wire [31:0] arr2_1;
input wire [31:0] arr2_2;
input wire [31:0] arr2_3;

output wire [31:0] ans;

reg [31:0] ans_temp;

wire [31:0] product_0;
wire [31:0] product_1;
wire [31:0] product_2;
wire [31:0] product_3;

//mx mult logic here TODO

cheat_fp_mult prod0(
				.clk(clk),
				.a(arr1_0),
				.b(arr2_0),
				.y(product_0)
				);
				
cheat_fp_mult prod1(
				.clk(clk),
				.a(arr1_1),
				.b(arr2_1),
				.y(product_1)
				);
				
cheat_fp_mult prod2(
				.clk(clk),
				.a(arr1_2),
				.b(arr2_2),
				.y(product_2)
				);
			
cheat_fp_mult prod3(
				.clk(clk),
				.a(arr1_3),
				.b(arr2_3),
				.y(product_3)
				);

assign ans = product_0 + product_1 + product_2 + product_3;

endmodule
