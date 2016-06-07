-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_2_3_rom is 
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


architecture rtl of inference_conv2d_f3_4_2_3_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101000010000110001000011111", 
    1 => "10111010100100111110111000110100", 
    2 => "00111101110010100011011110111010", 
    3 => "00111100111001110110001110000111", 
    4 => "00111100110000000001101000110111", 
    5 => "10111011010100101011000110111110", 
    6 => "10111101010110010101011011001110", 
    7 => "10111110001100011101011010001100", 
    8 => "00111101001010100101000101011101", 
    9 => "10111101000000001110001110100101", 
    10 => "10111101100000001001011110000101", 
    11 => "00111110001101001111110001100001", 
    12 => "00111101111011110100101011011100", 
    13 => "10111101111100000111011000111010", 
    14 => "00111101101000111101101011101011", 
    15 => "10111100101001101000000110101010", 
    16 => "00111101010011011010010001100011", 
    17 => "00111101101011000101110100010011", 
    18 => "00111101001100001010101101100100", 
    19 => "10111101100000111111101101101101", 
    20 => "10111101010111111001111011001100", 
    21 => "10111101011100010111011000010100", 
    22 => "10111101100101111010101111010011", 
    23 => "10111101100010001010001111111001", 
    24 => "10111100001011000000011101011010", 
    25 => "00111110000010000110111011000001", 
    26 => "10111101010100010110001111010110", 
    27 => "00111110000001100101101111101010", 
    28 => "10111101100100101000000100100111", 
    29 => "10111110000001101101111001110110", 
    30 => "10111100110001100111100001010101", 
    31 => "00111101101010011001101001100011", 
    32 => "00111101010011100000101100001011", 
    33 => "00111101000011110000101011100101", 
    34 => "00111101111100010110101110011000", 
    35 => "10111101111010011111010000001010", 
    36 => "10111100101000100011110001101011", 
    37 => "10111101000111111010110100001111", 
    38 => "00111101110000110111101000100011", 
    39 => "10111110001001110010100001100011", 
    40 => "00111100101100110010110001111101", 
    41 => "00111101100111100000010101111100", 
    42 => "10111011001000110100111101111011", 
    43 => "00111100101011011011101001001101", 
    44 => "10111101101000011101100111001101", 
    45 => "00111101110100111110110111011001", 
    46 => "00111110001011111100011100011101", 
    47 => "00111101101110000110101000111111", 
    48 => "00111101100111101011011110100011", 
    49 => "10111101000111010010110110111110", 
    50 => "00111001110110111000100011011011", 
    51 => "00111101101010010000110101000000", 
    52 => "00111110000000001111000011101001", 
    53 => "10111100000111101111110101011100", 
    54 => "00111101100011000111111000101000", 
    55 => "10111110000110101110010110111101", 
    56 => "10111101100010001010001101001010", 
    57 => "00111101011110010011000101111010", 
    58 => "10111101101000011000001000001001", 
    59 => "00111100010111011000111111111110", 
    60 => "00111110001110001101011100010111", 
    61 => "00111101011000111011000000100011", 
    62 => "00111011110001100110011100011000", 
    63 => "00111101010111100110110010000010", 
    64 => "10111101101110011011110001000001", 
    65 => "10111101111011110001110000110010", 
    66 => "00111101110111001010010000101011", 
    67 => "10111101101100001000110110110111", 
    68 => "00111100110100100101101000001010", 
    69 => "00111100110010010101111000011000", 
    70 => "10111101110000010000001010101111", 
    71 => "00111110000101110100110101011001", 
    72 => "10111110000100001010110011000001", 
    73 => "00111100100001110010110001000100", 
    74 => "00111101110101101010001011110101", 
    75 => "10111110000100010010011111110110", 
    76 => "10111101110001001111011110001110", 
    77 => "00111100010001010000011111011100", 
    78 => "10111100100110110000111000001110", 
    79 => "00111010110010110100000010000110", 
    80 => "10111101100000011101101011001100", 
    81 => "10111101110011110011010011010111", 
    82 => "10111101100110110011011100101001", 
    83 => "00111110000011001001101000110101", 
    84 => "10111101001100110001110101100100", 
    85 => "10111101010100001010111101111011", 
    86 => "00111100010001101101001100100011", 
    87 => "10111100100101110110011110010000", 
    88 => "10111110001010010101101001101100", 
    89 => "00111101100010000101110000010111", 
    90 => "00111100011111011000110010001000", 
    91 => "10111101000000011111100101001111", 
    92 => "10111101110101110111111010100010", 
    93 => "10111100101010000111011101001101", 
    94 => "10111101000101100111001111100000", 
    95 => "00111101100011110011001110111101", 
    96 => "10111101101011111011010110000000", 
    97 => "00111101110011010001100101011001", 
    98 => "00111011001010111000101000000111", 
    99 => "00111101110001011111010100110101", 
    100 => "00111011111101011011001001001001", 
    101 => "00111101110100111101011111010100", 
    102 => "10111101100010111011011100110001", 
    103 => "00111011110110010110101111000010", 
    104 => "10111100110110110011011010111101", 
    105 => "10111101000010101011001001000000", 
    106 => "00111110010011111101110111101100", 
    107 => "10111100111101001011110100001100", 
    108 => "10111100110111001110101001010001", 
    109 => "00111101000001001101011001011110", 
    110 => "10111011110001111000101111110000", 
    111 => "10111110000100000110011000111100", 
    112 => "00111101101111000001000100101000", 
    113 => "00111110000111101001111001011110", 
    114 => "10111100110010000100010000111100", 
    115 => "10111100101001101110101111000111", 
    116 => "10111101100101101000001110011010", 
    117 => "00111100110010111011111000001111", 
    118 => "10111100111011100110011000001111", 
    119 => "00111101000000010110100010110110" );


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

entity inference_conv2d_f3_4_2_3 is
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

architecture arch of inference_conv2d_f3_4_2_3 is
    component inference_conv2d_f3_4_2_3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_2_3_rom_U :  component inference_conv2d_f3_4_2_3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

