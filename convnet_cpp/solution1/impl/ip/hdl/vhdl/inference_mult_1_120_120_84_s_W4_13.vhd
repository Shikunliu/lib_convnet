-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_13_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_13_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110011010011100101101101000", 
    1 => "00111101101001100011101111000110", 
    2 => "00111101110110011111001000110100", 
    3 => "00111101001010101000111111000001", 
    4 => "10111101110111000111000011001010", 
    5 => "10111101100100011111001100011111", 
    6 => "10111101011011111001000111011001", 
    7 => "00111101110110010100000110000101", 
    8 => "10111101001011101111001100011000", 
    9 => "00111101011001101010111000000101", 
    10 => "00111101100110011000110110100101", 
    11 => "10111101101101100010110101011100", 
    12 => "00111101111011000010011110100110", 
    13 => "10111100011100110101110010000100", 
    14 => "00111101011111001000001100111110", 
    15 => "10111101110110110000000000110111", 
    16 => "10111101001011000011011111001100", 
    17 => "10111101101101100101010111111101", 
    18 => "10111101100001101010100011101111", 
    19 => "00111101101110111000101000011010", 
    20 => "10111100010101100111111111010100", 
    21 => "10111110000000001001011001111000", 
    22 => "10111101001100100001111110111101", 
    23 => "00111100101101011011110100011011", 
    24 => "00111110000101101100000000001110", 
    25 => "00111100110101101100100101110000", 
    26 => "00111101011000110011101110001001", 
    27 => "00111110010000010101101000001000", 
    28 => "10111100001000111010110101111001", 
    29 => "00111101001010110100111110100101", 
    30 => "00111101111010110111001101001011", 
    31 => "00111110100000001001000010110100", 
    32 => "10111100110010001000110000101011", 
    33 => "10111110000010001101100100110000", 
    34 => "10111101100010101101101111100001", 
    35 => "00111110001000111010001111101100", 
    36 => "10111011010101000011010100100001", 
    37 => "00111100110011000011101111100011", 
    38 => "10111101110001101010100010010001", 
    39 => "00111110001100101000000110111010", 
    40 => "00111000101011101011011100110011", 
    41 => "10111101101001100001110110111100", 
    42 => "00111101001001110100001001001001", 
    43 => "10111110011100001101000111111010", 
    44 => "00111110000011001100000010111110", 
    45 => "00111101100110000100111110101010", 
    46 => "10111100101000111001001001110111", 
    47 => "10111100101111101010011101110000", 
    48 => "10111101011100001000011000001111", 
    49 => "10111101101010110101101001110001", 
    50 => "10111101110000011101010010110111", 
    51 => "10111101110000111011110110111000", 
    52 => "10111110001110010000011110010110", 
    53 => "10111100100000111101110010011001", 
    54 => "10111011111001000000100100010100", 
    55 => "10111101101101111001001011011111", 
    56 => "00111110001010000100110010101101", 
    57 => "00111101110001110000110000111011", 
    58 => "10111110000011001001100000011100", 
    59 => "10111100110110100001010110001011", 
    60 => "10111101010000010111000010101110", 
    61 => "00111101101000011100110111001011", 
    62 => "10111100101101101001110010101010", 
    63 => "10111101100101001111111000011100", 
    64 => "00111110010100101001100110010101", 
    65 => "10111110000000010011011100101010", 
    66 => "10111010101011001100111111010111", 
    67 => "10111100100001111010101010111001", 
    68 => "10111101001000000111101010010100", 
    69 => "10111101100110100000101111100101", 
    70 => "10111110011010100011110011101010", 
    71 => "00111101111000101000110010111101", 
    72 => "10111101110000100010101110010111", 
    73 => "00111100100010001010010100100000", 
    74 => "00111110001001101100010010000010", 
    75 => "00111101001001111000101000111000", 
    76 => "10111110101000000001111010001010", 
    77 => "10111101100111001010100100110011", 
    78 => "10111100010011110101000101110111", 
    79 => "10111110010000010010100100000010", 
    80 => "00111100100011100001101110110111", 
    81 => "00111101100000101010101100001011", 
    82 => "00111101000001110000100111000101", 
    83 => "10111101111111100111001000010001" );


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

entity inference_mult_1_120_120_84_s_W4_13 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_13 is
    component inference_mult_1_120_120_84_s_W4_13_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_13_rom_U :  component inference_mult_1_120_120_84_s_W4_13_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


