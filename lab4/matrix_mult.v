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

wire [31:0] arri1, arri2;

reg [31:0] product_0;
reg [31:0] product_1;
reg [31:0] product_2;
reg [31:0] product_3;
wire [31:0] product;
wire [31:0] sum1;
wire [31:0] sum2;
reg [31:0] sum;

reg [31:0] curr1;
reg [31:0] curr2;

reg [31:0] curr3;
reg [31:0] curr4;

reg [2:0] count = 0;

fp_mult prod0(
				.a(curr1),
				.b(curr2),
				.y(product)
				);

reg [31:0] sum_0;
reg [31:0] sum_1;

fp_add s1(
			.a(curr3),
			.b(curr4),
			.out(sum)
			);

always@*
begin
	if(count == 0)
	begin
		curr1 <= arr1_0;
		curr2 <= arr2_0;
		product_0 <= product;
		count = count + 1'b1;
	end
	else if(count == 3'b001)
	begin
		curr1 <= arr1_1;
		curr2 <= arr2_1;
		product_1 <= product;
		count = count + 1'b1;
	end
	else if(count == 3'b010)
	begin
		curr1 <= arr1_2;
		curr2 <= arr2_2;
		product_2 <= product;
		count = count + 1'b1;
	end
	 else if(count == 3'b011)
	begin
		curr1 <= arr1_3;
		curr2 <= arr2_3;
		product_3 <= product;
		count = count + 1'b1;
	end
	 else if(count == 3'b100)
	begin
		curr3 <= product_0;
		curr4 <= product_1;
		sum_0 <= sum;
		count = count + 1'b1;
	end
	else  if(count == 3'b101)
	begin
		curr3 <= product_2;
		curr4 <= product_3;
		sum_1 <= sum;
		count = count + 1'b1;
	end
	else if(count == 3'b111)
	begin
		curr3 <= sum_0;
		curr4 <= sum_1;
		ans_temp <= sum;
		count = count + 1'b1;
	end
end

assign ans = ans_temp;

endmodule
