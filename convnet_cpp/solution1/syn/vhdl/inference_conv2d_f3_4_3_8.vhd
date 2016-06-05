-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_3_8_rom is 
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


architecture rtl of inference_conv2d_f3_4_3_8_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101101000010110001110101101", 
    1 => "00111101101100111011110011101110", 
    2 => "10111101100100101010111110000000", 
    3 => "00111101000010011010000100011001", 
    4 => "10111101111001111100001110010011", 
    5 => "10111101111001011111101011101100", 
    6 => "00111101010110100010000110011010", 
    7 => "00111110001001111101100101010101", 
    8 => "10111101110011000101100010111001", 
    9 => "10111101111010010110110111010010", 
    10 => "00111101111011001101010110110111", 
    11 => "00111101100010101100110111111100", 
    12 => "10111101011101110101011011111111", 
    13 => "10111100010110110111000101000000", 
    14 => "10111101100010001111100110111111", 
    15 => "10111110001010110010011110001001", 
    16 => "00111101010010001110101001010101", 
    17 => "10111101011111111010010001000000", 
    18 => "10111100001110101101010101010100", 
    19 => "10111101101111101101101011011111", 
    20 => "00111101000101000100000100011010", 
    21 => "10111110010001010100111011110100", 
    22 => "10111110001101111111111111011110", 
    23 => "00111101000001101101101001011111", 
    24 => "00111101001000101001001101110011", 
    25 => "10111110010010001100100010101100", 
    26 => "00111110010111110001110111000101", 
    27 => "00111101100011011010110100111111", 
    28 => "00111101110100110000101001001110", 
    29 => "10111101111100110111000000000100", 
    30 => "00111101101100000100001010111110", 
    31 => "00111100010001101001011001010010", 
    32 => "00111100111100010001100001110001", 
    33 => "10111101110111000111000101010000", 
    34 => "00111101100111010101100111001000", 
    35 => "10111101100110111101100110010101", 
    36 => "10111101000011101010110100100111", 
    37 => "10111100000001011001100010000110", 
    38 => "10111110000100000001100011100111", 
    39 => "00111110010110000001111110010111", 
    40 => "10111011001011010110100010101110", 
    41 => "10111011111000100101011000100001", 
    42 => "10111100010001011011101011110101", 
    43 => "10111100110110000010111010010101", 
    44 => "00111110001101101010111000111010", 
    45 => "10111011110111100011000100100011", 
    46 => "10111101110010110001001100111111", 
    47 => "00111110001100010001111010000110", 
    48 => "00111101110011001011010010111100", 
    49 => "10111100101100110000000101111111", 
    50 => "00111100110001110100001100100000", 
    51 => "00111101001101000101000010000100", 
    52 => "00111101000111000101000010011001", 
    53 => "10111101001100011000010110110100", 
    54 => "10111110000001010101110110100010", 
    55 => "10111110001000001011011001110100", 
    56 => "00111100111011000111111100011010", 
    57 => "00111101000110001101111000111000", 
    58 => "10111101000011100011110000111001", 
    59 => "00111101111101011001110011010000", 
    60 => "00111100001011100101110101110110", 
    61 => "00111101111000110000110100110000", 
    62 => "10111101111100000000001101101000", 
    63 => "00111100100111100000010101101111", 
    64 => "00111100111110100001010110100110", 
    65 => "00111100001011100000001001110010", 
    66 => "00111101110010100001111100001000", 
    67 => "00111101100001001010001111101111", 
    68 => "00111101101100101101001000001101", 
    69 => "00111101100010110010001000111101", 
    70 => "10111101110011001010101110001111", 
    71 => "10111100101010001101110110100101", 
    72 => "10111100011001110100000000010110", 
    73 => "10111101101100111001100001100011", 
    74 => "10111110010001110000001001100000", 
    75 => "10111100101001111111010000111011", 
    76 => "00111101101000100100100110100001", 
    77 => "00111101110000110111111111110101", 
    78 => "00111101010000001000100111001000", 
    79 => "10111101100101000110110011101111", 
    80 => "10111101101011111010111110101110", 
    81 => "00111110000101011110010011100111", 
    82 => "00111101011100100100110011101111", 
    83 => "00111101100110011110000000000011", 
    84 => "10111100011011011011010111100110", 
    85 => "00111110001010010000001100100001", 
    86 => "00111110001101100101101100100001", 
    87 => "00111101000010001110010100010110", 
    88 => "10111101011100000000110110010100", 
    89 => "00111101110110010111110000111101", 
    90 => "10111110001110110110001110010001", 
    91 => "00111101100101000011100010001111", 
    92 => "00111101100001101101110010111011", 
    93 => "00111101100000011000111101110100", 
    94 => "10111110001101000101110010111100", 
    95 => "10111101111100010011110001101000", 
    96 => "00111101001011000111001111111100", 
    97 => "00111110001010010100110100001110", 
    98 => "10111101001011101101000110100101", 
    99 => "10111101001100010110010111010100", 
    100 => "10111101100010010000110110000011", 
    101 => "00111101110100110110110101100101", 
    102 => "00111101100000000010010010001011", 
    103 => "00111101011101000101111001011100", 
    104 => "00111011010000011000111000101010", 
    105 => "00111011111100111110101110100000", 
    106 => "00111101101100111011100001010001", 
    107 => "00111101100011001001001010110101", 
    108 => "10111110001000010011111011000100", 
    109 => "00111101100101010101100111011100", 
    110 => "00111101010000000111000111111011", 
    111 => "00111101000000111001101101111011", 
    112 => "00111101111001001101100001110111", 
    113 => "10111101111001010011101100001000", 
    114 => "00111101111101100111111001000001", 
    115 => "10111101000110111010000101100001", 
    116 => "00111101000010000010111111100101", 
    117 => "10111110001001000111111111011100", 
    118 => "00111101000111101001000110111011", 
    119 => "00111101100010110110011111111000" );


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

entity inference_conv2d_f3_4_3_8 is
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

architecture arch of inference_conv2d_f3_4_3_8 is
    component inference_conv2d_f3_4_3_8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_3_8_rom_U :  component inference_conv2d_f3_4_3_8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


