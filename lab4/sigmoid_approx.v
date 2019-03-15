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
	x,
	y);
	
input wire [31:0] x;
output wire [31:0] y;

reg [31:0] y_temp;
reg [31:0] x_mag;
reg sign;
reg [31:0] w;
reg [31:0] b;

wire [31:0] ww;
wire [31:0] wb;

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

assign tempVar7 = 32'h3f800000;  //1

	
always @*
begin
	if(x_mag >= 32'h40a00000)	// x_mag >= 5
	begin
			w <= 0;
			b <= 32'h3f800000; //THIS IS WRONG FOR LARGE NEGATIVE VALUES
	end
	
	else if(x_mag >= 32'h40180000 && x_mag < 32'h40a00000)		//x_mag >= 2.375 && x_mag < 5
	begin
		w <= 32'h3d000000;
		b <= 32'h3f580000;
	end
	
	else if(x_mag >= 32'h3f800000 && x_mag < 32'h40180000)		//x_mag >= 1 && x_mag < 2.375
	begin
		w <= 32'h3e000000;
		b <= 32'h3f200000;
	end
	
	else if(x_mag >= 0 && x_mag < 32'h3f800000)		//x_mag >= 0 && x_mag < 1
	begin
		w <= 32'h3e800000;
		b <= 32'h3f000000;
	end
end

assign ww = w;
assign wb = b;
	
// case 2
	fp_mult m1(
		.a(x_mag),
		.b(ww),
		.y(holdVar1)
		);
	fp_add f1(
		.a(holdVar1),
		.b(wb),
		.out(holdVar2)
		);
	fp_add n1(
		.a(tempVar7),
		.b({~holdVar2[31], holdVar2[30:0]}),
		.out(negVar1)
		);

assign y = !sign ? holdVar2 : negVar1;

endmodule
