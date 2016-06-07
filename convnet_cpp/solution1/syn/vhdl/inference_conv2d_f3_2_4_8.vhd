-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_2_4_8_rom is 
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


architecture rtl of inference_conv2d_f3_2_4_8_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110000110100010110000100011", 
    1 => "10111101101111010101100000011010", 
    2 => "10111110000010000011011000100010", 
    3 => "10111100101001010100100000100100", 
    4 => "10111101010001100100101010111000", 
    5 => "00111101110010111110110111011111", 
    6 => "10111000000101101010001110100111", 
    7 => "10111101101101111011000001010110", 
    8 => "10111110000000100010011100000111", 
    9 => "00111110000001100101001100000000", 
    10 => "00111101010110000101001111101010", 
    11 => "00111101000011011000111011001001", 
    12 => "00111110001001110011111111111011", 
    13 => "00111100100011000101111100011110", 
    14 => "00111101011111100011011111111001", 
    15 => "00111101101101011011010000010111", 
    16 => "10111100011110100100101110001011", 
    17 => "00111101100101101100011001011000", 
    18 => "10111101010110001000000010110000", 
    19 => "10111101001100011001001000101110", 
    20 => "10111100111001001111100000000111", 
    21 => "00111100011011011101001000000000", 
    22 => "00111101111110110111100111011001", 
    23 => "00111110000110000101001000101111", 
    24 => "10111101010110010010111011000000", 
    25 => "00111100110100000100000101100001", 
    26 => "00111110001010000010101011011100", 
    27 => "10111100011010111110000101100101", 
    28 => "00111101100101100111101101000100", 
    29 => "00111101001111101011111001100111", 
    30 => "10111110001110001001110001011110", 
    31 => "00111100010000100110000110100100", 
    32 => "00111101001100001011100111110111", 
    33 => "10111101011111000100100111001000", 
    34 => "00111101001101000100101001010101", 
    35 => "10111101101101110010110001000100", 
    36 => "10111110001000001101010010011001", 
    37 => "10111101010001011000100110010010", 
    38 => "10111101000011101000110010001011", 
    39 => "00111100111101100001001111101110", 
    40 => "00111101010001001100110110101010", 
    41 => "10111100101000111100010101101101", 
    42 => "00111101010001010101110111110011", 
    43 => "10111101111111001001111001100111", 
    44 => "10111110001000011110010100111011", 
    45 => "10111101101001000111110100111101", 
    46 => "10111110000000101001000001101001", 
    47 => "00111110000110100100101111011100", 
    48 => "10111110000110110101100100010100", 
    49 => "00111101010101110010101111001011", 
    50 => "10111101010110011110010100011001", 
    51 => "00111101000110001000000000001111", 
    52 => "10111101101010011010010101110011", 
    53 => "10111100000100011101111011010000", 
    54 => "00111101110000101011100010010010", 
    55 => "10111100110000101001001000010110", 
    56 => "00111101100100001000100010111100", 
    57 => "00111101001101100001110000110111", 
    58 => "10111101000101110011101000101001", 
    59 => "10111110000011001001001010011011", 
    60 => "10111101100010100010011011110011", 
    61 => "10111100100100011101000110111010", 
    62 => "00111110000110110101010000011001", 
    63 => "10111100010010001010101111010110", 
    64 => "00111101111111100010110111101000", 
    65 => "10111110000011111110111101111100", 
    66 => "00111101001011110101000011010110", 
    67 => "00111101000011010110101001100111", 
    68 => "10111101010000011100110101111010", 
    69 => "00111101101011101111110011011000", 
    70 => "10111101011011001011001110001000", 
    71 => "00111110001101000110111100010101", 
    72 => "00111101001100010100100111010100", 
    73 => "10111101101111110100000110000111", 
    74 => "00111110001010100000101110100010", 
    75 => "00111100110001010110000010010010", 
    76 => "10111011110000111001110101001110", 
    77 => "00111101010011100100000010000101", 
    78 => "00111101110001010011000001110001", 
    79 => "10111101100001111010101100110010", 
    80 => "00111100000011010100001111101011", 
    81 => "00111101000001110110110110110011", 
    82 => "00111101101100101011111110100110", 
    83 => "00111101101000111001100000101110", 
    84 => "10111101101001111011010111001001", 
    85 => "10111100000110011101111110111011", 
    86 => "00111110010011001001001111101010", 
    87 => "00111101101011000000010100001100", 
    88 => "00111101000000111001000001011110", 
    89 => "00111101011100101101101101010100", 
    90 => "10111110000001111011111111101000", 
    91 => "00111101001000100101001110010111", 
    92 => "10111100010001100110011111000011", 
    93 => "00111101110100001001001110010110", 
    94 => "10111101110010011111111011111111", 
    95 => "10111101000100101100011001000001", 
    96 => "10111101011101010110100100011110", 
    97 => "00111101001001000101011101111110", 
    98 => "00111110001010110010110110010000", 
    99 => "10111110000101110100100000011011", 
    100 => "10111011000011110111100111011011", 
    101 => "10111101000110001101010010010011", 
    102 => "00111101010110100111101110101100", 
    103 => "00111101110001000111000100101110", 
    104 => "00111101100010111101001001100110", 
    105 => "10111100001100001011011011101101", 
    106 => "10111001000101010011101000100000", 
    107 => "00111100010110001111011101111101", 
    108 => "00111110001110001000000001010010", 
    109 => "10111101100000101001001101110011", 
    110 => "10111100110101010111010000111011", 
    111 => "00111101100011100101101011100100", 
    112 => "00111011010111000010011001011100", 
    113 => "00111110001110000001101011011111", 
    114 => "00111011011110011010011010100000", 
    115 => "10111101110010111110000111101011", 
    116 => "10111101001001011100100100011101", 
    117 => "10111011100100101001000010100110", 
    118 => "00111101001101111001010110110011", 
    119 => "10111101010000110001000110011000" );


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

entity inference_conv2d_f3_2_4_8 is
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

architecture arch of inference_conv2d_f3_2_4_8 is
    component inference_conv2d_f3_2_4_8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_2_4_8_rom_U :  component inference_conv2d_f3_2_4_8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

