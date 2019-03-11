`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:05 03/07/2019 
// Design Name: 
// Module Name:    float_mult 
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
//https://github.com/crclayton/verilog-32-bit-fp-mul
`define SIGN   	31
`define EXP    	30:23
`define M    	22:0

`define P    	24    // number of bits for mantissa (including 
`define G    	23    // guard bit index
`define R    	22    // round bit index
`define S    	21:0  // sticky bits range

`define BIAS   	127


module fp_mult(input  wire clk,
			  input  wire[31:0] a,
              input  wire[31:0] b,
              output wire[31:0] y);

    reg [`P-2:0] m;
    reg [7:0] e;
    reg s;
    
    reg [`P*2-1:0] product;
    reg G;
    reg R;
    reg S;
    reg normalized;

	reg state;
	reg next_state = 0;

	parameter STEP_1 = 1'b0, STEP_2 = 1'b1;


	always @(posedge clk) 
    begin
		state <= next_state;
	end


	always @(state) begin

		case(state)
			STEP_1: begin
				// mantissa is product of a and b's mantissas, 
				// with a 1 added as the MSB to each
				product = {1'b1, a[`M]} * {1'b1, b[`M]};

				// get sticky bits by ORing together all bits right of R
				S = |product[`S]; 

				// if the MSB of the resulting product is 0
				// normalize by shifting right    
				normalized = product[47];
				if(!normalized) product = product << 1; 

				next_state = STEP_2;			
				end	

			STEP_2: begin
				// if either mantissa is 0, result is 0 
				if(!a[`M] | !b[`M]) begin 
					s = 0; e = 0; m = 0;
				end else begin
					// sign is xor of signs
					s = a[`SIGN] ^ b[`SIGN];

					// mantissa is upper 22-bits of product w/ nearest-even rounding
					m = product[46:24] + (product[`G] & (product[`R] | S));

					// exponent is sum of a and b's exponents, minus the bias 
					// if the mantissa was shifted, increment the exponent to balance it
					e = a[`EXP] + b[`EXP] - `BIAS + normalized;
				end 

				next_state = STEP_1;
				end
		endcase
	end

	// output is concatenation of sign, exponent, and mantissa	
	assign y = {s, e, m};
endmodule 