-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_2_5_rom is 
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


architecture rtl of inference_conv2d_f3_1_2_5_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101101011110011100101100110", 
    1 => "10111101010001110001111111111111", 
    2 => "00111101101110111001010101111010", 
    3 => "10111100111111001100110101000110", 
    4 => "00111101011010001100110110011001", 
    5 => "00111110001000000100100011100000", 
    6 => "00111101110100101110100011000000", 
    7 => "00111110000101100000111010010101", 
    8 => "10111110000101010000111111000111", 
    9 => "10111101100000011000001111010001", 
    10 => "10111100100001000011101110011001", 
    11 => "10111100110111010111101100000101", 
    12 => "10111101100000100010001011100011", 
    13 => "10111101010111111110110000101111", 
    14 => "00111100110000101101101010100110", 
    15 => "10111101100001010110001111100000", 
    16 => "10111101111011001000000101001101", 
    17 => "00111110000000011110101011111111", 
    18 => "00111101110011010101000111111000", 
    19 => "10111101111000000100011101001110", 
    20 => "10111110001011101111101000011110", 
    21 => "10111010101101000111101011000110", 
    22 => "00111101100110100100000010111110", 
    23 => "00111101111000011100110011011001", 
    24 => "10111101001000101110101100011100", 
    25 => "10111100101110011001011001011001", 
    26 => "10111100110111001000101111110010", 
    27 => "00111101100101001001111000011101", 
    28 => "10111101100111011000111011110010", 
    29 => "00111101111000011011010111001000", 
    30 => "00111101011101101111000010001101", 
    31 => "10111100001010110110111110000101", 
    32 => "10111101011101111000111010101101", 
    33 => "10111101110000101001101100001101", 
    34 => "00111101101101101010001101100000", 
    35 => "10111101011000110110010110110000", 
    36 => "10111101100111100100111101101001", 
    37 => "00111101000110001000101101100010", 
    38 => "00111101100000100100101110011111", 
    39 => "10111101101100110100100000111001", 
    40 => "00111101100010100111100110101110", 
    41 => "10111101000101110011011001111101", 
    42 => "00111110001001010001101000000000", 
    43 => "00111101110100101101001010111011", 
    44 => "10111101000011101111010101001011", 
    45 => "10111101111010001100100010101100", 
    46 => "00111110000111000100111100111100", 
    47 => "10111101001101110110000100010000", 
    48 => "00111101010110001011010001000111", 
    49 => "10111110001001110001010101000000", 
    50 => "00111110000100000011110110011011", 
    51 => "10111110001000000100000000111010", 
    52 => "10111101001110000110110101001010", 
    53 => "10111101110111101010010111111000", 
    54 => "00111101000011011001101101111001", 
    55 => "00111110000111101111100101010101", 
    56 => "00111100011110110110110000011101", 
    57 => "00111101011001011001101000001000", 
    58 => "00111101111001010000000011010110", 
    59 => "00111101110001111111011001101111", 
    60 => "00111100010101101101101101000100", 
    61 => "00111101001000001000110010000010", 
    62 => "10111101010000010101111110010110", 
    63 => "00111101100011000111010001110101", 
    64 => "00111101110011101000000100000010", 
    65 => "00111011000110110101000100101010", 
    66 => "10111101011100111011011110001000", 
    67 => "00111011101110111010101101111101", 
    68 => "10111100110100111000111011110011", 
    69 => "00111101001000011011110111110110", 
    70 => "10111101010010011101100111101110", 
    71 => "00111101110101000101111000001011", 
    72 => "00111100001000111111010110101001", 
    73 => "10111110000001100100111111011011", 
    74 => "00111101001000001101110110010000", 
    75 => "00111101100000011000000110011101", 
    76 => "00111100010100010110011000100100", 
    77 => "00111110001100110110001100101100", 
    78 => "10111110000001111110111101011011", 
    79 => "00111101110100001010110111001101", 
    80 => "00111001100111100100010001001110", 
    81 => "00111101110010010111001000010010", 
    82 => "10111110000101110111010111111011", 
    83 => "10111100001000110011001101110110", 
    84 => "10111100110000001101001100101111", 
    85 => "10111110000010011010111100011001", 
    86 => "00111101101111101000000111110100", 
    87 => "00111101100111011100111110010111", 
    88 => "10111101101000001111100001110110", 
    89 => "10111101110001001001010011110000", 
    90 => "00111100000010101011001001000000", 
    91 => "00111101110010101011000110010010", 
    92 => "10111101000100100111110010001010", 
    93 => "10111101100010011100101100011000", 
    94 => "10111110001100011100100100101110", 
    95 => "10111101100011100000000011011111", 
    96 => "00111100111100000100010000000000", 
    97 => "00111101100110010101100100111000", 
    98 => "00111011010101111111110101011000", 
    99 => "00111010110101101000010110001000", 
    100 => "00111101101001001111000011001011", 
    101 => "00111101111000101010001111001111", 
    102 => "10111100011001000000001000001000", 
    103 => "10111101011111110110011001100010", 
    104 => "00111101001001000000001011111010", 
    105 => "00111101101001000100100010110101", 
    106 => "10111101101001011100010101001001", 
    107 => "10111100000011010010100100010011", 
    108 => "00111101101111110001011001010011", 
    109 => "10111101100010101110100001000001", 
    110 => "00111110001010111001000100101110", 
    111 => "00111110000000100100111010011100", 
    112 => "10111101001111001000100001000111", 
    113 => "00111101101110100000011101001000", 
    114 => "10111101000110001101010011111110", 
    115 => "00111110010000110001100001110110", 
    116 => "10111101001000101001010011010000", 
    117 => "10111011101111110101110100111000", 
    118 => "00111011010101001100000011100010", 
    119 => "00111101001101100100000101010101" );


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

entity inference_conv2d_f3_1_2_5 is
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

architecture arch of inference_conv2d_f3_1_2_5 is
    component inference_conv2d_f3_1_2_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_2_5_rom_U :  component inference_conv2d_f3_1_2_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

