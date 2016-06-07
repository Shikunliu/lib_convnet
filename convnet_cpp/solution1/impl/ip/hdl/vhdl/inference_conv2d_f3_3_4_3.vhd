-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_4_3_rom is 
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


architecture rtl of inference_conv2d_f3_3_4_3_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110000110100001001101111111", 
    1 => "10111101001110101000110100101111", 
    2 => "00111101001000011000100101010010", 
    3 => "10111101100101011000100011100011", 
    4 => "10111100111110010110000010101010", 
    5 => "00111101100000000101100011101011", 
    6 => "00111100101011000010000101011100", 
    7 => "00111101000011011111011001001000", 
    8 => "10111100011110000111011100001010", 
    9 => "00111101101110011111010011111100", 
    10 => "10111101011111001101010001001100", 
    11 => "00111101000010011011010000101110", 
    12 => "10111100100001101001100001101011", 
    13 => "00111101110010111100111110010010", 
    14 => "10111101111110100010000001011000", 
    15 => "00111101100000000100110100000101", 
    16 => "10111101110111101001110110010101", 
    17 => "10111101010111000100111001100101", 
    18 => "00111101110100000000000011001001", 
    19 => "00111101000010111111111111001110", 
    20 => "10111100010001100001111001011101", 
    21 => "10111110001111000110011001001101", 
    22 => "10111100100001010110011000000110", 
    23 => "00111101101001001101010111001011", 
    24 => "10111100110100001001011010111100", 
    25 => "10111101001101101111000110011001", 
    26 => "10111101100101100001101001111100", 
    27 => "00111101100001100110110110100011", 
    28 => "10111101110011001110011110001010", 
    29 => "00111100111111010000110000110000", 
    30 => "00111100110011011011101110101010", 
    31 => "10111110000001111001000000110010", 
    32 => "10111101111011010110011101110111", 
    33 => "10111101100110010101100011100111", 
    34 => "10111110000111111001110101101111", 
    35 => "00111101100101001101001011000000", 
    36 => "10111101011110111110000011010001", 
    37 => "00111110000001110110000000111001", 
    38 => "00111101101011111001100111111001", 
    39 => "10111101100010110101110001101111", 
    40 => "10111101101111001110101100000000", 
    41 => "10111101110101010111111111111010", 
    42 => "10111100111101011110110000010101", 
    43 => "10111110000111111110101011000100", 
    44 => "00111101110110100100101001001001", 
    45 => "00111101100100010110011111101100", 
    46 => "10111101101110101100101010010100", 
    47 => "00111101000010011100101001001110", 
    48 => "10111101100000110101010011000001", 
    49 => "00111110000101110100011110010101", 
    50 => "00111110000000110000100001111000", 
    51 => "10111101101110101001100010111000", 
    52 => "10111100110100011100001101000001", 
    53 => "10111100100110010100010110000001", 
    54 => "00111011000101111010111000110010", 
    55 => "10111101101001101001111000111101", 
    56 => "10111101111101110110101000101111", 
    57 => "00111101010100011110001000010101", 
    58 => "00111110000101100101010101011100", 
    59 => "10111100110000001010001000011100", 
    60 => "10111101110100010010011101110000", 
    61 => "10111101110100000011011011001010", 
    62 => "00111101010000101010011011110100", 
    63 => "00111101011001000001011001000101", 
    64 => "00111101101111110100001111010101", 
    65 => "00111101110111000011000011010011", 
    66 => "10111101100001101101001011111011", 
    67 => "10111101110110111011001011111111", 
    68 => "00111101100011111001001111001001", 
    69 => "10111100111001110000100110001111", 
    70 => "00111101110001100111000110111010", 
    71 => "00111100100000111000101011001111", 
    72 => "10111101000111110011011110111001", 
    73 => "00111101110101110110100010011101", 
    74 => "00111011101001000110101000011000", 
    75 => "10111101100110001001100101111100", 
    76 => "00111101111010101100111100110001", 
    77 => "00111110000110011101100100001010", 
    78 => "10111101111011110001000100110000", 
    79 => "10111110000100110010010101001110", 
    80 => "00111100001001001100101111111101", 
    81 => "00111101001000010010111010000100", 
    82 => "10111101011010001010101001111001", 
    83 => "10111101001110010000100000001111", 
    84 => "10111110001010111010101011011110", 
    85 => "00111110001011001111100011010111", 
    86 => "10111101011000010111111110010010", 
    87 => "00111101011000100100100110111100", 
    88 => "10111011101011010111010111000100", 
    89 => "00111101101110001001011101111110", 
    90 => "00111101111111101100001111011011", 
    91 => "10111101101111101000000001010011", 
    92 => "10111101100001011101100100011011", 
    93 => "10111101100111000110000100110111", 
    94 => "00111101100110000100110111000111", 
    95 => "10111110010110001111100101101110", 
    96 => "10111110001011000110000001000110", 
    97 => "10111011010010101101111000110101", 
    98 => "00111100111101000010000011001111", 
    99 => "00111100110100111010110111000111", 
    100 => "00111110001110111001011111111111", 
    101 => "10111110000101011110100100011000", 
    102 => "10111101000001101110101011010110", 
    103 => "00111110010111110001011001101110", 
    104 => "00111101111111110010001011000000", 
    105 => "00111110000000101000100110011000", 
    106 => "10111101000100001011111011100101", 
    107 => "10111101110001101010011000110101", 
    108 => "10111101010000001000111111000011", 
    109 => "10111101101011111000101110101001", 
    110 => "00111101110001101110100111001001", 
    111 => "10111011101000000000111110101010", 
    112 => "10111101101010110000100000000110", 
    113 => "10111101111100011100000010000111", 
    114 => "00111101111101010011101101001011", 
    115 => "10111101110010101111101110100111", 
    116 => "10111011100010101101111100000001", 
    117 => "10111110000111110111001001110001", 
    118 => "00111101111100011111101000110011", 
    119 => "00111101110111001100010010101100" );


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

entity inference_conv2d_f3_3_4_3 is
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

architecture arch of inference_conv2d_f3_3_4_3 is
    component inference_conv2d_f3_3_4_3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_4_3_rom_U :  component inference_conv2d_f3_3_4_3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

