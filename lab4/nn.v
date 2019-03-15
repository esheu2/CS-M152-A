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
		sl,
		sw,
		pl,
		pw,
		species,
		final
    );

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
				.arr1_0(slfp),
				.arr1_1(swfp),
				.arr1_2(plfp),
				.arr1_3(pwfp),
				.arr2_0(32'b01000000100000000000000000000000),
				.arr2_1(32'b00111110000101111011011101011011),
				.arr2_2(32'b01000001010101111011010100010001),
				.arr2_3(32'b01000000110110111011111000100111),
				.ans(h1_m_out)
					);
					
fp_add h1ab(
				.a(h1_m_out),
				.b(32'b11000001000111000010111010011010),
				.out(h1_a_out)
				);
				
wire [31:0] h2_m_out;
wire [31:0] h2_a_out;

matrix_mult h2mm(
				.arr1_0(slfp),
				.arr1_1(swfp),
				.arr1_2(plfp),
				.arr1_3(pwfp),
				.arr2_0(32'b11000000000001111010001100000100),
				.arr2_1(32'b01000000101101100010010111000110),
				.arr2_2(32'b11000000110100011110001110001000),
				.arr2_3(32'b11000000110100011011100100011000),
				.ans(h2_m_out)
					);
					
fp_add h2ab(
				.a(h2_m_out),
				.b(32'b00111111101010111001001100010100),
				.out(h2_a_out)
				);
				
wire [31:0] h3_m_out;
wire [31:0] h3_a_out;

matrix_mult h3mm(
				.arr1_0(slfp),
				.arr1_1(swfp),
				.arr1_2(plfp),
				.arr1_3(pwfp),
				.arr2_0(32'b11000000110001110010010100110010),
				.arr2_1(32'b10111110100000011110111011000010),
				.arr2_2(32'b01000001010001111111000100000111),
				.arr2_3(32'b01000000110100101110101000111001),
				.ans(h3_m_out)
					);
					
fp_add h3ab(
				.a(h3_m_out),
				.b(32'b11000001000100001111110010100101),
				.out(h3_a_out)
				);

wire [31:0] h4_m_out;
wire [31:0] h4_a_out;

matrix_mult h4mm(
				.arr1_0(slfp),
				.arr1_1(swfp),
				.arr1_2(plfp),
				.arr1_3(pwfp),
				.arr2_0(32'b11000000100010000101011110110100),
				.arr2_1(32'b00111110100000001101110110101101),
				.arr2_2(32'b01000001000010001001110001110000),
				.arr2_3(32'b01000000100000101101100010000110),
				.ans(h4_m_out)
					);
					
fp_add h4ab(
				.a(h4_m_out),
				.b(32'b11000000110001111100001000100010),
				.out(h4_a_out)
				);
				
//calculate sigmoid of each node in hidden layer
wire [31:0] h1;
sigmoid_approx s1(
				.x(h1_a_out),
				.y(h1)
				);
				
wire [31:0] h2;
sigmoid_approx s2(
				.x(h2_a_out),
				.y(h2)
				);
				
wire [31:0] h3;
sigmoid_approx s3(
				.x(h3_a_out),
				.y(h3)
				);
				
wire [31:0] h4;
sigmoid_approx s4(
				.x(h4_a_out),
				.y(h4)
				);
				
//calculate the activation of each output node
wire [31:0] o1_m_out;
wire [31:0] o1_a_out;

matrix_mult o1mm(
				.arr1_0(h1),
				.arr1_1(h2),
				.arr1_2(h3),
				.arr1_3(h4),
				.arr2_0(32'b11000000001111001100101111100111),
				.arr2_1(32'b01000001000001011010000001111110),
				.arr2_2(32'b11000000100011010111100011110001),
				.arr2_3(32'b11000000010001011010101011000110),
				.ans(o1_m_out)
					);
					
fp_add o1ab(
				.a(o1_m_out),
				.b(32'b11000000010110111001001111100001),
				.out(o1_a_out)
				);
				
wire [31:0] o2_m_out;
wire [31:0] o2_a_out;

matrix_mult o2mm(
				.arr1_0(h1),
				.arr1_1(h2),
				.arr1_2(h3),
				.arr1_3(h4),
				.arr2_0(32'b11000000111110101101000010110101),
				.arr2_1(32'b11000001010001000101111100111100),
				.arr2_2(32'b11000000110011001011110011011010),
				.arr2_3(32'b11000000011011110101100001011000),
				.ans(o2_m_out)
					);
					
fp_add o2ab(
				.a(o2_m_out),
				.b(32'b01000000111101001000011110111100),
				.out(o2_a_out)
				);
				
wire [31:0] o3_m_out;
wire [31:0] o3_a_out;

matrix_mult o3mm(
				.arr1_0(h1),
				.arr1_1(h2),
				.arr1_2(h3),
				.arr1_3(h4),
				.arr2_0(32'b01000000111000011111100000000100),
				.arr2_1(32'b11000000011110101001011000101011),
				.arr2_2(32'b01000000111011001000100110111011),
				.arr2_3(32'b01000000100111101101110000011010),
				.ans(o3_m_out)
					);
					
fp_add o3ab(
				.a(o3_m_out),
				.b(32'b11000001000000101010010011001100),
				.out(o3_a_out)
				);
				
//calculate sigmoid of each node in output layer
wire [31:0] o1;
sigmoid_approx s5(
				.x(o1_a_out),
				.y(o1)
				);
				
wire [31:0] o2;
sigmoid_approx s6(
				.x(o2_a_out),
				.y(o2)
				);
				
wire [31:0] o3;
sigmoid_approx s7(
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
