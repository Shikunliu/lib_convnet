-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_50_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_50_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110000010110011000100111100", 
    1 => "00111100111100011001001011101010", 
    2 => "10111101101101000000010110011001", 
    3 => "00111100010110101111010111110000", 
    4 => "00111100001001001011111010010001", 
    5 => "00111101001101001111100100000110", 
    6 => "10111100111010110110010111011111", 
    7 => "10111101100010100100101101010101", 
    8 => "10111010000010010101001001001111", 
    9 => "00111101111100010111110001011111", 
    10 => "10111100010100011111000011111001", 
    11 => "10111101111101000010001111011001", 
    12 => "00111101010100100001000000000011", 
    13 => "00111110010010010111000001110010", 
    14 => "00111101011000010001100001100100", 
    15 => "00111110000011000011110000011001", 
    16 => "00111100100001101101000000110100", 
    17 => "10111101100110111100111101110111", 
    18 => "10111101110100101010011010110001", 
    19 => "00111101111000101000101010100100", 
    20 => "00111101101101110101110101010111", 
    21 => "10111011101111101111011111100010", 
    22 => "00111110000100010101111101000110", 
    23 => "00111110010111010110001010111111", 
    24 => "10111100111010101101111000110000", 
    25 => "10111101100011011010101011111110", 
    26 => "00111101000111111111110000000100", 
    27 => "10111110000111000001101000000101", 
    28 => "00111110000000100011101001101101", 
    29 => "00111100000001111100100101000010", 
    30 => "00111101000000011010001010010111", 
    31 => "00111110001101111101111000001101", 
    32 => "10111101101010101101111011000011", 
    33 => "00111011111101000110110010001110", 
    34 => "10111100111010001000000111111111", 
    35 => "10111100110001000000100001101110", 
    36 => "10111101011010110100001000011110", 
    37 => "00111101110100010110001010101110", 
    38 => "00111100110000110111110010001100", 
    39 => "10111110001000101001100110010101", 
    40 => "10111101111011001110100010010110", 
    41 => "10111101101011110000001000001001", 
    42 => "10111101001100111000011011100000", 
    43 => "10111101010111101110101111001110", 
    44 => "10111110011111110001100010000111", 
    45 => "00111101010000111010010110100111", 
    46 => "10111101101010010000111100010101", 
    47 => "10111100111010011001011011010010", 
    48 => "00111100001110111101101010100010", 
    49 => "00111101111000011000011110100101", 
    50 => "10111110000000000010000000111110", 
    51 => "10111101100111011001111010011111", 
    52 => "10111101101111010110101010000001", 
    53 => "00111101010011111100110110111001", 
    54 => "00111110000000000011111111110111", 
    55 => "00111100100011110101110101101011", 
    56 => "00111101101110000000110110000000", 
    57 => "00111101110010000001111001101111", 
    58 => "00111011101100101101111101100110", 
    59 => "10111110000110110100110111001111", 
    60 => "10111110000001010111111010101010", 
    61 => "10111100001000110011101100011001", 
    62 => "00111101111100111010000101001101", 
    63 => "10111101111101000100011110000000", 
    64 => "00111011001011001111000011100100", 
    65 => "00111100010001100101010001111000", 
    66 => "10111100100000011111011110000111", 
    67 => "10111110010000111011100111110001", 
    68 => "10111101111011001100111101101100", 
    69 => "10111101001111011111010011000011", 
    70 => "00111101110011111011001110110111", 
    71 => "00111101111010010011010100110011", 
    72 => "00111101101010001011010101101110", 
    73 => "00111101111111100100001101100111", 
    74 => "00111010110001000110011001001100", 
    75 => "10111101110001000010001010010111", 
    76 => "10111110001001110111111100101000", 
    77 => "10111101000000110111111100010001", 
    78 => "10111110000101110000010010111100", 
    79 => "00111110001001011001110011010000", 
    80 => "10111101101101001111110101101101", 
    81 => "10111101101000001000010100101011", 
    82 => "10111101111110101010100110110101", 
    83 => "00111100010010001111111011100010" );


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

entity inference_mult_1_120_120_84_s_W4_50 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_50 is
    component inference_mult_1_120_120_84_s_W4_50_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_50_rom_U :  component inference_mult_1_120_120_84_s_W4_50_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

