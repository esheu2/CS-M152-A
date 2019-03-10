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
/*
float_mult prod0(
				.input_a(arr1_0),
				.input_b(arr2_0),
				.input_a_stb(1),
				.input_b_stb(1),
				.output_z_ack(1),
				.output_z(product_0),
				.output_z_stb(1),
				.input_a_ack(1),
				.input_b_ack(1)
				);

float_mult prod1(
				.input_a(arr1_1),
				.input_b(arr2_1),
				.input_a_stb(1),
				.input_b_stb(1),
				.output_z_ack(1),
				.output_z(product_1),
				.output_z_stb(1),
				.input_a_ack(1),
				.input_b_ack(1)
				);
				
float_mult prod2(
				.input_a(arr1_2),
				.input_b(arr2_2),
				.input_a_stb(1),
				.input_b_stb(1),
				.output_z_ack(1),
				.output_z(product_2),
				.output_z_stb(1),
				.input_a_ack(1),
				.input_b_ack(1)
				);

float_mult prod3(
				.input_a(arr1_3),
				.input_b(arr2_3),
				.input_a_stb(1),
				.input_b_stb(1),
				.output_z_ack(1),
				.output_z(product_3),
				.output_z_stb(1),
				.input_a_ack(1),
				.input_b_ack(1)
				);				

assign ans = product_0 + product_1 + product_2 + product_3;
*/
endmodule
