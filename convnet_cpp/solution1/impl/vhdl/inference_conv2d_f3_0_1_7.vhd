-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_1_7_rom is 
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


architecture rtl of inference_conv2d_f3_0_1_7_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111010101100110100111011001100", 
    1 => "00111100110110111111111011001111", 
    2 => "10111101111110010001111001100100", 
    3 => "10111101010000111110010101101000", 
    4 => "00111101000010101001110010100111", 
    5 => "10111110000001100000100110011010", 
    6 => "10111100111101001011001010001111", 
    7 => "00111110001001001101100110000100", 
    8 => "10111110000010011010000010101110", 
    9 => "00111011111011010101100000001000", 
    10 => "10111100001100111000011100010110", 
    11 => "10111100000011000011110001001110", 
    12 => "10111101001100000111110010000101", 
    13 => "10111100010011011001001110011100", 
    14 => "00111110000011110111111111010000", 
    15 => "00111110000001000001111100100001", 
    16 => "00111101001000100001110100101100", 
    17 => "00111110000110100010010111011001", 
    18 => "10111110001101011001111001100010", 
    19 => "10111110000000010100000101100011", 
    20 => "00111101100111100101110111100001", 
    21 => "10111100100000111101100110101001", 
    22 => "10111110000010101010100010101000", 
    23 => "10111101001101000101001000110010", 
    24 => "10111101110001001111111001000100", 
    25 => "10111101111100001010101110110100", 
    26 => "00111100100111111000011100011001", 
    27 => "00111101111010101011101000111000", 
    28 => "10111100100000001010101111110111", 
    29 => "10111110000101100011111001001011", 
    30 => "00111101101100100110101111111000", 
    31 => "10111101111001110110010000101000", 
    32 => "00111100110011111010000010111101", 
    33 => "00111100101101010000010011000101", 
    34 => "00111100101000100101110001001011", 
    35 => "10111101111111110001010110100101", 
    36 => "00111100010100000010011101100000", 
    37 => "00111101111101111101001100001011", 
    38 => "00111100110110111011110011110101", 
    39 => "00111101100110000110110110101000", 
    40 => "00111101011001011010101111011100", 
    41 => "00111101101100001010100000100100", 
    42 => "00111101111000010100010010001001", 
    43 => "10111101110100100001100110101000", 
    44 => "10111110010010110110010001011010", 
    45 => "00111100111110011010101110111110", 
    46 => "00111101010110100100100010011011", 
    47 => "00111101101110011111001010111011", 
    48 => "10111101100110001100111001110000", 
    49 => "00111011000010001001101001000011", 
    50 => "10111101000111111000101000100100", 
    51 => "00111110000101010001110110101100", 
    52 => "00111110000100011101101111001011", 
    53 => "10111101101001010010000010000001", 
    54 => "00111101011101010011001100000011", 
    55 => "00111110010010101110100000011001", 
    56 => "00111101100001110101000011000010", 
    57 => "00111100010011001101010001011010", 
    58 => "10111100110011011100111011000000", 
    59 => "10111101101000000011011100011010", 
    60 => "10111101101110110010101101000010", 
    61 => "00111101111110011100010000010001", 
    62 => "00111101000111000011010100000101", 
    63 => "10111110000011010111111101010010", 
    64 => "00111101111111000100111111000010", 
    65 => "00111101100111011101100101111111", 
    66 => "00111101100111001000100110111110", 
    67 => "00111101001000001000100001101011", 
    68 => "10111101110010011001000100011011", 
    69 => "00111110001110111101010111011100", 
    70 => "00111100101111001011100000010111", 
    71 => "00111101111010011101000011101010", 
    72 => "00111011111010000000101001000000", 
    73 => "10111101000011000110010010010010", 
    74 => "00111101111100011000110110101100", 
    75 => "00111110000101110111001100011001", 
    76 => "10111110001000010000000011100111", 
    77 => "00111101110100101000100001001000", 
    78 => "10111101111000000001110101011100", 
    79 => "10111101110111010111111011001100", 
    80 => "00111100101011010001011101011011", 
    81 => "00111101101101001010001011100010", 
    82 => "10111101111001001101000000010100", 
    83 => "00111101000101000010000010110100", 
    84 => "00111101001000011111001111000000", 
    85 => "10111011110000100110111101010001", 
    86 => "10111101110001100101001010111101", 
    87 => "10111110000001000010110011000011", 
    88 => "00111110000111111110010110000110", 
    89 => "00111101101100110011100111000001", 
    90 => "00111101000101100101000000011110", 
    91 => "10111100011010101110011101101010", 
    92 => "00111101101001110101010001101101", 
    93 => "10111101111010000100001001110100", 
    94 => "00111100001001001011111101101000", 
    95 => "00111101010110111000000110000001", 
    96 => "10111101000011001110101101101011", 
    97 => "10111110001010000110111100000101", 
    98 => "10111100111011011110111000011010", 
    99 => "00111110000000101111101010010100", 
    100 => "10111100011011100010011010111010", 
    101 => "00111101111100010001001110000011", 
    102 => "00111101101000011011110101010101", 
    103 => "10111110001101000010011001111000", 
    104 => "00111100100110110001100010001010", 
    105 => "00111101000101100001010100110000", 
    106 => "10111101010010001000001100001100", 
    107 => "10111100101111100011001011010110", 
    108 => "00111110000111110110100100000001", 
    109 => "00111110000111101100000000101111", 
    110 => "00111101100001001100100000000001", 
    111 => "00111110000110001100110000010100", 
    112 => "00111100001111110010000000111100", 
    113 => "00111101000001001001101111110110", 
    114 => "00111010010010011010010111100010", 
    115 => "10111101110110100101001110111001", 
    116 => "10111101000111110011100100110001", 
    117 => "00111100001010010101011101111101", 
    118 => "00111011001010101101110000001100", 
    119 => "00111101101011001101111110010010" );


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

entity inference_conv2d_f3_0_1_7 is
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

architecture arch of inference_conv2d_f3_0_1_7 is
    component inference_conv2d_f3_0_1_7_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_1_7_rom_U :  component inference_conv2d_f3_0_1_7_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


