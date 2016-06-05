-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_2_13_rom is 
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


architecture rtl of inference_conv2d_f3_4_2_13_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100101110001010011001101111", 
    1 => "00111101001010011110101001100101", 
    2 => "00111101000000110010101011000010", 
    3 => "10111110000101010010111010110110", 
    4 => "10111110010110101110010110111101", 
    5 => "00111101101010101111010010000101", 
    6 => "10111101010000111111100101101111", 
    7 => "10111101000100100101110100010101", 
    8 => "00111100110111100001000110011001", 
    9 => "00111100110110111100000010000110", 
    10 => "00111101111011000110011110011101", 
    11 => "10111110001110111001001011000000", 
    12 => "10111101011100101011110100000111", 
    13 => "00111101110001100000111001010010", 
    14 => "00111110001001100000001100001100", 
    15 => "10111010111101111011100110001010", 
    16 => "00111100101000111100000111011100", 
    17 => "10111011110010111101111110100111", 
    18 => "00111101100100110000011101000100", 
    19 => "10111101100010010100100110100101", 
    20 => "10111101101000100001001100101000", 
    21 => "00111101111011011111011110100101", 
    22 => "10111101100101011010111000000010", 
    23 => "00111100111011011111001011101101", 
    24 => "10111100010011111110110111101001", 
    25 => "00111101111101000011001000000001", 
    26 => "10111110000011110111011000011101", 
    27 => "10111101001110011001111100001101", 
    28 => "10111101110111001111101100110011", 
    29 => "00111100100111101110101001110001", 
    30 => "10111110001001100000101001100011", 
    31 => "10111110001101110111001010010011", 
    32 => "00111100110101110111111001101100", 
    33 => "10111011111000111000010001001001", 
    34 => "10111101000101111100001110000110", 
    35 => "10111110010000101010110010111000", 
    36 => "10111101110001100000010110010000", 
    37 => "00111100110010000011011111011101", 
    38 => "00111101100111110110011000011111", 
    39 => "10111101110000000000011000010101", 
    40 => "10111101101100110011110100001110", 
    41 => "10111100011000100000101111111001", 
    42 => "10111100110010111000000110101001", 
    43 => "10111110000100011010100010101100", 
    44 => "00111110000001110100001000010100", 
    45 => "00111101110000011100000010111101", 
    46 => "10111101010110100011000001100011", 
    47 => "10111110011001000101010000010101", 
    48 => "10111110000000110111001111110011", 
    49 => "00111100000010000110111011100100", 
    50 => "10111101101011110100101011101001", 
    51 => "00111101111111101000111011100111", 
    52 => "10111100011011111011010011000100", 
    53 => "10111011100000100100111001111001", 
    54 => "10111101100100011110011110111111", 
    55 => "10111100111001100110000000011100", 
    56 => "00111110000001011111010001011110", 
    57 => "00111100101101110101111001110001", 
    58 => "10111101011101011001011010100000", 
    59 => "00111101111110101011110000001110", 
    60 => "00111101100100111101111111100111", 
    61 => "10111101101000100010100101001000", 
    62 => "10111101001100110000110101011001", 
    63 => "00111101000111001100001001000011", 
    64 => "10111101100001101001000100111100", 
    65 => "10111110000110101111001111100100", 
    66 => "00111101010000111000011110101010", 
    67 => "00111101010001011101111110101000", 
    68 => "00111011000000100100110101111000", 
    69 => "00111101110001001011000101000000", 
    70 => "10111101101101010101101011000000", 
    71 => "00111100100000100110000001100010", 
    72 => "00111101001010011111000100110101", 
    73 => "10111101111110101010001101101010", 
    74 => "00111100101010100010101001000000", 
    75 => "10111100100001011110101100110001", 
    76 => "10111101100011010111100111010001", 
    77 => "10111101110001110011011110100101", 
    78 => "10111110000110110010000100111110", 
    79 => "10111110001000001001000001110001", 
    80 => "10111110001110010001011011001010", 
    81 => "10111100100010110010011111100111", 
    82 => "00111100100110001000100010001101", 
    83 => "00111101111011100100010010110111", 
    84 => "00111101110010101011011100100001", 
    85 => "10111101100011110011011101011011", 
    86 => "10111101101000100100100101000011", 
    87 => "10111100101110110111000000011001", 
    88 => "10111101100001110001010010011111", 
    89 => "10111110000011101011101001101011", 
    90 => "00111100111010100101000011010111", 
    91 => "10111110001010001100111101111101", 
    92 => "10111101001101010001110100110011", 
    93 => "10111101101111011100100110101010", 
    94 => "00111101000100101110100110010111", 
    95 => "10111110000011001001110001001110", 
    96 => "10111100011101000010010000101010", 
    97 => "10111101111110011000001010001000", 
    98 => "00111101001111000000100011000101", 
    99 => "10111101111010010001100001011101", 
    100 => "00111110001101100101110010110011", 
    101 => "10111100110100110110001101010100", 
    102 => "10111100010111111111010100110011", 
    103 => "10111101010001100110000100001101", 
    104 => "10111101001101100101010011110001", 
    105 => "00111100111101111100110000011111", 
    106 => "00111101010111100001100101000000", 
    107 => "00111101010011100000010000000100", 
    108 => "10111110001001101010000111101000", 
    109 => "10111110010101100000110101000101", 
    110 => "00111101011000101010111110001101", 
    111 => "00111110001111011011010100001111", 
    112 => "10111101101001001100111001011001", 
    113 => "10111010001010111111011001111010", 
    114 => "10111101101011000011100011011001", 
    115 => "10111101111011100101110111100001", 
    116 => "00111101001110001011010010110010", 
    117 => "00111110000100100010101001101111", 
    118 => "00111100101101111001101000110110", 
    119 => "00111110001110000001011110111001" );


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

entity inference_conv2d_f3_4_2_13 is
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

architecture arch of inference_conv2d_f3_4_2_13 is
    component inference_conv2d_f3_4_2_13_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_2_13_rom_U :  component inference_conv2d_f3_4_2_13_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


