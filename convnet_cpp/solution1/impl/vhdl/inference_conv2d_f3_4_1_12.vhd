-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_1_12_rom is 
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


architecture rtl of inference_conv2d_f3_4_1_12_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101100010100111110110111000", 
    1 => "00111101011000011001101001101010", 
    2 => "10111100100111001000001011101110", 
    3 => "00111110001000110000010100010000", 
    4 => "00111100101011110000110010010011", 
    5 => "00111101101111001110100101101101", 
    6 => "10111101111010001101011011010100", 
    7 => "10111110001010010100100010011001", 
    8 => "00111110010000000111111001011010", 
    9 => "10111100111010100001101010000110", 
    10 => "00111101111101111000100000010010", 
    11 => "10111101010100000010101001101010", 
    12 => "00111101001100101000100101101111", 
    13 => "10111101000100000101000101101100", 
    14 => "00111100010101110100111101110010", 
    15 => "00111101010111110100101101010101", 
    16 => "00111100100100001001011110010010", 
    17 => "00111110000101101000101010010011", 
    18 => "10111101110010001101001010010101", 
    19 => "10111101001000111001000110000101", 
    20 => "00111100110000100011001111101101", 
    21 => "00111101011010000000011110100001", 
    22 => "00111101101001101110011111011001", 
    23 => "10111101100110000001001100101010", 
    24 => "10111101000010000110000011000010", 
    25 => "10111100110011010110011110010010", 
    26 => "10111101101001010011011110100000", 
    27 => "10111100111101000110011101000110", 
    28 => "00111100011000000111010001001001", 
    29 => "00111101101010100110001101110011", 
    30 => "10111110000011011110011100100001", 
    31 => "10111101001001010101010001001101", 
    32 => "00111100000101101010101010011100", 
    33 => "00111100001000011000000111100110", 
    34 => "00111101101000010011101001101010", 
    35 => "00111101001001000101101100001110", 
    36 => "00111110001101010101111011110010", 
    37 => "10111011100010101000000011001101", 
    38 => "00111110000010100011101101011000", 
    39 => "00111110000000000100100110101010", 
    40 => "00111100101000110000000100100001", 
    41 => "00111101111010001000100100111011", 
    42 => "00111100101110011011110010111010", 
    43 => "00111101110101110000011000001100", 
    44 => "10111101001111010001111010111111", 
    45 => "00111101011010110010011110010110", 
    46 => "10111101001001111001000011010011", 
    47 => "00111101100101011100111100010111", 
    48 => "10111101001100100001000000000011", 
    49 => "00111011000011100100001011111001", 
    50 => "10111110010000110010111101000101", 
    51 => "00111101001010010011100010101001", 
    52 => "00111101100001110011110111111101", 
    53 => "00111011111011001001010000010010", 
    54 => "00111101101110101111100101110011", 
    55 => "10111101101000111100100001001111", 
    56 => "10111101101000001010001001101101", 
    57 => "10111110000000101110100001111101", 
    58 => "10111100110110111100100010110011", 
    59 => "10111101100101011001000100000100", 
    60 => "10111110010000101111011111110101", 
    61 => "00111101110111100000000101011000", 
    62 => "10111101110111001011011010000101", 
    63 => "10111100000011001111100000100001", 
    64 => "00111101101110011001110001111100", 
    65 => "00111110000101101001101110011101", 
    66 => "10111101111100110111001110110000", 
    67 => "00111100110010010101001000100100", 
    68 => "10111101100101100000011111010010", 
    69 => "00111101101011010100001100010100", 
    70 => "10111100000110111101111010011000", 
    71 => "00111101100110100101111000000000", 
    72 => "10111110000100010000101110100110", 
    73 => "00111101001101101011000100110111", 
    74 => "00111101101000111001010110001110", 
    75 => "10111101110111100100101101000101", 
    76 => "10111101110001010010100011110010", 
    77 => "00111100110001011011010101001100", 
    78 => "00111100110010000000110100010101", 
    79 => "00111101100101001110100110011100", 
    80 => "00111101101000011110110101001101", 
    81 => "00111100111101000111011001011111", 
    82 => "00111101110011101100100011010110", 
    83 => "10111110010010101100101101000011", 
    84 => "00111110000000000001111111111011", 
    85 => "00111101110010100001011001101111", 
    86 => "10111101100000110011101000011111", 
    87 => "00111101110110010010100101100111", 
    88 => "00111101101010001111101010100011", 
    89 => "10111101110001100000110101100000", 
    90 => "10111101001101010111000101100110", 
    91 => "00111101111101101011001000101001", 
    92 => "00111110001001001111001011110001", 
    93 => "00111100100100101111001011101100", 
    94 => "00111100011101011010110001010101", 
    95 => "10111110000110001111110000001101", 
    96 => "00111101110110111100101010010111", 
    97 => "00111011111111101010101010010101", 
    98 => "10111101000100101101111110100001", 
    99 => "10111101100010010101011100000100", 
    100 => "00111101100011001001001010001101", 
    101 => "00111101001010111000001110100111", 
    102 => "00111101010011001110111011000110", 
    103 => "00111101100010111001101001110101", 
    104 => "00111101010011010000111110110011", 
    105 => "10111101010101000001100000000000", 
    106 => "10111100010110110010110000001011", 
    107 => "00111101001011000110010000100111", 
    108 => "00111101110001011101010110010111", 
    109 => "10111100101100000111110101000001", 
    110 => "00111101100011011110011000101111", 
    111 => "00111101110011010000100010010010", 
    112 => "00111101101110111100001111101110", 
    113 => "00111100011001100010001001110100", 
    114 => "00111101011000110100010101001010", 
    115 => "00111110000010100110011111101000", 
    116 => "10111011110001111010000000101000", 
    117 => "10111101100010000100011011110110", 
    118 => "00111101100001101001001101000111", 
    119 => "00111101001100001011010110010000" );


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

entity inference_conv2d_f3_4_1_12 is
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

architecture arch of inference_conv2d_f3_4_1_12 is
    component inference_conv2d_f3_4_1_12_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_1_12_rom_U :  component inference_conv2d_f3_4_1_12_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

