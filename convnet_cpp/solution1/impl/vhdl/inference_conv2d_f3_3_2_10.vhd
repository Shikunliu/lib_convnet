-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_2_10_rom is 
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


architecture rtl of inference_conv2d_f3_3_2_10_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111010101010001100001100000010", 
    1 => "00111101110010101110001100101011", 
    2 => "00111101011111001001100110010100", 
    3 => "10111110000101101111001011101001", 
    4 => "00111101101000001011000110101110", 
    5 => "10111101100001011110100111000111", 
    6 => "00111101110101100010011110111111", 
    7 => "00111100110110101101011100011100", 
    8 => "10111011101011101001011010010110", 
    9 => "00111100101110011001010110111000", 
    10 => "10111100001111011001001111011111", 
    11 => "10111101101011010001111000000011", 
    12 => "10111101111100101010010100011110", 
    13 => "10111101000100110110110111010001", 
    14 => "00111101001001101010110111001111", 
    15 => "00111110000111100000110011100001", 
    16 => "00111110000111011101001100110101", 
    17 => "10111110000011100000110111101101", 
    18 => "10111100100000011010111101100010", 
    19 => "10111101000110101011000111100010", 
    20 => "10111100101001001011011011001110", 
    21 => "10111100101000000110101111100110", 
    22 => "00111101111000110010001110111100", 
    23 => "00111110010000101101010001001110", 
    24 => "10111101000001010101100011101010", 
    25 => "10111101100001100101001111111111", 
    26 => "00111011111010111110110011100011", 
    27 => "00111100111100010000110000010010", 
    28 => "00111101000011111001100001011001", 
    29 => "10111110001001001111110000011110", 
    30 => "00111101010100100000000001111110", 
    31 => "10111101111100010011111100000111", 
    32 => "00111101010001101001011001010010", 
    33 => "10111101011101100000001110010010", 
    34 => "00111100111110001100111001001000", 
    35 => "10111101101011100101011010110011", 
    36 => "10111011111101000011001110101111", 
    37 => "00111101100110101110111100111010", 
    38 => "00111110000010000001010110100000", 
    39 => "00111101100001000101111111101110", 
    40 => "10111101111011011110110010100010", 
    41 => "00111110001100000011011011001010", 
    42 => "10111101101011110010010111110011", 
    43 => "10111101100000010111110000101001", 
    44 => "10111101101110010011011110101010", 
    45 => "00111101111011010110010111100100", 
    46 => "10111101101011111101101111010011", 
    47 => "00111101110101011110011111001001", 
    48 => "10111101110111111010010001000000", 
    49 => "10111101100000011001111001110011", 
    50 => "00111100110111110111101000011001", 
    51 => "00111101011010101011111101000001", 
    52 => "00111101100000011000111010101011", 
    53 => "00111101101100110111001000111000", 
    54 => "10111101111010000010110001101111", 
    55 => "00111100011001000101111111111100", 
    56 => "00111100101101011101100001011111", 
    57 => "00111101100101100100000001010110", 
    58 => "10111101101111000000110111001101", 
    59 => "00111101100111011110001011101111", 
    60 => "00111101100111101000111100110111", 
    61 => "10111101001001110000100100100100", 
    62 => "00111100011101000011011111100000", 
    63 => "00111101101101110100000101110011", 
    64 => "10111100101010100000001000110010", 
    65 => "10111100101010010001100011111110", 
    66 => "00111100001100101100101001011000", 
    67 => "10111101011001110000000000111010", 
    68 => "10111110000011101110100111011101", 
    69 => "00111110000110110100101100110000", 
    70 => "00111110000101101111100100110011", 
    71 => "00111101100011101000111010010110", 
    72 => "10111100110111001010000111000010", 
    73 => "10111100110001100110110100000010", 
    74 => "00111101001000011101101010010110", 
    75 => "00111101100111111110110011111000", 
    76 => "00111110000111010111001100000000", 
    77 => "10111100101011001011011101001110", 
    78 => "10111100111111101010101011001011", 
    79 => "00111110001001111011101100110000", 
    80 => "00111100111100101100000001000111", 
    81 => "10111110001001011110100001001111", 
    82 => "10111100111010001110110111001010", 
    83 => "10111101001111100010010110100000", 
    84 => "10111101101101101100011101010111", 
    85 => "00111101101011100011011000100100", 
    86 => "00111101111010011010111101011100", 
    87 => "00111100011011101100010101000101", 
    88 => "00111101100011001010011101000011", 
    89 => "00111101001110110100111001110000", 
    90 => "10111101110110011011111111011111", 
    91 => "10111100011111000001100111000001", 
    92 => "00111110001001100100001011000000", 
    93 => "10111101100000100111011110001111", 
    94 => "10111101111000001001011001111000", 
    95 => "10111101100100001110010101100000", 
    96 => "00111100111000001011110101111010", 
    97 => "10111011110010001011001111001110", 
    98 => "00111100110110011111000000000001", 
    99 => "10111101001110111010000101111100", 
    100 => "10111101110011101011010101110000", 
    101 => "00111100100010010111110101010111", 
    102 => "10111101101111000010100011001101", 
    103 => "00111101111011110001001101001001", 
    104 => "10111100110011011110000010010011", 
    105 => "00111110000111001010000100000110", 
    106 => "00111101111111000111100000100001", 
    107 => "10111011101010110100000000100000", 
    108 => "00111100100010100110111100100100", 
    109 => "00111101010010101100111110110111", 
    110 => "00111110000000010001010001001101", 
    111 => "10111100010110000011011011111001", 
    112 => "00111101101000111000100000100010", 
    113 => "00111101100111101000100110110110", 
    114 => "10111101110010001011001100111010", 
    115 => "00111101011101110101000010110100", 
    116 => "00111110000000100101000000101111", 
    117 => "00111101001010000100010111001111", 
    118 => "10111100111111100001111111000001", 
    119 => "00111100111001110101000111101001" );


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

entity inference_conv2d_f3_3_2_10 is
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

architecture arch of inference_conv2d_f3_3_2_10 is
    component inference_conv2d_f3_3_2_10_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_2_10_rom_U :  component inference_conv2d_f3_3_2_10_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

