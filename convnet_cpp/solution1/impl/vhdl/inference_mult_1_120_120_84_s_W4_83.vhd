-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_83_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_83_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110010010101001001111110011", 
    1 => "00111011110010001110000111110001", 
    2 => "10111101101000101101001111010101", 
    3 => "10111101010110011010010000110001", 
    4 => "10111101100111111011000100001011", 
    5 => "10111101101111101100100011001000", 
    6 => "00111110000011100000101001000010", 
    7 => "10111101100110010101101111001001", 
    8 => "00111101001100011101110011010111", 
    9 => "10111101101101011110111001110001", 
    10 => "10111101000011010011000100001011", 
    11 => "00111101110100001100010011011111", 
    12 => "10111110001000100011110111010101", 
    13 => "10111101100001010110011000111100", 
    14 => "10111101110111011011010101010010", 
    15 => "00111011111101110100010000011010", 
    16 => "00111100011000111011101100100110", 
    17 => "10111101100110000111001011011000", 
    18 => "10111101111110110101100001001011", 
    19 => "00111101100001001001101100010010", 
    20 => "00111101001001011111110101110000", 
    21 => "00111101111100001010000010110010", 
    22 => "00111100011001001110100100100011", 
    23 => "00111110001010111000101011100011", 
    24 => "00111101101101110000110010011001", 
    25 => "10111101110011011010011101101110", 
    26 => "10111101010001001010100101100010", 
    27 => "00111101100001111101010100100100", 
    28 => "00111100111001111011000001001000", 
    29 => "00111110000010100110000111100001", 
    30 => "10111110001010100101010011000101", 
    31 => "00111101101111000010110100101000", 
    32 => "10111101100100000011001001000111", 
    33 => "00111100101011101110101100000101", 
    34 => "00111110001000001111101101100101", 
    35 => "00111100101000100001011111101101", 
    36 => "00111101100101000100000001000100", 
    37 => "10111100010010110011100011100011", 
    38 => "10111110000000100100010001100011", 
    39 => "10111101100010110011000011101011", 
    40 => "10111101011001101101010000110000", 
    41 => "00111110000101100000010011100010", 
    42 => "00111110010000010111000111100011", 
    43 => "00111101100001011101100101111001", 
    44 => "00111100100101010001000100001001", 
    45 => "00111101111111101111101101101110", 
    46 => "00111101011101111010111111101010", 
    47 => "00111101111010111000000001100111", 
    48 => "00111101110101011101011001111100", 
    49 => "10111101111110101100110011010101", 
    50 => "00111101100110100010001001100011", 
    51 => "00111101101001001100010110110010", 
    52 => "10111100101000001001100000100110", 
    53 => "10111100000101001011001110110110", 
    54 => "10111101011100011100000111100100", 
    55 => "00111101011001100010010000000110", 
    56 => "10111100111101100001100111001101", 
    57 => "00111110001001001011001001110100", 
    58 => "00111101110100110101101110010010", 
    59 => "00111001001100101101100001011010", 
    60 => "10111101001010011111101110110010", 
    61 => "00111101001111111010011011111010", 
    62 => "00111100100001011011110101111001", 
    63 => "00111101000011000000110001001000", 
    64 => "10111101010011011011010010001001", 
    65 => "10111101010001101001001011110111", 
    66 => "00111101111100001011111100011010", 
    67 => "10111110001000111010100001100001", 
    68 => "10111101100001111100011111010011", 
    69 => "00111101101011100001010101111010", 
    70 => "10111101011111110000010111001111", 
    71 => "00111110001111111010110110110000", 
    72 => "10111101000101010111111000110001", 
    73 => "10111011100111011011100010001101", 
    74 => "00111101011011110110100101000100", 
    75 => "00111101001101100111101111110011", 
    76 => "00111100100101010100001101011110", 
    77 => "10111101110011010011010010011100", 
    78 => "10111101011100101011111111110110", 
    79 => "00111101101011110001010110110010", 
    80 => "00111101000001001000100111010010", 
    81 => "10111110001000101010000011101100", 
    82 => "00111101001001001001100001001011", 
    83 => "00111101000011111001101101001001" );


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

entity inference_mult_1_120_120_84_s_W4_83 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_83 is
    component inference_mult_1_120_120_84_s_W4_83_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_83_rom_U :  component inference_mult_1_120_120_84_s_W4_83_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

