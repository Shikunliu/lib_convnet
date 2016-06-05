-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_19_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_19_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101011111100011100110100111", 
    1 => "00111101010001011001001101010010", 
    2 => "10111100100001110110110100010001", 
    3 => "10111100001101101010011101011100", 
    4 => "10111110001011000001001000100111", 
    5 => "00111101111000011110011110010110", 
    6 => "00111101111010001010111011111011", 
    7 => "00111101110110010000111000100100", 
    8 => "00111110000110001110011110011011", 
    9 => "00111110011100001101110101000000", 
    10 => "00111101010100100110010001010001", 
    11 => "10111100111001100010101001101100", 
    12 => "10111011101000110000001110010000", 
    13 => "10111100110111000101010100110110", 
    14 => "00111110000111100100100000011111", 
    15 => "10111101011011011001010000111101", 
    16 => "00111100111111100101111011100000", 
    17 => "10111110010100111000110001010100", 
    18 => "10111110001110101001111001101111", 
    19 => "00111101111011000010100100111001", 
    20 => "10111011100101100110111011101101", 
    21 => "10111100000101000001111000001111", 
    22 => "00111101110000111100011111001001", 
    23 => "00111100001101010000100101100010", 
    24 => "10111110001101000000111011100000", 
    25 => "00111101101110111111111011101001", 
    26 => "00111101011000111101100110001110", 
    27 => "10111110000100110001110001100101", 
    28 => "00111101111111011010000101100110", 
    29 => "10111101000100001001100011010100", 
    30 => "10111101110111010011001011000110", 
    31 => "00111101110100111000110001010100", 
    32 => "00111100101110000110011010101111", 
    33 => "00111110001011110100010001001110", 
    34 => "10111110001001111110110011111111", 
    35 => "10111100111001001010000101101010", 
    36 => "10111101101100111001000111001000", 
    37 => "00111101100101100010010101100011", 
    38 => "00111100101101110010111011010110", 
    39 => "10111110000010101111111101101101", 
    40 => "00111101111001100001100101010100", 
    41 => "00111011101001000101000011101101", 
    42 => "00111100100110000100001100100011", 
    43 => "00111110000001000001101111111100", 
    44 => "10111101011100010011100101011110", 
    45 => "00111100111100111101001100000001", 
    46 => "00111101001111101011001011111001", 
    47 => "00111100101110111001000100000101", 
    48 => "00111100101011100011100011111000", 
    49 => "10111110000000111100100011100010", 
    50 => "00111101001100001011101010110011", 
    51 => "00111110000001010101001110101100", 
    52 => "00111110000110010111100011010101", 
    53 => "00111101111000110000110010101010", 
    54 => "10111101111100001000010111110101", 
    55 => "00111100101101100101010010000110", 
    56 => "00111110001010001011000001001011", 
    57 => "00111101110101110000011000001100", 
    58 => "00111101100000100000001110111110", 
    59 => "10111101101111001111111110011010", 
    60 => "10111101100101000101000011110000", 
    61 => "10111101101010011100001111101001", 
    62 => "00111101110101100111011001100100", 
    63 => "10111100111100100010000101010000", 
    64 => "00111101101101111001110011100010", 
    65 => "00111110000000001010000110111110", 
    66 => "00111101010011001000101101111001", 
    67 => "00111110000000001101001000111101", 
    68 => "10111101110110101101101110000011", 
    69 => "10111100101110001111010001110011", 
    70 => "00111100111001101101010010110110", 
    71 => "10111110001110100000001011111011", 
    72 => "10111101111110101001010000110110", 
    73 => "10111110000101000100000100110101", 
    74 => "00111110001101011010111011100110", 
    75 => "00111100110110000100011001001000", 
    76 => "00111101111000000001000111010011", 
    77 => "00111101010101000001010101111100", 
    78 => "10111110000011000101110001010111", 
    79 => "00111101110101011100011000111011", 
    80 => "10111011011001001100101001000101", 
    81 => "10111101110111111101101111010011", 
    82 => "00111100110100010011111111000011", 
    83 => "10111101111111011010110111111011" );


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

entity inference_mult_1_120_120_84_s_W4_19 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_19 is
    component inference_mult_1_120_120_84_s_W4_19_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_19_rom_U :  component inference_mult_1_120_120_84_s_W4_19_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


