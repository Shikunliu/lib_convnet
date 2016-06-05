-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_4_4_rom is 
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


architecture rtl of inference_conv2d_f3_1_4_4_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110001110001100110011011110", 
    1 => "10111101001110100111011111100110", 
    2 => "10111101001110010011000101011111", 
    3 => "10111101000011100100010010011100", 
    4 => "10111110001111100110001101100011", 
    5 => "00111101100111111101101001110110", 
    6 => "10111101011011001101010101001011", 
    7 => "10111101110101000010110101001001", 
    8 => "00111110000101011000010101111011", 
    9 => "10111101100101010000001111000110", 
    10 => "10111110000001100111011110110100", 
    11 => "10111100100111010110101110110110", 
    12 => "10111100010101011000001111000000", 
    13 => "10111101100001101011110111110101", 
    14 => "00111110001111110100000111110010", 
    15 => "10111110100000001010010001111111", 
    16 => "10111011111010011000000001001100", 
    17 => "10111101110001011111011010000100", 
    18 => "10111101001000101000100101000111", 
    19 => "10111100110110110010101011001001", 
    20 => "10111101100010001011111111000010", 
    21 => "00111110001101011111010001011110", 
    22 => "10111101001001001000101101100101", 
    23 => "10111110000010110011110100001000", 
    24 => "00111101001110000010001101011101", 
    25 => "00111110000001001101110110110101", 
    26 => "00111110000011001001000110001110", 
    27 => "10111110011010110101011010111000", 
    28 => "00111100110100111000100111101011", 
    29 => "10111101110010101010100110011010", 
    30 => "10111101100000000011011000011011", 
    31 => "10111110001010110111100101010011", 
    32 => "00111101001101010001000001001101", 
    33 => "00111100010001101101101111110010", 
    34 => "10111110000010100000001010111000", 
    35 => "10111101100100100001011100110001", 
    36 => "00111101100100101101001011001001", 
    37 => "00111101010101000100011000111110", 
    38 => "00111100000110110100110100111000", 
    39 => "00111101111111100110111011101011", 
    40 => "00111110001001111010010100101011", 
    41 => "00111101100001111110110100100111", 
    42 => "00111101100001000110011100000010", 
    43 => "00111101111001010011000110011000", 
    44 => "00111100101000110010011100010111", 
    45 => "10111110000101100100110100111100", 
    46 => "10111101111001100111010000001000", 
    47 => "10111101100010111100001001000001", 
    48 => "00111101010100101110100000000100", 
    49 => "00111101111001111100011100111111", 
    50 => "10111101101111111010011010101001", 
    51 => "10111101111011010010111011011000", 
    52 => "00111011111101110100000000111110", 
    53 => "10111101000011111100111100010101", 
    54 => "00111101100000011101010111101011", 
    55 => "00111101010001111110000000011001", 
    56 => "10111101001101110011010100000110", 
    57 => "00111100111100101101000011011000", 
    58 => "10111100000110101011111110011111", 
    59 => "10111101010110100001101100110100", 
    60 => "10111110010001101010111100000100", 
    61 => "00111101000111011011010011100111", 
    62 => "10111011101100010100011100100000", 
    63 => "10111101111000000001100100101010", 
    64 => "10111101111111110011010110100000", 
    65 => "10111101101011101100011000101001", 
    66 => "00111011101010011001101010000011", 
    67 => "10111101110100010111010100001000", 
    68 => "10111101001000100010111000001101", 
    69 => "00111101010000100100100111110010", 
    70 => "10111110000111100011100010101000", 
    71 => "00111011110000110101100110110001", 
    72 => "10111101101111111101110111101100", 
    73 => "10111101000100101011011101000010", 
    74 => "10111011111010001010111010101011", 
    75 => "10111101110000011111001010110100", 
    76 => "10111101101100000010110101011010", 
    77 => "00111110000100001010000001101111", 
    78 => "10111101110011111111000000000010", 
    79 => "10111110000111011110111001111000", 
    80 => "10111101011010100000100010010111", 
    81 => "10111011101100010000111110010111", 
    82 => "00111110000100100101011100000000", 
    83 => "10111100111110001000001000101000", 
    84 => "00111101011000000000001111111100", 
    85 => "10111110001100101101000011100101", 
    86 => "00111100101111011110011111000010", 
    87 => "00111011111101000011000110101011", 
    88 => "00111101100111000001011111111001", 
    89 => "00111101111101100001000110111010", 
    90 => "00111101100100110111101010101001", 
    91 => "10111101000011000111010001001101", 
    92 => "00111011110101110100001001000111", 
    93 => "10111110000000111100000110001011", 
    94 => "10111100011001110100001000101110", 
    95 => "00111100101111101111011010000000", 
    96 => "10111110000101011011101101111011", 
    97 => "00111100100010001001100101100001", 
    98 => "10111110001111111011000110011110", 
    99 => "00111101010001111000111101000000", 
    100 => "10111100100000100111110001000111", 
    101 => "00111100111110110110001110111001", 
    102 => "10111110000000011101101100000001", 
    103 => "00111011110000110111101100101010", 
    104 => "10111101111100100110100111100000", 
    105 => "10111110010010110010001100010100", 
    106 => "00111110001111110000011000101101", 
    107 => "00111110000011110110010111011100", 
    108 => "10111110000010010011100000010101", 
    109 => "00111110000001101011100011111010", 
    110 => "00111100110011100000101011110000", 
    111 => "10111101100101000101100110001001", 
    112 => "00111101111111011011011111110001", 
    113 => "10111100000000110010010101101111", 
    114 => "10111110001110101011100001100011", 
    115 => "00111101100101001001110000101100", 
    116 => "10111100010101100101001010001000", 
    117 => "00111101000011010001111001000110", 
    118 => "10111101011111001100010011111101", 
    119 => "00111101001111010001011111101110" );


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

entity inference_conv2d_f3_1_4_4 is
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

architecture arch of inference_conv2d_f3_1_4_4 is
    component inference_conv2d_f3_1_4_4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_4_4_rom_U :  component inference_conv2d_f3_1_4_4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


