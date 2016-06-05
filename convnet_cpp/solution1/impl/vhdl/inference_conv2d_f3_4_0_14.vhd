-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_0_14_rom is 
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


architecture rtl of inference_conv2d_f3_4_0_14_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101101001111010111010110110", 
    1 => "10111101110000011111111010000000", 
    2 => "10111101010110101011011110100111", 
    3 => "00111101010001011100011111011011", 
    4 => "00111100101111111001011101011010", 
    5 => "10111011111000101111010100101101", 
    6 => "10111101111110110001111100100101", 
    7 => "10111110001011100101101011111111", 
    8 => "00111101111001001111100101111111", 
    9 => "10111100001010101010001110101101", 
    10 => "00111101100011100011000100001110", 
    11 => "10111100100100001111110101001001", 
    12 => "10111101000001110010111011001000", 
    13 => "10111100101011001001011001100001", 
    14 => "00111100110101110110101101010111", 
    15 => "10111110000001000111000111111000", 
    16 => "00111110001110110010100110100010", 
    17 => "00111101111111001000111010101100", 
    18 => "00111101100000100001101000010100", 
    19 => "10111101101100010100000110100111", 
    20 => "10111101100111011111011111101000", 
    21 => "10111101001101000011010101000001", 
    22 => "00111100101010011111100000100001", 
    23 => "00111100110010011001000010100010", 
    24 => "00111101101010111000011000010000", 
    25 => "10111100000111100111011111010000", 
    26 => "10111101000111000000010100110100", 
    27 => "10111101101101110000110010001100", 
    28 => "00111110000001010001110001011100", 
    29 => "00111110000100111001010111000100", 
    30 => "10111101101001101000000010111000", 
    31 => "00111101111010000101101000001100", 
    32 => "10111101001111100000011010110001", 
    33 => "10111100010101101011000101010010", 
    34 => "10111100100011010001010011110001", 
    35 => "10111110000010001100000011001111", 
    36 => "10111101101111011001001101100110", 
    37 => "00111101100010101111110011000001", 
    38 => "10111101100001101011011010111001", 
    39 => "10111100100111011101111000110111", 
    40 => "10111110001101011100010101110010", 
    41 => "10111110000111001111111110101000", 
    42 => "10111110000110100011000100011111", 
    43 => "00111100101001011000001100010010", 
    44 => "00111101101011110111111100000110", 
    45 => "00111100100000011011100110101001", 
    46 => "00111101100000011110100101000100", 
    47 => "00111101001110010011101010011001", 
    48 => "10111101101110111011100100000110", 
    49 => "00111101101000111101110001110001", 
    50 => "10111101100010111011110100111000", 
    51 => "00111110000011110110010010001100", 
    52 => "10111110000001000001001010001100", 
    53 => "10111101101010111110011111001010", 
    54 => "10111100101000000111010101010110", 
    55 => "00111110001010001011001100101101", 
    56 => "10111101100100010011010101100010", 
    57 => "00111101011111011101110110110001", 
    58 => "10111101001111011010001001011000", 
    59 => "10111011101111111001110111100101", 
    60 => "10111001111001001010101011101110", 
    61 => "00111100100111010010000101000011", 
    62 => "10111101100001110111111111001001", 
    63 => "00111100100010101011111000110101", 
    64 => "10111101101100100111001010100001", 
    65 => "10111101101010101100010010110101", 
    66 => "10111101110011010000010111110011", 
    67 => "10111101110100100100000001110100", 
    68 => "10111100100011000101011010111011", 
    69 => "00111101010000100100110001000000", 
    70 => "10111110000010010001100111110000", 
    71 => "00111110000010010011011000111111", 
    72 => "00111101000001011000101001001110", 
    73 => "00111101011011110111011110111101", 
    74 => "00111101000000101110001101011010", 
    75 => "10111100111010001110001111101111", 
    76 => "10111100100000100000001011011010", 
    77 => "00111011001000111000000101111010", 
    78 => "00111100111101111010000100100001", 
    79 => "00111101101011010000111101110000", 
    80 => "10111101101101010000011110100111", 
    81 => "00111110001001100011000101110010", 
    82 => "00111110001100010001110110111101", 
    83 => "10111101101101111101111001010001", 
    84 => "10111101001000111101110111011011", 
    85 => "00111101101011001001100011100101", 
    86 => "10111101111111011010010000000101", 
    87 => "10111101101000111011000111011110", 
    88 => "10111110000001001100101011010101", 
    89 => "10111101010001000111000011011110", 
    90 => "00111110000100111111110001000100", 
    91 => "10111100011000010110000110101111", 
    92 => "00111110001110001011001011101010", 
    93 => "00111100100011011011000000100010", 
    94 => "00111101100010001000011101001011", 
    95 => "10111100110100000111010010001101", 
    96 => "00111110001111010101000100101111", 
    97 => "10111101011010010001010111110100", 
    98 => "10111101011110100101110101111001", 
    99 => "10111110000101011100001100010110", 
    100 => "00111101011010000011000000110101", 
    101 => "10111110001001001100010111011010", 
    102 => "10111101111100111001100101110000", 
    103 => "10111110000010001000111010111101", 
    104 => "10111011000100000111011100000110", 
    105 => "10111101100001011111000110110010", 
    106 => "10111100100111110011010000001101", 
    107 => "00111100101000010000110001010101", 
    108 => "10111110000111100111100110101011", 
    109 => "00111101110111110111101111100001", 
    110 => "10111110001101010000011110100111", 
    111 => "00111100100010101000010000011101", 
    112 => "00111100001011100000011100001111", 
    113 => "00111101110110101010110111100110", 
    114 => "00111101010101101001011000001111", 
    115 => "10111101100001110001101001110001", 
    116 => "10111110000010000001100100001001", 
    117 => "10111101100000111100101010101011", 
    118 => "10111110000001111011101110110110", 
    119 => "10111100101110000101010110110010" );


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

entity inference_conv2d_f3_4_0_14 is
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

architecture arch of inference_conv2d_f3_4_0_14 is
    component inference_conv2d_f3_4_0_14_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_0_14_rom_U :  component inference_conv2d_f3_4_0_14_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


