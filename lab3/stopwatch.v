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
module top(
    input wire clk,
    input wire rst,
    input wire btnP,
    input wire switchSel,
    input wire switchAdj,
    output wire [3:0] an,
    output wire [7:0] seg);
    
    reg [3:0] an_temp;
    reg [7:0] seg_temp;
    
    wire [7:0] seven_seg1;
    wire [7:0] seven_seg2;
    wire [7:0] seven_seg3;
    wire [7:0] seven_seg4;
    
    //reg [7:0] seven_seg1_temp;
    //reg [7:0] seven_seg2_temp;
    //reg [7:0] seven_seg3_temp;
    //reg [7:0] seven_seg4_temp;
    
    //seven_seg1_temp = seven_seg1;
    //seven_seg2_temp = seven_seg2;
    //seven_seg3_temp = seven_seg3;
    //seven_seg4_temp = seven_seg4;
    
    wire [3:0] m10;
    wire [3:0] m1;
    wire [3:0] s10;
    wire [3:0] s1;
    
    assign an = an_temp;
    assign seg = seg_temp;
    
    wire is_pause, is_rst;
    debouncer dR(.clk (clk), .btn(rst), .is_btn_posedge(is_rst));
    debouncer dP(.clk(clk), .btn(btnP), .is_btn_posedge(is_pause));
    
    wire hz1, hz2, hz5, hz200;
    clk_div d_clk( .clk (clk), 
                   .rst (is_rst), 
                   .twoHz (hz2), 
                   .oneHz (hz1), 
                   .twoHundredHz (hz200), 
                   .blinkHz (hz5));
    stopwatch sw_imp( .hz1clk (hz1), 
                      .hz2clk (hz2), 
                      .rst (is_rst), 
                      .btnp (is_pause), 
                      .sel (switchSel), 
                      .adj (switchAdj), 
                      .min10 (m10), 
                      .min1 (m1), 
                      .sec10 (sec10), 
                      .sec1 (sec1));
    seven_seg_display min10_disp( .number (m10), .seven_seg (seven_seg1) );
    seven_seg_display min1_disp( .number (m1), .seven_seg(seven_seg2) );
    seven_seg_display sec10_disp( .number (sec10), .seven_seg (seven_seg3) );
    seven_seg_display sec1_disp( .number (sec1), .seven_seg (seven_seg4) );
    
    reg [2:0] count = 0;
    always @(hz200)
    begin
        if (count == 0)
        begin
            an_temp <= 4'b0111;
            seg_temp <= seven_seg1;
            count <= count + 1;
        end
        else if (count == 1)
        begin
            an_temp <= 4'b1011;
            seg_temp <= seven_seg2;
            count <= count + 1;
        end
        else if (count == 2)
        begin
            an_temp <= 4'b1101;
            seg_temp <= seven_seg3;
            count <= count + 1;
        end
        else if (count == 3)
        begin
            an_temp <= 4'b1110;
            seg_temp <= seven_seg4;
            count <= 0;
        end
    end
    
endmodule
    
module stopwatch(
    input hz1clk,
    input hz2clk,
    input rst,
    input btnp,
    input wire sel,
    input wire adj,
    output wire [3:0] min10,
    output wire [3:0] min1,
    output wire [3:0] sec10,
    output wire [3:0] sec1);
    
    reg [3:0] min10_temp;
    reg [3:0] min1_temp;
    reg [3:0] sec10_temp;
    reg [3:0] sec1_temp;
    
    assign min10 = min10_temp;
    assign min1 = min1_temp;
    assign sec10 = sec10_temp;
    assign sec1 = sec1_temp;
    
    reg is_P;
    
    always@*
    begin
    if(btnp)
      is_P <= ~is_P;
    else
      is_P <= is_P;
    end
    
    always@(posedge hz2clk)
    begin
    if(rst)
    begin
        sec10_temp <=4'b0000;
        sec1_temp <=4'b0000;
        min10_temp <=4'b0000;
        min1_temp <=4'b0000;
    end
    else if ( ~is_P && ~adj)
    begin
        if( sec1_temp < 9)
            sec1_temp <= sec1_temp+1'b1;
        else if (sec1_temp == 9)
        begin
            if (sec10_temp == 5)
            begin
                if(min1_temp == 9)
                begin
                    if(min10_temp == 5)
                        ;
                    else
                    begin
                        min10_temp <= min10 + 1'b1;
                        min1_temp <= 4'b0000;
                        sec10_temp <= 4'b0000;
                        sec1_temp <= 4'b0000;
                    end
                end
                else
                begin
                    min1_temp <= min1_temp + 1'b1;
                    sec10_temp <= 4'b0000;
                    sec1_temp <= 4'b0000;
                end
            end
            else
            begin
                sec10_temp <= sec10_temp + 1'b1;
                sec1_temp <= 4'b0000;
            end
        end
    end
    else if ( adj )
    begin
        if(rst)
        begin
            sec10_temp <=4'b0000;
            sec1_temp <=4'b0000;
            min10_temp <=4'b0000;
            min1_temp <=4'b0000;
        end
        else if( sel == 0)
        begin
            if( sec1_temp > 7)
            begin
                if (sec10_temp == 5)
                begin
                    sec1_temp <= 4'b0000;
                    sec10_temp <= 4'b0000;
                end
                else
                begin
                    sec10_temp <= sec10_temp +1'b1;
                    sec1_temp <= 4'b0000;
                end
            end
            else
                sec1_temp <= sec1_temp + 2;
        end
        else if( sel == 1)
        begin
            if( min1_temp > 7)
            begin
                if (min10_temp == 5)
                begin
                    min1_temp <= 4'b0000;
                    min10_temp <= 4'b0000;
                end
                else
                begin
                    min10_temp <= min10_temp +1'b1;
                    min1_temp <= 4'b0000;
                end
            end
            else
                min1_temp <= min1_temp + 2;
        end
    end
end
endmodule

module debouncer(
    input wire clk,
    input wire btn,
    output reg is_btn_posedge);
    
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
    output wire twoHundredHz,
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
    input wire [3:0] number,
    output wire [7:0] seven_seg);
    
	 reg [7:0] seven_seg_temp;
	 
    always @*
    case (number)
    4'b0000 : seven_seg_temp <= 8'b11000000;
    4'b0001 : seven_seg_temp <= 8'b11111001;
    4'b0010 : seven_seg_temp <= 8'b10100100; 
    4'b0011 : seven_seg_temp <= 8'b10110000;
    4'b0100 : seven_seg_temp <= 8'b10011001;
    4'b0101 : seven_seg_temp <= 8'b10010010;  
    4'b0110 : seven_seg_temp <= 8'b10000010;
    4'b0111 : seven_seg_temp <= 8'b11111000;
    4'b1000 : seven_seg_temp <= 8'b10000000;
    4'b1001 : seven_seg_temp <= 8'b10010000;
    default: seven_seg_temp <= 8'b11111111;
    endcase
	 
    assign seven_seg = seven_seg_temp;
	 
 endmodule
 
 
    