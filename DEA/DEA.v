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
	output reg [15:0]LEDs
	);

reg 		  	prevBusyState;
wire       	Rx_Ready;
reg        	Rx_Ack;
wire  [7:0]	Rx_Data;

reg   [7:0]	Tx_Data;
reg        	Tx_Send;
wire       	Tx_Busy;
reg        	Tx_Reset;
reg 	[7:0]	Tx_DataIndex;
reg 			Tx_DataIndexLocked;

reg        	encrypt_Ack;
reg        	encrypt_Ready;
wire  [7:0]	encrypt_Data;


reg   [7:0]	sizeOfDataInByte;
reg   [7:0]	currentCharIndex;
reg   [7:0]	userData[0:99];
reg   [7:0]	result	 [0:99];
reg   [7:0]	charCount;

reg   [7:0]	sizeOfKeyInByte;
reg   [7:0]	keys[0:2];
reg   [7:0]	keyCount;

reg 		  	prevCharBtnPreviousState;
reg 		  	nextCharBtnPreviousState;
wire 		  	prevCharBtnNextState;
wire 		  	nextCharBtnNextState;

initial    	prevBusyState    = 1'b0;
reg 		  	receivingData;
reg 		  	receivingKeys;

reg 	[7:0]	index;
reg 	[1:0]	keyIndex;
reg	[7:0]	byteOfUserData;
reg	[7:0]	byteOfKey;

//wire 			startEncryption;
//initial 		startEncryption = 1'b0;

//assign byteOfUserData = userData[index];
//assign byteOfKey		 = keys[keyIndex];
assign 		encrypt_Data 	 		= byteOfUserData ^ byteOfKey;

initial 		sizeOfDataInByte		= 1'b0;
initial 		sizeOfKeyInByte		= 1'b0;

reg			sentSizeOfDataInByte;
//initial 		sentSizeOfDataInByte = 1'b0;

always @(posedge Clk_100M) begin
	if(Reset) begin
		currentCharIndex	<= 1'b0;
		charCount			<= 1'b0;
		keyCount				<= 1'b0;
		Rx_Ack				<= 1'b0;
		//encrypt_Ack  <= 1'b0;
		receivingData		<= 1'b0;
		receivingKeys		<= 1'b0;
		//sizeOfDataInByte <= 1'b0;
		//sizeOfKeyInByte  <= 1'b0;
		//Tx_Data 				<= 1'b0;
		//Tx_Send 				<= 1'b0;
		//Tx_Reset 			<= 1'b0;
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
				end
			end
			
			// next up receive # of keys.
			else if (sizeOfKeyInByte == 0) begin
				sizeOfKeyInByte 		<= Rx_Data;
				receivingKeys 			<= 1'b1;							// next up we start receiving keys.
			end
			
			else if (receivingKeys) begin
				keys[keyCount]  		<= Rx_Data;
				keyCount 				<= keyCount + 1'b1;
				
				// if done receiving data, signal start of encryption.
				if (keyCount == sizeOfKeyInByte) begin
					receivingKeys 		<= 1'b0;						// to indicate finish receiving keys.
					//startEncryption	= 1'b1;
				end
			end
			
			Rx_Ack <= 1'b1;
			
		end else if(~Rx_Ready) begin
			Rx_Ack <= 1'b0;
		end
		
		prevBusyState <= !Rx_Ready;
//------------------------------------------------------------------------------

		// if btn P17 pressed move/shift left
		if (prevCharBtnPreviousState == 1'b0 && prevCharBtnNextState == 1'b1) begin
			prevCharBtnPreviousState <= prevCharBtnNextState;
			
			if (currentCharIndex > 0)
				currentCharIndex <= currentCharIndex - 1'b1;
			else
				currentCharIndex <= sizeOfDataInByte - 1'b1;
				//currentCharIndex <= (currentCharIndex - 1'b1) % sizeOfDataInByte;
		
		end else
			prevCharBtnPreviousState <= prevCharBtnNextState;
		
		// if btn M17 pressed move/shift right
		if (nextCharBtnPreviousState == 1'b0 && nextCharBtnNextState == 1'b1) begin
			nextCharBtnPreviousState <= nextCharBtnNextState;
			
			if (currentCharIndex < sizeOfDataInByte - 1)
				currentCharIndex <= currentCharIndex + 1'b1;
			else
				currentCharIndex <= 1'b0;
				
		end else
			nextCharBtnPreviousState <= nextCharBtnNextState;
	end
end
//------------------------------------------------------------------------------

