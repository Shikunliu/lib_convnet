-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_4_4_rom is 
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


architecture rtl of inference_conv2d_f3_0_4_4_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110001011011111101100001101", 
    1 => "10111101010010000101110000001010", 
    2 => "00111110011001111011010111110010", 
    3 => "00111101001110100010000011011110", 
    4 => "00111100001001110010001101011010", 
    5 => "10111101100010011010110001011111", 
    6 => "00111101010000111001001111101110", 
    7 => "00111101100000100100111101011000", 
    8 => "00111110010010011101111011001110", 
    9 => "10111101010001111000101001010011", 
    10 => "10111101111010111011010011010101", 
    11 => "10111110100000110100110111110000", 
    12 => "00111101100110010000111001100111", 
    13 => "10111101101100010001110001111011", 
    14 => "00111011001111111110101010010001", 
    15 => "00111101100010001100101001011001", 
    16 => "00111100000000100111000001001000", 
    17 => "10111101101000110100000100011000", 
    18 => "00111110001111000101001110110001", 
    19 => "00111100010100101110010111101100", 
    20 => "10111101110111010101010111100111", 
    21 => "00111110000000111110010001101001", 
    22 => "00111101000110100010000001110010", 
    23 => "00111100101000100001011001110110", 
    24 => "00111100110100111100101111111010", 
    25 => "10111101111101000000100110100010", 
    26 => "00111101100000011110010011101010", 
    27 => "10111110000011011010110100110010", 
    28 => "10111110000100110011100010110100", 
    29 => "10111100010010111110110001101000", 
    30 => "10111011111011000101100010000011", 
    31 => "10111101100100000001110000011010", 
    32 => "00111100111110000110010110100010", 
    33 => "00111101100100100011111011101111", 
    34 => "10111101110011000010100010001010", 
    35 => "00111011000110010011000101101010", 
    36 => "00111101111100011011010001111000", 
    37 => "00111100010101000000011110111111", 
    38 => "10111101111110111001010110100011", 
    39 => "10111101001100111000111101011111", 
    40 => "00111100011111100001101100100011", 
    41 => "00111101111001111110001010000010", 
    42 => "10111101001100010100100110111010", 
    43 => "10111101101001000001110111011111", 
    44 => "10111101010000101010101111111100", 
    45 => "10111100101001111110011000101110", 
    46 => "00111100010001110111100011010000", 
    47 => "00111101010010010000111101110011", 
    48 => "00111101001011110001000100010101", 
    49 => "10111011111010010011001011011111", 
    50 => "00111110000111110111100110000101", 
    51 => "00111101100110000100001001100111", 
    52 => "10111100010001111011100111010011", 
    53 => "00111101110111001011010011110010", 
    54 => "10111011111010101101111001000101", 
    55 => "00111101001001011001100001011011", 
    56 => "00111011101101010110010011010001", 
    57 => "10111101101000101101100011010000", 
    58 => "10111101110011001111111010011011", 
    59 => "10111110000001011011110111010111", 
    60 => "00111110001011000000111111001011", 
    61 => "10111101100010101101111001110011", 
    62 => "00111100010110111110000110101000", 
    63 => "00111101100110101100110001000010", 
    64 => "10111110000101111110100000000100", 
    65 => "00111101110111010010000111111111", 
    66 => "00111101111000110100001010101011", 
    67 => "10111101100001011000100101110111", 
    68 => "00111100111101111110000010101100", 
    69 => "10111100010110001001010011101101", 
    70 => "00111101100010110000000010010100", 
    71 => "10111001001111000100110101011111", 
    72 => "00111100101111000001101111011010", 
    73 => "10111101100101001010011111010000", 
    74 => "00111101101001101100100001010110", 
    75 => "00111110010111010010001111010101", 
    76 => "00111101011000010011100100000000", 
    77 => "00111110000001111111011100111000", 
    78 => "10111101010010110111100011110101", 
    79 => "00111011100100001100101001101000", 
    80 => "10111101111101001010010011010011", 
    81 => "00111110000010010100100100011111", 
    82 => "10111101001101110011100011100111", 
    83 => "10111101110110101001100001100111", 
    84 => "00111110000001100001001110010000", 
    85 => "10111110000100001001010111110010", 
    86 => "10111100101101101010111001111101", 
    87 => "10111110001100011010000010001100", 
    88 => "10111110010010111000111001001100", 
    89 => "10111011111111000011000000010010", 
    90 => "00111101100000101000110001000100", 
    91 => "00111100100011101101110001110010", 
    92 => "10111101110110000010000000011101", 
    93 => "00111101100101110001101100101101", 
    94 => "00111101001010100101110111110010", 
    95 => "00111110000100111011110100010110", 
    96 => "00111101001000111101000011110101", 
    97 => "00111110000100011101001000011000", 
    98 => "00111101100110111000010100000100", 
    99 => "00111110001111110110100101000100", 
    100 => "00111100110000001100100000010001", 
    101 => "00111100111010111110000100101111", 
    102 => "10111101100011100010111111001100", 
    103 => "00111101100011110100011110011100", 
    104 => "10111011101001010011001001010100", 
    105 => "10111100000001111110111101011000", 
    106 => "00111101110000111111110111010110", 
    107 => "10111110010000110101000010001111", 
    108 => "00111110001001100011011001101101", 
    109 => "10111110000100001001111000010011", 
    110 => "00111001010010011111000101110011", 
    111 => "10111110010000000000001110101100", 
    112 => "00111110000011000000010111010101", 
    113 => "00111101100111110111111101111111", 
    114 => "10111101001111101000010111000111", 
    115 => "00111101100111011000000110000110", 
    116 => "10111100010000110010000110111110", 
    117 => "00111110000110110110111000001101", 
    118 => "00111101010111100001011011010111", 
    119 => "00111110001010110001011111001110" );


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

entity inference_conv2d_f3_0_4_4 is
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

architecture arch of inference_conv2d_f3_0_4_4 is
    component inference_conv2d_f3_0_4_4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_4_4_rom_U :  component inference_conv2d_f3_0_4_4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

