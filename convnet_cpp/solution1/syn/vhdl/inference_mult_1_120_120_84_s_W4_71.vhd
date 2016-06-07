-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_71_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_71_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110000100111000011100010110", 
    1 => "00111110010001110000011110011110", 
    2 => "10111101001001000110000100100011", 
    3 => "10111110000110001110001010100000", 
    4 => "00111101000110010000010111110110", 
    5 => "10111011110101000010000111000000", 
    6 => "10111101101010100110011010011001", 
    7 => "00111101100101111010110011000101", 
    8 => "10111101100111000110100001011001", 
    9 => "10111101001101100011111100111100", 
    10 => "00111101110110011100011000101010", 
    11 => "00111100010110101101110011000101", 
    12 => "10111100100100100000111101100010", 
    13 => "00111101010010000011100100011111", 
    14 => "10111100110001101111101010010000", 
    15 => "10111011111010000001000000001010", 
    16 => "00111101000100110110101101001100", 
    17 => "00111110001101111001111001011010", 
    18 => "10111101110011011111101001000100", 
    19 => "00111101111101111100101110110100", 
    20 => "00111101000100111100010011110100", 
    21 => "10111101110101101010010010000111", 
    22 => "10111101001100011101011100101101", 
    23 => "00111101101110111000111000110001", 
    24 => "10111101001000111111001100001001", 
    25 => "00111101110001101110001010101000", 
    26 => "00111101000111111110110101010110", 
    27 => "10111101101111101011000010111000", 
    28 => "00111101110111000101000111011011", 
    29 => "00111110001100010011001100111100", 
    30 => "10111101010101101110100000101001", 
    31 => "10111110000001010110010111000011", 
    32 => "10111101100101001111011110011100", 
    33 => "10111101001110110111101010010101", 
    34 => "00111101110010010000001011010001", 
    35 => "10111100000101010101011110001011", 
    36 => "00111110001001011100101001101101", 
    37 => "00111101010101001100111111010001", 
    38 => "00111101110100101101001010111011", 
    39 => "00111101101101101011000111001011", 
    40 => "00111101100010111110001011001111", 
    41 => "00111101111011011111001011101101", 
    42 => "10111110010001110101001110100100", 
    43 => "00111101011001110010000001010000", 
    44 => "10111101010011100001010010110001", 
    45 => "00111101011010000011111100110100", 
    46 => "10111011010000010100001111011000", 
    47 => "10111101001101000110111100001000", 
    48 => "10111100111001011011000100110101", 
    49 => "00111101000110011101000001010110", 
    50 => "00111101101101011000011001010010", 
    51 => "00111101110101101011100011111010", 
    52 => "10111110000110111011011011101101", 
    53 => "00111101100110000000111100100000", 
    54 => "00111100100100010011100101000011", 
    55 => "10111101001111010100110011111101", 
    56 => "00111101011111111001110110100101", 
    57 => "10111101000110010001100010000101", 
    58 => "10111101001001101100000000101000", 
    59 => "10111110001001110001011001001100", 
    60 => "00111101100010011001101110011000", 
    61 => "10111101001001001010111110101101", 
    62 => "10111101101000110001100010111001", 
    63 => "10111110001110011101001001111100", 
    64 => "10111101101001101011100000001000", 
    65 => "00111101011010110011100010101110", 
    66 => "00111101100111100111001101100000", 
    67 => "00111110000110011001001111010101", 
    68 => "00111001100011001101011110110111", 
    69 => "00111011100110000111111001010001", 
    70 => "00111110000100110110011001010001", 
    71 => "00111101001101001111000101011110", 
    72 => "10111101001011110110010111101001", 
    73 => "00111100100001101110110010111001", 
    74 => "10111101111100000110010111111001", 
    75 => "10111101100010111010011011100010", 
    76 => "00111011100100111111001000010000", 
    77 => "10111011100000100010101010101000", 
    78 => "00111110000000100001010000100111", 
    79 => "00111101101110011010111001110111", 
    80 => "10111101101111111100110101000000", 
    81 => "00111101011010000111001111010111", 
    82 => "00111100101110111001000101110001", 
    83 => "10111101111001110010101001111100" );


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

entity inference_mult_1_120_120_84_s_W4_71 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_71 is
    component inference_mult_1_120_120_84_s_W4_71_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_71_rom_U :  component inference_mult_1_120_120_84_s_W4_71_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

