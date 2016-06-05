-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101111111100010001011100110", 
    1 => "10111101110100000000100000100000", 
    2 => "00111101001111000111111100001100", 
    3 => "10111101000010000101100111110001", 
    4 => "00111100100110111101100100001111", 
    5 => "10111010110101111011011010001011", 
    6 => "00111101011000100100010001111110", 
    7 => "00111100110000001100111001011100", 
    8 => "00111101110000000101111001010010", 
    9 => "10111110011101001001000110110000", 
    10 => "00111101100001100001011101100100", 
    11 => "10111100011010110010010111101001", 
    12 => "00111101101110000001011110000100", 
    13 => "00111101011011010100100010001000", 
    14 => "10111100110100110000100101011101", 
    15 => "10111101111101011001010111111111", 
    16 => "00111101100101000000100100110111", 
    17 => "10111101011011100100010010000001", 
    18 => "00111100101101111101111010010100", 
    19 => "10111100100011111111101100100000", 
    20 => "00111110100001110110001010010101", 
    21 => "00111011110010110011101001111011", 
    22 => "00111101010011111101111001001010", 
    23 => "10111110000110110011001101010101", 
    24 => "10111101000001101110111001100110", 
    25 => "10111101110100001000100110100000", 
    26 => "10111101110000101010010000101101", 
    27 => "10111101100101000111001111001101", 
    28 => "00111100000000001101000001011111", 
    29 => "00111100101001100100111000010011", 
    30 => "00111101000111110010000101111110", 
    31 => "00111101111001001111000110100010", 
    32 => "00111101010100111011011101101101", 
    33 => "10111101000001010011010110101111", 
    34 => "10111101001100000001000100001010", 
    35 => "00111110000101110010111101110111", 
    36 => "00111110010110101010111010110000", 
    37 => "10111011101101101010100011110100", 
    38 => "00111101111001110110000001111100", 
    39 => "00111101010000110111100001000000", 
    40 => "00111101010111000010010011011111", 
    41 => "00111101110000001101011110010110", 
    42 => "00111101101101000100111000101001", 
    43 => "00111100010100111100001010001010", 
    44 => "10111110010011100000111111000011", 
    45 => "00111110000011011001010111011101", 
    46 => "00111101001100000101011001011010", 
    47 => "00111101100001011011011000010101", 
    48 => "00111001110110100101010000100111", 
    49 => "00111110010011000001110101101101", 
    50 => "00111110000011011100010111010110", 
    51 => "10111101100001111100100010001110", 
    52 => "00111100010110100011100110011101", 
    53 => "10111110000001100010101000011011", 
    54 => "10111101000001101011111101010010", 
    55 => "00111101101011111111000001010011", 
    56 => "10111100111000001010111010010111", 
    57 => "00111101010011001011010001011110", 
    58 => "00111110000010101001011000001011", 
    59 => "10111101101110001010100110110000", 
    60 => "00111101011010000001011101011011", 
    61 => "00111101001010001010101110000101", 
    62 => "10111101000110110000000100101000", 
    63 => "00111110000101100110001000110101", 
    64 => "10111100101000011011001110101111", 
    65 => "00111100111011100000000011111010", 
    66 => "10111100110110110011100010100000", 
    67 => "10111101011111001110000110011101", 
    68 => "00111101111100011111111111111000", 
    69 => "00111101101111000001100101100011", 
    70 => "00111101111110010101111101100111", 
    71 => "00111101110101101001110010101010", 
    72 => "00111110010010000001001010111110", 
    73 => "00111011110100110011001011011000", 
    74 => "00111011010110010001110001100110", 
    75 => "10111101100110101001110001111110", 
    76 => "10111101010101110101100011100010", 
    77 => "00111110000101000011110100000100", 
    78 => "00111110010000011001100010101111", 
    79 => "00111110000100011010111000101110", 
    80 => "00111101111111010000100101011011", 
    81 => "00111101000000000101010101011011", 
    82 => "00111101101000101000010100100011", 
    83 => "00111101111110101000011110100000" );


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

entity inference_mult_1_120_120_84_s_W4 is
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

architecture arch of inference_mult_1_120_120_84_s_W4 is
    component inference_mult_1_120_120_84_s_W4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_rom_U :  component inference_mult_1_120_120_84_s_W4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


