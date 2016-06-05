-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_101_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_101_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101001101101000101111111110", 
    1 => "10111110001001111000110100001101", 
    2 => "00111101101100001000111100111100", 
    3 => "00111101000010011101000100111010", 
    4 => "10111100111000110011100111110111", 
    5 => "00111101101010101000001111110101", 
    6 => "00111110001111011001101010010101", 
    7 => "00111101111111010000000001110001", 
    8 => "10111101101011010011110000011011", 
    9 => "10111100001010110010010101001000", 
    10 => "00111101110111000101101000111110", 
    11 => "00111101101101001011000100001010", 
    12 => "00111101111101010010111010110110", 
    13 => "00111100110111110100110111011001", 
    14 => "10111110001001011011001000001100", 
    15 => "00111101100100110111110110011001", 
    16 => "10111100111010010100001100100101", 
    17 => "00111110000011101110111010010101", 
    18 => "10111101100010111010001010111110", 
    19 => "00111100010011000001100011011101", 
    20 => "00111101000100010110000011001011", 
    21 => "00111101111100100001100100100010", 
    22 => "10111010101011111110111101110001", 
    23 => "00111101000111001001101010000101", 
    24 => "00111110010000100010100011011101", 
    25 => "00111100101101100001001010101100", 
    26 => "00111101100100101111111011010011", 
    27 => "10111101110110001011111101111111", 
    28 => "10111101100101110100000000110000", 
    29 => "10111101011011110101001000011000", 
    30 => "00111101011110000001101010101001", 
    31 => "10111101110011000001000110111100", 
    32 => "10111011101001111001101111100110", 
    33 => "10111101010010000101110011000110", 
    34 => "10111110001111111010100100111011", 
    35 => "10111110001000001101111100010110", 
    36 => "00111101101100001000111001001011", 
    37 => "10111101010010100011001000111000", 
    38 => "10111101001000010100110010000001", 
    39 => "10111101100011011010011001100001", 
    40 => "00111100011100110011100000000110", 
    41 => "00111101110001101101001101001011", 
    42 => "00111101100000011010111011101010", 
    43 => "00111101101111111111001000110110", 
    44 => "10111101101110011011101001111001", 
    45 => "10111110000000001110010101100000", 
    46 => "10111101010000101011001101101110", 
    47 => "10111100111100111111011001110010", 
    48 => "00111101110110010100101101111011", 
    49 => "00111101001110101111111001101110", 
    50 => "00111101101100111000110100101011", 
    51 => "10111110001010101110001111100111", 
    52 => "10111100011000100110100010101011", 
    53 => "10111101100001001101000110110100", 
    54 => "10111100011010101100001010000001", 
    55 => "00111101111111000110110010011000", 
    56 => "00111101000000011001001001110010", 
    57 => "10111101100001011000010001000110", 
    58 => "10111101000110110001011100101101", 
    59 => "10111101001101111011000111101000", 
    60 => "10111101101100100111001110010011", 
    61 => "00111101111000001011010001011011", 
    62 => "00111101100111100110000000010101", 
    63 => "00111101011011000011101011110001", 
    64 => "00111100000101001001111000110010", 
    65 => "00111110000011000010000011010101", 
    66 => "10111011101001101011011001001101", 
    67 => "00111101001011010101111000100010", 
    68 => "00111101001100100111011011000101", 
    69 => "00111110000011101110011010111000", 
    70 => "00111101111010011000101110110101", 
    71 => "10111100101010110000101101000111", 
    72 => "00111101111011100010000010001010", 
    73 => "00111011111111101111111111111011", 
    74 => "10111101101010100011000001001000", 
    75 => "10111100101101001000101000010110", 
    76 => "00111101100111110000000010000100", 
    77 => "00111110001011110000111101011010", 
    78 => "00111101001111101010101110111101", 
    79 => "00111101101010100101111101110111", 
    80 => "10111101101111011001001000111111", 
    81 => "10111110000011100111000110001011", 
    82 => "00111101110101010000101000000011", 
    83 => "10111011110010111100000010110011" );


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

entity inference_mult_1_120_120_84_s_W4_101 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_101 is
    component inference_mult_1_120_120_84_s_W4_101_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_101_rom_U :  component inference_mult_1_120_120_84_s_W4_101_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


