`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:03 05/21/2016 
// Design Name: 
// Module Name:    Test 
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
module Test(
	input Clk_100M,
	input Reset,
	input Rx,
	
	output Tx,
	output reg [15:0]LEDs
    );

reg   [7:0]	userData[0:99];

wire       	Rx_Ready;
reg        	Rx_Ack;
wire  [7:0]	Rx_Data;

reg   [7:0]	Tx_Data;
reg        	Tx_Send;
wire       	Tx_Busy;
reg        	Tx_Reset;
reg	[7:0]	Tx_DataIndex;
reg			Tx_DataIndexLocked;

reg   [7:0]	sizeOfDataInByte;
reg   [7:0]	charCount;
reg			receivingData;

reg			prevBusyState;
initial    	prevBusyState    = 1'b0;
initial		sizeOfDataInByte		= 1'b0;

reg			doneReceiving;
//initial 		doneReceiving = 1'b1;

// RECEIVE
always @(posedge Clk_100M) begin
	if (Reset) begin
		Rx_Ack <= 0;
		charCount <= 0;
		doneReceiving <= 0;
	end
	else begin
		if (prevBusyState & Rx_Ready) begin
			// very first byte expected to be # characters in data.
			if (sizeOfDataInByte == 0) begin
				sizeOfDataInByte 		<= Rx_Data;					// get number of charcters in data.
				receivingData 	  		<= 1'b1;							// next up start receiving data.
			end
			
			// actual data starts from byte 2.
			else if (receivingData) begin
				//userData[99 - charCount]  <= Rx_Data;		// actual data.
				userData[charCount]  <= Rx_Data;		// actual data.
				charCount <= charCount + 1'b1;
				
				// if done receiving data, receive key.
				if (charCount == sizeOfDataInByte - 1) begin
					receivingData 		<= 1'b0;						// to indicate finish receiving data.
					doneReceiving <= 1;
				end
			end
			
			Rx_Ack <= 1'b1;
			
		end else if(~Rx_Ready) begin
			Rx_Ack <= 1'b0;
		end
		
		prevBusyState <= !Rx_Ready;
	end
end

// SEND.
always @(posedge Clk_100M) begin
	if (Reset) begin
		Tx_Data 			<= 1'b0;
		Tx_Send 			<= 1'b0;
		Tx_Reset 			<= 1'b0;
		Tx_DataIndex		<= 1'b0;
		Tx_DataIndexLocked	<= 1'b1;			// used to lock Tx_DataIndex to prevent uncontrolled increments.
	end
	else if (doneReceiving) begin
		
//***********************************************************************************************
			if (Tx_Busy == 0 && Tx_DataIndex < sizeOfDataInByte) begin
				Tx_Data 	<= userData[Tx_DataIndex];
				Tx_Send 		<= 1'b1;
				Tx_DataIndexLocked	<= 1'b0;
			end
			else begin
				if (~Tx_DataIndexLocked) begin
					Tx_DataIndex 			<= Tx_DataIndex + 1'b1;
					Tx_DataIndexLocked	<= 1'b1;
				end
				Tx_Send 		<= 1'b0;
			end
//***********************************************************************************************
	end
end

UART_Sender #(14, 14'd9999) sender(
	Clk_100M,
	//Tx_Reset,
	Reset,
	Tx_Data,
	Tx_Send,
	Tx_Busy,
	Tx
);

UART_Receiver #(14, 14'd9999) receiver(
	Clk_100M,
	Reset,
	Rx_Data,
	Rx_Ready,
	Rx_Ack,
	Rx
);

always @(*) begin
	// displays characters on the LEDs. Characters are shifted using btn P17 and M17
	// going from left to right and right to left respectively.
	
	//LEDs[15:8] <= Tx_DataIndex;				// check
	//LEDs[15:8] <= result[currentCharIndex];
	//LEDs[15:8] <= encrypt_Data;
	//LEDs[15:8] <= byteOfUserData;
	//LEDs[15:8] <= keys[currentCharIndex%3];		// check
	//LEDs[15:8] <= index;								// check
	//LEDs[15:8] <= sizeOfKeyInByte;					// check
	//LEDs[7:0] <= userData[99-currentCharIndex];
	LEDs[15:8] <= Tx_DataIndex;
	LEDs[7:0] <= userData[2];		// check
	//LEDs[15:0] <= 16'b1111111111111111;
	
end

endmodule
