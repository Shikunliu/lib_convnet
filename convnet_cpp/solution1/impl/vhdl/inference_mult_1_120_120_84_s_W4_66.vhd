-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_66_rom is 
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


architecture rtl of inference_mult_1_120_120_84_s_W4_66_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110001100001011110100000001", 
    1 => "00111100111001101011101101010110", 
    2 => "10111101101010011101011111010101", 
    3 => "00111100111010101001101000000111", 
    4 => "00111011101000001100101100010001", 
    5 => "00111100100000000100100010010000", 
    6 => "10111110010000001111101111101100", 
    7 => "00111110000000010111010111010001", 
    8 => "10111101110010111011010010011111", 
    9 => "10111101110101010100001010100010", 
    10 => "10111101110010001010010010110100", 
    11 => "10111101110100100011001101011001", 
    12 => "10111101111110000001111000000100", 
    13 => "10111101100100001100010000110000", 
    14 => "10111110000000010111100010110011", 
    15 => "00111100001010110011010011001101", 
    16 => "00111010111111100101011000000111", 
    17 => "00111101100011001000011110001011", 
    18 => "10111110001011110111101100011000", 
    19 => "00111101101010110101110111110101", 
    20 => "00111101100101011101111111010001", 
    21 => "00111100011010011110011001001110", 
    22 => "10111110001001101100000111100011", 
    23 => "00111101111010110011001011001111", 
    24 => "10111101010010010011010100011000", 
    25 => "00111101110010000110000011001111", 
    26 => "00111110001101000101000011110000", 
    27 => "10111101101000001011101000011111", 
    28 => "00111101000011000111101110001001", 
    29 => "00111100000110101111100110100001", 
    30 => "10111101101001101011000111100110", 
    31 => "00111101010000101110110001000100", 
    32 => "10111110001001110001010001110111", 
    33 => "00111101100001101110001010110101", 
    34 => "10111110010100011010010100000001", 
    35 => "10111101000100100110110000101110", 
    36 => "00111100100110101100111110001111", 
    37 => "10111100111011110010011001011110", 
    38 => "10111101100000010110000101011111", 
    39 => "10111101001111010010010000110011", 
    40 => "00111101101001100001110100000000", 
    41 => "00111101101110100011100101110101", 
    42 => "00111100101111010110111011000001", 
    43 => "10111101110100101111101010010100", 
    44 => "10111101100001011010100011111010", 
    45 => "10111110010001011011010100110001", 
    46 => "00111100010111101000011111100000", 
    47 => "00111110000111111110010010111101", 
    48 => "00111100000111000010110001100110", 
    49 => "00111010110011101001111111100001", 
    50 => "00111101111011100010000010001010", 
    51 => "00111100100111111010011011111010", 
    52 => "10111110000111101001111011100100", 
    53 => "10111101101100100100111100100010", 
    54 => "10111101011101010101000001011111", 
    55 => "00111101010010000110110100000111", 
    56 => "10111100000001001001000001101000", 
    57 => "00111101101110100010110010110111", 
    58 => "10111101010001011111010010100001", 
    59 => "00111100101001011110111111101001", 
    60 => "10111100010010101100010110001100", 
    61 => "00111110001110111011100111010000", 
    62 => "10111110001010001001000010010011", 
    63 => "10111100110001001001000000011101", 
    64 => "00111110011010100001110111111100", 
    65 => "10111110000010100000110111111110", 
    66 => "00111110000000111000111000101010", 
    67 => "10111101010001101001101111000110", 
    68 => "10111101000001000000010010001100", 
    69 => "10111110000010100111100100110101", 
    70 => "00111110010000111001001110101011", 
    71 => "00111100101011010110110110001100", 
    72 => "00111011000110100101010011010101", 
    73 => "10111101011110010011110010110010", 
    74 => "10111100101000000111110001110111", 
    75 => "00111011101011010110110010001010", 
    76 => "10111110011100011001010101000110", 
    77 => "00111011111001100001100001001101", 
    78 => "10111101101111110000110110111010", 
    79 => "10111110001110110000000100000000", 
    80 => "00111101000011010000001001111101", 
    81 => "10111011011000011110100110111111", 
    82 => "10111101001011110101000111111101", 
    83 => "10111101101101101100100100101101" );


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

entity inference_mult_1_120_120_84_s_W4_66 is
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

architecture arch of inference_mult_1_120_120_84_s_W4_66 is
    component inference_mult_1_120_120_84_s_W4_66_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_66_rom_U :  component inference_mult_1_120_120_84_s_W4_66_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


