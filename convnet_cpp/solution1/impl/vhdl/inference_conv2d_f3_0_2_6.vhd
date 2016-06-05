-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_2_6_rom is 
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


architecture rtl of inference_conv2d_f3_0_2_6_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101010011000110010100110011", 
    1 => "10111101111000101111101111100011", 
    2 => "10111101101011011010111010110111", 
    3 => "10111011100010011010011001011100", 
    4 => "10111101101100011010001011001101", 
    5 => "00111101100000001101000001011010", 
    6 => "00111101110000001011010000110011", 
    7 => "00111101111110011111000000011100", 
    8 => "10111110001010011010001101001101", 
    9 => "00111110010000110100110011100100", 
    10 => "10111101011110011100011000101010", 
    11 => "10111101000100100011100000010001", 
    12 => "00111101111011011111110101101001", 
    13 => "10111101011011001100011000010111", 
    14 => "00111101101011010100000111111010", 
    15 => "10111110000001010110110001010001", 
    16 => "00111101110000111101010101111000", 
    17 => "00111101110011010000000100111011", 
    18 => "10111101111110010101000010111001", 
    19 => "10111110000010001011010000111001", 
    20 => "10111101001110111000001100010011", 
    21 => "10111101100001000101011000111011", 
    22 => "00111110001000100110111100011110", 
    23 => "10111110010011101101000001110000", 
    24 => "00111101001111011101110000011110", 
    25 => "10111100100010110000010011100001", 
    26 => "10111101111001010010000101010111", 
    27 => "00111101011110011111101101010100", 
    28 => "00111100111001011000100010111011", 
    29 => "10111101111011111000101111011111", 
    30 => "10111101000000001110101101101000", 
    31 => "10111100111011100001010000010000", 
    32 => "10111110000011111000110001100101", 
    33 => "10111011100111010010011010101100", 
    34 => "00111100100111000101010111010111", 
    35 => "10111101110001011000101110101011", 
    36 => "10111110010010111001010011011001", 
    37 => "00111110010100000010011010001001", 
    38 => "00111101000101000101011000010011", 
    39 => "10111110011100000001100111110100", 
    40 => "10111110000001001111111010111101", 
    41 => "10111110001010100100001000101001", 
    42 => "10111110001001010101000100001101", 
    43 => "00111101110010101010101011110111", 
    44 => "10111101100001010000010111010001", 
    45 => "00111101110100111110010011101111", 
    46 => "10111101001000100111100100100001", 
    47 => "00111101101100100100010011101001", 
    48 => "00111101110001010111101100110100", 
    49 => "00111011010110000100010001001111", 
    50 => "00111100100110001110100001100100", 
    51 => "00111011110111100111010110010111", 
    52 => "00111110000000010101100000110010", 
    53 => "00111100001011101111111101011100", 
    54 => "00111101111100111001001010011111", 
    55 => "00111101011110110101000111100110", 
    56 => "10111100001010011000101000111101", 
    57 => "00111110001100101110001111000101", 
    58 => "00111101000011010110001111001100", 
    59 => "00111101001010101100101101010000", 
    60 => "10111110010100000001001101100110", 
    61 => "00111101110011110010101001011010", 
    62 => "00111110001101101001111010000000", 
    63 => "00111100111000110100101101011111", 
    64 => "00111101010100000001010010000000", 
    65 => "10111101110001001011011110100101", 
    66 => "00111011011000010111010111111100", 
    67 => "10111110001100011011111110111110", 
    68 => "00111101101001000111100110111010", 
    69 => "10111101000111000110001100001101", 
    70 => "00111110000000011010011111100011", 
    71 => "00111011100100011111010000001001", 
    72 => "00111100000010001001010100001111", 
    73 => "10111101100011110011100101100110", 
    74 => "00111110000000110000111111010000", 
    75 => "10111011010000011111001011111111", 
    76 => "00111110010110011011110000110100", 
    77 => "00111100110001000011010010101110", 
    78 => "10111101101101001010101011101000", 
    79 => "00111101111000010011101010010011", 
    80 => "10111101100011001010001000101101", 
    81 => "10111101111010111100010100010101", 
    82 => "00111101110111001110101111111111", 
    83 => "00111101100100010011100110111100", 
    84 => "10111101000101101000000101100111", 
    85 => "00111110001100101010010110100100", 
    86 => "00111110000000100000000111001101", 
    87 => "00111110011001011000011000000001", 
    88 => "00111101000100011000100100101010", 
    89 => "10111101001100110001110010001101", 
    90 => "10111101100111110001000110101001", 
    91 => "00111101101111011000001011001000", 
    92 => "00111110000011110101100111001101", 
    93 => "00111101110110111111011010100001", 
    94 => "10111100110111110000010000111101", 
    95 => "00111110001011000001110101101101", 
    96 => "10111101110100001010110101000111", 
    97 => "00111100011100101100101101100100", 
    98 => "00111011011011010101101001100001", 
    99 => "00111101110010111000111000111110", 
    100 => "00111101100111111011010010000001", 
    101 => "10111101000101010001110000001100", 
    102 => "10111101001011111111010000110100", 
    103 => "00111101100101010011010110000111", 
    104 => "10111101110100100111100110011010", 
    105 => "10111110001101111101011010110110", 
    106 => "00111110000110010000010001110001", 
    107 => "00111101000000101010010000011111", 
    108 => "00111101011010010011001001000011", 
    109 => "10111101100101111000100000000100", 
    110 => "00111110000111000001001001101010", 
    111 => "00111101110001000100000010000111", 
    112 => "10111100101001110000101110101000", 
    113 => "00111100001001011101100110101110", 
    114 => "00111101010110000000100110010001", 
    115 => "00111011101111110101100010110000", 
    116 => "10111110000100011100110100011100", 
    117 => "10111101100010111101111100010110", 
    118 => "10111100100011010000101101001100", 
    119 => "00111100101001001010001010101100" );


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

entity inference_conv2d_f3_0_2_6 is
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

architecture arch of inference_conv2d_f3_0_2_6 is
    component inference_conv2d_f3_0_2_6_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_2_6_rom_U :  component inference_conv2d_f3_0_2_6_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


