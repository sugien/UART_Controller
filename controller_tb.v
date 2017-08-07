`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:40:17 08/01/2017
// Design Name:   uart_controller
// Module Name:   C:/Users/Caio/Documents/GitHub/UART_Controller/controller_tb.v
// Project Name:  UART_Controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module controller_tb;

	// Inputs
	reg clk100mhz;
	reg cpu_resetn;
	reg uart_txd_in;
	reg send_sig;
	reg [7:0] send_data;

	// Outputs
	wire uart_rxd_out;
	wire recived_sig;
	wire [7:0] recived_data;
	wire busy_sending;

	// Instantiate the Unit Under Test (UUT)
	uart_controller uut (
		.clk100mhz(clk100mhz), 
		.cpu_resetn(cpu_resetn), 
		.uart_rxd_out(uart_rxd_out), 
		.uart_txd_in(uart_rxd_out), 
		.send_sig(send_sig), 
		.send_data(send_data), 
		.recived_sig(recived_sig), 
		.recived_data(recived_data), 
		.busy_sending(busy_sending)
	);
	
	initial begin
		// Initialize Inputs
		clk100mhz = 0;
		uart_txd_in = 0;
		send_sig = 0;
		cpu_resetn = 0;
		send_data = 8'b00100010;

		// Wait 100 ns for global reset to finish
		#10;

	end
	
	always begin
		#5 clk100mhz = !clk100mhz;
	end
	
	initial begin
	   #1000 cpu_resetn = 1;
		#2000000 send_sig=0;
		#10 send_sig = 1;
		#10 send_sig=0;
	end
      
endmodule

