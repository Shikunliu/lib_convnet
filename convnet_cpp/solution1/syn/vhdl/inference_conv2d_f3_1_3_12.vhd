-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_3_12_rom is 
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


architecture rtl of inference_conv2d_f3_1_3_12_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111011100011101010001101110001", 
    1 => "10111101000010011110001000000001", 
    2 => "00111100100010000001100010011110", 
    3 => "10111101001001111110001000110010", 
    4 => "00111101111100011000111111000101", 
    5 => "10111100101001110011000111010011", 
    6 => "10111101001101110100001011111000", 
    7 => "00111110000111111100100100110110", 
    8 => "00111101100000111001001010111010", 
    9 => "00111110001000111111111000011001", 
    10 => "10111101100001000001111001011000", 
    11 => "10111101111010000011010001001100", 
    12 => "00111110000111101101001010001001", 
    13 => "00111101111001100001000111111101", 
    14 => "10111110000001000111100100001100", 
    15 => "10111101100110000000010101100000", 
    16 => "10111101000000100111010100100101", 
    17 => "10111110000011001101011110001100", 
    18 => "00111110000100001110111111011101", 
    19 => "10111110000000001100111111100001", 
    20 => "00111101011001111000100101100001", 
    21 => "10111110000110100110110011100011", 
    22 => "00111101001101110111111110010011", 
    23 => "00111110001000000010001010011010", 
    24 => "10111110001010110000101001110000", 
    25 => "00111101100000100111001010000110", 
    26 => "10111101101110010111111000000110", 
    27 => "10111110010101111001111011100000", 
    28 => "10111101101110100111111010000001", 
    29 => "00111110000100111111001010010001", 
    30 => "00111100010010111001110100100010", 
    31 => "00111101011100000111010000100001", 
    32 => "10111011101111001001011111100001", 
    33 => "00111011000011110111001000100011", 
    34 => "10111101000101100010111100110001", 
    35 => "00111100100001010111000000010111", 
    36 => "00111011100010101011101101000101", 
    37 => "00111101111000111001011100010100", 
    38 => "10111101000011100001010111011000", 
    39 => "10111101111100011101001011100001", 
    40 => "10111100001011011010001100111100", 
    41 => "10111101010101010001101100110101", 
    42 => "10111100000101011010111001110011", 
    43 => "00111110000010000001001111001011", 
    44 => "00111110000011011100110000100001", 
    45 => "10111100000000010110100001100000", 
    46 => "10111101010101110101000000101110", 
    47 => "10111101000011101011101100011001", 
    48 => "10111100110101101101101000110111", 
    49 => "00111101101001010011100011111101", 
    50 => "10111110000110011011000110111000", 
    51 => "00111101111111001100100111101011", 
    52 => "10111101011001010100101101001001", 
    53 => "10111101110011100010000010001010", 
    54 => "00111101011010101110001011001101", 
    55 => "10111101110011100100000100001011", 
    56 => "00111101110110000011011000100010", 
    57 => "10111100000001010101101011111110", 
    58 => "10111101111011101011010011101010", 
    59 => "10111101011111001001101010000101", 
    60 => "00111101100111101011011111100111", 
    61 => "00111101101111011001011110011000", 
    62 => "00111010010011011100110101111110", 
    63 => "10111101100011111001110010011000", 
    64 => "10111110000111101011101101110111", 
    65 => "00111011110000011101110101011011", 
    66 => "00111110000100111100010010110001", 
    67 => "10111101000110001110111110100000", 
    68 => "00111011101001101010111110101101", 
    69 => "00111101100001010110110110111011", 
    70 => "00111011110010001111100110011001", 
    71 => "10111100100101001010100100000100", 
    72 => "00111101111001010111111000100100", 
    73 => "10111101010000110010011110011101", 
    74 => "10111110011000001111111101010100", 
    75 => "10111100111000101100000100101011", 
    76 => "00111101101010100001000111010010", 
    77 => "10111101001000000000001100001010", 
    78 => "10111101100001000101100101000110", 
    79 => "10111100101100111100001001101111", 
    80 => "00111101010001001011100001100001", 
    81 => "00111110000001011010000101000101", 
    82 => "00111110000000111111001010010001", 
    83 => "00111101010100110101101011110001", 
    84 => "10111110000010110010111010011101", 
    85 => "00111101110101100110010100010111", 
    86 => "00111100010100100001100011010010", 
    87 => "10111110001000111001000011001001", 
    88 => "00111101100101110011011010001011", 
    89 => "10111011010010001101101101010001", 
    90 => "00111101001011010111000010110001", 
    91 => "00111011000111001111110101111100", 
    92 => "00111100110010010110101001000010", 
    93 => "10111101111011001110111111101101", 
    94 => "10111110000000100010000010111100", 
    95 => "10111101110001011011001100011000", 
    96 => "00111100100100100100101011110001", 
    97 => "10111011111001000001011111011000", 
    98 => "10111100100100000111101100001101", 
    99 => "10111101000111010011100101100001", 
    100 => "10111101110100110000001011110111", 
    101 => "00111110010001011001111101101111", 
    102 => "10111101000100111101101111010000", 
    103 => "10111100010000111001000000001101", 
    104 => "10111101001110110111010001001010", 
    105 => "10111101010011110001011001101110", 
    106 => "10111101000100010111101111011001", 
    107 => "10111100100010101111000101100000", 
    108 => "10111011100000110000000010100110", 
    109 => "00111101001011111000101011101101", 
    110 => "00111101011101001111010101011011", 
    111 => "10111101000111111001001111111111", 
    112 => "00111100011011111110001101010010", 
    113 => "10111101111110110000110011001100", 
    114 => "00111101101010001010100111011000", 
    115 => "10111101110001100110010111010011", 
    116 => "00111101110001011000111001100101", 
    117 => "00111110000000000100001010010110", 
    118 => "10111101110100011110111010101010", 
    119 => "00111101110100000000100110110011" );


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

entity inference_conv2d_f3_1_3_12 is
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

architecture arch of inference_conv2d_f3_1_3_12 is
    component inference_conv2d_f3_1_3_12_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_3_12_rom_U :  component inference_conv2d_f3_1_3_12_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

