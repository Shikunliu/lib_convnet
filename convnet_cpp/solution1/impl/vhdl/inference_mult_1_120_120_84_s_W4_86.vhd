-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_86_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_86_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100101010011110010111100010", 
    1 => "10111101100101010010100010010100", 
    2 => "10111101101010011000101101001001", 
    3 => "00111110000101101001010000000011", 
    4 => "00111100101110000101011010111110", 
    5 => "00111100001101010010001000100001", 
    6 => "10111110000101101001110001100111", 
    7 => "10111101010111001001000110000001", 
    8 => "10111101100101010100111000000011", 
    9 => "00111011011010100110101110011001", 
    10 => "10111100100011110100000110000111", 
    11 => "10111101100101110010110001000100", 
    12 => "00111100101100111011111110110110", 
    13 => "00111100100101101011010010101101", 
    14 => "00111101111110100001111101001011", 
    15 => "00111110000100010010000100100101", 
    16 => "00111101010000110010110011110110", 
    17 => "10111100110000111010001100100011", 
    18 => "10111110001111001100111101101100", 
    19 => "10111101000100011101111111000111", 
    20 => "10111101101110011010111101110110", 
    21 => "10111110010011011110000101011101", 
    22 => "10111101101000110110010001010011", 
    23 => "10111101100011111100000011010011", 
    24 => "00111101101001101011011101011010", 
    25 => "00111101001100000010111110101000", 
    26 => "00111101010110101010111100101000", 
    27 => "00111100100110111101010101111110", 
    28 => "10111101001000011100110101000101", 
    29 => "10111101010111100100011000100001", 
    30 => "00111101101100110011111010000110", 
    31 => "10111110000000001010011010111001", 
    32 => "10111101111011001111100001010001", 
    33 => "10111100100001110100001101010110", 
    34 => "10111110000110111011000111110010", 
    35 => "10111101100111000001111000110110", 
    36 => "10111110001110001011010101000110", 
    37 => "10111100011101111100110100101100", 
    38 => "00111110010000100001111011100110", 
    39 => "10111101111101001110011001011100", 
    40 => "00111010101000100101000001110111", 
    41 => "00111110010000110111111110111111", 
    42 => "00111101111010010001010100111000", 
    43 => "00111011000011001100011001110111", 
    44 => "10111101011101111001001000100011", 
    45 => "00111101110010111011111001010010", 
    46 => "10111101101111011110111010010011", 
    47 => "10111101011011100010011101000000", 
    48 => "00111100100110110000111001000100", 
    49 => "00111100010000100110111100010000", 
    50 => "00111100101111001010110001011001", 
    51 => "10111110000001100001101110110000", 
    52 => "10111101011100010011000101001011", 
    53 => "10111101101000010010000000110011", 
    54 => "00111100011010100000010000010101", 
    55 => "00111100111001101110100101000011", 
    56 => "10111100101000101000101000111001", 
    57 => "00111100110011111001000011001100", 
    58 => "10111101111110101101011101010010", 
    59 => "10111100010110110100011101001110", 
    60 => "10111101101010000000011001000100", 
    61 => "00111101111010001011011011011000", 
    62 => "00111100001100000011000010110101", 
    63 => "00111101111010110101110011000000", 
    64 => "00111101011101000100111001010001", 
    65 => "10111101101000100010100100100000", 
    66 => "10111101011000111011000001011001", 
    67 => "00111101000000001001010001100000", 
    68 => "10111100100100100010111100001100", 
    69 => "10111100101010000110000000000110", 
    70 => "00111110000101110000011110011110", 
    71 => "00111101111111111001101111011100", 
    72 => "10111110000010001101101111001111", 
    73 => "00111101000111011010010101000111", 
    74 => "00111101100111100011110001100001", 
    75 => "10111110010010111101011110110010", 
    76 => "00111101010000000011011101000011", 
    77 => "00111101101010101011000111010101", 
    78 => "10111101100111010101101011010100", 
    79 => "10111101110011000001100011010000", 
    80 => "10111101010010110110011110001101", 
    81 => "00111101011001100011011100000001", 
    82 => "10111101011001001011101110100001", 
    83 => "00111101000000101111000101001100" );


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

entity inference_mult_1_120_120_84_s_W4_86 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_86 is
    component inference_mult_1_120_120_84_s_W4_86_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_86_rom_U :  component inference_mult_1_120_120_84_s_W4_86_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

