-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_37_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_37_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101111001001101111111001110", 
    1 => "10111110001101000000010110110100", 
    2 => "00111101100011001011010111100011", 
    3 => "10111101011011000100011001000101", 
    4 => "10111101010110110011110010011100", 
    5 => "10111101101000100010111000101000", 
    6 => "10111101001110100111101111000111", 
    7 => "10111101101100111000011111010010", 
    8 => "00111101110010101000101011000110", 
    9 => "00111110000000011000101010000111", 
    10 => "00111101110001001100101110000100", 
    11 => "10111110000111001110100100011101", 
    12 => "00111110001101011001110101010110", 
    13 => "00111110001110111001111011001111", 
    14 => "00111100100100111001101101010011", 
    15 => "10111101110000100110010101011101", 
    16 => "00111101001100111010101010100010", 
    17 => "00111100011101011101110111010011", 
    18 => "00111110000111010011101110110000", 
    19 => "10111101001011100000010001010101", 
    20 => "10111100100100001110001010100110", 
    21 => "00111101011110110010010000101110", 
    22 => "10111101111001001000000111110101", 
    23 => "00111100010111111100011111100111", 
    24 => "10111110001100000001101111001010", 
    25 => "10111110001001000001011000110111", 
    26 => "00111101011011010000000110001011", 
    27 => "10111100110000110011011101011000", 
    28 => "00111100110101100000001000110101", 
    29 => "10111101010101100110101010001011", 
    30 => "10111110010010000111111100000010", 
    31 => "00111110000011101101100010010000", 
    32 => "10111101111101111010000010110110", 
    33 => "00111101000000101011010010110000", 
    34 => "00111101101001010110100101010100", 
    35 => "10111101001110011010011011101011", 
    36 => "10111101110110110010001101010111", 
    37 => "10111100011001000100011011010001", 
    38 => "00111110001000101110000101101001", 
    39 => "00111101100111111111010101000001", 
    40 => "10111100100111011010001010101000", 
    41 => "00111011101011000101000011000001", 
    42 => "00111110000000101110100001111101", 
    43 => "10111101111011101010100111100111", 
    44 => "00111101100001101110111001110100", 
    45 => "10111110001010100001101101011100", 
    46 => "10111110010011011101001110111011", 
    47 => "10111101100001010100000001101111", 
    48 => "00111110000010110001100010011000", 
    49 => "00111101110110001000011001011001", 
    50 => "10111100000100001111011000010010", 
    51 => "00111101100110111111001000011111", 
    52 => "00111101011111100001110011101100", 
    53 => "00111101100001101011010110011111", 
    54 => "10111110001111100100101000111000", 
    55 => "10111100110010110110010111111010", 
    56 => "00111100100101100001000110000101", 
    57 => "10111101110111110100111111010111", 
    58 => "00111101110011111110111101111100", 
    59 => "10111110000001101011101010001100", 
    60 => "10111100100100101011000100010010", 
    61 => "10111110001001110101010100110111", 
    62 => "10111101011001100110100100000101", 
    63 => "10111101100010110110110010100011", 
    64 => "00111101100000110110100101001110", 
    65 => "00111011100010111100011111011111", 
    66 => "10111100101100100111000111011000", 
    67 => "10111110001010010001110110011011", 
    68 => "10111110000010100010100110000100", 
    69 => "00111100110100100010100110011000", 
    70 => "10111100111110010100011101001001", 
    71 => "10111101110001000110101110111010", 
    72 => "10111100100011100110111011000011", 
    73 => "10111011010101011101010011011110", 
    74 => "00111101101100000010001100111011", 
    75 => "00111101100101101111111101001000", 
    76 => "10111101101000011110010000100001", 
    77 => "00111110000110101010001100100111", 
    78 => "10111100101000101010100101000011", 
    79 => "10111110000011001000011000000101", 
    80 => "00111101110001101110101100110100", 
    81 => "10111100000000101100100111010100", 
    82 => "10111101101100011001100010010100", 
    83 => "10111101111011000101100101110101" );


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

entity inference_mult_1_120_120_84_s_W4_37 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_37 is
    component inference_mult_1_120_120_84_s_W4_37_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_37_rom_U :  component inference_mult_1_120_120_84_s_W4_37_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


