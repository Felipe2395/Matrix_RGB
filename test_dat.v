`timescale 1ns / 1ps

///////////////////////////////////////////////////////////////////////////////

module test_dat;

	// Inputs
	reg r_enable;
	reg [0:95] m_data;
	reg [0:2] linesel;

	// Outputs
	wire linesel_en;
	wire [0:31] red;
	wire [0:31] red2;
	wire send;
	wire enable;

	// Instantiate the Unit Under Test (UUT)
	Data_codec uut (
		.r_enable(r_enable), 
		.m_data(m_data), 
		.linesel(linesel), 
		.linesel_en(linesel_en), 
		.red(red), 
		.red2(red2), 
		.send(send), 
		.enable(enable)
	);

	initial begin
		// Initialize Inputs
		#80
		r_enable = 1;
		m_data = 96'b011111101000011111101000011111101000011111101000011111101000011111101000011111101000011111101000;
		linesel = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

