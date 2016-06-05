-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_3_13_rom is 
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


architecture rtl of inference_conv2d_f3_1_3_13_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101101011100100010101011000", 
    1 => "00111101101010101001101010101001", 
    2 => "10111101110101000010101110110110", 
    3 => "10111101011100101001011101100010", 
    4 => "10111110000001000110000110110111", 
    5 => "10111101111001101100101100010000", 
    6 => "10111101101001001110100111111010", 
    7 => "00111101000010110001010001100110", 
    8 => "00111101010010111001011010111100", 
    9 => "00111101101101001111011101110011", 
    10 => "10111101100001001111100111000010", 
    11 => "10111100101000100111111001000101", 
    12 => "00111110000100001100111001001111", 
    13 => "10111110000011111001110110110010", 
    14 => "10111101000001100110100011010000", 
    15 => "00111101100110110010010101001000", 
    16 => "00111101100101110100011000101011", 
    17 => "00111110000000100111000000101010", 
    18 => "10111100110101010110100001000111", 
    19 => "10111101110101010101001101101001", 
    20 => "10111110001101100110110011110100", 
    21 => "10111010111110101011101010011100", 
    22 => "00111101101011000011100010100011", 
    23 => "00111101101000100100000001100111", 
    24 => "00111101110011100011111101111001", 
    25 => "10111100101000010110111110000111", 
    26 => "10111101111101011101111001011001", 
    27 => "00111010101010100110011001110000", 
    28 => "10111101110111001100110110010110", 
    29 => "00111101111101101011111101000100", 
    30 => "10111101100110011000101000010101", 
    31 => "10111110000011100100111001101010", 
    32 => "10111110000001101001100101000010", 
    33 => "00111101101001111000101011110100", 
    34 => "00111101000111000011000001101000", 
    35 => "10111101000101001011110011010110", 
    36 => "00111101011101000011010001101010", 
    37 => "00111101000101111100000101010010", 
    38 => "00111110001001001100011111110011", 
    39 => "10111101100000010100111001111111", 
    40 => "00111101100100010100001101101111", 
    41 => "00111101111010101011001011100001", 
    42 => "10111101000100111110111101010001", 
    43 => "00111110001111011011001010110011", 
    44 => "00111101100011100111011110010010", 
    45 => "10111101111001100010100110010101", 
    46 => "00111101110110010001101111000101", 
    47 => "10111110000010111000011000101011", 
    48 => "00111100101001101101111011000111", 
    49 => "10111011011001110101100101101011", 
    50 => "00111101010100011000100000000011", 
    51 => "00111101101001010011001000011110", 
    52 => "00111110001111011010110101110101", 
    53 => "10111101001001001011011001100011", 
    54 => "10111101010010001001110100001101", 
    55 => "00111100111111010100000000110010", 
    56 => "00111101100110001110100011001111", 
    57 => "10111101110110010101100110100011", 
    58 => "10111010110001101010001001100110", 
    59 => "00111101110010101111101000100010", 
    60 => "10111100010010010001100000001100", 
    61 => "10111101110000111101000111110100", 
    62 => "00111101111000111001001001011100", 
    63 => "10111101001011100101111010011101", 
    64 => "00111110000001100100000011101010", 
    65 => "00111101010110101001111100111000", 
    66 => "10111100101101110111011011111010", 
    67 => "00111100100001000101011000000110", 
    68 => "10111101110110000110010011001011", 
    69 => "10111101100111011100100001110101", 
    70 => "00111101110110101100001111101011", 
    71 => "10111101101001010101001111010101", 
    72 => "00111101010111101011111010011101", 
    73 => "10111011111111110111101000001001", 
    74 => "10111101101100110000000110011010", 
    75 => "00111110001100010001001110000011", 
    76 => "00111101101111101110100111010000", 
    77 => "10111101100010010001100011111110", 
    78 => "10111101101100011001000110011011", 
    79 => "10111100110101001101101101011001", 
    80 => "10111101010111111001000100101010", 
    81 => "10111110001111111100111000110001", 
    82 => "00111101101100101001010100111011", 
    83 => "10111101100000110110000111001111", 
    84 => "00111110000110110010010000100000", 
    85 => "10111101100100000101001101101010", 
    86 => "00111110010100000011100110101100", 
    87 => "10111100010011100101111000110010", 
    88 => "10111101100100000000110110101111", 
    89 => "10111110000101010010010011000000", 
    90 => "00111101010111001001110101110101", 
    91 => "10111100110011001000100111100111", 
    92 => "10111100101100011101011011011101", 
    93 => "10111101100011010110000001110001", 
    94 => "00111110001010001101011000001010", 
    95 => "10111101100101001101010000010000", 
    96 => "00111010111011110110101111011110", 
    97 => "10111101001001000101010101100101", 
    98 => "10111110000100110001011001011101", 
    99 => "10111100001111101010000001001111", 
    100 => "00111101101000001001001110010110", 
    101 => "00111101111001010000110101101011", 
    102 => "00111100100110011110110001110000", 
    103 => "10111110001011110010011000101001", 
    104 => "10111101101100110111101100111101", 
    105 => "10111101101100111101110001111110", 
    106 => "00111100100010011010011110110100", 
    107 => "00111110010000000000111000101000", 
    108 => "00111101110101111111110110000010", 
    109 => "10111101101111101101101010001110", 
    110 => "00111101001001111000111000011001", 
    111 => "00111101101011001111110101001100", 
    112 => "00111110001010101010000100001110", 
    113 => "00111101111010001110100100101101", 
    114 => "10111101100100100011100011110101", 
    115 => "10111101001010010011011110110111", 
    116 => "10111110001001010001000011010100", 
    117 => "10111110000101011011101110111111", 
    118 => "00111100000101110000010101010101", 
    119 => "10111101001000000110011011111000" );


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

entity inference_conv2d_f3_1_3_13 is
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

architecture arch of inference_conv2d_f3_1_3_13 is
    component inference_conv2d_f3_1_3_13_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_3_13_rom_U :  component inference_conv2d_f3_1_3_13_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


