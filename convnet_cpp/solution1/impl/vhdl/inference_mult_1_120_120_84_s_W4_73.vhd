-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_73_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_73_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101111110011000001110010100", 
    1 => "10111101100111001011000000000100", 
    2 => "10111110000010000011011100101110", 
    3 => "00111101010100010000111101010010", 
    4 => "00111101100010001100010101010001", 
    5 => "10111100001010011110000010100100", 
    6 => "10111110000010000111111010111111", 
    7 => "10111101110101000110000100110001", 
    8 => "10111101001110110011010101000101", 
    9 => "00111011001110110101000000100011", 
    10 => "10111101111001011011110110010100", 
    11 => "10111101100100001001001110100100", 
    12 => "00111110000101000001001001001001", 
    13 => "10111101001101001011111111100000", 
    14 => "10111011000110100011010001001001", 
    15 => "10111100010101000001011011011001", 
    16 => "00111101111011101101111101100001", 
    17 => "00111101101110111111111011001111", 
    18 => "10111101001101100001010110000001", 
    19 => "10111110000000100110101001100110", 
    20 => "10111100100010001001111000110100", 
    21 => "10111101110001000000110111100001", 
    22 => "00111100100000011010111100101101", 
    23 => "10111101100000010110101111101001", 
    24 => "00111011100111110100001010100110", 
    25 => "00111101100100111001001100100101", 
    26 => "00111100001011011000010100001001", 
    27 => "00111101110000100111101111101001", 
    28 => "00111011000011011111101011010101", 
    29 => "00111101100100100000000101111101", 
    30 => "00111101101001100001111000001100", 
    31 => "00111101011001001010000000101000", 
    32 => "10111101110111000000101100010011", 
    33 => "10111101011111010101100110010010", 
    34 => "10111101101101100000100111011101", 
    35 => "10111101010001010111001101110010", 
    36 => "00111101100111001001101010101110", 
    37 => "10111101001101100001010101100110", 
    38 => "10111110000000001000111110101000", 
    39 => "00111100010010101110111101111101", 
    40 => "00111101100111111110110001100100", 
    41 => "10111101001011110000111100010111", 
    42 => "00111101101111001100001010111100", 
    43 => "10111101000010011110110101010100", 
    44 => "10111011110101011000101101100010", 
    45 => "10111101100000100111101000101110", 
    46 => "10111101010001110101010100101001", 
    47 => "10111100001110001000000001111010", 
    48 => "10111101101101111110110010111011", 
    49 => "00111110001111111111010110000100", 
    50 => "10111101000111001100111001010010", 
    51 => "00111110001111101011001100010100", 
    52 => "10111101000111100001100010000100", 
    53 => "00111101101100010010000011000111", 
    54 => "10111101100110010110011001010011", 
    55 => "00111110000011000110010110000100", 
    56 => "10111101100011111110010111111111", 
    57 => "00111101110101100001110111001001", 
    58 => "00111110000011010101000101110010", 
    59 => "00111011001101111000000100001011", 
    60 => "10111101101001111001101010000110", 
    61 => "00111101110001101001100101011100", 
    62 => "00111101000111101010110000001101", 
    63 => "10111101101000110110110001011001", 
    64 => "00111101100000111100110100000111", 
    65 => "00111101000011011011111101010110", 
    66 => "00111100010000110000110011000101", 
    67 => "10111100000111000100101010100100", 
    68 => "10111101111010101000110100100010", 
    69 => "00111110000101011000100110101101", 
    70 => "00111110000110010101101001101100", 
    71 => "00111110010110100010000000010100", 
    72 => "00111101011001010101110101010010", 
    73 => "00111110000010011101011000101000", 
    74 => "10111110001010100111010110001010", 
    75 => "10111101101001101010011001101010", 
    76 => "10111110001010001000001000101000", 
    77 => "00111101100001100100010100000001", 
    78 => "00111101101100000100001101010010", 
    79 => "00111101101110100110011011011100", 
    80 => "10111011001001001111110000100011", 
    81 => "10111100111110010110100001101100", 
    82 => "00111101000100110110101001000000", 
    83 => "00111101110000111000000001000101" );


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

entity inference_mult_1_120_120_84_s_W4_73 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_73 is
    component inference_mult_1_120_120_84_s_W4_73_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_73_rom_U :  component inference_mult_1_120_120_84_s_W4_73_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

