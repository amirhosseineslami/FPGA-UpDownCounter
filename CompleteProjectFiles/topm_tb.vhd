--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   02:38:34 01/01/2007
-- Design Name:   
-- Module Name:   C:/Users/User/Desktop/exam/exam/topm_tb.vhd
-- Project Name:  exam
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: topm
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY topm_tb IS
END topm_tb;
 
ARCHITECTURE behavior OF topm_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT topm
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         is_upward : IN  std_logic;
         output : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '1';
   signal is_upward : std_logic := '0';

 	--Outputs
   signal output : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: topm PORT MAP (
          clk => clk,
          reset => reset,
          is_upward => is_upward,
          output => output
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      -- insert stimulus here
		
		is_upward <= '0';
      wait for clk_period*10;
		
		
      wait for clk_period*10;
		
		
		is_upward <= '1';

      wait for clk_period*10;
		
      wait;
   end process;

END;
