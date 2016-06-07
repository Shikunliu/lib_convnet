-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_114_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_114_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110010100110011111110000101", 
    1 => "10111110001011001001011110010110", 
    2 => "10111100001101111001010110011001", 
    3 => "10111110010101110011110011010101", 
    4 => "10111101111111010111000000011110", 
    5 => "10111100010011110100010101001101", 
    6 => "10111110000011000110011000001010", 
    7 => "00111101010101000011011011010100", 
    8 => "00111011011011000100100100111111", 
    9 => "10111101010101011111000001000111", 
    10 => "10111101010110001110001000110100", 
    11 => "00111101111111001110010110110100", 
    12 => "00111110010011110000101100101000", 
    13 => "10111101001011111001011110111000", 
    14 => "10111101111110010000001110100111", 
    15 => "10111101111100111011101011111110", 
    16 => "00111101001011010011100011101000", 
    17 => "00111100111100011111110011010010", 
    18 => "00111101111111101101101101110011", 
    19 => "10111110011011010010000101111001", 
    20 => "10111101110000110011001001011100", 
    21 => "10111101101110001111110101011101", 
    22 => "00111101000000011010110111010000", 
    23 => "10111110001100101011001101000110", 
    24 => "00111110000110111001111010001100", 
    25 => "00111101100011101111000011110001", 
    26 => "10111110001001001011110100110100", 
    27 => "00111110011010101000110001011000", 
    28 => "10111101010111000000101101100100", 
    29 => "10111101100110111001010100101010", 
    30 => "00111100001101111111101111110000", 
    31 => "10111101110101110011011101010100", 
    32 => "00111110001011110110111111010010", 
    33 => "10111100100011010111111100001111", 
    34 => "00111100010111110010110111111000", 
    35 => "10111101100000000110110100000000", 
    36 => "10111101011111000101100111010011", 
    37 => "00111110000110001101000111011001", 
    38 => "00111101000100001001000100101101", 
    39 => "10111100110101111001111000010111", 
    40 => "00111101001101011000100100110100", 
    41 => "00111001101001000011000111101000", 
    42 => "00111101110001011000000011010000", 
    43 => "10111100111111100101101101010000", 
    44 => "10111101110100000011110110011011", 
    45 => "10111110000100110010111110001000", 
    46 => "00111101100001111001010011011101", 
    47 => "00111101100101110011010001001010", 
    48 => "10111011010010000111010101001111", 
    49 => "10111101010111000011111011100000", 
    50 => "10111101000110011010000101000001", 
    51 => "00111101001000000100011100011000", 
    52 => "10111110001000110100011001010110", 
    53 => "00111101101001101101100001000110", 
    54 => "10111010011000001000110110100111", 
    55 => "10111101101011000011010111101001", 
    56 => "00111101101001101000100101101100", 
    57 => "00111101001001110010000010000110", 
    58 => "00111100100100110101011011110101", 
    59 => "00111101101101011111001100000001", 
    60 => "00111101100011011001010001100101", 
    61 => "10111110001000001000001010001100", 
    62 => "00111110001010011010111111100010", 
    63 => "00111110010010010100001010010001", 
    64 => "10111101111000100111101001100011", 
    65 => "10111100110011000001110101111010", 
    66 => "10111110001100110100111111000110", 
    67 => "10111101110101000110111001001100", 
    68 => "00111101101000001000110111101101", 
    69 => "10111101011000111001110000011100", 
    70 => "10111110011011100100101000111000", 
    71 => "10111101111000100010000111001001", 
    72 => "00111110001010111100001010111001", 
    73 => "00111101100110000001010011010111", 
    74 => "10111100110001000010001110110001", 
    75 => "00111100011000100110000110001010", 
    76 => "00111101110001010100000001101111", 
    77 => "10111101110111111010010101001100", 
    78 => "00111110000110100101101001000111", 
    79 => "00111101000000011010011001011110", 
    80 => "00111110000001110100000010000001", 
    81 => "00111011110010011000110001111011", 
    82 => "10111101000111010100010100100000", 
    83 => "10111100110011111101111110100111" );


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

entity inference_mult_1_120_120_84_s_W4_114 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_114 is
    component inference_mult_1_120_120_84_s_W4_114_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_114_rom_U :  component inference_mult_1_120_120_84_s_W4_114_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

