-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_0_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_0_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110010101000001000100111100", 
    1 => "00111110001010011111101010011000", 
    2 => "00111101100001000011111110010101", 
    3 => "00111101110011110111101100011000", 
    4 => "00111101110111000001001001101010", 
    5 => "00111011001100001010110100000111", 
    6 => "10111100110110001101111011110100", 
    7 => "00111110000100100001001110100001", 
    8 => "10111101111000100011011101001000", 
    9 => "10111101110000110101000000100100", 
    10 => "10111101011011011101010010111010", 
    11 => "10111110100100000001000110110010", 
    12 => "10111011111000100010110100000110", 
    13 => "10111110000010010011111010100011", 
    14 => "00111101100101001110010110000101", 
    15 => "00111011010110111000111000110001", 
    16 => "10111101100001110110100010001111", 
    17 => "00111100111000010001111011001001", 
    18 => "10111101010111011110010110001110", 
    19 => "00111110011010011011111010010000", 
    20 => "00111101110101110011100001100001", 
    21 => "00111100110000110001001011011010", 
    22 => "10111110001010000000101101100111", 
    23 => "00111110000110011000000110111111", 
    24 => "00111101110011010010110010111111", 
    25 => "00111101010101001101000100010011", 
    26 => "00111110001100111000011011010011", 
    27 => "00111110011001000011101010101000", 
    28 => "10111101110011100110100111110000", 
    29 => "10111101100001000011100010011100", 
    30 => "00111101101100100100101011001000", 
    31 => "10111101010011110110011110010111", 
    32 => "10111110011010010101101100110110", 
    33 => "10111101101100010000011010111001", 
    34 => "10111101111000101001111000001010", 
    35 => "10111101100001010010001101001000", 
    36 => "00111101100010000110111100101101", 
    37 => "00111101111100001010011001110110", 
    38 => "00111001100001110011110101010100", 
    39 => "10111101100001001010011110001101", 
    40 => "00111110001010010011101001110001", 
    41 => "10111101100010111001100110101100", 
    42 => "00111101011111010101001110110011", 
    43 => "10111110001001110110111101101101", 
    44 => "00111101000100100000101000111110", 
    45 => "00111101100101101000111000110010", 
    46 => "10111100001001011011110010111110", 
    47 => "10111101101010100011111001110000", 
    48 => "00111101101100001110001000101110", 
    49 => "00111110001000000100000011000000", 
    50 => "00111101101011001101001111010011", 
    51 => "00111101100111100100000011001000", 
    52 => "10111101000001001001000011110100", 
    53 => "00111110011000100011010010101000", 
    54 => "00111101101110010111001010100101", 
    55 => "00111110001001010010011010010110", 
    56 => "00111100011010001011101001101001", 
    57 => "00111101101100001010100010101010", 
    58 => "00111101100001011110000100111011", 
    59 => "00111110011011011011010110010101", 
    60 => "10111101000101011001010001010001", 
    61 => "00111110000001011001001111100110", 
    62 => "10111100110001101011001010100010", 
    63 => "00111110001011011111000111100001", 
    64 => "00111101100111000010001111101101", 
    65 => "10111101001101111101101101101110", 
    66 => "00111101100000001011000000000001", 
    67 => "10111100101001101111000100111011", 
    68 => "00111110000001011010001001010001", 
    69 => "10111101101001101100100001010110", 
    70 => "10111101001010010010111101010100", 
    71 => "00111101011111110100001001101011", 
    72 => "10111101010000000110000010101110", 
    73 => "10111101000110101000101100010110", 
    74 => "00111101101110110000011000111110", 
    75 => "00111101010100101111000111111011", 
    76 => "10111110010011011111000001001110", 
    77 => "10111100100010000010011111101101", 
    78 => "00111101010000011010010010010101", 
    79 => "10111110000101101110111001110100", 
    80 => "10111110000001001001101110100110", 
    81 => "10111101100100010111101111011001", 
    82 => "10111101101101100110000011001010", 
    83 => "10111101101100001101101101101010" );


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

entity inference_mult_1_120_120_84_s_W4_0 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_0 is
    component inference_mult_1_120_120_84_s_W4_0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_0_rom_U :  component inference_mult_1_120_120_84_s_W4_0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


