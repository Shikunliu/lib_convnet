-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_45_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_45_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101010001111001111001110101", 
    1 => "00111101111110111110110000100101", 
    2 => "10111110000000010010100110001001", 
    3 => "10111101111011101110001110010011", 
    4 => "00111101101000001011001011010110", 
    5 => "10111101011100001010100011100000", 
    6 => "10111101000111110001101110011111", 
    7 => "10111101101011011011010000111001", 
    8 => "10111101100011001010101111010011", 
    9 => "00111101101100000011000111001111", 
    10 => "10111101111000010000011000100101", 
    11 => "10111101111100011010011101011101", 
    12 => "10111101001000000010001100100001", 
    13 => "10111101100101010001100100000001", 
    14 => "00111101001011111001010011100011", 
    15 => "10111101101111111001001010100010", 
    16 => "10111100100100110111101000110000", 
    17 => "10111100001111000011010110100110", 
    18 => "10111100000001001100001001110010", 
    19 => "10111101011010100110110110010010", 
    20 => "10111100101111011111001001110100", 
    21 => "00111101100111101010000000001100", 
    22 => "00111100100000100101101000011000", 
    23 => "00111011100100111011111000111000", 
    24 => "10111101111001111010111010011011", 
    25 => "00111101010100000101110111100110", 
    26 => "10111110000010011100010111100111", 
    27 => "10111001011000001100110101010111", 
    28 => "10111101001110010111100011001000", 
    29 => "00111101001011101111101110110001", 
    30 => "00111101111011010100100010001000", 
    31 => "10111101111010100100010101001110", 
    32 => "00111100100110001111111100001010", 
    33 => "10111101100111110101000010010011", 
    34 => "00111101110011111111000100001111", 
    35 => "00111101100001000000011110100100", 
    36 => "10111110000010001100110110100111", 
    37 => "10111110001011011110010101001011", 
    38 => "00111101011011010111010011001000", 
    39 => "00111100101011011000100100111011", 
    40 => "00111100111101001111000110101111", 
    41 => "10111101100001101000110100011000", 
    42 => "00111101011010100011000000111010", 
    43 => "00111011111001010011000001000110", 
    44 => "00111100110110101111001010010101", 
    45 => "10111100100011010011010101110011", 
    46 => "00111101001110100010001000111011", 
    47 => "00111101000100111111101111100110", 
    48 => "10111100111010010110100101010000", 
    49 => "00111010110010111110001010010111", 
    50 => "00111100010010100111001111000010", 
    51 => "00111100101011101010010010001110", 
    52 => "00111110010010100111100111111111", 
    53 => "10111101010001000001001001100100", 
    54 => "10111101101111110110010011101010", 
    55 => "00111101000011010010100001110010", 
    56 => "10111101100010011010110001101100", 
    57 => "10111101100110100100101011110111", 
    58 => "00111101100100101011001100000011", 
    59 => "00111110001111010111011100110010", 
    60 => "00111100011100111000111011011000", 
    61 => "00111101101101000010100101101000", 
    62 => "10111110001111101111011101111111", 
    63 => "10111101111000101100101110100111", 
    64 => "00111110001001010100110010011000", 
    65 => "10111110010100111101101111000010", 
    66 => "10111100010111111100001001110011", 
    67 => "10111110001100011101011001001001", 
    68 => "00111100010110010001110100111101", 
    69 => "00111101110010011000101100111100", 
    70 => "00111101110011000110000001000110", 
    71 => "10111101010100101000101001111100", 
    72 => "00111100100101100001110111100100", 
    73 => "00111100010101010010011100001110", 
    74 => "10111101011100011110101010101110", 
    75 => "00111101110011111110101101001010", 
    76 => "10111110001101101100000000001110", 
    77 => "10111110001101000011100001001100", 
    78 => "00111100101011001100110000010001", 
    79 => "00111101100100100011111000110011", 
    80 => "10111101111111000010011001010111", 
    81 => "00111101101101110010011001011000", 
    82 => "00111011101011101001111001001110", 
    83 => "10111101011101011011010100100011" );


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

entity inference_mult_1_120_120_84_s_W4_45 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_45 is
    component inference_mult_1_120_120_84_s_W4_45_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_45_rom_U :  component inference_mult_1_120_120_84_s_W4_45_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

