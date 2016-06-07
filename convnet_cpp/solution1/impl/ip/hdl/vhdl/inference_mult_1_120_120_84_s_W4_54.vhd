-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_54_rom is 
    generic(
             dwidth     : integer := 32; 
             awidth     : integer := 7; 
             mem_size    : integer := 84
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of inference_mult_1_120_120_84_s_W4_54_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101100100111110100011111000", 
    1 => "00111101100100010000110000010010", 
    2 => "00111110010100000000110001010010", 
    3 => "10111101101100101101101011000001", 
    4 => "10111110001101110111000111001001", 
    5 => "10111100101100001000101011100010", 
    6 => "00111101110011111001010101001111", 
    7 => "00111101101001110100110110000010", 
    8 => "10111011001000100010010010000011", 
    9 => "00111101111010001011101100001010", 
    10 => "00111110001011111001001011110011", 
    11 => "10111101001111010011100011110110", 
    12 => "10111011011100001111000000011000", 
    13 => "00111110011000001111001101000101", 
    14 => "10111110000101111111111101011000", 
    15 => "00111100100100110101111000010110", 
    16 => "10111101111011011101101111011011", 
    17 => "10111110010110010010011111010100", 
    18 => "00111110001000000010001101100100", 
    19 => "00111101100100111010000001000000", 
    20 => "10111101001111101110110101000110", 
    21 => "10111101101001000111111111001111", 
    22 => "10111101111000001101111101011001", 
    23 => "10111101011100010101011110010001", 
    24 => "10111110000101111101000010101111", 
    25 => "00111101100110010000001000111101", 
    26 => "00111101100100000000111001000011", 
    27 => "10111100100100010110011010010000", 
    28 => "00111101111010101111010111111101", 
    29 => "10111110001000110011110011100110", 
    30 => "10111101001000011101011111110111", 
    31 => "00111110011000100110001000000010", 
    32 => "00111101100001110100001010001100", 
    33 => "10111101101001110010001110111000", 
    34 => "10111110000001010101111001101100", 
    35 => "00111110001010110000010100110010", 
    36 => "00111100010010001010000000010111", 
    37 => "10111101110110100111110000011000", 
    38 => "10111101110111100111111010100110", 
    39 => "00111100101011101011000101011001", 
    40 => "00111101010111001000000111111100", 
    41 => "10111101010100001010110101000111", 
    42 => "00111101101010100100010100011000", 
    43 => "00111101000111110011101111010000", 
    44 => "10111100011101110001010111100001", 
    45 => "10111100100111111001010110010010", 
    46 => "00111110001101110011100011100111", 
    47 => "10111100100001000111101010111001", 
    48 => "10111100111101110100101000011001", 
    49 => "10111101001110001100100000110011", 
    50 => "10111010011100101111011111111100", 
    51 => "00111100100110101011111011111110", 
    52 => "00111100101110001010000101100111", 
    53 => "10111101011111111101001111011011", 
    54 => "10111101100011010010011110000000", 
    55 => "00111100100101001101111111110110", 
    56 => "10111100111011100010100100111110", 
    57 => "10111101000010000010001100011010", 
    58 => "00111101101011001000010110110101", 
    59 => "10111100110010100010110101001011", 
    60 => "10111101110101111111110110000010", 
    61 => "10111101110111101101111100011110", 
    62 => "00111100111101001110110110110011", 
    63 => "10111101101001110011011100011110", 
    64 => "00111100101110000010101110001011", 
    65 => "00111101101100100011101100011011", 
    66 => "00111101111110100110010110001100", 
    67 => "10111101111001010100110101100010", 
    68 => "00111101111001111010011111001010", 
    69 => "00111100101110100110111111010011", 
    70 => "10111101110101110110000010111111", 
    71 => "00111101000001110111100001001010", 
    72 => "00111010101010011110100110011110", 
    73 => "10111110100000110110100111011011", 
    74 => "10111100011110001010110111111100", 
    75 => "00111110000000110000110011101101", 
    76 => "00111100101010000101111111010000", 
    77 => "00111100110101000011100101110011", 
    78 => "10111110000101110110100011100000", 
    79 => "10111101001010111010101100010100", 
    80 => "10111101101101001101011110000110", 
    81 => "10111101111000001110011000101010", 
    82 => "00111110001101110101001111100111", 
    83 => "00111101100101111001100111100101" );


attribute EQUIVALENT_REGISTER_REMOVAL : string;
begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity inference_mult_1_120_120_84_s_W4_54 is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 84;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of inference_mult_1_120_120_84_s_W4_54 is
    component inference_mult_1_120_120_84_s_W4_54_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_54_rom_U :  component inference_mult_1_120_120_84_s_W4_54_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

