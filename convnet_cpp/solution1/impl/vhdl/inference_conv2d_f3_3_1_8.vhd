-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_1_8_rom is 
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


architecture rtl of inference_conv2d_f3_3_1_8_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101110000001111010010010101", 
    1 => "10111101001100001100000011111110", 
    2 => "10111101111101100111100110001001", 
    3 => "10111101001111010010100100111011", 
    4 => "10111101010011111101001001110000", 
    5 => "00111101101101011101011101111011", 
    6 => "00111101011111111011101111011000", 
    7 => "10111100010110101101100010010100", 
    8 => "00111101101110101100101111110001", 
    9 => "10111110010010101111001100011011", 
    10 => "00111100111011010000010010110000", 
    11 => "00111101001001011110100010101101", 
    12 => "00111101010100000010001111001111", 
    13 => "00111110000000100101001111011010", 
    14 => "10111100110001101100100110110011", 
    15 => "10111101000001111110000000110100", 
    16 => "10111101110000000111110110000100", 
    17 => "00111101000101111000101000101011", 
    18 => "10111110000101000100010000011000", 
    19 => "00111100011101110100010011011011", 
    20 => "00111100100110111110010100000011", 
    21 => "10111101101100001010101011111000", 
    22 => "00111101100100101000001101110101", 
    23 => "10111100110000010100111111000001", 
    24 => "00111011111100011110010101100000", 
    25 => "10111101011111011011111000100001", 
    26 => "10111101000110111110011111110011", 
    27 => "10111100010010110100111111110101", 
    28 => "00111110000011001001000110001110", 
    29 => "00111110000010111001010001010011", 
    30 => "00111101000011110011101100000110", 
    31 => "00111110000010000011000100100111", 
    32 => "00111101011110111011010001011100", 
    33 => "10111110001000000101100000010101", 
    34 => "10111011010110111110101100100011", 
    35 => "00111101101011111010000111100100", 
    36 => "10111110010000001001101101110100", 
    37 => "00111101111001101110110100100100", 
    38 => "00111101111100000101001000001101", 
    39 => "10111101011111001011011011110000", 
    40 => "00111101011010110000100001110010", 
    41 => "10111101101001010100100001100111", 
    42 => "00111011110111100001001010011010", 
    43 => "00111110001010111001101101100111", 
    44 => "00111101110110111000111111011110", 
    45 => "00111101101101111000010110011011", 
    46 => "10111100011011101100010101000101", 
    47 => "00111110001011100001011011010111", 
    48 => "00111101011100110011001001110111", 
    49 => "10111110001100001011010111101110", 
    50 => "00111101000100111001011100100001", 
    51 => "00111101110001101010001001010011", 
    52 => "10111100110001001101101010010000", 
    53 => "10111101001010111111101101001011", 
    54 => "10111101110000001010100011101101", 
    55 => "10111101001100000111001101100101", 
    56 => "00111101000111110110100101010010", 
    57 => "10111101101100111001000011010110", 
    58 => "10111101111101110110100110101001", 
    59 => "00111101111101011110100011010101", 
    60 => "00111101011010101100101001011110", 
    61 => "10111101000100010010101101010001", 
    62 => "00111101011011010011101010110001", 
    63 => "10111100110111010001100110000001", 
    64 => "00111110000001011001000110001010", 
    65 => "10111100101001011110010011001100", 
    66 => "00111110010001001111100010110110", 
    67 => "10111101110010010100010111011111", 
    68 => "00111110001011000001011100100010", 
    69 => "10111100110000101011011110100000", 
    70 => "00111100110000001101000100010110", 
    71 => "10111101010100011101010011011111", 
    72 => "00111110001000001101110111000110", 
    73 => "10111101100000011010011001011110", 
    74 => "10111101101010010101110111010101", 
    75 => "00111101111111011111011001010101", 
    76 => "10111101100010111000111100111101", 
    77 => "00111101101011010010010011010100", 
    78 => "00111101000011100011101100010001", 
    79 => "00111101101011100000100101101011", 
    80 => "00111101011110000010000101111010", 
    81 => "10111101101100101110101100001111", 
    82 => "00111101111100010100100110000100", 
    83 => "10111101001010101011010011111010", 
    84 => "10111101100001001001011110011100", 
    85 => "00111101101101110010110000001110", 
    86 => "00111101010110100011100110011101", 
    87 => "10111101011011101100000011000011", 
    88 => "10111110001001110000110110100110", 
    89 => "10111101100011010111100101110011", 
    90 => "00111011000011000101000011011100", 
    91 => "10111101101001010011010100000001", 
    92 => "10111101001010000000010100110111", 
    93 => "00111110000001011100110101001111", 
    94 => "00111101000011001111000111101011", 
    95 => "10111101110110111111110011101011", 
    96 => "10111110001000101010111011010001", 
    97 => "10111101110011010110011011110001", 
    98 => "10111101111011011001011010100111", 
    99 => "10111101100100100010111010101110", 
    100 => "00111101101011010101111000100010", 
    101 => "00111101001100010100101110011101", 
    102 => "10111100111111011011111000111100", 
    103 => "10111101111100101011100010000100", 
    104 => "10111101001100111010111100111111", 
    105 => "00111101100001100010100010010110", 
    106 => "10111101110100111000111001101101", 
    107 => "00111101010101011000111011000011", 
    108 => "00111101100111100001110010000000", 
    109 => "00111101100011100010110111101000", 
    110 => "10111101100001000000110110000011", 
    111 => "10111110000001110010101110001000", 
    112 => "00111100110111010011100011000000", 
    113 => "00111101100101000010010000101010", 
    114 => "10111110000100001000010110110010", 
    115 => "00111000011101111010101000011000", 
    116 => "00111101011010010010010010000111", 
    117 => "10111110000100001010111000010000", 
    118 => "10111101100100100101100101110111", 
    119 => "10111101111101000010111011011100" );


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

entity inference_conv2d_f3_3_1_8 is
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

architecture arch of inference_conv2d_f3_3_1_8 is
    component inference_conv2d_f3_3_1_8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_1_8_rom_U :  component inference_conv2d_f3_3_1_8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


