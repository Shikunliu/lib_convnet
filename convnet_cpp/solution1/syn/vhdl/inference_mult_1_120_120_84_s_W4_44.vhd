-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_44_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_44_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101001010111111001001100010", 
    1 => "10111100110101111101110100110111", 
    2 => "00111011101100101101001011111100", 
    3 => "10111110001010101000101110001111", 
    4 => "10111110001011001010111011101010", 
    5 => "10111100110011010000011110000101", 
    6 => "00111110010000010010011111110110", 
    7 => "00111100000000000110000000111000", 
    8 => "10111101111010100001000001011010", 
    9 => "10111110010001001011001111000100", 
    10 => "10111101010111011000001001000010", 
    11 => "10111101011101000011110001001000", 
    12 => "00111010111001101110101011011011", 
    13 => "10111011010100001101001111000011", 
    14 => "00111101101100011101011001100100", 
    15 => "10111100101010001011111010011011", 
    16 => "00111101111001011110111111101001", 
    17 => "00111101101000010010011101110000", 
    18 => "10111101100110101110100010101100", 
    19 => "00111110010010011000110110001011", 
    20 => "10111110001011001100010101110110", 
    21 => "00111100101101011111010000001110", 
    22 => "10111011001111111111100101010101", 
    23 => "00111101100011110011001110010101", 
    24 => "00111101111000101100000110110001", 
    25 => "00111100110011001001111110110110", 
    26 => "00111001000010111101110010111010", 
    27 => "10111110000010101110110101010111", 
    28 => "10111110000010011111011001100110", 
    29 => "00111100110100110010101010110101", 
    30 => "10111100000000011011011110111011", 
    31 => "10111101100010110010011110111111", 
    32 => "10111110010001100011010000010001", 
    33 => "10111110010010011000111001010100", 
    34 => "10111110000000101001001010000001", 
    35 => "10111100101001010111101001000011", 
    36 => "00111101011000010110111010010101", 
    37 => "00111101010010011010011100101110", 
    38 => "10111100011000100100110011111100", 
    39 => "10111100001100010011100111001001", 
    40 => "10111100000111111101000000011111", 
    41 => "00111011010010110100100000010010", 
    42 => "10111101011110100111000100110000", 
    43 => "10111101100100000001001101001011", 
    44 => "10111101101011000011100000101010", 
    45 => "00111101010111011010011110010110", 
    46 => "00111101100111010100011000011111", 
    47 => "00111101111110101001110010011001", 
    48 => "00111100101000110110111111011100", 
    49 => "10111101011001110011111001101000", 
    50 => "00111110001100101010000110110110", 
    51 => "00111110001110100101000010010100", 
    52 => "10111100110010101010010110101011", 
    53 => "10111101011100001001011010100001", 
    54 => "10111101010111101010111100011000", 
    55 => "00111110000000000111000000110011", 
    56 => "00111010001101100101101000110011", 
    57 => "10111100110111101111111011001001", 
    58 => "10111101100010100111110000110011", 
    59 => "00111100101001001000110101111110", 
    60 => "00111101101011011000110001100000", 
    61 => "10111101011011110011100100100011", 
    62 => "00111100101001111001110011111101", 
    63 => "10111101000000110000011100110110", 
    64 => "00111101100000110110111000010100", 
    65 => "00111101010011010001011100100101", 
    66 => "10111110000010010000101001111000", 
    67 => "10111101101100111001001010000100", 
    68 => "10111101111011110001110100111111", 
    69 => "10111110011001001101101000001010", 
    70 => "00111101110100100101000010110101", 
    71 => "00111110010011010011011010110101", 
    72 => "00111110010010000000000000100010", 
    73 => "10111101001010111000111110011011", 
    74 => "10111101001100011010001010100101", 
    75 => "10111110001000101100001101000100", 
    76 => "00111101111101011000010010110010", 
    77 => "10111110000010110010111010011101", 
    78 => "00111101101001100001001010111001", 
    79 => "10111110000101110111101010110011", 
    80 => "10111110010010010000011101010011", 
    81 => "10111101001111101010101001111011", 
    82 => "00111110010110101001011010010010", 
    83 => "10111100101000001111110001100100" );


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

entity inference_mult_1_120_120_84_s_W4_44 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_44 is
    component inference_mult_1_120_120_84_s_W4_44_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_44_rom_U :  component inference_mult_1_120_120_84_s_W4_44_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

