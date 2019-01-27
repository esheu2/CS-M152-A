`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:45:05 01/16/2019 
// Design Name: 
// Module Name:    FPCVT 
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
module FPCVT(D, S, E, F
    );
    
input wire [11:0] D;
output wire S;
output wire [2:0] E;
output wire [3:0] F;

reg [11:0] sign_val;
integer lead_zero;
reg [2:0] E_temp;
reg S_temp;
reg [3:0] F_temp;
integer m_msb;
integer index;

always @(D) begin
//convert from 2s complement to sign magnitude
if(D[11] == 0)
    sign_val = D;
else
    begin
        if( D == 12'b100000000000 )
            sign_val = 12'b111111111111;
        else
             sign_val = ~D + 1;
     end
S_temp = D[11];

//count the number of leading zeros
lead_zero = 0;
//for(index = 0; index <= 10; index = index+1)
//begin
//    if (sign_val[index])
//        lead_zero <= index;
//end

//lead_zero <= 10 - lead_zero;
if (sign_val[10:2] == 8'b0000_0000)
    lead_zero = 8;
else if (sign_val[10:3] == 7'b000_0000)
    lead_zero = 7;
else if (sign_val[10:4] == 6'b00_0000)
    lead_zero = 6;
else if (sign_val[10:5] == 5'b0_0000)
    lead_zero = 5;
else if (sign_val[10:6] == 4'b0000)
    lead_zero = 4;
else if (sign_val[10:7] == 3'b000)
    lead_zero = 3;
else if (sign_val[10:8] == 2'b00)
    lead_zero = 2;
else if (sign_val[10:9] == 1'b0)
    lead_zero = 1;

//find exponent value

case(lead_zero)
    0: E_temp <= 3'b111;
    1: E_temp <= 3'b111;
    2: E_temp <= 3'b110;
    3: E_temp <= 3'b101;
    4: E_temp <= 3'b100;
    5: E_temp <= 3'b011;
    6: E_temp <= 3'b010;
    7: E_temp <= 3'b001;
    default: E_temp <= 3'b000;
endcase

m_msb = 10 - lead_zero;
case(m_msb)
    10: F_temp <= sign_val[9:6];
    9: F_temp <= sign_val[8:5];
    8: F_temp <= sign_val[7:4];
    7: F_temp <= sign_val[6:3];
    6: F_temp <= sign_val[5:2];
    5: F_temp <= sign_val[4:1];
    4: F_temp <= sign_val[3:0];
    3: F_temp <= sign_val[3:0] << 1;
    2: F_temp <= sign_val[3:0] << 2;
    1: F_temp <= sign_val[3:0] << 3;
    default: F_temp <= 4'b0000;
endcase

if ( m_msb > 4 )
begin
    if ( sign_val[m_msb-4] )
    begin
        if (F_temp == 4'b1111)
        begin
            F_temp <= 4'b0000;
            E_temp <= E_temp + 1;
        end
        else
            F_temp <= F_temp + 1;
    end
end

end
assign S = S_temp;
assign E = E_temp;
assign F = F_temp;
endmodule