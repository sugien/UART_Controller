`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:19 08/01/2017 
// Design Name: 
// Module Name:    uart_controller 
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
module uart_controller(clk100mhz,cpu_resetn,uart_rxd_out,uart_txd_in,send_sig,send_data,recived_sig,recived_data,busy_sending
    );
	 
	 input clk100mhz; // Clock
	 input cpu_resetn;
	 
	 input uart_txd_in; //recieve
	 output uart_rxd_out; //send
	 
	 input send_sig; //sinalizar envio de dados
	 input [7:0] send_data; //dados para envio
	 
	 output recived_sig; //sinalizar recebimento de dados
	 output reg [7:0] recived_data;// dados recebidos
	 
	 output busy_sending; // busy_send
	 
	 //config
	 reg [7:0] i_data = 0;
	 reg [29:0] setup_uart = 30'h0028B0; // 9600, 8bit w/o parity, with 100Mhz clock.
	 wire [7:0] o_data;
	 
	 
	 txuart sender (
		.i_clk(clk100mhz), 
		.i_reset(!cpu_resetn), 
		.i_setup(setup_uart), 
		.i_break(), 
		.i_wr(send_sig), 
		.i_data(i_data), 
		.o_uart(uart_rxd_out), 
		.o_busy(o_busy)
	);
	
	rxuart reciever (
		.i_clk(clk100mhz), 
		.i_reset(!cpu_resetn), 
		.i_setup(setup_uart), 
		.i_uart(uart_txd_in), 
		.o_wr(recived_sig), 
		.o_data(o_data), 
		.o_break(), 
		.o_parity_err(), 
		.o_frame_err()
	);
	
	
	//reciever_block
	always@(posedge recived_sig) begin
		recived_data = o_data;
	end
	
	//sender_block
	always@(posedge send_sig) begin
		i_data = send_data;
	end
	assign busy_sending = o_busy;
		
endmodule
