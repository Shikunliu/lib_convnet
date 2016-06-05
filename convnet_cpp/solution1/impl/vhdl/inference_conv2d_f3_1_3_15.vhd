-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_3_15_rom is 
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


architecture rtl of inference_conv2d_f3_1_3_15_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101101011110010010101000100", 
    1 => "00111110000100101101011110110110", 
    2 => "10111000011101111001100100000101", 
    3 => "00111101101111101011011001000110", 
    4 => "10111101000100110010100100000111", 
    5 => "00111010110010111111111001110001", 
    6 => "00111110000011110111101001001110", 
    7 => "00111110001111011000000110101110", 
    8 => "10111100000010010110010011000011", 
    9 => "10111101001000110100111001001110", 
    10 => "10111100011111000111111101000010", 
    11 => "00111101111010101110101001110100", 
    12 => "10111101011111100011100100000110", 
    13 => "10111101011110100110110000001101", 
    14 => "00111011101101011101001101001100", 
    15 => "00111101000100001111101110011011", 
    16 => "00111100110000001001101110011100", 
    17 => "10111101001111100111111101100010", 
    18 => "10111101100001110101001100011110", 
    19 => "00111101110000000000000011110010", 
    20 => "00111101100010011111001110000100", 
    21 => "00111101101000000000010011101110", 
    22 => "00111110000101101100101010001010", 
    23 => "10111101101110000100111000110011", 
    24 => "00111101101110101111011001101001", 
    25 => "00111101110001100100011001011110", 
    26 => "00111011110001111011010010100000", 
    27 => "10111101100001001100111000100011", 
    28 => "10111110001010011111001101000001", 
    29 => "00111100010001100101110011011100", 
    30 => "10111100101100111001010010000010", 
    31 => "10111101011000110110101010111001", 
    32 => "10111101111110000110111101001000", 
    33 => "00111101111001011110111101100011", 
    34 => "00111101110110011001110010111111", 
    35 => "10111100001000101100101100010001", 
    36 => "00111101110100111101010110111011", 
    37 => "10111110010101011011001000001100", 
    38 => "00111110001011110110111101001100", 
    39 => "00111110000110101111111110110000", 
    40 => "00111101101000101010101010000101", 
    41 => "00111101110111011000010110011101", 
    42 => "00111100110101000100111110101110", 
    43 => "10111101110010010010100100111111", 
    44 => "10111110000001110101101100111110", 
    45 => "10111100100110000000010111100110", 
    46 => "00111110000000010100010000000011", 
    47 => "10111101011011101010010110011010", 
    48 => "00111101101001010111100001000101", 
    49 => "00111011100000100010101000100111", 
    50 => "00111101111001011101111100100010", 
    51 => "10111101101001010000011010110101", 
    52 => "00111011100100001010101111110101", 
    53 => "00111101111110000101111010000001", 
    54 => "00111101000000000100001010010110", 
    55 => "00111101100100011011011110111000", 
    56 => "00111101100001011010101111110111", 
    57 => "00111110000100100111101110110011", 
    58 => "10111101100010010110010110100101", 
    59 => "10111100100110100011001010110001", 
    60 => "10111101100001001110101011011110", 
    61 => "00111100110110001000111100001101", 
    62 => "00111101101011000000111001100001", 
    63 => "10111101010001001111001110111010", 
    64 => "10111101100000111000010100011000", 
    65 => "00111110000000100000001011011010", 
    66 => "10111101101110001001101011110100", 
    67 => "00111100110101111110010010001110", 
    68 => "10111101011110101100111001101000", 
    69 => "00111001100011010010001000110100", 
    70 => "00111101100010000001000010110011", 
    71 => "00111110001100011010011110100000", 
    72 => "10111110000010111011111110010100", 
    73 => "10111100110111111010001101101001", 
    74 => "10111100111101001011011000100000", 
    75 => "00111110000010110111100100010000", 
    76 => "00111101101101011110011100101000", 
    77 => "00111101101100110111110100000101", 
    78 => "00111100000011110111011101010111", 
    79 => "10111101011100011010111001001000", 
    80 => "10111100000000101011010000111010", 
    81 => "10111101001110111110011001000101", 
    82 => "00111100101101000000100111110011", 
    83 => "10111011100111100101011101011001", 
    84 => "00111101110111011010011000011110", 
    85 => "00111101000100110000010000000100", 
    86 => "10111101101011000001100011010000", 
    87 => "00111110000011101100110110001110", 
    88 => "10111101111000111010100001100001", 
    89 => "00111011111000010101011001011100", 
    90 => "10111101110010101010001001000011", 
    91 => "00111101000110100101101000000100", 
    92 => "00111100110100100111011011000101", 
    93 => "10111101111000100001111100101010", 
    94 => "10111101111111001001100000011100", 
    95 => "10111101010101000001010110110001", 
    96 => "10111101101111101101110111001110", 
    97 => "10111100100101100100100000001011", 
    98 => "10111101101100111001011100010100", 
    99 => "10111100000110000010111000001010", 
    100 => "00111100101111100010011001110111", 
    101 => "10111101110011110011101010011011", 
    102 => "10111100111010011011001100100010", 
    103 => "00111101100110111011001111111110", 
    104 => "00111101101100000011100110010001", 
    105 => "10111101110100101111111000111111", 
    106 => "10111110001010011011000100110001", 
    107 => "10111101011000100111100000010101", 
    108 => "10111110000100110010010010000101", 
    109 => "00111101100010110111111000110011", 
    110 => "10111101000110010000111010101010", 
    111 => "10111101110001101110010001111110", 
    112 => "10111101110110011111001111000111", 
    113 => "10111101101111010011001001011011", 
    114 => "00111100110101001010000000110110", 
    115 => "00111100111100011000000011100001", 
    116 => "10111110001100110001010010000111", 
    117 => "10111110000111100101101111001000", 
    118 => "00111101000111110100100101110001", 
    119 => "00111110001000101000011100111100" );


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

entity inference_conv2d_f3_1_3_15 is
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

architecture arch of inference_conv2d_f3_1_3_15 is
    component inference_conv2d_f3_1_3_15_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_3_15_rom_U :  component inference_conv2d_f3_1_3_15_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


