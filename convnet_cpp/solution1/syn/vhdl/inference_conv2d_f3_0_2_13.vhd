-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_2_13_rom is 
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


architecture rtl of inference_conv2d_f3_0_2_13_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101000000110111101111010000", 
    1 => "10111101101010110000000100000000", 
    2 => "10111101110110010101101010101111", 
    3 => "00111010010111000011011100110100", 
    4 => "10111101010111110010110000110000", 
    5 => "10111100110110010111110010101001", 
    6 => "10111101100000110001000110110011", 
    7 => "00111101011000111011101010100000", 
    8 => "00111110000010011110011010101100", 
    9 => "00111001100101111011111110110110", 
    10 => "00111000101111100011110111011110", 
    11 => "00111110000000010000110101111100", 
    12 => "00111100110001001010011011111001", 
    13 => "00111101111001100110111101010000", 
    14 => "10111100111011110011111110001001", 
    15 => "00111100110100101001101101000011", 
    16 => "00111110000110111111111100000100", 
    17 => "10111110000011011001101100011011", 
    18 => "00111100100001011010101011001111", 
    19 => "00111101011000001010000000111001", 
    20 => "00111101001010010100001010011111", 
    21 => "10111100000011011111000111010000", 
    22 => "00111101001000100100000100100011", 
    23 => "00111110000001101001010010001010", 
    24 => "00111110001111111101100000100111", 
    25 => "10111110000011011100000000010010", 
    26 => "00111101101001001000001110001000", 
    27 => "00111101110110001011001001100100", 
    28 => "00111101011000100001101111001111", 
    29 => "10111110001111101100110011000100", 
    30 => "10111101100101001011010010101000", 
    31 => "00111101100100110010110100101100", 
    32 => "10111101001111011000110010111110", 
    33 => "00111101100110100111100001011111", 
    34 => "10111101010011101001000111001001", 
    35 => "00111101111010001111101110000111", 
    36 => "10111100110011000001110000000011", 
    37 => "10111101001000001010101010000000", 
    38 => "00111011110100010111000010001011", 
    39 => "10111110000100100110100101011001", 
    40 => "10111101010100010000011010111001", 
    41 => "10111100010100111011010001001000", 
    42 => "10111110001101101011111000111000", 
    43 => "00111101010110000011010111010001", 
    44 => "10111101111111101110110011000000", 
    45 => "10111101011100000011010000101011", 
    46 => "00111011010011000001110000100011", 
    47 => "00111100111111100100111010000101", 
    48 => "10111101000100000110111101001110", 
    49 => "00111101111000011110010101111110", 
    50 => "10111100110001010101101100011110", 
    51 => "10111101011100100110101100000111", 
    52 => "00111101100111010011111101001110", 
    53 => "10111101110101011001111111110101", 
    54 => "00111101111011101000100011011111", 
    55 => "00111110001010000010010000001011", 
    56 => "10111100110100110010011100100100", 
    57 => "10111100100010100000000101110110", 
    58 => "00111100100001111000000011001000", 
    59 => "10111110000000111101001110100010", 
    60 => "10111101010001100011010011101000", 
    61 => "10111011101000101001110111100101", 
    62 => "10111110000101011001110011010000", 
    63 => "00111101101101011101010000101101", 
    64 => "10111101010110011100100111010110", 
    65 => "10111110000101100011011001101101", 
    66 => "10111101001000010100011101111000", 
    67 => "10111100011011011011110111011110", 
    68 => "10111101110111011011101010010001", 
    69 => "00111101111000111111001001001110", 
    70 => "10111101100010010001010111011001", 
    71 => "00111100100110001001010010110111", 
    72 => "10111101110001111001010100000101", 
    73 => "10111011110001011010100100101101", 
    74 => "00111011100101011011000010010110", 
    75 => "10111110000011010100111010010000", 
    76 => "10111101010001011110010001000110", 
    77 => "10111110000011111001111110001000", 
    78 => "10111101011111110011000110001001", 
    79 => "10111101100000010011101001111000", 
    80 => "10111101000000110100100100101011", 
    81 => "00111101100111110100010001000001", 
    82 => "00111110000000010100010100001111", 
    83 => "10111101101001011001011111111101", 
    84 => "10111110001110010010011110010001", 
    85 => "00111110000000110101110011100010", 
    86 => "00111011011100010110111111101111", 
    87 => "10111011100001011110101101100111", 
    88 => "00111100101101101110100101101011", 
    89 => "00111100010111110110010001111111", 
    90 => "10111110001001100101101001010111", 
    91 => "00111100010111000011100001111011", 
    92 => "00111110001011011101000100011100", 
    93 => "10111100011010101001000111011010", 
    94 => "10111100110100110000001001110001", 
    95 => "00111101101100000000100100111010", 
    96 => "00111101100111110110001110101000", 
    97 => "10111101100000010000100101100101", 
    98 => "00111101110100110100110111110000", 
    99 => "00111101011011011000010111111011", 
    100 => "10111110010000101011111001001001", 
    101 => "00111011010011010111010100111110", 
    102 => "00111101111011110000110001111000", 
    103 => "10111100111000011101010101110011", 
    104 => "10111100001111110101001000100101", 
    105 => "00111110000000110011100111000001", 
    106 => "10111100100000100101010000111000", 
    107 => "10111101110011010001100101011001", 
    108 => "10111101101001100111001011101110", 
    109 => "00111101010101001011111100001010", 
    110 => "10111101010111110000111111000101", 
    111 => "10111101100010000000011011001010", 
    112 => "00111101110001000101111001011100", 
    113 => "10111110010010100000011010100111", 
    114 => "10111101001000011011000110010110", 
    115 => "10111011011101100110001011110011", 
    116 => "10111110000011111100001110110101", 
    117 => "10111100011100001110000111101010", 
    118 => "10111011100111010100001100110010", 
    119 => "00111110010000111001010100111110" );


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

entity inference_conv2d_f3_0_2_13 is
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

architecture arch of inference_conv2d_f3_0_2_13 is
    component inference_conv2d_f3_0_2_13_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_2_13_rom_U :  component inference_conv2d_f3_0_2_13_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

