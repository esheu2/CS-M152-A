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
