`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:27:43 08/07/2017 
// Design Name: 
// Module Name:    data_manager 
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
module data_manager(clk100mhz,cpu_resetn,uart_rxd_out,uart_txd_in
    );
	 
	 input clk100mhz; // Clock
	 input cpu_resetn;
	 
	 input uart_txd_in; //recieve
	 output uart_rxd_out; //send
	 
	 reg send_sig; //sinalizar envio de dados
	 reg [7:0] send_data=0; //dados para envio
	 
	 wire recived_sig; //sinalizar recebimento de dados
	 reg [7:0] recived_data;// dados recebidos
	 
	 wire busy_sending; // busy_send*/
	 
	 uart_controller uart (
    .clk100mhz(clk100mhz), 
    .cpu_resetn(cpu_resetn), 
    .uart_rxd_out(uart_rxd_out), 
    .uart_txd_in(uart_txd_in), 
    .send_sig(send_sig), 
    .send_data(send_data), 
    .recived_sig(recived_sig), 
    .recived_data(recived_data), 
    .busy_sending(busy_sending)
    );
	 
	 reg [2:0] sig_counter = 0;
	 reg [7:0] recived_command = 0;
	 reg [4:0] send_time_counter = 0;
	 
	 //8'h74 = t (test)
	 
	 always @ (posedge recived_sig) begin
		 if(sig_counter == 0) begin
			case (recived_data)
				8'h74: begin 
					recived_command = recived_data;
					sig_counter = sig_counter +1;
					end
				default: begin //send "?" 3F
					send_data= 8'h3F;
					send_sig=1;
					while (busy_sending) begin
						send_time_counter = send_time_counter +1;
						send_sig=0;
					end
					send_time_counter = 0;
					send_data = 0;
					sig_counter = 0;
				end
			endcase 
		end
		else if (sig_counter == 1) begin
			send_data= recived_data +1;
				send_sig=1;
				while (busy_sending) begin
					send_time_counter = send_time_counter +1;
					send_sig=0;
				end
				send_time_counter = 0;
				send_data = 0;
			end
		end
				
			


endmodule
