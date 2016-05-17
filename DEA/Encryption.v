//`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:54:24 05/17/2016 
// Design Name: 
// Module Name:    Encryption 
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

module Encryption(
	input 			 Clk,
	input 			 Reset,
	//input 	  [7:0]ID,
	input 	  [7:0]DataIn,
	//input 	  [7:0]SizeOfData,
	input 	  [7:0]key,
	//input 	  [7:0]NumberOfKeys,
	output reg [7:0]DataOut,
	output reg      Ready	// toggled 'low' to indicate start of encryption
									// and toggled 'high' to indicate completion.
);

//reg [2:0]dataCount;
reg [2:0]count;

always @(posedge Clk) begin

	if (Reset) begin
		Ready <= 1'b0;
		count <= 1'b0;
//		dataCount <= 0;
	end
	else begin
//		if (dataCount < SizeOfData) begin
		for (count = 0; count < 8; count = count + 1) begin
			DataOut[count] <= DataIn[count] ^ key[count];
//			dataCount <= dataCount + 1'b1;
//			keyCount  <= keyCount + 1'b1;
//			
//			if (keyCount == NumberOfKeys)
//				keyCount <= 1'b0;		// wrap around.
		end
		if (count == 8)
			Ready <= 1'b1;				// to indicate that we completed encryption.
	end
end

endmodule