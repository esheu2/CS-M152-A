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

wire [31:0] x_mag;
assign x_mag = (x << 1) >> 1;

	
wire [31:0] holdVar1, holdVar2, holdVar3, holdVar4, holdVar5, holdVar6;
wire [31:0] tempVar1, tempVar2, tempVar3, tempVar4, tempVar5, tempVar6;
	
assign tempVar1 = 32'h3d000000; 	//0.03125
assign tempVar2 = 32'h3f580000; 	//0.84375
	
assign tempVar3 = 32'h3e000000; 	//0.125
assign tempVar4 = 32'h3f200000; 	//0.625
	
assign tempVar5 = 32'h3e800000; 	//0.25
assign tempVar6 = 32'h3f000000; 	//0.5
	
// case 2
	cheat_fp_mult c1(
		.clk(clk),
		.a(x_mag),
		.b(tempVar1),
		.y(holdVar1)
		);
	fp_add fa1(
		.a(holdVar1),
		.b(tempVar2),
		.clk(clk),
		.out(holdVar2)
		);
	
// case 3
	cheat_fp_mult c2(
		.clk(clk),
		.a(x_mag),
		.b(tempVar3),
		.y(holdVar3)
		);
	fp_add fa2(
		.a(holdVar3),
		.b(tempVar4),
		.clk(clk),
		.out(holdVar4)
		);
	
	
// case 4
	cheat_fp_mult c3(
		.clk(clk),
		.a(x_mag),
		.b(tempVar5),
		.y(holdVar5)
		);
	fp_add fa3(
		.a(holdVar5),
		.b(tempVar6),
		.clk(clk),
		.out(holdVar6)
		);
	

always @*
begin
	if(x_mag >= 32'h40a00000)	// x_mag >= 5
	begin
		y_temp <= 32'h3f800000;	// y_temp = 1
	end
	
	else if(x_mag >= 32'h40180000 && x_mag < 32'h40a00000)		//x_mag >= 2.375 && x_mag < 5
	begin
		y_temp <= holdVar2;	// y_temp = 0.03125 * x_mag + 0.84375
	end
	
	else if(x_mag >= 32'h3f800000 && x_mag < 32'h40180000)		//x_mag >= 1 && x_mag < 2.375
	begin
		y_temp <= holdVar4;	// y_temp = 0.125 * x_mag + 0.625
	end
	
	else if(x_mag >= 0 && x_mag < 32'h3f800000)		//x_mag >= 0 && x_mag < 1
	begin
		y_temp <= holdVar6;	// y_temp = 0.25 * x_mag + 0.5
	end
end

//TODO: if negative, |y_temp - 1|
/*wire [31:0] neg1;
assign neg1 = 32'hbf800000;
wire [31:0] tempans;
fp_add neg_case(
		.a(neg1),
		.b(y_temp),
		.clk(clk),
		.out(tempans)
		);
assign tempans = (tempans << 1) >> 1;

always @*
begin
    if(x[31])
        y_temp <= tempans;
end*/

assign y = y_temp;

endmodule
