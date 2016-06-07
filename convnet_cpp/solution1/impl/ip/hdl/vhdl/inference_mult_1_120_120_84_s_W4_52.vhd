-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_52_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_52_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100011010110000111000000000", 
    1 => "10111101111001010100001101101100", 
    2 => "10111100001110001010100001010011", 
    3 => "10111100011000111111110111010110", 
    4 => "00111100011011010000110011011110", 
    5 => "00111110000100100101101001101000", 
    6 => "10111100001001101110100000110111", 
    7 => "00111011111101101101111101011010", 
    8 => "10111101111001101000101000001101", 
    9 => "00111110000101111111011000101011", 
    10 => "00111100111011100000110101011010", 
    11 => "00111100101111000101110101001001", 
    12 => "10111110001000100011011001111110", 
    13 => "10111110000010000011100110001010", 
    14 => "10111101101100000011110111000011", 
    15 => "00111101001101100111000010100000", 
    16 => "10111101110001101100110100101001", 
    17 => "00111110000100100110001001000101", 
    18 => "00111101111111011001000010011111", 
    19 => "00111101010000010010011100010010", 
    20 => "00111101101000011111111001100101", 
    21 => "10111101100110011111000110100001", 
    22 => "00111101100000110101011010010111", 
    23 => "00111101100011110101101000101011", 
    24 => "00111101100101100011000000110000", 
    25 => "10111101110101010100000100010000", 
    26 => "00111101111100011010110100100001", 
    27 => "00111101001001101000011000101100", 
    28 => "10111101011101001011100000011110", 
    29 => "10111100001000110100101001011101", 
    30 => "10111101101111110111111111000010", 
    31 => "00111101110011101100111100100000", 
    32 => "00111100111000101000110000011100", 
    33 => "10111100011111110110010001100100", 
    34 => "00111100110111110111011010001000", 
    35 => "00111110000001010011001010100101", 
    36 => "10111110000101111110101001100000", 
    37 => "10111011000110101001100101001001", 
    38 => "10111101001100101000000101011101", 
    39 => "10111101011011100101110001001111", 
    40 => "00111100101001011111101100111100", 
    41 => "10111101100110101101110001110101", 
    42 => "00111101110110011001010011100010", 
    43 => "10111110001110110011000010110110", 
    44 => "10111100001110010010000111110101", 
    45 => "00111110001010010000001100100001", 
    46 => "10111110000010100111101001000010", 
    47 => "00111101110111111100011101100000", 
    48 => "10111100111110111001011011100101", 
    49 => "00111100100101010010000011111001", 
    50 => "10111101010010101001001100011100", 
    51 => "00111101100001111100000000111000", 
    52 => "10111110000101101100100101111110", 
    53 => "00111110000011100111101100111110", 
    54 => "00111101011000001100100110100100", 
    55 => "00111101101111100011111001000100", 
    56 => "00111011110100101010000001100001", 
    57 => "00111101110110010010010000101001", 
    58 => "00111100111111000001110110111110", 
    59 => "00111101011011111111010101000001", 
    60 => "10111101110100001000000100111101", 
    61 => "10111100110110001010110111100001", 
    62 => "10111100111111001111110011100001", 
    63 => "00111101110111000010010011000100", 
    64 => "10111100000110111110110111110010", 
    65 => "00111101111001100110011111111001", 
    66 => "10111101111110101100100100101010", 
    67 => "00111110001011101100001110011000", 
    68 => "10111100001010110100001100001111", 
    69 => "10111011110000010001101011111101", 
    70 => "00111011110001011111100001110010", 
    71 => "10111100100011110011101000110000", 
    72 => "10111011011001101010010000001110", 
    73 => "10111101110010011101110010101000", 
    74 => "00111100110111000110110100011110", 
    75 => "10111101010011010101011011100110", 
    76 => "00111101111101111100110111001101", 
    77 => "10111101101100111011010111101000", 
    78 => "10111110000011110111110111111010", 
    79 => "00111101110001001011110000100111", 
    80 => "00111100111101100110000011100101", 
    81 => "10111110000001110100110000001010", 
    82 => "10111110001101110100100101101011", 
    83 => "00111101111000110100010011000011" );


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

entity inference_mult_1_120_120_84_s_W4_52 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_52 is
    component inference_mult_1_120_120_84_s_W4_52_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_52_rom_U :  component inference_mult_1_120_120_84_s_W4_52_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

