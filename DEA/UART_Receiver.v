// Alt+C for commenting
// Alt+Shift+C for uncommenting
//`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:51 05/14/2016 
// Design Name: 
// Module Name:    UART_Receiver 
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
module UART_Receiver #(
	parameter N    = 5,
	parameter Full = 5'd29 // Clk / BAUD - 1
)(
	input Clk,
	input Reset,
	
	output reg [7:0]Data,
	output reg      Ready,	// 'low' means busy, and 'high' mean free.
	input           Ack,
	input 			 softReset,
	input 			 Rx
);
//------------------------------------------------------------------------------

reg        tRx;
reg        tAck;
reg [  7:0]Temp;
reg [N-1:0]Count;
reg [  2:0]BitCount;
reg        NewData;
//------------------------------------------------------------------------------

reg   [1:0]State;
localparam Idle      = 2'b00;
localparam StartBit  = 2'b01;
localparam Receiving = 2'b11;
localparam Done      = 2'b10;
//------------------------------------------------------------------------------

reg tReset;
//reg tSoftReset;

always @(posedge Clk) begin
	tRx    <= Rx;		// synchronise.
	tAck   <= Ack;		// synchronise.
	tReset <= Reset;	// synchronise.
	// tSoftReset <= softReset;	// synchronise.

	if(tReset | softReset) begin
		// if Reset the reinitialise everything.
		Data    <= 0;
		Ready   <= 0;
		NewData <= 0;

		Count   <= 0;
		State   <= Idle;
		//------------------------------------------------------------------------------
		
	end else begin
		if(Ready & tAck) Ready <= 1'b0;	// set to 'low' to indicate busy.

		case(State)
			Idle: begin
				// if there is nothing on the Rx line.
				if(~tRx) begin
					Count <= {1'b0, Full[N-1:1]};
					State <= StartBit;	// successfully received startbit.
				end
				// if successfully received 8-bits of data.
				if(NewData & ~tAck && ~Ready) begin 
					Data    <= Temp;
					Ready   <= 1'b1;	// set to 'high' to indicate free.
					NewData <= 1'b0;
					//Count <= 0;
				end
			end
//------------------------------------------------------------------------------

			Done: begin
				if(tRx) State <= Idle;
			end
			default:;
		endcase
//------------------------------------------------------------------------------

		if(~|Count) begin
			case(State)
				StartBit: begin
					if(Rx) begin
						State <= Idle;
					end else begin
						BitCount <= 0;
						Count    <= Full;
						State    <= Receiving;
					end
				end
//------------------------------------------------------------------------------ 

				Receiving: begin
					Temp  <= {tRx, Temp[7:1]};
					Count <= Full;
     
					if(&BitCount) begin
						NewData <= 1'b1;
						State   <= Done;
					end

					BitCount <= BitCount + 1'b1;
				end
//------------------------------------------------------------------------------ 
				default:;
			endcase
		end else begin
			Count <= Count - 1'b1;
		end
	end
end
//------------------------------------------------------------------------------

endmodule
