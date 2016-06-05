-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_3_13_rom is 
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


architecture rtl of inference_conv2d_f3_4_3_13_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110011011100000010111001101", 
    1 => "10111011000000011101001001111110", 
    2 => "10111110001101010011100011101111", 
    3 => "00111110000101101001000011011110", 
    4 => "10111110001110100011010001000100", 
    5 => "10111110000100100001011100001001", 
    6 => "10111101011101101101010100010100", 
    7 => "10111101010110000101111111011110", 
    8 => "00111101001110011001001111110000", 
    9 => "00111101100000101101011111111001", 
    10 => "10111101111000111011011110010101", 
    11 => "10111101001111001010111010001100", 
    12 => "00111110010000011000101101010000", 
    13 => "10111110000100010101011001011100", 
    14 => "10111101110101000110100000000001", 
    15 => "10111110001000111001001100100101", 
    16 => "00111101111001111011000010110100", 
    17 => "10111110001110100100111111001010", 
    18 => "10111100110111111110001011110100", 
    19 => "00111100000010100101011101000111", 
    20 => "00111101110101101010110011101011", 
    21 => "00111011011010001101101001110101", 
    22 => "00111011101001111001001001101011", 
    23 => "00111011110110011011001000100011", 
    24 => "10111110000000110000111011000011", 
    25 => "10111010100100110001100100100010", 
    26 => "10111101100010001001000110111010", 
    27 => "10111101111000001100010100100010", 
    28 => "00111101110000011011011100100101", 
    29 => "00111110000001100101110101111101", 
    30 => "00111110001111101100111101100100", 
    31 => "00111101100010101011110011011000", 
    32 => "00111101010101010101111101111000", 
    33 => "00111110000011000000110111110110", 
    34 => "00111101110111100100000101001110", 
    35 => "00111101000001010000001111111011", 
    36 => "10111101000001010110000100110011", 
    37 => "00111101000001110000101001100110", 
    38 => "10111101001000111111010010011100", 
    39 => "00111101001100000010100101111001", 
    40 => "10111110000111000010011000010100", 
    41 => "10111110000000010110001111111110", 
    42 => "00111101000001100011010011001101", 
    43 => "10111101111011010010100110011001", 
    44 => "00111110001100100000000101000111", 
    45 => "00111110001101111101111010010100", 
    46 => "00111101011101100100011101101010", 
    47 => "10111101000000111011100000110110", 
    48 => "10111010111011101001010001110011", 
    49 => "00111101110011100110110100010110", 
    50 => "00111101110101101110011010010111", 
    51 => "10111110000110100110000100010111", 
    52 => "10111011101101101110100101110110", 
    53 => "00111101101110001111110111110000", 
    54 => "00111101110110001011101001000001", 
    55 => "00111101110010100101101000101100", 
    56 => "10111101001110100010110110001110", 
    57 => "00111101011000111100100000001100", 
    58 => "00111101111101010011111101111101", 
    59 => "00111100111001110101000110110011", 
    60 => "10111110000010101001010000110110", 
    61 => "00111110000100101001011100111001", 
    62 => "00111110001101001011101110100001", 
    63 => "10111011111110110000111001010100", 
    64 => "10111101101000000001101100001110", 
    65 => "10111101100011110010010000111000", 
    66 => "10111100111011001101101100101010", 
    67 => "10111101110110000101110111111011", 
    68 => "00111101101101000110000000111111", 
    69 => "10111110000010110011100110011111", 
    70 => "10111101010010100000100100011110", 
    71 => "00111100011000110101100010010101", 
    72 => "10111110000110011110011010101100", 
    73 => "00111101101001001011100110010110", 
    74 => "00111101110010110111100101111011", 
    75 => "00111110010010110110001101001110", 
    76 => "10111100100110111000011100001111", 
    77 => "00111101101101011101101011111110", 
    78 => "00111110001000000111011100000011", 
    79 => "10111110001111010000010000011101", 
    80 => "00111100010010110110111111010101", 
    81 => "10111011100000000100111000000100", 
    82 => "00111101000110101110110010011011", 
    83 => "00111110001001010010110111101101", 
    84 => "10111101101000101001111111111011", 
    85 => "10111101001110110011011001101101", 
    86 => "00111101011101010100001101011110", 
    87 => "00111100001101010100101001100101", 
    88 => "00111101101001001010101111100111", 
    89 => "10111110000011000101101100001000", 
    90 => "00111100111000011100110111100110", 
    91 => "10111110000111000101110001010111", 
    92 => "10111101001111110001000100100010", 
    93 => "00111110001111110010000000100001", 
    94 => "10111110001000101010001011000010", 
    95 => "10111101011011101111000101001111", 
    96 => "00111101010011110111001000010011", 
    97 => "00111110000001101000100110000111", 
    98 => "00111010000001010000001000111011", 
    99 => "00111100101010100011001101111011", 
    100 => "00111101101101000111111010011010", 
    101 => "10111101010011011001110111111110", 
    102 => "10111101100000111010101001011111", 
    103 => "10111101101110111110110011111011", 
    104 => "10111100111011011110001011111101", 
    105 => "10111100011001111101101001101111", 
    106 => "10111101010000100111001110010011", 
    107 => "00111110000101101110100001101100", 
    108 => "10111101100001110000101001110011", 
    109 => "10111101100001011111101001001011", 
    110 => "10111100000010011010110010110010", 
    111 => "10111100110100001111100101001101", 
    112 => "00111101100010100011100011010100", 
    113 => "00111101010011011010111000111110", 
    114 => "00111101001111000110011110001111", 
    115 => "00111100010011000110101111101001", 
    116 => "10111110000011101010000001110111", 
    117 => "00111101001010111011001000011011", 
    118 => "00111010000101000010111000000110", 
    119 => "10111101100011011011010010100100" );


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

entity inference_conv2d_f3_4_3_13 is
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

architecture arch of inference_conv2d_f3_4_3_13 is
    component inference_conv2d_f3_4_3_13_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_3_13_rom_U :  component inference_conv2d_f3_4_3_13_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


