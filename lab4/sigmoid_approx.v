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


always @*
begin
	if(x_mag >= 5)
	begin
	
	end
	
	else if(x_mag*1000 >= 2375 && x_mag < 5)
	begin
	
	end
	
	else if(x_mag >=1 && x_mag*1000 < 2375)
	begin
	
	end
	
	else if(x_mag >= 0 && x_mag < 1)
	begin
	
	end
end

endmodule
