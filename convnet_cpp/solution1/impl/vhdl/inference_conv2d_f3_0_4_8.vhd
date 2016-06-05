-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_4_8_rom is 
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


architecture rtl of inference_conv2d_f3_0_4_8_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101101000110111000100101100", 
    1 => "10111101000011001101101100101010", 
    2 => "10111100101110011101001010111111", 
    3 => "10111101011001010110010101001010", 
    4 => "10111100001001011010001100101000", 
    5 => "00111101000010101111010110010010", 
    6 => "00111101100001011010110111001100", 
    7 => "00111100111111000010001010010000", 
    8 => "00111101001101001111011100100011", 
    9 => "00111101110100001011000011110010", 
    10 => "00111101100010011101100111101110", 
    11 => "10111110000101001011101010010101", 
    12 => "00111101001110110001101110110000", 
    13 => "10111101101101000010001110100011", 
    14 => "00111110001111011011001000101101", 
    15 => "00111110000100011101001000011000", 
    16 => "00111101111011111111010000110100", 
    17 => "00111101100110100100001110101110", 
    18 => "00111101111000010001001111000111", 
    19 => "10111101100111001111011101010010", 
    20 => "00111101100010001010000110011101", 
    21 => "10111100011110111011110101111011", 
    22 => "00111101101010110010011110001001", 
    23 => "00111101001100110110000011010000", 
    24 => "00111100100101000001110100100011", 
    25 => "10111101010011011010100100011011", 
    26 => "10111101000010010010111011101000", 
    27 => "00111101101010111011000011001011", 
    28 => "10111101011000010001000100001101", 
    29 => "00111101010010101110101000111111", 
    30 => "10111110001101011100000110000011", 
    31 => "00111110000010010011001111100011", 
    32 => "00111110000110101101110111011111", 
    33 => "00111101000101000011101101010110", 
    34 => "00111100110110001110010000110010", 
    35 => "00111101010001111011110101001001", 
    36 => "00111100101010100010111000111100", 
    37 => "10111101000111001010000001100101", 
    38 => "00111110000100100001000110001000", 
    39 => "10111101010011111000010011011000", 
    40 => "10111101101010100000001010010000", 
    41 => "10111100110111100001011111100011", 
    42 => "10111100110101000010010001111010", 
    43 => "10111101110110110110010111101101", 
    44 => "00111110011111001010011011001010", 
    45 => "00111100100111100010011000100110", 
    46 => "10111101111100111100101111000101", 
    47 => "00111100101111110101011100101110", 
    48 => "00111101101001001111110110111110", 
    49 => "00111101000010001100010011001011", 
    50 => "00111100100011100010010101011101", 
    51 => "10111100010100010110000110000111", 
    52 => "10111101111000110000000010011011", 
    53 => "00111101110000000111000100100100", 
    54 => "00111101101101011000001011110111", 
    55 => "10111110001000111010010100111100", 
    56 => "10111101111101001111101111011011", 
    57 => "10111101011011011001001011100000", 
    58 => "00111101100001001100001001010111", 
    59 => "00111110011100010101011011100010", 
    60 => "00111101110011001110111111101101", 
    61 => "00111110000001110111001110011111", 
    62 => "00111110000100010101110011101010", 
    63 => "00111101110000110001110100111011", 
    64 => "10111101010111100111011111010101", 
    65 => "10111101011111010011001101001100", 
    66 => "00111110001011001101110101010001", 
    67 => "00111100110111010111001000110110", 
    68 => "10111101111100111000001011100100", 
    69 => "00111110010010111011111001000100", 
    70 => "10111101100010011110000101010011", 
    71 => "00111110001110000000011011110010", 
    72 => "00111110001100011100000000000001", 
    73 => "00111101001001111110001011010011", 
    74 => "10111101000010101101000111101011", 
    75 => "00111011100000010110001100010111", 
    76 => "10111101011010111010000000010010", 
    77 => "00111110000011010011011001110010", 
    78 => "10111101001000111110101111001101", 
    79 => "10111101100010100000010010000001", 
    80 => "00111101000101011011011001001011", 
    81 => "00111100100000101010000000100011", 
    82 => "00111101001101111101010001001101", 
    83 => "10111101111000000010011001000110", 
    84 => "10111110000010001001011010011010", 
    85 => "00111101101111110000000101001101", 
    86 => "10111101101100100100001010110110", 
    87 => "00111101111111110110110000100111", 
    88 => "00111010010010110011011001110101", 
    89 => "10111101000100001111001100000010", 
    90 => "10111101001010001101010000011010", 
    91 => "00111101000000011001111111011110", 
    92 => "10111110000111011100101101011000", 
    93 => "00111110001110000100101101011110", 
    94 => "10111101111101101111110110101000", 
    95 => "10111101000010101110100000100110", 
    96 => "00111110000001110111101011110110", 
    97 => "00111101010111010111000001010011", 
    98 => "00111110001010000110100010111010", 
    99 => "10111100000101110110010111100011", 
    100 => "00111101001101101010001010100100", 
    101 => "00111101000111100100101110010101", 
    102 => "10111101100001101010111010001011", 
    103 => "00111110001010010110110100001001", 
    104 => "10111101100110000100010001001010", 
    105 => "00111101111011010100010001010110", 
    106 => "10111101111111010101001000111011", 
    107 => "10111110000110010100001100011000", 
    108 => "10111101001000101011111000100000", 
    109 => "00111101111001101010000010011001", 
    110 => "10111101001001000000101010000110", 
    111 => "10111101110010111101111101011010", 
    112 => "10111110010101001011011100101100", 
    113 => "10111101110111111110111010110011", 
    114 => "00111101010011000011000010010000", 
    115 => "10111101110011100010010010111100", 
    116 => "00111001110111001101101101111101", 
    117 => "00111100111011001001110011100001", 
    118 => "00111110000111110011010101011101", 
    119 => "00111100110101010010101101000000" );


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

entity inference_conv2d_f3_0_4_8 is
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

architecture arch of inference_conv2d_f3_0_4_8 is
    component inference_conv2d_f3_0_4_8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_4_8_rom_U :  component inference_conv2d_f3_0_4_8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


