-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_1_15_rom is 
    generic(
             dwidth     : integer := 32; 
             awidth     : integer := 7; 
             mem_size    : integer := 120
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of inference_conv2d_f3_1_1_15_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101101011001010101111000101", 
    1 => "10111100100001111000110010111100", 
    2 => "00111011101101111011001010001001", 
    3 => "00111110001000001001000101111101", 
    4 => "10111010111110010000101011000011", 
    5 => "00111101101101100000011100001000", 
    6 => "10111101010111001110001000111110", 
    7 => "00111101000001000011000101101101", 
    8 => "10111101011101011011011110101000", 
    9 => "00111101110011101100010100101010", 
    10 => "00111101001111111111000110001000", 
    11 => "10111100001101010101100000111100", 
    12 => "10111101000111111110000110010111", 
    13 => "00111101011000111010011100011111", 
    14 => "00111101110011001110110101001110", 
    15 => "10111101111000101110001111000101", 
    16 => "10111101100110101111011111100000", 
    17 => "10111110011001111100111001010011", 
    18 => "00111101110000001000110110101010", 
    19 => "10111110000010111101100010111110", 
    20 => "00111011111001000101010110010101", 
    21 => "00111101101100111111010111011110", 
    22 => "10111011100100010100101110000010", 
    23 => "00111100101101110110110100011111", 
    24 => "10111011011000111010111000111011", 
    25 => "00111101100000110111110111000001", 
    26 => "00111110000001001010100101001000", 
    27 => "10111101100100011011111111100110", 
    28 => "10111101110010111011010111111100", 
    29 => "00111100100101111000010111111001", 
    30 => "00111110000100001010101010101000", 
    31 => "10111110000101001110001010110000", 
    32 => "10111101110100111010110111100010", 
    33 => "00111101000110011100101001011100", 
    34 => "10111110001100110011001101110110", 
    35 => "10111101111001011011100011011100", 
    36 => "10111100111011000110001110100001", 
    37 => "00111101010111011011111000111100", 
    38 => "10111100100100111011000011101101", 
    39 => "00111100000101100000001000101011", 
    40 => "00111101100011100100000001000010", 
    41 => "10111110000111111010111011111111", 
    42 => "10111100011011011101111111010111", 
    43 => "00111110001010101010010011111101", 
    44 => "00111100000100100101000011000101", 
    45 => "10111011111001101000101101100101", 
    46 => "10111100011011010101101000001011", 
    47 => "10111110000111100100111010101101", 
    48 => "10111101001011000011001111010000", 
    49 => "10111101101000010010011011101001", 
    50 => "00111110001000001100000101110110", 
    51 => "10111101001100101110111110101100", 
    52 => "10111101000101111010001110100110", 
    53 => "10111101010101111111100111110010", 
    54 => "10111101101101101101111111000110", 
    55 => "00111101101101000110001000100010", 
    56 => "10111101101000101010100001000100", 
    57 => "10111110001000000011100111101111", 
    58 => "10111101101100110100100101101110", 
    59 => "00111101110000011001111000111101", 
    60 => "10111101010001101011001111001001", 
    61 => "00111110001001110101101000110010", 
    62 => "10111101010110011000100010011101", 
    63 => "00111100011100000001110011001001", 
    64 => "10111101100101011101000111101100", 
    65 => "00111101100010001011000101001010", 
    66 => "00111101110001111000101011011001", 
    67 => "00111101100000011011110000111011", 
    68 => "10111110000100010101110101110000", 
    69 => "00111101110100001001111010011001", 
    70 => "10111110100010000010110010010001", 
    71 => "10111101111010011000010011100100", 
    72 => "00111110000110101100110101011011", 
    73 => "00111101110100000111011000111010", 
    74 => "00111110000000001001000001110001", 
    75 => "00111101101111000100100111100011", 
    76 => "00111110000111110000101011100101", 
    77 => "00111101011101100000101101010101", 
    78 => "00111101111001001001001000110110", 
    79 => "10111110000011101010111001011100", 
    80 => "00111110010110101011011011010000", 
    81 => "00111101001011100010011101011011", 
    82 => "10111101000010111000010111000000", 
    83 => "00111110010110000010111011001011", 
    84 => "10111110001011000001010100001001", 
    85 => "10111110000101010010010011000000", 
    86 => "10111101101101110100000000110000", 
    87 => "00111011100101100110010100110010", 
    88 => "00111101101110101000001000000100", 
    89 => "10111110010110011111110011110100", 
    90 => "10111101110110100010110011101101", 
    91 => "00111101011111101000000100101010", 
    92 => "10111100111000101101010110111000", 
    93 => "10111101000100011100010111100000", 
    94 => "10111101100000110100101001111010", 
    95 => "10111100101101000010101000111111", 
    96 => "10111011011101011000111110111010", 
    97 => "10111100100100001100110000000000", 
    98 => "10111101101011111010000100110101", 
    99 => "00111101001100011000011101000111", 
    100 => "10111101010011111011100111100111", 
    101 => "10111101110111101111111000001101", 
    102 => "10111101100111111111010000110100", 
    103 => "10111101111100101011110010110110", 
    104 => "10111011110111110011100110100001", 
    105 => "10111101101001110011111001001101", 
    106 => "00111011100001001010110001111000", 
    107 => "10111100011110101011010001100111", 
    108 => "10111101101011010000111100000100", 
    109 => "10111101011110010100001100110011", 
    110 => "10111110000001101111100110111010", 
    111 => "00111101001000101000000101001111", 
    112 => "00111101000110100100100010110110", 
    113 => "10111101101101001111101000100000", 
    114 => "10111110001010011101011010101110", 
    115 => "10111100100101000010111011110111", 
    116 => "00111101000110011111010010111001", 
    117 => "00111101111001011001101011111010", 
    118 => "00111011100000010111001111110011", 
    119 => "10111101100110111001101011000110" );


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

entity inference_conv2d_f3_1_1_15 is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 120;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of inference_conv2d_f3_1_1_15 is
    component inference_conv2d_f3_1_1_15_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_1_15_rom_U :  component inference_conv2d_f3_1_1_15_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


