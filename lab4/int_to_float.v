`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:13:42 03/13/2019 
// Design Name: 
// Module Name:    int_to_float 
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
module int_to_float(
					input wire [3:0] a,
					output wire [31:0] b
    );

reg [31:0] temp_b;

always@(a)
begin
	case(a)
	0 : temp_b <= 0;
	4'b0001 : temp_b <= 32'b00111111100000000000000000000000;
	4'b0010 : temp_b <= 32'b01000000000000000000000000000000;
	4'b0011 : temp_b <= 32'b01000000010000000000000000000000;
	4'b0100 : temp_b <= 32'b01000000100000000000000000000000;
	4'b0101 : temp_b <= 32'b01000000101000000000000000000000;
	4'b0110 : temp_b <= 32'b01000000110000000000000000000000;
	4'b0111 : temp_b <= 32'b01000000111000000000000000000000;
	4'b1000 : temp_b <= 32'b01000001000000000000000000000000;
	4'b1001 : temp_b <= 32'b01000001000100000000000000000000;
	default : temp_b <= 0;
	endcase
end

assign b = temp_b;

endmodule
