-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_1_14_rom is 
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


architecture rtl of inference_conv2d_f3_1_1_14_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110000001101111011100011010", 
    1 => "10111110001111110000010000010100", 
    2 => "00111110010110011110001000110111", 
    3 => "10111100110010101010100100000110", 
    4 => "00111100101001011100000111000110", 
    5 => "00111101101000100011111111000110", 
    6 => "00111100110011000010110001011110", 
    7 => "10111110001011111010100010110101", 
    8 => "00111100001010000110001101100001", 
    9 => "00111110001111111011011100100000", 
    10 => "00111110001011000111110111100101", 
    11 => "00111100001010001000001110101101", 
    12 => "10111101100011111010010010101011", 
    13 => "00111010110101011001100010100011", 
    14 => "10111100111101101100111011001001", 
    15 => "00111101010010011001011010011101", 
    16 => "10111101111110111010100010000010", 
    17 => "00111110000000110111000101010100", 
    18 => "00111110001110001111111011101111", 
    19 => "00111110001100000110100101100010", 
    20 => "00111101101101010001001011111010", 
    21 => "10111110000110100100101000000110", 
    22 => "10111110000110011011101110101110", 
    23 => "10111100001011101111100010100110", 
    24 => "10111110000011100100100001100010", 
    25 => "00111101101010000001001111110011", 
    26 => "10111101100110001101001101101011", 
    27 => "00111101101101111000110001010001", 
    28 => "10111101101110010110100111111111", 
    29 => "00111001011101011001010010101000", 
    30 => "10111101110011100000110010011110", 
    31 => "00111101001111010001000100111000", 
    32 => "00111100000011010110110000011010", 
    33 => "10111101110011011100101010001110", 
    34 => "00111100010010010111000111001110", 
    35 => "00111011011001010101000000100110", 
    36 => "00111101000000001100101110100010", 
    37 => "00111110010011010101010010010111", 
    38 => "10111011101110110011111010011010", 
    39 => "10111110001000011111111101110001", 
    40 => "00111100110111101101110110100110", 
    41 => "10111110010010000100001011111010", 
    42 => "00111100101100000001101110000110", 
    43 => "00111101111000101110010011010010", 
    44 => "00111101010111000101111111001101", 
    45 => "00111101001111001000100001000111", 
    46 => "00111100010001100100000011000010", 
    47 => "10111110000001001011001001110100", 
    48 => "00111110000001100000110010111111", 
    49 => "00111100010010100100111110101111", 
    50 => "10111110000101111011101100110000", 
    51 => "00111010101100110101000001111010", 
    52 => "00111100100000110101001100111100", 
    53 => "00111110010111010010110000111000", 
    54 => "10111101100111110100011110000001", 
    55 => "00111110000011111001100100111101", 
    56 => "10111101100101011110110011111010", 
    57 => "10111101010111010010110000101011", 
    58 => "10111101100001011001110010011010", 
    59 => "10111101001001100111100011000000", 
    60 => "10111110000000010110010100001010", 
    61 => "10111101101111111110100000011000", 
    62 => "10111101001110101111101101111111", 
    63 => "10111101001011110110110111111100", 
    64 => "10111101110000010000010010111010", 
    65 => "10111100100000011100001001000010", 
    66 => "00111101110010111111111111001110", 
    67 => "10111101101101100111110100100111", 
    68 => "00111101110111001011000000111010", 
    69 => "10111101100110000010110000010001", 
    70 => "10111110001100010011011001100001", 
    71 => "10111100111001001110001101111010", 
    72 => "10111100110101111110000001011100", 
    73 => "10111101110011110100111100001110", 
    74 => "10111110000101100010110110000100", 
    75 => "10111101110000000000111001000011", 
    76 => "10111101101010011001110001111100", 
    77 => "10111100000000101001011111110101", 
    78 => "10111101010000001111111001001000", 
    79 => "10111110001111100111001111100111", 
    80 => "00111101010111100101110000100110", 
    81 => "10111101010111101001001001011101", 
    82 => "10111110000101110111100110100111", 
    83 => "00111101110101011100111110101011", 
    84 => "10111101011011100111110111110111", 
    85 => "10111110010001100011110100111110", 
    86 => "00111100010111011010100010111101", 
    87 => "00111101101101101010111001010101", 
    88 => "00111101110000101001010001001010", 
    89 => "10111101101000111000111000110111", 
    90 => "00111110000010111111110110110101", 
    91 => "00111101001000001100110100110101", 
    92 => "10111110000100000100110010001100", 
    93 => "00111101011011110001110110001111", 
    94 => "10111101011011011001100110010110", 
    95 => "00111101110101111001001110011010", 
    96 => "10111101110001001010010111101101", 
    97 => "00111101101000000110011101100100", 
    98 => "00111110000000110100000010010010", 
    99 => "00111001101101101101110111001101", 
    100 => "10111011110110010011000000001000", 
    101 => "10111101001000111010100110100011", 
    102 => "10111101100111100011111110010100", 
    103 => "00111001001010100110001101101011", 
    104 => "00111110010011001111010110110010", 
    105 => "00111101001100101011000000100001", 
    106 => "00111101101111101100111011101011", 
    107 => "10111101011101110001101000010011", 
    108 => "10111101001010100001110111000110", 
    109 => "00111101110011000000100010000010", 
    110 => "10111011011100000000001101011110", 
    111 => "10111101111100101100011000100110", 
    112 => "10111101100111100100011001110010", 
    113 => "00111100101100100010111010000110", 
    114 => "10111101110011011110101110010110", 
    115 => "00111101100001110010101010110010", 
    116 => "10111110000101001010101111100111", 
    117 => "00111101001111001101000100100111", 
    118 => "00111101000001100110001101110111", 
    119 => "00111110001001110101000000111100" );


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

entity inference_conv2d_f3_1_1_14 is
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

architecture arch of inference_conv2d_f3_1_1_14 is
    component inference_conv2d_f3_1_1_14_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_1_14_rom_U :  component inference_conv2d_f3_1_1_14_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


