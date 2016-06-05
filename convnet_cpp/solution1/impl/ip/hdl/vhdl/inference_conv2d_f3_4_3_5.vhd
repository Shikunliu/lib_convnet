-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_3_5_rom is 
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


architecture rtl of inference_conv2d_f3_4_3_5_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101001111101110000001100000", 
    1 => "10111101110100000111010010100111", 
    2 => "10111101011100011110010011001111", 
    3 => "00111110000100101000011111000010", 
    4 => "00111110001000010110001110111011", 
    5 => "00111110010111100001001001100010", 
    6 => "00111101110010101111001000110111", 
    7 => "00111110000100011000110000011001", 
    8 => "10111101110111011100110001100100", 
    9 => "00111101100100100110011110000100", 
    10 => "00111100101101000101011000010011", 
    11 => "00111110000100100110010000011011", 
    12 => "10111101100010100011110010011010", 
    13 => "00111101100101101010001111001011", 
    14 => "10111100111110001110110001000101", 
    15 => "00111110000101101010110011101011", 
    16 => "00111110000111110111000101100101", 
    17 => "10111101100111100100001111111011", 
    18 => "00111100000010001001100101010111", 
    19 => "10111101111011000111110100011100", 
    20 => "10111101010011001010001100010001", 
    21 => "10111101100111010111100011101100", 
    22 => "00111101010011001111110011010011", 
    23 => "10111101011010110100100101011010", 
    24 => "10111101111001101011001001101100", 
    25 => "10111100111000010101001100110111", 
    26 => "00111101011001001100111000010110", 
    27 => "00111101110010101110010101101100", 
    28 => "00111110000000111100111010100111", 
    29 => "10111101101100010110001011010111", 
    30 => "00111011101100111111111111110111", 
    31 => "00111101100000010110100100101111", 
    32 => "00111101011000100000001101111011", 
    33 => "00111101101110000011111011001001", 
    34 => "10111101111011011110101010001001", 
    35 => "00111101100100011110110100001010", 
    36 => "00111100111101100111011011101010", 
    37 => "10111101101100111000100001011000", 
    38 => "00111101001011110100111111001001", 
    39 => "00111100110100010110110000000011", 
    40 => "00111101100111010000110110011010", 
    41 => "10111101111000110111001101101101", 
    42 => "00111100001000100100111000010011", 
    43 => "10111110001111101011101111111101", 
    44 => "00111101111100000111011000111010", 
    45 => "00111110000101110110101010110110", 
    46 => "00111101111000001101000110110111", 
    47 => "10111101100010000110010010111110", 
    48 => "10111101100101110100011010001000", 
    49 => "10111110001111011010001010110110", 
    50 => "00111101110111110101110001101100", 
    51 => "00111101101101110100001110110100", 
    52 => "10111101000011001010000101001001", 
    53 => "10111110000101101011000110100011", 
    54 => "00111101100000001110011000101010", 
    55 => "00111101000010100110101001101101", 
    56 => "10111101000011100000001011111000", 
    57 => "00111100110011111000010111100101", 
    58 => "10111110001011111010100000101111", 
    59 => "00111101100101010010100001101011", 
    60 => "10111101010110100011010110000110", 
    61 => "00111110010110000000110110000000", 
    62 => "10111110011110010011010000100110", 
    63 => "00111110000100101011011011110010", 
    64 => "10111100110001000100111110111011", 
    65 => "10111101110110101101011111011000", 
    66 => "10111100000100111011010101011111", 
    67 => "00111101111001111000110000000000", 
    68 => "00111100000001111101110000010111", 
    69 => "00111110011100100011101101111001", 
    70 => "10111011101100000100011111000110", 
    71 => "00111010011010010000101000001001", 
    72 => "00111100110001111011011110000100", 
    73 => "10111110000100000000111110111011", 
    74 => "10111101011000101010111001100110", 
    75 => "10111101100000110110011101010000", 
    76 => "10111101001111000010101111100101", 
    77 => "00111110000010000011100110001010", 
    78 => "10111101001001011000000101100100", 
    79 => "00111011100000011100100111000100", 
    80 => "00111100110110110010101000101000", 
    81 => "10111101001011100110110110110111", 
    82 => "00111100110100011001111110011010", 
    83 => "10111100111100011110001011010001", 
    84 => "10111110000000001001001010001010", 
    85 => "00111100110010100100000100110111", 
    86 => "10111100100110100000110110010011", 
    87 => "00111100001110010000100001011111", 
    88 => "00111110000010011111010100010111", 
    89 => "10111101100011011111111100001001", 
    90 => "00111101000011110110011110110010", 
    91 => "10111110000110000001010010010100", 
    92 => "10111011100100111100100111110111", 
    93 => "10111100011100110001110011000011", 
    94 => "10111110001011011000000010100001", 
    95 => "00111101110000100001100101110011", 
    96 => "00111011100100111110000000011100", 
    97 => "00111101110000111101000011001101", 
    98 => "00111110010001100101010010010011", 
    99 => "10111101000110000001110111101001", 
    100 => "00111101100000101000100000010011", 
    101 => "10111110001000011000010100000110", 
    102 => "00111101010100110100001000010111", 
    103 => "10111101100100100001011111100000", 
    104 => "10111101011110010010111001101111", 
    105 => "10111101010110111100010001001100", 
    106 => "00111110001111001001010011110111", 
    107 => "10111101101011011011110101011000", 
    108 => "10111110001000110010010100001011", 
    109 => "00111101110101110010100000100000", 
    110 => "00111100100111110101000000100111", 
    111 => "10111101010001101110110111111011", 
    112 => "10111100111001101001001001110001", 
    113 => "00111101100101101000000111111010", 
    114 => "00111110001101111010100101011101", 
    115 => "10111101100011100100100010110011", 
    116 => "10111011111001110001101100101101", 
    117 => "00111100110010100100110100101011", 
    118 => "10111110001001010010011110100010", 
    119 => "10111110000010011011001101001010" );


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

entity inference_conv2d_f3_4_3_5 is
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

architecture arch of inference_conv2d_f3_4_3_5 is
    component inference_conv2d_f3_4_3_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_3_5_rom_U :  component inference_conv2d_f3_4_3_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


