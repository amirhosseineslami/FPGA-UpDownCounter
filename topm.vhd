----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:23:38 01/01/2007 
-- Design Name: 
-- Module Name:    topm - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity topm is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           is_upward : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (6 downto 0));
end topm;

architecture Behavioral of topm is

type state is (state0, state1, state2, state3, state4, state5, state6, state7, state8, state9);
signal last_state, current_state, next_state : state;
signal counter : integer := 0;

begin

process(clk)
begin

if(rising_edge(clk)) then 

counter <= counter + 1;

	if(is_upward = '0') then
-- upward
		if(counter > 20 * 1000000) then
			current_state <= next_state;
			counter <= 0;
		
		end if;
		
		if(reset = '0') then
			counter <= 0;
			current_state <= state0;
		end if;
		
	elsif(is_upward = '1') then
-- downward
		if(counter > 20 * 1000000) then
			current_state <= last_state;
			counter <= 0;
		
		end if;
		
		if(reset = '0') then
			counter <= 0;
			current_state <= state0;
		end if;
	end if;


end if;


end process;


process(current_state)
begin

case current_state is

when state0 =>
next_state <= state1;
last_state <= state9;
output <= "1111110";

when state1 =>
next_state <= state2;
last_state <= state0;
output <= "0110000";

when state2 =>
next_state <= state3;
last_state <= state1;
output <= "1101101";

when state3 =>
next_state <= state4;
last_state <= state2;
output <= "1111001";

when state4 =>
next_state <= state5;
last_state <= state3;
output <= "0110011";

when state5 =>
next_state <= state6;
last_state <= state4;
output <= "1011011";

when state6 =>
next_state <= state7;
last_state <= state5;
output <= "0011111";

when state7 =>
next_state <= state8;
last_state <= state6;
output <= "1110000";

when state8 =>
next_state <= state9;
last_state <= state7;
output <= "1111111";

when state9 =>
next_state <= state0;
last_state <= state8;
output <= "1110011";

end case;

end process;


end Behavioral;

