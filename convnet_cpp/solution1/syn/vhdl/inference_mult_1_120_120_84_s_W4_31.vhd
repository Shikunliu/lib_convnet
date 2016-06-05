-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_31_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_31_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101111011000110110111100111", 
    1 => "00111101100010001010000100100100", 
    2 => "10111101010011001011001111011000", 
    3 => "00111101010010110101011100110001", 
    4 => "10111101010100110000111011010000", 
    5 => "10111101101011101111111011010110", 
    6 => "10111101010000110100101010111110", 
    7 => "10111110000101111101010000010111", 
    8 => "10111101101111111011110011010111", 
    9 => "10111100000110010010101111001011", 
    10 => "00111110001101110000111000101100", 
    11 => "00111101011011101110000111100101", 
    12 => "00111101000100011101011001010111", 
    13 => "00111100111100111000010111010100", 
    14 => "00111101100110100101100010001100", 
    15 => "10111101010100101000011000010101", 
    16 => "00111110011000100010011101001010", 
    17 => "10111101100000001011000101101011", 
    18 => "10111101000001010011011100100111", 
    19 => "10111101100010000011000000001101", 
    20 => "10111101110010010000111011010010", 
    21 => "10111100001000001101001010101001", 
    22 => "00111101101001100010010111011100", 
    23 => "10111110001010111011111001000100", 
    24 => "10111101110000000111000100100100", 
    25 => "10111101001101000010011110000101", 
    26 => "10111101010001111011101000001001", 
    27 => "10111110000000001011010110101010", 
    28 => "00111011101001111011011000111101", 
    29 => "00111011101010111001111100010101", 
    30 => "10111110001011111100000011010011", 
    31 => "00111101100110011110111000111000", 
    32 => "10111101010000011100010011100001", 
    33 => "10111101010100111011111100101111", 
    34 => "00111101100000110000000100111100", 
    35 => "10111100110111101010101011100110", 
    36 => "00111100101111000011011111110100", 
    37 => "10111101111010100010100110000100", 
    38 => "10111110000011111101100001101011", 
    39 => "00111101001010111010011110000011", 
    40 => "00111101101101010010010100010000", 
    41 => "00111011001010001011001010111100", 
    42 => "00111101101101101110100010010101", 
    43 => "10111110010000110100100101111011", 
    44 => "10111101101010100110111110111000", 
    45 => "10111101100010110000010111101101", 
    46 => "00111110001111101101111000010010", 
    47 => "10111101101010001001010111101100", 
    48 => "10111101111011101111001001000001", 
    49 => "10111101101001111001110101101000", 
    50 => "10111011011011100010110001101110", 
    51 => "00111101011011000111001101110110", 
    52 => "00111101001001001101011101010000", 
    53 => "10111101100000000111101010100010", 
    54 => "10111001100111000011011010010011", 
    55 => "00111110010001110100011100001111", 
    56 => "10111101001110010110111101110010", 
    57 => "10111110001111011010001000101111", 
    58 => "10111110001010110111111101011010", 
    59 => "00111110001000110011011101100101", 
    60 => "00111110001000101100110010110100", 
    61 => "00111100110111011100001010001001", 
    62 => "10111101100100111111100101010100", 
    63 => "10111100001010111101000011010100", 
    64 => "00111101001011000000110100000100", 
    65 => "10111101101100000010010110001010", 
    66 => "00111101100011111110010100011011", 
    67 => "10111101101101101001000010001110", 
    68 => "10111101000000011010000110001011", 
    69 => "10111101001101110110001011110011", 
    70 => "00111110100000101010010000010010", 
    71 => "00111110001110001000010101001101", 
    72 => "10111101111011001101101001101110", 
    73 => "10111110000001101011110110110010", 
    74 => "00111011001100101100000000110001", 
    75 => "10111011010000110110010110011011", 
    76 => "10111110001101000101001011000110", 
    77 => "00111101110010100110000111111100", 
    78 => "00111101101011010100010111101001", 
    79 => "00111100101000010100011111100100", 
    80 => "10111110000000111101001011011000", 
    81 => "10111100010000111010110101101001", 
    82 => "10111101011100111100100110010001", 
    83 => "00111110001010000100000001011011" );


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

entity inference_mult_1_120_120_84_s_W4_31 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_31 is
    component inference_mult_1_120_120_84_s_W4_31_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_31_rom_U :  component inference_mult_1_120_120_84_s_W4_31_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