always @(posedge Clk_100M) begin
	//for (index = 0; index < sizeOfDataInByte; index = index + 1) begin
	
	// pull encrypt_Ack low.
	//	Wait for encrypt_Ready to go high.
	//	Read the data.
	//	Make encrypt_Ack high.
	//	Wait for encrypt_Ready to go low.
	//	Make encrypt_Ack low.
	
	if (Reset) begin
		encrypt_Ack    		<= 1'b0;
		index 					<= 1'b0;			// reset index
		keyIndex					<= 1'b0;
		Tx_Data 					<= 1'b0;
		Tx_Send 					<= 1'b0;
		Tx_Reset 				<= 1'b0;
		sentSizeOfDataInByte <= 1'b0;
		Tx_DataIndex			<= 1'b0;
		Tx_DataIndexLocked	<= 1'b0;			// used to lock Tx_DataIndex to prevent uncontrolled increments.
	end
	//else if (startEncryption) begin
	else begin
		if (index < sizeOfDataInByte) begin
			if (encrypt_Ready & encrypt_Ack) begin
				result[index]	<= encrypt_Data;
				encrypt_Ack		<= 1'b1;							// reset encryption engine.
				encrypt_Ready 	<= 1'b0;

//************************************************************************
				// send this to PC. we first want to send the # of byte of the result.
				// the the result it self.
				if (~Tx_Busy) begin
//					if (~sentSizeOfDataInByte) begin			// the following should only happen once.
//						Tx_Data 	<= sizeOfDataInByte;
//						sentSizeOfDataInByte <= 1'b1;
//					end
//					else
						Tx_Data 	<= encrypt_Data;
						
					Tx_Send 		<= 1'b1;
//					Tx_Reset	 	<= 1'b1;
				end
				else begin
					Tx_Send 		<= 1'b0;
//					Tx_Reset	 	<= 1'b0;
				end
//************************************************************************

			end
			else if (~encrypt_Ready & encrypt_Ack) begin
				
				if (index < (sizeOfDataInByte - 1))
					index			<= index + 1'b1;
				
				if (keyIndex < (sizeOfKeyInByte - 1))
					keyIndex		<= keyIndex + 1'b1;
				else
					keyIndex		<= 1'b0;
					
				encrypt_Ready 	<= 1'b1;
				encrypt_Ack		<= 1'b0;
			end
			else if (~encrypt_Ack) begin
				byteOfUserData <= userData[index];		// grab a new byte of data.
				byteOfKey		<= keys	  [keyIndex];
				encrypt_Ack		<= 1'b1;
				encrypt_Ready 	<= 1'b1;
			end
		end
		
//		else begin		// we finished encryption so we send it back to PC.
			//reset Tx_Reset to low.
			//Wait for Tx_Busy to go high.
			//load new byte the data.
			//Make Tx_Reset high.
			//Wait for Tx_Busy to go low.
			//Make Tx_Reset low.

//***********************************************************************************************
//			if (~Tx_Busy) begin
//				if (~sentSizeOfDataInByte) begin			// the following should only happen once.
//					Tx_Data 	<= sizeOfDataInByte;
//					sentSizeOfDataInByte <= 1'b1;
//				end
//				else
//					Tx_Data 	<= result[Tx_DataIndex];
//				
//				Tx_Send 		<= 1'b1;
//				//Tx_Reset	 	<= 1'b1;
//			end
//			else begin
//				if (sentSizeOfDataInByte & ~Tx_DataIndexLocked) begin
//					Tx_DataIndex 			<= Tx_DataIndex + 1'b1;
//					Tx_DataIndexLocked	<= 1'b1;
//				end
//				Tx_Send 		<= 1'b0;
//				//Tx_Reset	 	<= 1'b0;
//			end
//***********************************************************************************************
//		end
	end
end

UART_Sender #(14, 14'd9999) sender(
	Clk_100M,
	Tx_Reset,
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
	
	//LEDs[15:8] <= sizeOfDataInByte;				// check
	LEDs[15:8] <= result[currentCharIndex];
	//LEDs[15:8] <= encrypt_Data;
	//LEDs[15:8] <= byteOfUserData;
	//LEDs[15:8] <= keys[currentCharIndex%3];		// check
	//LEDs[15:8] <= index;								// check
	//LEDs[15:8] <= sizeOfKeyInByte;					// check
	//LEDs[7:0] <= userData[99-currentCharIndex];
	LEDs[7:0] <= userData[currentCharIndex];		// check
end

endmodule