-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_2_0_6_rom is 
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


architecture rtl of inference_conv2d_f3_2_0_6_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101101110111111110000000111", 
    1 => "00111101100000110001111100101100", 
    2 => "00111101000101010011100100110010", 
    3 => "10111100101111100111011010010011", 
    4 => "10111101100000110010010111111101", 
    5 => "00111101100101000011111001111011", 
    6 => "10111101111100010111010110001110", 
    7 => "10111011101000010110110010110111", 
    8 => "00111101110000111101111101111011", 
    9 => "00111100010010001101110000010010", 
    10 => "00111101101001001100001001010111", 
    11 => "10111100101111010001001010110000", 
    12 => "00111100100011001100000101000100", 
    13 => "10111101010000001000010101000110", 
    14 => "10111101101011111101100101110111", 
    15 => "10111100111101010100110011101001", 
    16 => "10111100100110100001010110001011", 
    17 => "00111100001010100101100010011001", 
    18 => "10111101001100111001111000101000", 
    19 => "10111101101001111111110101011010", 
    20 => "00111110000110010101110111010101", 
    21 => "10111101000000010110011010000010", 
    22 => "10111101110011011000101110100100", 
    23 => "00111011100110010010100000000101", 
    24 => "10111110001011100110111100101111", 
    25 => "10111100100101000111010011001100", 
    26 => "10111101011100110011101000011111", 
    27 => "00111110000000111001001111101110", 
    28 => "10111101100011100100100010100110", 
    29 => "00111100100010100010110010101010", 
    30 => "00111010001010100001000000100011", 
    31 => "10111101010110101011100110001010", 
    32 => "10111101110010011110110010110011", 
    33 => "00111110001111110000100110010110", 
    34 => "00111101000010100111101001111000", 
    35 => "10111101100110011011011011101000", 
    36 => "00111101100110001101001011001010", 
    37 => "00111110000000110000101010010001", 
    38 => "00111110010011000000011010011110", 
    39 => "00111101000000001110011110111100", 
    40 => "00111101000000101110000101000001", 
    41 => "10111011111010001011101101000000", 
    42 => "00111101100110001101100000110001", 
    43 => "00111101100011011000010011010011", 
    44 => "10111101110010011101110111001111", 
    45 => "00111101001000011001001010100111", 
    46 => "00111100101110011101010111100101", 
    47 => "10111100110001000111010000111001", 
    48 => "10111110001100111011100011100101", 
    49 => "10111101100101010011011111100011", 
    50 => "10111101001001010001100110010101", 
    51 => "10111100100100011101000111101111", 
    52 => "00111100000111100011010101001010", 
    53 => "00111101010101001000010000110110", 
    54 => "10111110000010111001011011110010", 
    55 => "00111001100000000101001000001111", 
    56 => "00111110000001110101000001111111", 
    57 => "10111101100010100110111100010111", 
    58 => "00111100101011010001101010000000", 
    59 => "00111101001110010001001010100110", 
    60 => "10111100100001110110110101111101", 
    61 => "00111100110010100100011011100001", 
    62 => "00111101110000010110101000010011", 
    63 => "10111110011000111010001011100000", 
    64 => "00111011111001011101110011111111", 
    65 => "10111101100001101011001101010000", 
    66 => "10111101001111010010110100000010", 
    67 => "00111101110110011110101101100100", 
    68 => "10111110000100000010111010101001", 
    69 => "00111110000101100000100001001010", 
    70 => "00111101001111101001110010001000", 
    71 => "10111100011110011000110100011111", 
    72 => "00111101111001000001101010101100", 
    73 => "10111101010110010010000010011000", 
    74 => "10111101011000110001000101100010", 
    75 => "10111010100111011100100001111101", 
    76 => "10111100101111111101000100111100", 
    77 => "10111110001011110011010101011101", 
    78 => "00111110001000000101110010001001", 
    79 => "10111100111101001101111110100110", 
    80 => "10111011010010001001101010111001", 
    81 => "00111101110100000100111001100010", 
    82 => "10111110010111111000010100001110", 
    83 => "10111100000011010000010101101100", 
    84 => "00111100011110100001011001000111", 
    85 => "10111110001010101110111010100110", 
    86 => "10111101011110011010100110001010", 
    87 => "10111101000000010000000001111011", 
    88 => "00111101000100101110100100101100", 
    89 => "00111101110011000001100001111111", 
    90 => "00111100111010110010111010111000", 
    91 => "10111101000010000101100110000110", 
    92 => "00111101000001001110010100100111", 
    93 => "10111100010101011010001110100001", 
    94 => "10111100000001000000111101111001", 
    95 => "10111110000000111010001100100011", 
    96 => "00111101111111101101101111111001", 
    97 => "00111101101010001011000111101011", 
    98 => "00111100110111110101100100101100", 
    99 => "10111101101100011111110100010101", 
    100 => "00111110000101101001010000000011", 
    101 => "10111100011111011010001011000011", 
    102 => "10111101100011001011100001011010", 
    103 => "00111101100010111101111110101010", 
    104 => "00111101101011010001011100110010", 
    105 => "00111101101000001011100000100001", 
    106 => "00111101110010000100101000000001", 
    107 => "10111101110110100101001110111001", 
    108 => "10111101000101001100111110000000", 
    109 => "10111011110100111100010100001111", 
    110 => "00111110000001011001101010110111", 
    111 => "10111011011010101111101110110111", 
    112 => "10111101101011000000101000010100", 
    113 => "10111101110010000110011011010111", 
    114 => "10111101011111011110010100100011", 
    115 => "00111101110000110101100110101111", 
    116 => "10111101101000111001001101110110", 
    117 => "00111100100111101010111001000001", 
    118 => "10111100000100100110000011001011", 
    119 => "10111101100011101001110010001000" );


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

entity inference_conv2d_f3_2_0_6 is
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

architecture arch of inference_conv2d_f3_2_0_6 is
    component inference_conv2d_f3_2_0_6_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_2_0_6_rom_U :  component inference_conv2d_f3_2_0_6_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


