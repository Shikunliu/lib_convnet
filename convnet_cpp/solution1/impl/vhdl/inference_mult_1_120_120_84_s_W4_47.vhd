-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_47_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_47_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101101111001011100001011010", 
    1 => "00111110000011010110111100010001", 
    2 => "00111101011001000100010111111011", 
    3 => "00111110011110010111100001001111", 
    4 => "00111101001001010001110100100110", 
    5 => "10111100101101110001110000101100", 
    6 => "00111101110010100011110101100011", 
    7 => "10111101111101001000001111001011", 
    8 => "00111101111110011010111000001100", 
    9 => "10111100110001110001000011001011", 
    10 => "10111101110011011010000110101001", 
    11 => "10111100001011101100110111011110", 
    12 => "00111100101010000001001101111010", 
    13 => "10111101110101111111010000010011", 
    14 => "10111100001010111001110011010001", 
    15 => "10111101100101100110100010001101", 
    16 => "00111101001011101001000111100100", 
    17 => "00111101101010001001000111111101", 
    18 => "00111110001010001001101111011000", 
    19 => "00111101100010100000001011101110", 
    20 => "10111101101111011100111000101100", 
    21 => "00111101011101110111111011110010", 
    22 => "10111101000110011010101001100001", 
    23 => "00111101111111010111100100000111", 
    24 => "10111101100111011101110010100101", 
    25 => "10111101100101110111010110101011", 
    26 => "10111110001000101101110000101011", 
    27 => "00111110000101000100110000111000", 
    28 => "10111110011100101101000101101100", 
    29 => "00111101101000010001100111011011", 
    30 => "10111101010011011111011001111110", 
    31 => "10111101010111110010000111101001", 
    32 => "10111101100111110011001000011101", 
    33 => "00111101111111110010111011001111", 
    34 => "00111101010001101101100000010001", 
    35 => "10111101111001001111110000011110", 
    36 => "00111101001110100011001010010110", 
    37 => "00111101010011111000011000011010", 
    38 => "00111101011011100001101011000101", 
    39 => "10111011110000010011110110100010", 
    40 => "00111101101101100110011011000100", 
    41 => "00111110011100010111000111100011", 
    42 => "00111110001010001010010011000010", 
    43 => "00111100001111010101110111000100", 
    44 => "10111101110110100011001010110001", 
    45 => "00111110000001000100011100111101", 
    46 => "00111100000101010011010011111011", 
    47 => "00111101001111110100101100011111", 
    48 => "10111101000011110010101001011010", 
    49 => "00111101010000000110100000100000", 
    50 => "00111101110001100011001001001001", 
    51 => "10111101001111000100001011011100", 
    52 => "00111110000001001101010101010010", 
    53 => "10111101111000010100011010100010", 
    54 => "10111110010000011110000100001001", 
    55 => "00111101100011010011101010001001", 
    56 => "10111101111011001000101101000100", 
    57 => "10111101101110001000000010100010", 
    58 => "10111101010101011110110101110010", 
    59 => "00111110001111011010110000100110", 
    60 => "00111100110010001100100001011011", 
    61 => "00111101100110001101011101110101", 
    62 => "10111101110111100010110001010110", 
    63 => "00111110000111011000000111110001", 
    64 => "10111101010000000000101111110100", 
    65 => "00111100001100000001111001000000", 
    66 => "00111110000100110110100000100111", 
    67 => "00111101100111011010110110101011", 
    68 => "10111100110001001010010100010110", 
    69 => "10111100100011010000011111110001", 
    70 => "10111100000111110000101110111111", 
    71 => "10111100001111011111100010001001", 
    72 => "10111101100001001011000000001011", 
    73 => "00111100110010011111101111001101", 
    74 => "10111101000001101110101000110101", 
    75 => "10111101111100000010111001100110", 
    76 => "10111110010001111111111010001111", 
    77 => "10111101000111010111110100111001", 
    78 => "10111110001010111110001001110001", 
    79 => "10111000011111111100111101101000", 
    80 => "00111101101010100001101000000000", 
    81 => "00111101011111000101000010110011", 
    82 => "10111110000011010101101101101000", 
    83 => "00111101111110011010000101110111" );


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

entity inference_mult_1_120_120_84_s_W4_47 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_47 is
    component inference_mult_1_120_120_84_s_W4_47_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_47_rom_U :  component inference_mult_1_120_120_84_s_W4_47_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


