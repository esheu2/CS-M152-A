`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Company: Digilent Inc 2011
// Engineer: Michelle Yu  
//               Josh Sackos
// Create Date:    17:05:39 08/23/2011
//
// Module Name:    PmodKYPD
// Project Name:   PmodKYPD_Demo
// Target Devices: Nexys3
// Tool versions:  Xilinx ISE 14.1
// Description: This file defines a project that outputs the key pressed on the PmodKYPD to the
//                   seven segment display.
//
// Revision History:
//                      Revision 0.01 - File Created (Michelle Yu)
//                          Revision 0.01 - Converted from VHDL to Verilog (Josh Sackos)
//////////////////////////////////////////////////////////////////////////////////////////////////////////
 
// ==============================================================================================
//                                              Define Module
// ==============================================================================================
module numpad(
          o_tx_data1,
          o_tx_data2,
          o_tx_data3,
          o_tx_data4,
          o_tx_valid,
          // Inputs
          clk,
          i_tx_busy,
        i_inst,
        i_inst_valid    );
     
     
// ==============================================================================================
//                                          Port Declarations
// ==============================================================================================
    input clk;
    input i_tx_busy;                    // 100Mhz onboard clock
    input [7:0] i_inst;         // Port JA on Nexys3, JA[3:0] is Columns, JA[10:7] is rows
    input i_inst_valid;
    output [3:0] o_tx_data1;
    output [3:0] o_tx_data2;
    output [3:0] o_tx_data3;
    output [3:0] o_tx_data4;
    output reg o_tx_valid;
 
// ==============================================================================================
//                                  Parameters, Regsiters, and Wires
// ==============================================================================================
   
    // Output wires
    wire [3:0] Decode1;
    wire [3:0] Decode2;
    wire [3:0] Decode3;
    wire [3:0] Decode4;
   
// ==============================================================================================
//                                              Implementation
// ==============================================================================================
 
    //-----------------------------------------------
    //                          Decoder
    //-----------------------------------------------
    Decoder C0(
            .clk(clk),
            .Row(i_inst[7:4]),
            .Col(i_inst[3:0]),
            .DecodeOut1(Decode1),
            .DecodeOut2(Decode2),
            .DecodeOut3(Decode3),
            .DecodeOut4(Decode4)
    );
 
    assign o_tx_data1 = Decode1;
    assign o_tx_data2 = Decode2;
    assign o_tx_data3 = Decode3;
    assign o_tx_data4 = Decode4;
    always @ (posedge clk) begin
        o_tx_valid <=i_inst_valid;
    end
       
endmodule
 
module Decoder(
    clk,
    Row,
    Col,
    DecodeOut1,
     DecodeOut2,
     DecodeOut3,
     DecodeOut4
    );
 
// ==============================================================================================
//                                          Port Declarations
// ==============================================================================================
    input clk;                      // 100MHz onboard clock
    input [3:0] Row;                // Rows on KYPD
    output [3:0] Col;           // Columns on KYPD
    output [3:0] DecodeOut1;    // Output data
     output [3:0] DecodeOut2;
     output [3:0] DecodeOut3;
     output [3:0] DecodeOut4;
// ==============================================================================================
//                                  Parameters, Regsiters, and Wires
// ==============================================================================================
   
    // Output wires and registers
    reg [3:0] Col;
    reg [3:0] DecodeOut1;
    reg [3:0] DecodeOut2;
    reg [3:0] DecodeOut3;
    reg [3:0] DecodeOut4;
   
    // Count register
    reg [19:0] sclk = 20'b0000_0000_0000_0000_0000;
    reg [1:0] count = 2'b00;
   
// ==============================================================================================
//                                              Implementation
// ==============================================================================================
 
    always @(posedge clk) begin
 
            // 1ms
            if (sclk < 20'b00011000011010100000) begin
                sclk <= sclk + 1'b1;
            end
           
            else if (sclk == 20'b00011000011010100000) begin
                sclk <= sclk + 1'b1;
                Col <= 4'b0111;
            end
           
            // check row pins
            else if(sclk == 20'b00011000011010101000) begin
                //R1
                //if (Col == 4'b0111)begin
                if (Row == 4'b0111) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b0001; //1
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b0001; //1
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b0001; //1
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b0001; //1
                        count <= count + 1'b1;
                    end
                end
                //R2
                else if(Row == 4'b1011) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b0100; //4
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b0100; //4
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b0100; //4
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b0100; //4
                        count <= count + 1'b1;
                    end
                end
                //R3
                else if(Row == 4'b1101) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b0111; //7
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b0111; //7
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b0111; //7
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b0111; //7
                        count <= count + 1'b1;
                    end
                end
                //R4
                else if(Row == 4'b1110) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b0000; //0
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b0000; //0
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b0000; //0
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b0000; //0
                        count <= count + 1'b1;
                    end
                end
                //end
                sclk <= sclk + 1'b1;
            end
 
            // 2ms
            else if(sclk == 20'b00110000110101000000) begin
                sclk <= sclk + 1'b1;
                Col <= 4'b1011;
            end
           
            // check row pins
            else if(sclk == 20'b00110000110101001000) begin
                //if(Col == 4'b1011)begin
                //R1
                if (Row == 4'b0111) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b0010; //2
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b0010; //2
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b0010; //2
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b0010; //2
                        count <= count + 1'b1;
                    end
                end
                //R2
                else if(Row == 4'b1011) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b0101; //5
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b0101; //5
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b0101; //5
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b0101; //5
                        count <= count + 1'b1;
                    end
                end
                //R3
                else if(Row == 4'b1101) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b1000; //8
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b1000; //8
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b1000; //8
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b1000; //8
                        count <= count + 1'b1;
                    end
                end
                //R4
                else if(Row == 4'b1110) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b1111; //F
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b1111; //F
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b1111; //F
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b1111; //F
                        count <= count + 1'b1;
                    end
                end
                //end
                sclk <= sclk + 1'b1;
            end
 
            //3ms
            else if(sclk == 20'b01001001001111100000) begin
                //C3
                sclk <= sclk + 1'b1;
                Col <= 4'b1101;
            end
           
            // check row pins
            else if(sclk == 20'b01001001001111101000) begin
                //R1
                //if( Col == 4'b1101) begin
                if(Row == 4'b0111) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b0011; //3
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b0011; //3
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b0011; //3
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b0011; //3
                        count <= count + 1'b1;
                    end
                end
                //R2
                else if(Row == 4'b1011) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b0110; //6
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b0110; //6
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b0110; //6
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b0110; //6
                        count <= count + 1'b1;
                    end
                end
                //R3
                else if(Row == 4'b1101) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b1001; //9
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b1001; //9
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b1001; //9
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b1001; //9
                        count <= count + 1'b1;
                    end
                end
                //R4
                else if(Row == 4'b1110) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b1110; //E
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b1110; //E
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b1110; //E
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b1110; //E
                        count <= count + 1'b1;
                    end
                end
                //end
                sclk <= sclk + 1'b1;
            end
 
            //4ms
            else if(sclk == 20'b01100001101010000000) begin
                //C4
                Col <= 4'b1110;
                sclk <= sclk + 1'b1;
            end
 
            // Check row pins
            else if(sclk == 20'b01100001101010001000) begin
                //R1
                //if(Col == 4'b1110) begin
                if(Row == 4'b0111) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b1010; //A
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b1010; //A
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b1010; //A
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b1010; //A
                        count <= count + 1'b1;
                    end
                end
                //R2
                else if(Row == 4'b1011) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b1011; //b
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b1011; //b
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b1011; //b
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b1011; //B
                        count <= count + 1'b1;
                    end
                end
                //R3
                else if(Row == 4'b1101) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b1100; //C
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b1100; //C
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b1100; //C
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b1100; //C
                        count <= count + 1'b1;
                    end
                end
                //R4
                else if(Row == 4'b1110) begin
                    if(count == 4'b00) begin
                        DecodeOut1 <= 4'b1101; //D
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b01) begin
                        DecodeOut2 <= 4'b1101; //D
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b10) begin
                        DecodeOut3 <= 4'b1101; //D
                        count <= count + 1'b1;
                    end
                    else if(count == 4'b11) begin
                        DecodeOut4 <= 4'b1101; //D
                        count <= count + 1'b1;
                    end
                end
                //end
                sclk <= 20'b00000000000000000000;
            end
 
            // Otherwise increment
            else begin
                sclk <= sclk + 1'b1;
            end
           
    end
 
endmodule