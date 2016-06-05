-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_0_1_rom is 
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


architecture rtl of inference_conv2d_f3_0_0_1_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100100101101010110001001010", 
    1 => "00111101001101000001100111001000", 
    2 => "10111110000001101110101100001011", 
    3 => "00111101110011101010111100100101", 
    4 => "00111101001001000010110100111100", 
    5 => "00111011100100011000000000110000", 
    6 => "00111100011111010111001111001001", 
    7 => "10111100010000000101110000010001", 
    8 => "00111101001000100101110001001011", 
    9 => "10111101001110011001100101001001", 
    10 => "10111101110001000011111110111110", 
    11 => "10111100110001110101010110010101", 
    12 => "10111101011100011100111110100001", 
    13 => "10111100111100110001101110110110", 
    14 => "10111100110011111100111110110111", 
    15 => "00111011101000011011000111010110", 
    16 => "00111001111101011110111000101110", 
    17 => "00111101110001101000010101100011", 
    18 => "00111101110001000110111010011101", 
    19 => "10111101111010110110001110010001", 
    20 => "10111101011001111111101010111011", 
    21 => "00111110000001110001110010010111", 
    22 => "10111101011000001011010111101110", 
    23 => "00111101110001110100110110011100", 
    24 => "00111100101010010001000010011011", 
    25 => "00111100101011110111110000100100", 
    26 => "00111110010100011110100001100000", 
    27 => "10111101100110100100000101011111", 
    28 => "00111101000000000111010101110001", 
    29 => "00111101101011010110100001011011", 
    30 => "00111110001010000110110101110010", 
    31 => "10111100010100001100100110110010", 
    32 => "10111110000011110011100010000010", 
    33 => "00111101100001100110001001101010", 
    34 => "00111101001100000001111110111000", 
    35 => "10111101000101110101111110011000", 
    36 => "10111101011110001111111010011111", 
    37 => "00111101111000001001110000111101", 
    38 => "00111101001000001101010110011000", 
    39 => "00111110001010001011000111011101", 
    40 => "00111011100100011000110110000111", 
    41 => "00111101100101011101000111011111", 
    42 => "00111110000010000100110101110111", 
    43 => "00111101001010001101111000010000", 
    44 => "10111100001100000110110100011011", 
    45 => "00111110001100010110101100010010", 
    46 => "10111100101101011001110100111011", 
    47 => "00111101101101001110111101010011", 
    48 => "10111101010110101111100110110110", 
    49 => "00111110010010001000100011111000", 
    50 => "10111101110011000000111111100110", 
    51 => "00111101111100100001110101010100", 
    52 => "00111101101000000110000001111000", 
    53 => "00111011101010111001010000011000", 
    54 => "00111101111101101011000100011100", 
    55 => "00111110000010001111100010100101", 
    56 => "10111110001111000100100111111101", 
    57 => "00111101110010001101101100100000", 
    58 => "10111101101011110010011011110010", 
    59 => "00111100111000110100111100100101", 
    60 => "00111100111110010110001000100001", 
    61 => "10111101001000001110001000101110", 
    62 => "00111110001100101010001011000010", 
    63 => "10111110001010111000111110011011", 
    64 => "00111101001000110110111100111011", 
    65 => "10111101011111011101011111101101", 
    66 => "10111101101111111110000010110011", 
    67 => "10111101010111001001011000011110", 
    68 => "10111101101010001010111001110101", 
    69 => "10111101111001011000101100111111", 
    70 => "00111101110000011001001100111011", 
    71 => "00111110000101100010010001010111", 
    72 => "10111110001101110000111101111100", 
    73 => "00111101011111100010001001111010", 
    74 => "00111110000010011101001001111100", 
    75 => "10111101111010110011010011100111", 
    76 => "00111100000011001111111001010110", 
    77 => "10111100101100110010001100001101", 
    78 => "10111101011010101000010000011101", 
    79 => "10111100011010101000100100001011", 
    80 => "00111101101010100111011110111110", 
    81 => "00111101100011111010110111110011", 
    82 => "10111101101100110000000100101111", 
    83 => "10111100101110011111100001001001", 
    84 => "10111101110010001100111100000100", 
    85 => "00111101010111010010101110001010", 
    86 => "10111101000011000001000111010111", 
    87 => "10111110010011010101110010111000", 
    88 => "10111101111011101101011001110111", 
    89 => "00111101111100000011011001000100", 
    90 => "00111110000101011011100000010011", 
    91 => "00111110001001110011101110000110", 
    92 => "00111100101010100001101100100111", 
    93 => "00111101111110111001111000000110", 
    94 => "10111101010100011100000111001001", 
    95 => "10111110000110101011011101010110", 
    96 => "00111101001110110011011111111111", 
    97 => "10111101101001011101100001010001", 
    98 => "10111011101011011010100000000100", 
    99 => "00111101101100001100110010100001", 
    100 => "10111101011101110001010000110100", 
    101 => "00111100101111101001110010001000", 
    102 => "10111110000001011010100101100101", 
    103 => "00111100110100111101111001101111", 
    104 => "00111101100010010100110001010010", 
    105 => "00111101111100111101000100000011", 
    106 => "00111101110001110111011100001000", 
    107 => "00111001110011111100000001110010", 
    108 => "10111101010011011111111010101011", 
    109 => "00111011100111010000111000101110", 
    110 => "10111101110100101110001001110110", 
    111 => "10111101100000101111010111001110", 
    112 => "00111100110111010001101101100100", 
    113 => "00111100100100110000100010111100", 
    114 => "00111101111000000111100000010000", 
    115 => "00111011111101011110011100100010", 
    116 => "00111110010100011101010100111101", 
    117 => "10111100000100111001001011101111", 
    118 => "00111101010101000011011011010100", 
    119 => "00111110001111011111011111101000" );


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

entity inference_conv2d_f3_0_0_1 is
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

architecture arch of inference_conv2d_f3_0_0_1 is
    component inference_conv2d_f3_0_0_1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_0_1_rom_U :  component inference_conv2d_f3_0_0_1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


