-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_109_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_109_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111011001110111111111101001010", 
    1 => "00111101110011000101111101100010", 
    2 => "00111101100011101101001010010110", 
    3 => "00111100100000100010000110101110", 
    4 => "10111010101011101101010110010110", 
    5 => "00111100001001011111111010010111", 
    6 => "00111101010011010010100111101010", 
    7 => "10111101100100011101001000110010", 
    8 => "00111101100101100111001001000000", 
    9 => "10111110001110100111110000011000", 
    10 => "00111101101001011011011010101001", 
    11 => "00111101000000010011010011101001", 
    12 => "00111110000000110001000110100101", 
    13 => "10111101011101011100100010100100", 
    14 => "10111101100010011000100110110111", 
    15 => "00111101000011110101101000101011", 
    16 => "00111101110101110101000110001011", 
    17 => "00111101101010100001000000100100", 
    18 => "10111101010111100001100000011001", 
    19 => "10111101100101101011110010011000", 
    20 => "10111101101001001000010110101110", 
    21 => "00111101110101100010001100000111", 
    22 => "10111110010110000101001001110010", 
    23 => "10111101010110010011111110000111", 
    24 => "10111110000011001101010110110111", 
    25 => "10111101111111110110000010011110", 
    26 => "10111100011110100111110100001001", 
    27 => "10111110000011101111110101000100", 
    28 => "10111101100001011111011101001110", 
    29 => "10111101010000100101111100111011", 
    30 => "10111101111011101011100110100001", 
    31 => "00111101110101101010011010100000", 
    32 => "00111101000100100110010101000010", 
    33 => "10111101101101100100011110101101", 
    34 => "10111100110111001010001010011000", 
    35 => "10111011101010110100101001110001", 
    36 => "10111101110001011000011000101001", 
    37 => "00111101010000011100001100011001", 
    38 => "00111100011001011110001001001000", 
    39 => "00111101001011100001010001111011", 
    40 => "10111101111000110000001111000000", 
    41 => "10111101100101100010001100100010", 
    42 => "00111110000010000000000010101000", 
    43 => "10111100100011100000110001101000", 
    44 => "00111101011000000110000001000010", 
    45 => "00111101000110011001010011100010", 
    46 => "10111001000110100111110011011101", 
    47 => "10111101110010100010111010101000", 
    48 => "00111100100110101100010101001000", 
    49 => "10111110001010011001101000100000", 
    50 => "00111101000010110100000111001101", 
    51 => "10111101000001000110111101100110", 
    52 => "00111101011011000010101011100110", 
    53 => "10111110001111111110011001001111", 
    54 => "10111101011010100100011011100001", 
    55 => "10111101000101111000110111010110", 
    56 => "10111101111110111001010000010000", 
    57 => "00111100010110010011001010100001", 
    58 => "10111101101010001000011110101001", 
    59 => "00111110000101001011011010100110", 
    60 => "00111101110001100100100011100010", 
    61 => "00111100100111010110010111010111", 
    62 => "10111110000110000100001010110111", 
    63 => "10111100010111100001111111011011", 
    64 => "10111100101111100110010111001100", 
    65 => "00111110000001100001111000001100", 
    66 => "10111101101001110100001111101001", 
    67 => "00111101011101101000110101110110", 
    68 => "00111110000011101010101110111101", 
    69 => "10111010111110110100011011011110", 
    70 => "10111101110011011001011100101101", 
    71 => "00111100000111010010010010110100", 
    72 => "10111101100101010011011011111111", 
    73 => "10111100111010011111010010010000", 
    74 => "10111101110110101011011001001010", 
    75 => "10111011101100000111100001011000", 
    76 => "00111011010100001011101001101101", 
    77 => "00111101101101001111010111100001", 
    78 => "10111101101010011001001100100111", 
    79 => "00111101001011000010001100111111", 
    80 => "10111100001100101010111000111110", 
    81 => "00111110010110110111000001101001", 
    82 => "10111101100010101110100001011100", 
    83 => "00111101101000111011110100010110" );


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

entity inference_mult_1_120_120_84_s_W4_109 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_109 is
    component inference_mult_1_120_120_84_s_W4_109_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_109_rom_U :  component inference_mult_1_120_120_84_s_W4_109_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


