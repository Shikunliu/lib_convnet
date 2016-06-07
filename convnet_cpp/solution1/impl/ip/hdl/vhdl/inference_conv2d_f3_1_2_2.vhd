-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_2_2_rom is 
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


architecture rtl of inference_conv2d_f3_1_2_2_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101110011010110010101011110", 
    1 => "00111110000100000110110110010100", 
    2 => "00111110000001010100111100110111", 
    3 => "10111100100111001111110101100111", 
    4 => "10111100110100111101001110000111", 
    5 => "10111101011110000100010100100001", 
    6 => "10111101010100011001010111011010", 
    7 => "10111101100101010001100010111110", 
    8 => "00111101001010011010010001110100", 
    9 => "00111101011111110001011110100011", 
    10 => "00111101100010100000100001100010", 
    11 => "00111110000001111110011101111101", 
    12 => "10111101101000010111110110010100", 
    13 => "10111101111011111001100110000000", 
    14 => "00111100011011000101101000110001", 
    15 => "10111100100011000101010001101100", 
    16 => "10111101101000101111001101100101", 
    17 => "10111110000001000000100000010000", 
    18 => "10111100111011111010011000010110", 
    19 => "10111110000100101010010001010101", 
    20 => "00111101110111010101011011110011", 
    21 => "00111110001000011101011000000110", 
    22 => "00111011101010001111110011100100", 
    23 => "00111101101100100110110100000101", 
    24 => "10111110000111011101111000110111", 
    25 => "10111101111110100110001111111010", 
    26 => "00111100110000100000001000000011", 
    27 => "10111101111011001010001111101000", 
    28 => "00111101011001100011101011111101", 
    29 => "10111101010110111011001100011010", 
    30 => "10111101011100001001101010111000", 
    31 => "10111101111010001000101011001110", 
    32 => "00111110001001101110101011001000", 
    33 => "00111100100011010101010011101000", 
    34 => "10111101010110101001100011010011", 
    35 => "00111100001001110001001000101000", 
    36 => "00111101111010111101110010101101", 
    37 => "10111101000000100100010011101001", 
    38 => "10111101010111101110000100000001", 
    39 => "10111101001000000100110101111101", 
    40 => "10111101111001010110001111101101", 
    41 => "00111100011010101110110001110011", 
    42 => "00111101100011011100011101101001", 
    43 => "10111101110001000001101000100110", 
    44 => "10111101010000110110001110010111", 
    45 => "00111101110010001100011001010000", 
    46 => "10111110000000100110000000101101", 
    47 => "10111101101010000010011100001001", 
    48 => "10111101101000001001110010001101", 
    49 => "10111101100001010110010101010111", 
    50 => "10111101010100101100110010100110", 
    51 => "10111011000010100110110011010110", 
    52 => "00111100001101100001101001101110", 
    53 => "10111101110100111001000010000110", 
    54 => "00111110001011110001111010001110", 
    55 => "10111110000000011011110110100101", 
    56 => "10111110000011110010101000010111", 
    57 => "00111101110101001111100111000010", 
    58 => "00111101100001101011110000010010", 
    59 => "10111110001100101001111001001101", 
    60 => "00111101111001011010101000101110", 
    61 => "00111110000010111000111011010010", 
    62 => "00111011100100101000101100011101", 
    63 => "00111110001000100011111110101011", 
    64 => "00111010110001010001000011000001", 
    65 => "10111101001111101000000111001011", 
    66 => "00111100101110111101011010100110", 
    67 => "00111101110001110110111101101101", 
    68 => "10111101100101111110011011001111", 
    69 => "00111101100101010101111101101011", 
    70 => "10111101100110101111101111101010", 
    71 => "10111101111001100101000001100001", 
    72 => "00111110000110110111100011001101", 
    73 => "10111110000111010111101110100110", 
    74 => "00111110001011001101000101000010", 
    75 => "10111101110000001100111001001111", 
    76 => "00111101011111011000011110011011", 
    77 => "00111101010010101011101110110000", 
    78 => "10111101010001101001110011101101", 
    79 => "10111101111010110110111000001101", 
    80 => "00111110010001011011110001000101", 
    81 => "10111101001001011010101111011100", 
    82 => "00111101010011111001100001011001", 
    83 => "00111101111010010000011110010110", 
    84 => "10111110000101010111010011110111", 
    85 => "00111101101101100100110100101111", 
    86 => "10111101010101111101010011101110", 
    87 => "10111101100001011100110110000101", 
    88 => "00111101111000101001001010000001", 
    89 => "00111101000011110000101100000000", 
    90 => "00111100111011111101111000010100", 
    91 => "10111100011101000110000010010000", 
    92 => "10111101010000100110001111011000", 
    93 => "10111100101001010110110101000010", 
    94 => "10111100100100110110101110000010", 
    95 => "00111101100110110101101000111100", 
    96 => "00111110001111111101100101110111", 
    97 => "00111101010011110100111001101100", 
    98 => "00111101001111111111111101111010", 
    99 => "00111101000110001000110101100000", 
    100 => "10111100100110001111011001110001", 
    101 => "10111011110010101010010100010101", 
    102 => "10111101010011011100000110100100", 
    103 => "10111101101000010001110000110111", 
    104 => "00111101011100101101001100100111", 
    105 => "00111100010111001110010101001001", 
    106 => "00111011100111000000000010010010", 
    107 => "00111101111011001011111110110001", 
    108 => "00111100010011011101111001000101", 
    109 => "00111101110110101011010010110111", 
    110 => "10111100011011101001100100111011", 
    111 => "10111101001011101110100111000011", 
    112 => "10111100101011101000110111101000", 
    113 => "00111101100101001010010111011111", 
    114 => "10111100110011000010101100011100", 
    115 => "10111101101101001000010100101000", 
    116 => "00111100000011000111010000000010", 
    117 => "10111101001010000110110100111100", 
    118 => "00110111011011011111100000111111", 
    119 => "10111101010001011110100001000010" );


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

entity inference_conv2d_f3_1_2_2 is
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

architecture arch of inference_conv2d_f3_1_2_2 is
    component inference_conv2d_f3_1_2_2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_2_2_rom_U :  component inference_conv2d_f3_1_2_2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

