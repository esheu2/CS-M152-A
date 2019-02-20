`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:18 02/13/2019 
// Design Name: 
// Module Name:    stopwatch 
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
module stopwatch(
    input clock,
    input reset,
    output reg [2:0] min10,
    output reg  [3:0] min1,
    output reg [2:0] sec10,
    output reg [3:0] sec1);
    always@(posedge clock)
    begin
    if(reset)
    begin
        sec10 <=3'b000;
        sec1 <=4'b0000;
        min10 <=3'b000;
        min1 <=4'b0000;
    end
    else if( sec1 < 9)
        sec1 <= sec1+1'b1;
    else if (sec1 == 9)
    begin
        if (sec10 == 5)
        begin
            if(min1 == 9)
            begin
                if(min10 == 5)
                    ;
                else
                begin
                    min10 <= min10 + 1'b1;
                    min1 <= 4'b0000;
                    sec10 <= 3'b0000;
                    sec1 <= 4'b0000;
                end
            end
            else
            begin
                min1 <= min1 + 1'b1;
                sec10 <= 3'b000;
                sec1 <= 4'b0000;
            end
        end
        else
        begin
            sec10 <= sec10 + 1'b1;
            sec1 <= 4'b0000;
        end
    end
    
    end
endmodule

module debouncer(
    input wire clk,
    input wire btn,
    output wire is_btn_posedge);
    
    wire [17:0] clk_dv_inc;
    reg [16:0]  clk_dv;
    
    assign clk_dv_inc = clk_dv + 1;
    
    always@(posedge clk)
    begin
        if( btn == 0 )
        begin
            clk_dv <= 0;
            is_btn_posedge <= 0;
        end
        else
        begin
            clk_dv <= clk_dv_inc[16:0];
            if(clk_dv_inc[17] == 1)
            begin
                clk_dv <= 0;
                is_btn_posedge <= 1;
            end
        end
    end
endmodule

module clk_div(
    //example found on https://reference.digilentinc.com/learn/programmable-logic/tutorials/counter-and-clock-divider/start
    input wire clk,
    input wire rst,
    output wire twoHz,
    output wire oneHz,
    output wire twoHundreadHz,
    output wire blinkHz); // blinkHz ~= 5Hz
    
    localparam twoHzNum = 25000000;
    localparam oneHzNum = 50000000;
    localparam twoHundredHzNum= 250000;
    localparam blinkHzNum = 10000000;
    
    reg [31:0] twoHzCount;
    reg [31:0] oneHzCount;
    reg [31:0] twoHundredHzCount;
    reg [31:0] blinkHzCount;
    
    reg twoHzDiv;
    assign twoHz = twoHzDiv;
    reg oneHzDiv;
    assign oneHz = oneHzDiv;
    reg twoHundredHzDiv;
    assign twoHundredHz = twoHundredHzDiv;
    reg blinkHzDiv;
    assign blinkHz = blinkHzDiv;
    
    //clk_div twoHz
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            twoHzCount <= 32'b0;
        else if (twoHzCount == twoHzNum - 1)
            twoHzCount <= 32'b0;
        else
            twoHzCount <= twoHzCount + 1;
    end
    
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            twoHzDiv <= 1'b0;
        else if (twoHzCount == twoHzNum - 1)
            twoHzDiv <= ~twoHz;
        else
            twoHzDiv <= twoHz;
    end
    
    //clk_div oneHz
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            oneHzCount <= 32'b0;
        else if (oneHzCount == oneHzNum - 1)
            oneHzCount <= 32'b0;
        else
            oneHzCount <= oneHzCount + 1;
    end
    
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            oneHzDiv <= 1'b0;
        else if (oneHzCount == oneHzNum - 1)
            oneHzDiv <= ~oneHz;
        else
            oneHzDiv <= oneHz;
    end
    
    //clk_div twoHundredHz
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            twoHundredHzCount <= 32'b0;
        else if (twoHundredHzCount == twoHundredHzNum - 1)
            twoHundredHzCount <= 32'b0;
        else
            twoHundredHzCount <= twoHundredHzCount + 1;
    end
    
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            twoHundredHzDiv <= 1'b0;
        else if (twoHundredHzCount == twoHundredHzNum - 1)
            twoHundredHzDiv <= ~twoHundredHz;
        else
            twoHundredHzDiv <= twoHundredHz;
    end
    //clk_div blinkHz
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            blinkHzCount <= 32'b0;
        else if (blinkHzCount == blinkHzNum - 1)
            blinkHzCount <= 32'b0;
        else
            blinkHzCount <= blinkHzCount + 1;
    end
    
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            blinkHzDiv <= 1'b0;
        else if (blinkHzCount == blinkHzNum - 1)
            blinkHzDiv <= ~blinkHz;
        else
            blinkHzDiv <= blinkHz;
    end
 endmodule
 
 module seven_seg_display(
    input wire number,
    output reg [6:0] seven_seg);
    
    always @*
    case (number)
    4'b0000 : seven_seg = 7'b1111110;
    4'b0001 : seven_seg = 7'b0110000;
    4'b0010 : seven_seg = 7'b1101101; 
    4'b0011 : seven_seg = 7'b1111001;
    4'b0100 : seven_seg = 7'b0110011;
    4'b0101 : seven_seg = 7'b1011011;  
    4'b0110 : seven_seg = 7'b1011111;
    4'b0111 : seven_seg = 7'b1110000;
    4'b1000 : seven_seg = 7'b1111111;
    4'b1001 : seven_seg = 7'b1111101;
    default: seven_seg = 7'b0000000;
    endcase
    
 endmodule
 
 
    