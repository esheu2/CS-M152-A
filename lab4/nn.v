`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:10:35 03/13/2019 
// Design Name: 
// Module Name:    nn 
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
module nn(
		clk,
		sl,
		sw,
		pl,
		pw,
		species,
		final
    );

input clk;
input wire [3:0] sl; 
input wire [3:0] sw;
input wire [3:0] pl;
input wire [3:0] pw;
output wire [3:0] species;
output wire [31:0] final;

//convert all inputs to 32 bit floats
wire [31:0] slfp; 
wire [31:0] swfp;
wire [31:0] plfp;
wire [31:0] pwfp;

int_to_float it1(
					.a(sl),
					.b(slfp)
    );

int_to_float it2(
					.a(sw),
					.b(swfp)
    );

int_to_float it3(
					.a(pl),
					.b(plfp)
    );
	 
int_to_float it4(
					.a(pw),
					.b(pwfp)
    );
	 
//get activation for each node in hidden layer Wx+b
wire [31:0] h1_m_out;
wire [31:0] h1_a_out;

matrix_mult h1mm(
				.clk(clk),
				.arr1_0(slfp),
				.arr1_1(swfp),
				.arr1_2(plfp),
				.arr1_3(pwfp),
				.arr2_0(32'b11000000110111011100001010001111),
				.arr2_1(32'b10111100100010001000111110000110),
				.arr2_2(32'b01000001011011000111101011100001),
				.arr2_3(32'b01000000110101111011011100010111),
				.ans(h1_m_out)
					);
					
fp_add h1ab(
				.a(h1_m_out),
				.b(32'b11000001001000011000000100000110),
				.clk(clk),
				.out(h1_a_out)
				);
				
wire [31:0] h2_m_out;
wire [31:0] h2_a_out;

matrix_mult h2mm(
				.clk(clk),
				.arr1_0(slfp),
				.arr1_1(swfp),
				.arr1_2(plfp),
				.arr1_3(pwfp),
				.arr2_0(32'b10111111001100111110101010110011),
				.arr2_1(32'b01000000011100111111010110000100),
				.arr2_2(32'b11000000100100101100110110011111),
				.arr2_3(32'b11000000100101111001110011100000),
				.ans(h2_m_out)
					);
					
fp_add h2ab(
				.a(h2_m_out),
				.b(32'b00111111010101011101110011000110),
				.clk(clk),
				.out(h2_a_out)
				);
				
wire [31:0] h3_m_out;
wire [31:0] h3_a_out;

matrix_mult h3mm(
				.clk(clk),
				.arr1_0(slfp),
				.arr1_1(swfp),
				.arr1_2(plfp),
				.arr1_3(pwfp),
				.arr2_0(32'b11000000111000000110101001111111),
				.arr2_1(32'b10111110010001100101000111110100),
				.arr2_2(32'b01000001011010010011101111000000),
				.arr2_3(32'b01000000111100011101011011001011),
				.ans(h3_m_out)
					);
					
fp_add h3ab(
				.a(h3_m_out),
				.b(32'b11000001001001101100111110101011),
				.clk(clk),
				.out(h3_a_out)
				);

wire [31:0] h4_m_out;
wire [31:0] h4_a_out;

matrix_mult h4mm(
				.clk(clk),
				.arr1_0(slfp),
				.arr1_1(swfp),
				.arr1_2(plfp),
				.arr1_3(pwfp),
				.arr2_0(32'b01000000000000101011000111000100),
				.arr2_1(32'b11000000011110010100100111001111),
				.arr2_2(32'b01000000101011101000101101000100),
				.arr2_3(32'b01000000101001111000100000000001),
				.ans(h4_m_out)
					);
					
fp_add h4ab(
				.a(h4_m_out),
				.b(32'b10111111100111111101101011111001),
				.clk(clk),
				.out(h4_a_out)
				);
				
//calculate sigmoid of each node in hidden layer
wire [31:0] h1;
sigmoid_approx s1(
				.clk(clk),
				.x(h1_a_out),
				.y(h1)
				);
				
wire [31:0] h2;
sigmoid_approx s2(
				.clk(clk),
				.x(h2_a_out),
				.y(h2)
				);
				
wire [31:0] h3;
sigmoid_approx s3(
				.clk(clk),
				.x(h3_a_out),
				.y(h3)
				);
				
wire [31:0] h4;
sigmoid_approx s4(
				.clk(clk),
				.x(h4_a_out),
				.y(h4)
				);
				
//calculate the activation of each output node
wire [31:0] o1_m_out;
wire [31:0] o1_a_out;

matrix_mult o1mm(
				.clk(clk),
				.arr1_0(h1),
				.arr1_1(h2),
				.arr1_2(h3),
				.arr1_3(h4),
				.arr2_0(32'b11000001000001001111110010001111),
				.arr2_1(32'b11000000110001011010101001010000),
				.arr2_2(32'b11000001000011011000101110110010),
				.arr2_3(32'b01000000111111111011010000100100),
				.ans(o1_m_out)
					);
					
fp_add o1ab(
				.a(o1_m_out),
				.b(32'b00111110101001100000011010111000),
				.clk(clk),
				.out(o1_a_out)
				);
				
wire [31:0] o2_m_out;
wire [31:0] o2_a_out;

matrix_mult o2mm(
				.clk(clk),
				.arr1_0(h1),
				.arr1_1(h2),
				.arr1_2(h3),
				.arr1_3(h4),
				.arr2_0(32'b11000000010100100010100000100100),
				.arr2_1(32'b01000000100111001110010110001010),
				.arr2_2(32'b11000000010001110101110111001100),
				.arr2_3(32'b11000000101111100100101010001100),
				.ans(o2_m_out)
					);
					
fp_add o2ab(
				.a(o2_m_out),
				.b(32'b00111111100011111101111100111011),
				.clk(clk),
				.out(o2_a_out)
				);
				
wire [31:0] o3_m_out;
wire [31:0] o3_a_out;

matrix_mult o3mm(
				.clk(clk),
				.arr1_0(h1),
				.arr1_1(h2),
				.arr1_2(h3),
				.arr1_3(h4),
				.arr2_0(32'b01000001000001010010011101001000),
				.arr2_1(32'b11000000101000110011111011000000),
				.arr2_2(32'b01000001000000011111010010100111),
				.arr2_3(32'b10111110110011101110011001010100),
				.ans(o3_m_out)
					);
					
fp_add o3ab(
				.a(o3_m_out),
				.b(32'b11000000111011000101001001110100),
				.clk(clk),
				.out(o3_a_out)
				);
				
//calculate sigmoid of each node in output layer
wire [31:0] o1;
sigmoid_approx s5(
				.clk(clk),
				.x(o1_a_out),
				.y(o1)
				);
				
wire [31:0] o2;
sigmoid_approx s6(
				.clk(clk),
				.x(o2_a_out),
				.y(o2)
				);
				
wire [31:0] o3;
sigmoid_approx s7(
				.clk(clk),
				.x(o3_a_out),
				.y(o3)
				);

//output classification		

wire [31:0] prelim;
assign prelim = (o2 > o3) ? o2 : o3;
assign final = (o1 > prelim) ? o1 : prelim;

wire[3:0] spec1, spec2;
assign spec1 = (prelim == o2) ? 4'd1 : 4'd2;
assign spec2 = (final == o1) ? 4'd0 : spec1;

assign species = spec2;

endmodule
