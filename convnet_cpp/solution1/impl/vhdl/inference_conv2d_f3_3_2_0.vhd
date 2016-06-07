-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_2_0_rom is 
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


architecture rtl of inference_conv2d_f3_3_2_0_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101111001000110011100111000", 
    1 => "10111100110111110110110100011000", 
    2 => "10111101000000000011000000000110", 
    3 => "10111110000001111011100001001110", 
    4 => "10111101100100001010101000000111", 
    5 => "00111100110101100100101010001111", 
    6 => "10111101111111011100011000011001", 
    7 => "10111101110000101110011000000110", 
    8 => "00111101101110111100110100011011", 
    9 => "10111101101001010111010011011100", 
    10 => "10111101111101010100101010000000", 
    11 => "10111110010101011011001111100001", 
    12 => "00111100000010011011001001010001", 
    13 => "10111110000100010111011001010111", 
    14 => "00111101011010011001101100011111", 
    15 => "00111110001111000111110101011111", 
    16 => "10111101001001111010110000010110", 
    17 => "00111101000101100101011111111011", 
    18 => "00111101100010001010100001101101", 
    19 => "10111110001010011000101111111000", 
    20 => "00111101110101010000111010111011", 
    21 => "10111101100010011011010000100001", 
    22 => "00111101011000001001110011111001", 
    23 => "00111101000111101100111011011101", 
    24 => "00111101101110001110110111100101", 
    25 => "00111101101000011100001111010101", 
    26 => "00111100101001011101001001010111", 
    27 => "00111100110101000000010001100100", 
    28 => "10111110001011011001100110001001", 
    29 => "10111101101001001010010010010000", 
    30 => "10111101101100010010111000100110", 
    31 => "00111101111101001100100001111010", 
    32 => "00111110000010111011111101010001", 
    33 => "10111101110000010101000000010010", 
    34 => "00111101101001011100011110001010", 
    35 => "10111101000110101010110000000011", 
    36 => "10111101100010110101011011010011", 
    37 => "10111110000100100110000100111001", 
    38 => "00111110000111101111010000010111", 
    39 => "00111101111000110000011111110010", 
    40 => "00111101111110001111110011010110", 
    41 => "00111100101010011101010011100110", 
    42 => "00111101100011001110100100101010", 
    43 => "10111110010000111011011000000011", 
    44 => "10111110000000101011011000101000", 
    45 => "00111110000100010001111000000000", 
    46 => "00111110010001111100000101111011", 
    47 => "00111101111001111100011000110010", 
    48 => "00111101011001100011101001000001", 
    49 => "10111100110001011001100000100101", 
    50 => "10111100100010011110100111111001", 
    51 => "00111101010000001001000100000101", 
    52 => "10111100011100000010000010001111", 
    53 => "00111110000010100101010000111111", 
    54 => "00111101011100001011101011101001", 
    55 => "10111100110001001111111101111001", 
    56 => "10111100011101111001110010000100", 
    57 => "10111101000011000000100101011000", 
    58 => "10111110010100011010111000101110", 
    59 => "10111110010111000001000000001110", 
    60 => "10111101011101110001001001010000", 
    61 => "00111101100010100111111010011100", 
    62 => "10111101011011101010110101011101", 
    63 => "10111101010011001010101100111111", 
    64 => "10111101100110000011101001000110", 
    65 => "00111100000110000111100100111110", 
    66 => "00111101011001100110000101000011", 
    67 => "10111110000001011010010010101101", 
    68 => "00111100110011111110011000100111", 
    69 => "00111101111111101011001100010100", 
    70 => "10111101111000100100110111010011", 
    71 => "10111101101100100000111010011000", 
    72 => "10111101000111011110111100011001", 
    73 => "00111101100101111110110011001001", 
    74 => "00111100100100111110011001100111", 
    75 => "10111101010011100111101011101101", 
    76 => "00111010000101000001011110001011", 
    77 => "00111100100101101110010101010101", 
    78 => "00111101101000010000110010100101", 
    79 => "10111100111000100001101101111110", 
    80 => "10111100111101111010110011100000", 
    81 => "10111101110101001010001000110100", 
    82 => "10111110000011000000111111001011", 
    83 => "00111101001111111100110011101111", 
    84 => "00111101111010011000110111001110", 
    85 => "10111110001101000110110000110011", 
    86 => "10111101110111110010011011110010", 
    87 => "10111110001100111100110100010100", 
    88 => "10111100111100110111101011101100", 
    89 => "00111110011000101001000001101001", 
    90 => "10111100101011101011000101011001", 
    91 => "10111101111110011100111000000111", 
    92 => "00111100101011110100011000001001", 
    93 => "10111101111001111101011001110011", 
    94 => "00111101000101100001010101001011", 
    95 => "00111101000100011000011000011111", 
    96 => "00111100100010011110010110010010", 
    97 => "10111100000010100001011101100110", 
    98 => "10111101011011111000011010100001", 
    99 => "10111100001100001011100100000101", 
    100 => "00111101111000101110011001100100", 
    101 => "10111110001111110110001100111101", 
    102 => "00111110000000101000111001010000", 
    103 => "10111101111010010011010110111001", 
    104 => "10111110011101111010000101111111", 
    105 => "10111101101111100101110011110000", 
    106 => "00111100101010011101111001010110", 
    107 => "00111101000110001111010111010000", 
    108 => "10111101001110011000111110111110", 
    109 => "10111100010101011011001110010001", 
    110 => "10111101010110101011000000011010", 
    111 => "10111101011101110110101110100111", 
    112 => "00111101110100110011011101100101", 
    113 => "00111100100000000100011001110111", 
    114 => "00111011001101001010101000010110", 
    115 => "10111110000101101010101101011000", 
    116 => "10111101100000000110000100011001", 
    117 => "00111101101001101100011101100101", 
    118 => "00111100010001110010100111110110", 
    119 => "00111011111111001010110110100110" );


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

entity inference_conv2d_f3_3_2_0 is
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

architecture arch of inference_conv2d_f3_3_2_0 is
    component inference_conv2d_f3_3_2_0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_2_0_rom_U :  component inference_conv2d_f3_3_2_0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

