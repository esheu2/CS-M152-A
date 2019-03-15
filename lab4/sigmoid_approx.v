`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:41:20 03/07/2019 
// Design Name: 
// Module Name:    sigmoid_approx 
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
// Implemented sigmoid with piece-wise linear approximation from http://www.iosrjen.org/Papers/vol2_issue6%20(part-1)/N026135521356.pdf
// This is much easier for the FPGA to compute
module sigmoid_approx(
	clk,
	x,
	y);

input clk;	
	
input wire [31:0] x;
output wire [31:0] y;

reg [31:0] y_temp;
reg [31:0] x_mag;
reg sign;

always@(x)
begin
	x_mag <= (x << 1) >> 1;
	sign <= x[31];
end
	
wire [31:0] holdVar1, holdVar2, holdVar3, holdVar4, holdVar5, holdVar6;
wire [31:0] tempVar1, tempVar2, tempVar3, tempVar4, tempVar5, tempVar6, tempVar7;
wire [31:0] negVar1, negVar2, negVar3;
	
assign tempVar1 = 32'h3d000000; 	//0.03125
assign tempVar2 = 32'h3f580000; 	//0.84375
	
assign tempVar3 = 32'h3e000000; 	//0.125
assign tempVar4 = 32'h3f200000; 	//0.625
	
assign tempVar5 = 32'h3e800000; 	//0.25
assign tempVar6 = 32'h3f000000; 	//0.5

assign tempVar7 = 32'hbf800000;  //-1
	
// case 2
	cheat_fp_mult m1(
		.clk(clk),
		.a(x_mag),
		.b(tempVar1),
		.y(holdVar1)
		);
	fp_add f1(
		.a(holdVar1),
		.b(tempVar2),
		.out(holdVar2)
		);
	fp_add n1(
		.a(holdVar2),
		.b(tempVar7),
		.out(negVar1)
		);
	
// case 3
	cheat_fp_mult m2(
		.clk(clk),
		.a(x_mag),
		.b(tempVar3),
		.y(holdVar3)
		);
	fp_add f2(
		.a(holdVar3),
		.b(tempVar4),
		.out(holdVar4)
		);
	fp_add n2(
		.a(holdVar4),
		.b(tempVar7),
		.out(negVar2)
		);	
	
// case 4
	cheat_fp_mult m3(
		.clk(clk),
		.a(x_mag),
		.b(tempVar5),
		.y(holdVar5)
		);
	fp_add f3(
		.a(holdVar5),
		.b(tempVar6),
		.out(holdVar6)
		);
	fp_add n3(
		.a(holdVar6),
		.b(tempVar7),
		.out(negVar3)
		);
	
always @*
begin
	if(x_mag >= 32'h40a00000)	// x_mag >= 5
	begin
		if(!sign)
			y_temp = 32'h3f800000;	// y_temp = 1
		else
			y_temp = 0;
	end
	
	else if(x_mag >= 32'h40180000 && x_mag < 32'h40a00000)		//x_mag >= 2.375 && x_mag < 5
	begin
		if(!sign)
			y_temp = holdVar2;	// y_temp = 0.03125 * x_mag + 0.84375
		else
			y_temp = negVar1;
	end
	
	else if(x_mag >= 32'h3f800000 && x_mag < 32'h40180000)		//x_mag >= 1 && x_mag < 2.375
	begin
		if(!sign)
			y_temp = holdVar4;	// y_temp = 0.125 * x_mag + 0.625
		else
			y_temp = negVar2;
	end
	
	else if(x_mag >= 0 && x_mag < 32'h3f800000)		//x_mag >= 0 && x_mag < 1
	begin
		if(!sign)
			y_temp = holdVar6;	// y_temp = 0.25 * x_mag + 0.5
		else
			y_temp = negVar3;
	end
end

assign y = y_temp;

endmodule
