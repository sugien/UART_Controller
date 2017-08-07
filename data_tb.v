`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:19:08 08/07/2017
// Design Name:   data_manager
// Module Name:   C:/Users/Caio/Documents/GitHub/UART_Controller/data_tb.v
// Project Name:  UART_Controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: data_manager
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module data_tb;

	// Inputs
	reg clk100mhz=0;
	reg cpu_resetn;
	reg uart_txd_in=0;
	reg [7:0] i_data=0;
	reg send_sig=0;

	// Outputs
	wire uart_rxd_out;

	// Instantiate the Unit Under Test (UUT)
	data_manager uut (
		.clk100mhz(clk100mhz), 
		.cpu_resetn(cpu_resetn), 
		.uart_rxd_out(uart_rxd_out), 
		.uart_txd_in(uart_t_out)
	);
	
	txuart sender (
		.i_clk(clk100mhz), 
		.i_reset(!cpu_resetn), 
		.i_setup(30'h0028B0), 
		.i_break(), 
		.i_wr(send_sig), 
		.i_data(i_data), 
		.o_uart(uart_t_out), 
		.o_busy(o_busy)
	);

	initial begin
		// Initialize Inputs
		clk100mhz = 0;
		cpu_resetn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always
		#5 clk100mhz = !clk100mhz;
		
	initial begin
	   #1000 cpu_resetn = 1;
		#10 i_data = 8'hA0;
		#2000000 send_sig=0;
		#10 send_sig = 1;
		#10 send_sig=0;
		#5000000 send_sig=0;
		#10 send_sig = 1;
		#10 send_sig=0;
		#5000000 send_sig=0;
		#10 i_data = 8'h30;
		#10 send_sig = 1;
		#10 send_sig=0;
	end
      
endmodule

