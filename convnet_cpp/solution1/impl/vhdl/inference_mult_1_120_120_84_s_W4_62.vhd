-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_62_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_62_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110001010110001001011010011", 
    1 => "00111100100100111000010000001100", 
    2 => "00111110000000101000101100101010", 
    3 => "10111101010011111010100011010000", 
    4 => "00111101111000000110011101001001", 
    5 => "00111101111010111001101000010111", 
    6 => "00111101111100110010101101010110", 
    7 => "00111110011000000000111011110001", 
    8 => "00111101000001010000101100011101", 
    9 => "10111101101011101111011101110010", 
    10 => "00111101100000110110100000001100", 
    11 => "10111101101000010101101110101000", 
    12 => "00111101000011010110001111001100", 
    13 => "10111110001100011100000100001101", 
    14 => "10111101110011101001111001011110", 
    15 => "10111100011011001110011001001000", 
    16 => "00111110100111110101100010011111", 
    17 => "10111100100010100110101111001001", 
    18 => "10111101000001111101101010100101", 
    19 => "00111101110010111011011110001110", 
    20 => "10111101000111101011111000010110", 
    21 => "00111101011110011000101111011101", 
    22 => "10111110001011010001001111010111", 
    23 => "10111110010001000001110100001000", 
    24 => "10111110010100101000110000110111", 
    25 => "10111101111001010100000011001100", 
    26 => "10111110000011001000110100011001", 
    27 => "10111101111001011100010111111000", 
    28 => "10111101111101001011001110000001", 
    29 => "10111100111001001111101110011000", 
    30 => "10111100111010001101110000101101", 
    31 => "10111101010100000100000110110001", 
    32 => "10111101111010010011101001110001", 
    33 => "00111101101010111001001111011010", 
    34 => "00111110000001010101011011010010", 
    35 => "00111110001011111100100110111100", 
    36 => "00111110010011111111010111000111", 
    37 => "10111101111011001011110010001100", 
    38 => "00111110001000100000011010000101", 
    39 => "00111101100001111011011111010101", 
    40 => "00111110001110111001101001011011", 
    41 => "00111101100110101110000101001000", 
    42 => "10111101111000010111001000100110", 
    43 => "10111101100101011000101001011011", 
    44 => "10111110001011010111110010110011", 
    45 => "00111110000110101100010001110010", 
    46 => "00111101001100111000110010001010", 
    47 => "00111101010100011101101110110000", 
    48 => "10111101001010110001010101110010", 
    49 => "10111101010100001001101001001100", 
    50 => "00111110001101111000001101011010", 
    51 => "00111101101111110111110100111110", 
    52 => "00111110010100011001101111010100", 
    53 => "10111110010001101010111000111010", 
    54 => "00111110010001111101100010001100", 
    55 => "10111110001100001101011001101111", 
    56 => "10111110011011100011100101110001", 
    57 => "10111110000001101000100100000001", 
    58 => "00111101110110000000110100111101", 
    59 => "00111101110101001000000100101100", 
    60 => "10111101010110110010010000101110", 
    61 => "10111110001011000101001010100100", 
    62 => "10111101110111101101000001110000", 
    63 => "10111110000110001000100101111111", 
    64 => "00111101101000010011100110111100", 
    65 => "00111101111010100011101011010010", 
    66 => "00111110001000100101111011011101", 
    67 => "10111101100010010111001101111100", 
    68 => "00111110000101101110010101000111", 
    69 => "10111101100001011011101111011001", 
    70 => "00111101001010110110010010111000", 
    71 => "10111100111110000001110110110011", 
    72 => "00111101111011011001010010001110", 
    73 => "10111101101100001101001101100101", 
    74 => "00111110100001000010011000010100", 
    75 => "10111110000110110110001111010100", 
    76 => "10111101111010101011100000100000", 
    77 => "10111101011111001111101110000100", 
    78 => "00111101001101110110111100011101", 
    79 => "00111101100010110010100000101010", 
    80 => "10111101001110010011101000101110", 
    81 => "10111101000001111101010000100101", 
    82 => "10111110001110100011101000001000", 
    83 => "00111101000011101110000101111010" );


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

entity inference_mult_1_120_120_84_s_W4_62 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_62 is
    component inference_mult_1_120_120_84_s_W4_62_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_62_rom_U :  component inference_mult_1_120_120_84_s_W4_62_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

