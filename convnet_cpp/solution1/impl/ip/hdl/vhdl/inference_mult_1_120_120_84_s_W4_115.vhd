-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_115_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_115_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111100110011110110000011000110", 
    1 => "00111101111011011100011001011100", 
    2 => "10111001010001000101000110001111", 
    3 => "00111110000101010100010011111110", 
    4 => "10111110001101011110001001001000", 
    5 => "10111101010111111101111011000011", 
    6 => "00111101100011010011001110011101", 
    7 => "00111101101111101110100010000001", 
    8 => "00111101001001011110010100000001", 
    9 => "00111101010101000011111010110001", 
    10 => "10111101100110111110100010111100", 
    11 => "00111100101101100011000010101001", 
    12 => "00111100111110011101101110001110", 
    13 => "00111101000110110001110110101110", 
    14 => "00111101100001111011011001000010", 
    15 => "10111100011101000000001010011100", 
    16 => "00111101000100000010010010001011", 
    17 => "10111110001011111010110011100110", 
    18 => "10111011110110101010010101010011", 
    19 => "10111110001101101000011010100101", 
    20 => "00111110001100100111011011111011", 
    21 => "10111101101100111101110100111010", 
    22 => "00111100100001111100000101100000", 
    23 => "00111101101010011000101110100111", 
    24 => "00111100011111001111101011111101", 
    25 => "00111101111101110000111011110101", 
    26 => "10111100111101101010010001101100", 
    27 => "10111101011001101011001000011011", 
    28 => "10111100011001101110000000001001", 
    29 => "10111101001001100010100110110000", 
    30 => "00111110000001110110001001010010", 
    31 => "00111110011010101110110110011010", 
    32 => "00111100111010011001101100000100", 
    33 => "10111101110100101001111011010100", 
    34 => "10111101110101101000000001011010", 
    35 => "00111110000111000110100011101100", 
    36 => "00111010110101110100100101111101", 
    37 => "00111101000100001001111000101101", 
    38 => "10111101110010000101110111100000", 
    39 => "10111011110000100110011000000001", 
    40 => "00111110001000111001001000011001", 
    41 => "10111110001011000100101011000111", 
    42 => "10111101110100110011000100011010", 
    43 => "10111110000000001111001110001000", 
    44 => "10111101110011000100001111110110", 
    45 => "00111101011011000111010100100100", 
    46 => "10111110001000000000010001110101", 
    47 => "10111110010101111001000110000010", 
    48 => "00111101110001001101010010100011", 
    49 => "10111100111011111011000010010010", 
    50 => "10111110011001000111100001000010", 
    51 => "00111110011000111001011110011010", 
    52 => "10111101000011010110100010111001", 
    53 => "00111101110100110001100001110110", 
    54 => "00111101011000111000100111000011", 
    55 => "00111101000100011101011011111000", 
    56 => "00111101100000000110000010000101", 
    57 => "10111101101011010101001101111101", 
    58 => "10111110000001100011011110111101", 
    59 => "10111101100000110010010101011100", 
    60 => "00111110011100110001100010111001", 
    61 => "00111101001011010101100100011001", 
    62 => "00111100010111000011010110001011", 
    63 => "10111110100111100000100110011010", 
    64 => "00111110000011110100111100001110", 
    65 => "00111100001101111110010001110011", 
    66 => "10111110001000111011010001110000", 
    67 => "10111110000011110010010100011100", 
    68 => "10111110010000100010110001000101", 
    69 => "10111110000101001000010000001110", 
    70 => "10111101101001000101101100000001", 
    71 => "10111110000100011100101101000111", 
    72 => "00111010000101110110101010101111", 
    73 => "00111101110101110100101010111010", 
    74 => "00111101000011011101111111010111", 
    75 => "00111101111101010000100011110110", 
    76 => "10111101100011000011011000111001", 
    77 => "00111011100010111011000001111000", 
    78 => "10111101101101110101001101100001", 
    79 => "00111101001011100000111110101000", 
    80 => "10111010111111101010100111101010", 
    81 => "00111101100110100011111101010100", 
    82 => "10111101100101110110101000000111", 
    83 => "10111101101100000001010001110010" );


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

entity inference_mult_1_120_120_84_s_W4_115 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_115 is
    component inference_mult_1_120_120_84_s_W4_115_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_115_rom_U :  component inference_mult_1_120_120_84_s_W4_115_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


