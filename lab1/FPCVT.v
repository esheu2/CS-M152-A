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

// Code your design here
module FPCVT(D, S, E, F
    );
   
input wire [11:0] D;
output wire S;
output wire [2:0] E;
output wire [3:0] F;
 
  wire [11:0] sigMag;
  twotosig block1(
    .D(D),
    .S(S),
    .sigMag(sigMag));
 
  wire [2:0] E_temp;
  wire [3:0] F_temp;
  priEncode block2(
    .sig(sigMag),
    .E(E_temp),
    .F(F_temp));
    
  round block3(
  .sig(sigMag),
  .E_temp(E_temp),
  .F_temp(F_temp),
  .E(E),
  .F(F));
 
endmodule
 
module twotosig(D, S, sigMag);
input wire[11:0] D;
output reg S;
output reg [11:0] sigMag;
 
  always @(D)
    begin
      S = D[11];
      if (D[11] == 0)
        sigMag = D;
      else
        begin
        if( D == 12'b1000_0000_0000)
            sigMag = 12'b1111_1111_1111;
        else
             sigMag = ~D + 1'b1;
        end
    end
 
endmodule
 
module priEncode(sig, E, F);
           
  input wire [11:0] sig;
  output reg [2:0] E;
  output reg [3:0] F;
 
  always @(*)
    begin
      if(sig[11] == 1)
        begin
          E = 3'b111;
          F = sig[11:8];
        end
      else if (sig[10] == 1)
        begin
          E = 3'b111;
          F = sig[10:7];
        end
      else if (sig[9] == 1)
        begin
          E = 3'b110;
          F = sig[9:6];
        end
      else if (sig[8] == 1)
        begin
          E = 3'b101;
          F = sig[8:5];
        end
      else if (sig[7] == 1)
        begin
          E = 3'b100;
          F = sig[7:4];
        end
      else if (sig[6] == 1)
        begin
          E = 3'b011;
          F = sig[6:3];
        end
      else if (sig[5] == 1)
        begin
          E = 3'b010;
          F = sig[5:2];
        end
        else if (sig[4] == 1)
        begin
          E = 3'b001;
          F = sig[4:1];
        end
      else
        begin
          E = 3'b000;
          F = sig[3:0];
        end
    end    
endmodule
 
 
module round( sig, E_temp, F_temp, E, F);
 
  input wire [11:0] sig;
  input wire [2:0] E_temp;
  input wire [3:0] F_temp;
  output reg [2:0] E;
  output reg [3:0] F;
 
  
    always @(*)
    begin
    if(E_temp >= 1)
    begin
        if(sig[E_temp - 1])
        begin
            if(F_temp == 4'b1111)
            begin
                if(E_temp == 3'b111)
                begin
                    F = F_temp;
                    E = E_temp;
                end
                else
                begin
                    F = 4'b1000;
                    E = E_temp + 1;
                end
            end
            else
            begin
                F = F_temp + 1;
                E = E_temp;
            end
        end
        else
        begin
            F = F_temp;
            E = E_temp;
        end
    end
    else
    begin
        F = F_temp;
        E = E_temp;
    end
    end
endmodule
