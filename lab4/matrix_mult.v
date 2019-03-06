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

output wire [63:0] ans;

reg [63:0] ans_temp;

//mx mult logic here TODO

assign ans = ans_temp;

endmodule
