//`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:12:06 05/17/2016 
// Design Name: 
// Module Name:    Debounce 
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

module Debounce(
	input Clk,			// Input clock signal
	input Button,		// Input debounce signal (external Button).
	output reg NextState		// Output reset signal (delayed).
);
reg Delaying;
reg [21:0]DeadTime;
always @(posedge Clk) begin
	if (Button != NextState && Delaying == 0) begin
		NextState <= Button;
		Delaying <= 1'b1;
	end
	if (DeadTime == 22'd3000000) begin
		Delaying <= 1'b0;
	end 
	if (Delaying ==1)begin
		DeadTime <= DeadTime + 1'b1;
	end
end
endmodule
