// `timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:25 05/14/2016 
// Design Name: 
// Module Name:    UART_Sender 
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
module UART_Sender(
	input wire Clk_100M,
	input wire clr,
	input wire [7:0] tx_data ,
	input wire ready,
	output reg tdre,
	output reg TxD
    );


endmodule
