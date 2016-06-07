-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_0_0_rom is 
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


architecture rtl of inference_conv2d_f3_4_0_0_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101010000100010001111000111", 
    1 => "00111101010001101100101110110001", 
    2 => "10111101111001010101101100000011", 
    3 => "00111101101101101011110101111100", 
    4 => "00111110001010100000110100110101", 
    5 => "00111101111001101110111000110001", 
    6 => "00111110000100000111000011111100", 
    7 => "10111110000101010100111011110100", 
    8 => "00111100111100001001010001010010", 
    9 => "10111101110011001001100011011000", 
    10 => "00111101000111111000111001110000", 
    11 => "00111101001101101101111110101011", 
    12 => "00111101111011011000101110100100", 
    13 => "10111101101111100100111111000111", 
    14 => "10111101111110101111011101001101", 
    15 => "00111100111000110011101101101110", 
    16 => "00111101010000111010010100000110", 
    17 => "10111100111111010000101110001111", 
    18 => "00111110010000100011011110001011", 
    19 => "00111110000110101111010111111101", 
    20 => "00111101100110110010100000011100", 
    21 => "10111110000100011101001101100111", 
    22 => "00111101101111010111000110111110", 
    23 => "10111100100010011010011010101000", 
    24 => "00111101100101101111100101101001", 
    25 => "00111110000000101000100011001110", 
    26 => "10111110000011011010110111111011", 
    27 => "00111110000000011001110101100111", 
    28 => "10111100111011100011011010101010", 
    29 => "00111110000001010101101000111010", 
    30 => "10111101001111011000111100100111", 
    31 => "10111101100100010011110110011101", 
    32 => "10111101101011100100010010011100", 
    33 => "10111101100010001101100110000000", 
    34 => "10111110000000111000010001110111", 
    35 => "10111101101110010100111110000101", 
    36 => "00111101000010101000100010000101", 
    37 => "00111101000010001100101011100000", 
    38 => "10111101100110111010101000100010", 
    39 => "10111110000001000101001111010010", 
    40 => "10111100101010010001010100111000", 
    41 => "00111101000000011011110000010010", 
    42 => "10111110000001010010011111100101", 
    43 => "10111110000010011000010011100100", 
    44 => "10111011111001110001111010001000", 
    45 => "00111110000000000010011101010010", 
    46 => "00111110001100010110000101011111", 
    47 => "00111101101001001011101101010001", 
    48 => "10111101111010011100000000100011", 
    49 => "00111101111001101011101101010110", 
    50 => "00111110001001000110110001110110", 
    51 => "10111011101001101111100010111101", 
    52 => "00111110000001011001111001100010", 
    53 => "00111010110100110101011111010110", 
    54 => "10111100100101101111011010000111", 
    55 => "10111101100111001111100000001110", 
    56 => "00111110000001110011000001000000", 
    57 => "00111100010010000101001101010110", 
    58 => "00111101010100011011100001110100", 
    59 => "00111101010100010100010110111101", 
    60 => "00111101111010110101000100110111", 
    61 => "00111101011111000111000111110001", 
    62 => "10111100111111000000010110011111", 
    63 => "00111101011111110011010010010100", 
    64 => "00111110000111100011011011010010", 
    65 => "10111110000000001011100010001101", 
    66 => "00111101100110000111001101011111", 
    67 => "00111101000010001101101111000001", 
    68 => "10111101011010001010111010010000", 
    69 => "00111101100001011101000001100111", 
    70 => "10111101011101100000000101011111", 
    71 => "10111100001111011000000011111111", 
    72 => "00111101101100100110001101111010", 
    73 => "10111110001011110110000010011110", 
    74 => "00111101000000111101110111000000", 
    75 => "10111101110111001011110011001111", 
    76 => "00111101100001000000111111101101", 
    77 => "10111101101101000010111110011000", 
    78 => "00111101001010110000111010100010", 
    79 => "00111110001100010010000111101110", 
    80 => "00111101101101011110001001100010", 
    81 => "00111101110000101000010111011111", 
    82 => "00111101101100010011110011010100", 
    83 => "00111101100110011001111010111101", 
    84 => "00111110010000001111010001010001", 
    85 => "10111101100100110100001011100000", 
    86 => "00111100110001011100101011100101", 
    87 => "10111011111100001110011011011101", 
    88 => "00111101010011110100011101100110", 
    89 => "00111110000000110100101000000010", 
    90 => "10111101010011110001010101111100", 
    91 => "10111110001011010101110111000100", 
    92 => "10111110011100110001110000100010", 
    93 => "00111101100000111100011010111100", 
    94 => "00111001111100000010110111010000", 
    95 => "10111101110110001110111010101111", 
    96 => "10111101000100111111100000011111", 
    97 => "00111110000001101111001010100110", 
    98 => "00111101111000000110011111001111", 
    99 => "00111101111010101100010010110101", 
    100 => "10111101111110101111100001011001", 
    101 => "00111100010110010010001001000110", 
    102 => "00111100110000001011110100101010", 
    103 => "00111011101011110110010001000111", 
    104 => "10111100111011101111111111111101", 
    105 => "00111100101110011101010101111001", 
    106 => "00111110001001000110010011011100", 
    107 => "10111100011001100111100110110010", 
    108 => "00111100100000101001100111011001", 
    109 => "10111101111000001100011111000001", 
    110 => "10111110010110110110111101011101", 
    111 => "00111101100010000111110110100101", 
    112 => "00111101111010100010101000001011", 
    113 => "00111110001011001111001110011001", 
    114 => "10111100110011000011110011101111", 
    115 => "10111101111000000001001101100110", 
    116 => "00111101000111000111100110110011", 
    117 => "10111101000111110000010100010011", 
    118 => "00111101111001000100100001001001", 
    119 => "10111100101111001110110010000101" );


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

entity inference_conv2d_f3_4_0_0 is
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

architecture arch of inference_conv2d_f3_4_0_0 is
    component inference_conv2d_f3_4_0_0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_0_0_rom_U :  component inference_conv2d_f3_4_0_0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

