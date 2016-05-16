// `timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:47:53 05/14/2016 
// Design Name: 
// Module Name:    DEA 
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

module DEA(
	input Clk_100M,
	input Reset,
	input Rx,
	
	output Tx,
	output reg [7:0]LEDs
	);
	
reg prevBusyState;
wire Ready;		// so we can read it from submodules.
wire Ack;
wire [7:0]Data;
reg  [7:0]userData;
reg  tracer;
initial tracer = 1'b0;
initial prevBusyState = 1'b0;

always @(posedge Clk_100M) begin
	if (prevBusyState == 1'b1 && Ready == 1'b1) begin
		tracer = 1'b1;
		userData <= Data;
//		prevBusyState <= !Ready;
	end
	prevBusyState <= !Ready;
end

//	UART_Sender sender(Clk_100M, );
	UART_Receiver #(14, 14'd10417) receiver(Clk_100M, Reset, Data, Ready, Ack, Rx);

always @(*) begin 
//	LEDs <= 8'b10101010;
	LEDs <= Data;
//	LEDs <= tracer;
end

endmodule




//if(data == "r") ...
