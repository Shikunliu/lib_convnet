-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_106_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_106_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101101011111000000101111101", 
    1 => "10111011100101110111110000011110", 
    2 => "10111101001001101010100110011101", 
    3 => "00111110001010100111111010110111", 
    4 => "00111110010000100101011110000110", 
    5 => "00111100011100101011000101100011", 
    6 => "00111100100101011111100110011100", 
    7 => "10111011010001100111110000100110", 
    8 => "10111101110100010000101100100000", 
    9 => "00111100010000110011111110000101", 
    10 => "10111110001110111000011100111000", 
    11 => "10111101100110011001101011001110", 
    12 => "10111101110001010001010111011100", 
    13 => "10111100011000010000111101111010", 
    14 => "00111101011000011010111110110011", 
    15 => "10111101101100011110101101111000", 
    16 => "10111101011101010001111001110101", 
    17 => "10111110000000010110011011100000", 
    18 => "00111101111001110110111000011110", 
    19 => "00111110001010010110001000000111", 
    20 => "10111110001100111100011011001001", 
    21 => "00111101001001010001001000111110", 
    22 => "10111110000000011010111000101110", 
    23 => "00111101011001111010011111001010", 
    24 => "10111110000000110011111110000101", 
    25 => "00111100101110100110011100111010", 
    26 => "10111101010000010101001100000001", 
    27 => "10111100111001001010110111001010", 
    28 => "10111101100111100011011011101101", 
    29 => "10111101011011011010110001011011", 
    30 => "00111101010000110100000000001100", 
    31 => "10111101011101101100100001100100", 
    32 => "10111101011101011010111100001110", 
    33 => "10111100100011111001001101010001", 
    34 => "00111110001001001111111000110111", 
    35 => "10111101001000111011000000100011", 
    36 => "10111110000000001100100101010100", 
    37 => "00111011111110001110110111010011", 
    38 => "10111101111001010111010010110100", 
    39 => "10111100100110101010111000110111", 
    40 => "00111100010111100001011100001101", 
    41 => "10111100111100100110010110101110", 
    42 => "00111100001001101001101000110011", 
    43 => "00111101101001110001110001111100", 
    44 => "00111100011110110010100100000001", 
    45 => "00111101100111111011100011110101", 
    46 => "00111110010001111101000000101001", 
    47 => "10111101101001000101110111001000", 
    48 => "10111101100110101000010011100111", 
    49 => "10111110000001011001110111011100", 
    50 => "10111101000011001001111110011011", 
    51 => "10111100101100011001011001000101", 
    52 => "00111101110101011001110011010000", 
    53 => "00111110001111100110011001000101", 
    54 => "00111100011110111011111110010100", 
    55 => "00111101010111110101110010100010", 
    56 => "10111101100011100011001100100111", 
    57 => "10111100111000111110111000011100", 
    58 => "10111101110010110110010001011010", 
    59 => "00111101000111001011101011010001", 
    60 => "00111100111100010101101000010101", 
    61 => "10111101011110001001000110010010", 
    62 => "00111110000011110101010101011000", 
    63 => "10111101111110000000111101010110", 
    64 => "00111100110110010100100001110001", 
    65 => "10111101110001010110101110000111", 
    66 => "00111100101100001110001110011000", 
    67 => "10111100100010000011010100100011", 
    68 => "00111110000000001010110111001101", 
    69 => "00111110000110001110110111100101", 
    70 => "10111110000100001110101110101011", 
    71 => "10111100110110010001001010001011", 
    72 => "00111101101001111100000011110100", 
    73 => "10111101101001101101111101101000", 
    74 => "00111101010110001110001011110000", 
    75 => "00111101100110000010000010110000", 
    76 => "00111101101000100111111100001110", 
    77 => "10111101101010111111010111011000", 
    78 => "00111101111011001100100010011011", 
    79 => "00111101000111100110110110101001", 
    80 => "10111101110010101100011011000000", 
    81 => "00111101101000111001011100010100", 
    82 => "10111100110111000010111101000000", 
    83 => "00111100100101001110010101101010" );


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

entity inference_mult_1_120_120_84_s_W4_106 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_106 is
    component inference_mult_1_120_120_84_s_W4_106_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_106_rom_U :  component inference_mult_1_120_120_84_s_W4_106_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


