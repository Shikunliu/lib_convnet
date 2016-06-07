-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_7_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_7_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101110011110000101101101011", 
    1 => "10111110000100101101011001100111", 
    2 => "10111101001111101101110100000101", 
    3 => "00111101111010111111111011000001", 
    4 => "00111110001001011011001111100001", 
    5 => "10111101001110110110000010010100", 
    6 => "10111100100000101001111001000000", 
    7 => "10111110000001101111111101111110", 
    8 => "00111101110000011011010100100111", 
    9 => "10111101101011010000101000001001", 
    10 => "10111101111101111001010100101101", 
    11 => "10111101001110001011101111010100", 
    12 => "00111101000101100011011000011101", 
    13 => "10111110001101000111100110010010", 
    14 => "00111101001010110001001111100000", 
    15 => "10111110000101010111111101110011", 
    16 => "10111101000010110100111000101101", 
    17 => "00111110001011010111110100111001", 
    18 => "00111101101001100010011111110101", 
    19 => "00111101011011011101011001001101", 
    20 => "10111101011110111001110001011001", 
    21 => "00111101100101100110001001111000", 
    22 => "00111110011011001010010011110100", 
    23 => "00111101001101110010100000000101", 
    24 => "10111101001111010110101000111110", 
    25 => "10111110001000011010001001100010", 
    26 => "00111110010101000000101111111110", 
    27 => "00111101101001001101011110000110", 
    28 => "00111110000001110000010011111111", 
    29 => "10111101000110001001000101110111", 
    30 => "00111101100100001110100111111101", 
    31 => "10111110001011010101110000110001", 
    32 => "00111100011100111000010001011100", 
    33 => "00111100111100100111101101111101", 
    34 => "00111110001001000110001011000011", 
    35 => "10111100100101110011100001100001", 
    36 => "00111101100101001100011000000011", 
    37 => "10111110001111110001101010100000", 
    38 => "00111100000001110101000100111000", 
    39 => "10111110000000011000100010110001", 
    40 => "10111110100100101110110000101001", 
    41 => "00111101111010011111111100001101", 
    42 => "00111011011101111111001001101010", 
    43 => "00111100011111101010011100111010", 
    44 => "10111110001011100100111110111001", 
    45 => "10111101100010001010011111001100", 
    46 => "10111110000111101101101101110011", 
    47 => "10111101101111101111010100110001", 
    48 => "10111100110100100110011110101100", 
    49 => "00111100110111010001000111110100", 
    50 => "00111110010111001000100011101000", 
    51 => "00111110000010001111001110101010", 
    52 => "10111101101010000111000100101011", 
    53 => "10111101110111100001010000111000", 
    54 => "00111101011011101100001001010101", 
    55 => "10111110011101100010111011010011", 
    56 => "00111101110100011001000011010001", 
    57 => "00111100100101101110110110000010", 
    58 => "10111110001000001001111001010110", 
    59 => "10111101000111001101100110001010", 
    60 => "00111101100000100000010010111101", 
    61 => "10111101001011011010000000010111", 
    62 => "10111110010110010001011000000001", 
    63 => "10111100101010000101101010010010", 
    64 => "00111101101100111001111101110111", 
    65 => "10111101111111101000101100111011", 
    66 => "10111101101111000110010111111101", 
    67 => "00111101001010011110001101111001", 
    68 => "10111110010111100001111011110111", 
    69 => "10111101111001110111110101010010", 
    70 => "00111101111110101001001100101001", 
    71 => "00111100001101111101000111111110", 
    72 => "00111100011100110101111100001000", 
    73 => "00111101111001110111100000010100", 
    74 => "10111110011010000110001010110010", 
    75 => "00111101000000110001110010011010", 
    76 => "10111100101010001000111100110110", 
    77 => "00111101101010101111000000011110", 
    78 => "10111101100100111111011100111011", 
    79 => "00111101110010011100000101001010", 
    80 => "10111101001111010000110101010111", 
    81 => "00111101000111001001101111000111", 
    82 => "10111110001100001000110100001001", 
    83 => "00111101100100101101011011011111" );


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

entity inference_mult_1_120_120_84_s_W4_7 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_7 is
    component inference_mult_1_120_120_84_s_W4_7_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_7_rom_U :  component inference_mult_1_120_120_84_s_W4_7_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

