-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_3_7_rom is 
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


architecture rtl of inference_conv2d_f3_3_3_7_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111011010110100110010011100110", 
    1 => "10111101000101001100100011100101", 
    2 => "00111101001000000011101000010111", 
    3 => "10111101100110100001101111010101", 
    4 => "00111101010101110110111101101101", 
    5 => "10111101101101100111001010011110", 
    6 => "00111101101100111110011011000101", 
    7 => "10111011101101000010111101110010", 
    8 => "00111101110000001111000001111110", 
    9 => "00111101011000000001011101100010", 
    10 => "00111101000010011111000110111100", 
    11 => "00111101111111101101101111111001", 
    12 => "00111101110000101010101110111001", 
    13 => "10111101011011111111101111110111", 
    14 => "10111110000111011110100100111010", 
    15 => "10111101100100000111101000011011", 
    16 => "00111101110001111111110001110110", 
    17 => "10111101111000101000011101111111", 
    18 => "10111101001011100110100001000011", 
    19 => "00111110001011000001010110010000", 
    20 => "10111100100000000000111110000101", 
    21 => "10111101110111100111011011001001", 
    22 => "00111110001110001011110000010111", 
    23 => "00111101000100100010111010111100", 
    24 => "10111101001100111010111110101010", 
    25 => "10111101000110010110001000111100", 
    26 => "00111101101100000001010000100010", 
    27 => "10111110000110010000000010000010", 
    28 => "10111101110000111011010111011010", 
    29 => "00111101000110011100101110111001", 
    30 => "00111100111101000011100001001100", 
    31 => "10111101011001000011000101010011", 
    32 => "10111101011100110110110111010001", 
    33 => "10111100111000110101011011100111", 
    34 => "10111101000101101101110010100000", 
    35 => "10111101001101010010101001001111", 
    36 => "00111110000010100110110001011101", 
    37 => "10111101100000000110000110000100", 
    38 => "10111101110100010000100010000001", 
    39 => "00111110000011011011011110101110", 
    40 => "10111110000111100000101001000010", 
    41 => "00111100110101111011100100100100", 
    42 => "00111101001001001011110101101010", 
    43 => "00111100010001101010000011001110", 
    44 => "10111100101101001101111001100100", 
    45 => "00111101010101111001000011100001", 
    46 => "10111101101111110010011101000010", 
    47 => "00111101111111000100011111100101", 
    48 => "10111101100001011000111000000111", 
    49 => "00111101011010000101001011010000", 
    50 => "10111100100101100110100110011001", 
    51 => "10111101000100001110010011011010", 
    52 => "10111101001010011110110110001010", 
    53 => "10111101010000111111011111110111", 
    54 => "10111101111110000111101011010001", 
    55 => "10111100110111010010111010101111", 
    56 => "00111110000001010010001110110011", 
    57 => "10111100000111001100100000001101", 
    58 => "10111100100010010110010001100011", 
    59 => "00111101111101000011110100000100", 
    60 => "10111100001101110000111011110101", 
    61 => "10111101101001000011111000010000", 
    62 => "10111110010010100000000001011100", 
    63 => "00111101100100101001110001111000", 
    64 => "00111101010101010000100011000001", 
    65 => "00111101101001111100001001111010", 
    66 => "00111101110110101101010110111111", 
    67 => "10111110001000001101110111000110", 
    68 => "00111101100001110000110000000110", 
    69 => "10111101101000000100110100010010", 
    70 => "00111110000011111011110000011011", 
    71 => "00111100110001100000011010101010", 
    72 => "10111101100100101011111010110100", 
    73 => "10111101100001101110110111010011", 
    74 => "00111101000011011010011101010011", 
    75 => "10111101110101010011011100011001", 
    76 => "00111101011001100001111010010011", 
    77 => "10111100101000100000100110101011", 
    78 => "10111100110101011001001010100100", 
    79 => "10111100001000001100110010001001", 
    80 => "00111110000100000110011100000110", 
    81 => "00111001101100101111001010000110", 
    82 => "10111110000000111000100110110101", 
    83 => "00111101110110111110000010011100", 
    84 => "00111101101010000010010001000001", 
    85 => "00111110000111000101001100101010", 
    86 => "00111100100111011100100010011110", 
    87 => "00111100001111001001101110010010", 
    88 => "10111100010111101010011011101010", 
    89 => "00111101110011010110011001101011", 
    90 => "00111101001110111110100001011110", 
    91 => "10111101001011000010000010000101", 
    92 => "10111101011001100001100100011111", 
    93 => "00111101100000000110100100010001", 
    94 => "00111101000111101011010000100000", 
    95 => "00111101000010011011101011100100", 
    96 => "00111101001101100010111011111100", 
    97 => "00111101011000111011110100001001", 
    98 => "10111101101001010101100110001100", 
    99 => "10111100110101110100000011000100", 
    100 => "10111110000001111011100111100000", 
    101 => "10111110001000110101000110011100", 
    102 => "10111101111110100001110010101100", 
    103 => "00111100001101101110111000111110", 
    104 => "00111101110001100011000011111010", 
    105 => "00111101101010101100000100001001", 
    106 => "10111100101111100010011000001011", 
    107 => "00111101000000010001000101000010", 
    108 => "10111100101101111001111000110010", 
    109 => "00111101010101000111111000000111", 
    110 => "10111101101010111010111111100111", 
    111 => "10111100011010000010110111100111", 
    112 => "10111101100110100110101100101000", 
    113 => "10111010101100100100101001101011", 
    114 => "10111100111011110110000010101011", 
    115 => "10111101100110110010111011010010", 
    116 => "10111101111011010101101101101000", 
    117 => "10111110000110100001100000110111", 
    118 => "00111100111010100001001010001110", 
    119 => "00111101101010000001011101000001" );


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

entity inference_conv2d_f3_3_3_7 is
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

architecture arch of inference_conv2d_f3_3_3_7 is
    component inference_conv2d_f3_3_3_7_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_3_7_rom_U :  component inference_conv2d_f3_3_3_7_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

