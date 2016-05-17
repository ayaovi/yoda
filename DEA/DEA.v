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
	input prevCharBtn,	// goes from left to right.
	input nextCharBtn,	// goes from right to left.
	input Rx,
	
	output Tx,
	output reg [7:0]LEDs
	);
	
reg 		  prevBusyState;
wire       Rx_Ready;
reg        Rx_Ack;
wire  [7:0]Rx_Data;

//reg   [7:0]Tx_Data;
//reg        Tx_Send;
//wire       Tx_Busy;

reg   [7:0]userData[0:99];
reg   [6:0]charCount;
reg   [6:0]currentCharIndex;

reg 		  prevCharBtnPreviousState;
reg 		  nextCharBtnPreviousState;
wire 		  prevCharBtnNextState;
wire 		  nextCharBtnNextState;

initial    prevBusyState    = 1'b0;

// Echo the received character
always @(posedge Clk_100M) begin
	if(Reset) begin
		currentCharIndex <= 1'b0;
		Rx_Ack  <= 1'b0;
		//Tx_Data <= 0;
		//Tx_Send <= 0;
	end else begin
		if (prevBusyState & Rx_Ready) begin
			userData[99 - charCount]  <= Rx_Data;
			charCount 					  <= charCount + 1'b1;
			Rx_Ack  						  <= 1'b1;
		end else if(~Rx_Ready) begin
			Rx_Ack <= 1'b0;
		end
		prevBusyState <= !Rx_Ready;
		
		// if btn P17 pressed move/shift left
		if (prevCharBtnPreviousState == 1'b0 && prevCharBtnNextState == 1'b1) begin
			prevCharBtnPreviousState <= prevCharBtnNextState;
			
			if (currentCharIndex == 0)
				currentCharIndex <= charCount - 1'b1;
			else
				currentCharIndex <= currentCharIndex - 1'b1;
		end 
		else
			prevCharBtnPreviousState <= prevCharBtnNextState;
		
		// if btn M17 pressed move/shift right
		if (nextCharBtnPreviousState == 1'b0 && nextCharBtnNextState == 1'b1) begin
			nextCharBtnPreviousState <= nextCharBtnNextState;
			
			if (currentCharIndex == charCount - 1)
				currentCharIndex <= 1'b0;
			else
				currentCharIndex <= currentCharIndex + 1'b1;
		end 
		else
			nextCharBtnPreviousState <= nextCharBtnNextState;
		

//		currentCharIndex <= currentCharIndex % charCount;
				
	end
end
//------------------------------------------------------------------------------

//	UART_Sender #(14, 14'd9999) sender(
//		Clk_100M, 
//		Reset,
//		Tx_Data,
//		Tx_Send,
//		Tx_Busy,
//		Tx
//	);
	
UART_Receiver #(14, 14'd9999) receiver(
	Clk_100M,
	Reset,
	Rx_Data,
	Rx_Ready, 
	Rx_Ack,
	Rx
);

Debounce debouncePrevBtn(
	Clk_100M,
	prevCharBtn,
	prevCharBtnNextState
);

Debounce debounceNextBtn(
	Clk_100M,
	nextCharBtn,
	nextCharBtnNextState
);

always @(*) begin
	// displays characters on the LEDs. Characters are shifted using btn P17 and M17
	// going from left to right and right to left respectively.
	
//	LEDs <= currentCharIndex;
	LEDs <= userData[99-currentCharIndex];
//	LEDs <= userData[97];
end

endmodule