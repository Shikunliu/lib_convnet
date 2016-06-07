-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_35_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_35_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111011100011110110010111100100", 
    1 => "00111101111100110010000001010011", 
    2 => "00111100100101010110010111111001", 
    3 => "00111100111010011110000110110001", 
    4 => "00111011110110110100000001101110", 
    5 => "00111101001011111111110111110101", 
    6 => "00111100101011001010000101001001", 
    7 => "10111101100000011101111110011110", 
    8 => "00111100111101011010000111011000", 
    9 => "10111110001111100111111110110010", 
    10 => "00111101100100100000011001000010", 
    11 => "00111101100110110100111000101101", 
    12 => "10111100101011000111010111100000", 
    13 => "10111101000000100100011011001100", 
    14 => "00111100001000011110001110000000", 
    15 => "00111101101011101011011010001010", 
    16 => "10111101010001100001001111111011", 
    17 => "10111100000101100100011001001000", 
    18 => "00111110000010000101001001110010", 
    19 => "00111011110111100100000011010011", 
    20 => "00111101010001101100000110100000", 
    21 => "00111101110010010001001001111110", 
    22 => "00111101100110011001001111001000", 
    23 => "00111101000001111011000010110100", 
    24 => "10111100001110101110011101011101", 
    25 => "10111101111010010011000001111011", 
    26 => "00111100010011010010101110010111", 
    27 => "10111011110000111110000100000000", 
    28 => "10111100110111110010110110001101", 
    29 => "10111110001000111111101110111101", 
    30 => "10111101101100011010010100001110", 
    31 => "00111100100100100110111100000011", 
    32 => "00111110000011011101010100001011", 
    33 => "00111101100101000010111011101001", 
    34 => "10111100110000010011110110111000", 
    35 => "10111101111001101101110001011101", 
    36 => "10111110000111010010101111110101", 
    37 => "00111101011111001100110100101011", 
    38 => "00111100001000111100011001001110", 
    39 => "10111100110011011111000001001110", 
    40 => "10111101111110100001111111010001", 
    41 => "00111101000000101100110010011001", 
    42 => "00111110001110001110000101010000", 
    43 => "00111110001011100011000100001110", 
    44 => "10111100111101100000101001001000", 
    45 => "10111101110111010101010101100001", 
    46 => "10111100110111010001100110110111", 
    47 => "10111101100110010111100101000000", 
    48 => "00111101011111001010000110001100", 
    49 => "00111100101010010101101000110111", 
    50 => "00111010010000010000100100010111", 
    51 => "10111110000101110111000001111010", 
    52 => "00111101100000100110001011011001", 
    53 => "10111101101101000100000111110001", 
    54 => "00111100101001101011101100100000", 
    55 => "00111101000111100000101011111110", 
    56 => "00111101101100101101101111011011", 
    57 => "10111101111100001100011101111110", 
    58 => "10111011100010101101110011111110", 
    59 => "00111101101110011001100001100101", 
    60 => "00111101100001010111111110110111", 
    61 => "00111101000010100110010111101010", 
    62 => "10111110000101111101010010011101", 
    63 => "00111110001010101011100011101001", 
    64 => "00111101111010010011011111010010", 
    65 => "10111110000101101001001010110100", 
    66 => "00111100100101000001000100101111", 
    67 => "10111100111011001011111110110001", 
    68 => "00111110000001110000101000111101", 
    69 => "00111101100001100011111010101001", 
    70 => "10111100110100011111111011010000", 
    71 => "10111110010100000011011001000100", 
    72 => "10111101000000001110101011000111", 
    73 => "10111100000010111001001010111011", 
    74 => "00111101010001100101000110100011", 
    75 => "10111100000100110100101011010110", 
    76 => "10111101111011010101110011111011", 
    77 => "10111110000010110000101010110011", 
    78 => "00111110000101111111111010001111", 
    79 => "00111010001010101010100111010001", 
    80 => "00111011101011101000000001011100", 
    81 => "10111101100010011111100100111011", 
    82 => "00111101101111010100100010100011", 
    83 => "10111101100001000010000011101010" );


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

entity inference_mult_1_120_120_84_s_W4_35 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_35 is
    component inference_mult_1_120_120_84_s_W4_35_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_35_rom_U :  component inference_mult_1_120_120_84_s_W4_35_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

