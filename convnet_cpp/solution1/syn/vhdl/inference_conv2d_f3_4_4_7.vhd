-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_4_7_rom is 
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


architecture rtl of inference_conv2d_f3_4_4_7_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100111100000110111010010011", 
    1 => "10111101101101011001011010111011", 
    2 => "00111101001101101101011111101001", 
    3 => "00111101110100000010101101000001", 
    4 => "10111101111010111110110001101000", 
    5 => "10111110000101101011110101101111", 
    6 => "00111010101111000101110001100111", 
    7 => "00111110000110010011011111010010", 
    8 => "10111101110101001001111010001000", 
    9 => "10111110000011110011100100001000", 
    10 => "10111101110111011111101010000111", 
    11 => "10111101010001101010101011000100", 
    12 => "10111100100010000010011100010110", 
    13 => "00111101010101111000100111110101", 
    14 => "00111101001100011010110111011101", 
    15 => "10111101100000111011000111000011", 
    16 => "00111110001011011110111001111000", 
    17 => "10111101100000100011010100101111", 
    18 => "10111100001100110100011001111110", 
    19 => "00111100111001000111001111101000", 
    20 => "10111100111101110001001010111100", 
    21 => "00111101001110010100100001010110", 
    22 => "10111110000010001111101110000111", 
    23 => "10111101111101011001011100001011", 
    24 => "10111010001111100011001010110100", 
    25 => "00111100001000001001001111101010", 
    26 => "10111110010111011000010010010000", 
    27 => "00111101000100110010000010001001", 
    28 => "00111110001010000111100010111000", 
    29 => "00111100101100010010111101001101", 
    30 => "10111100011001000111000011000011", 
    31 => "00111101100101110101111011110111", 
    32 => "10111110000111011011001111000000", 
    33 => "00111110000110101111101111000010", 
    34 => "00111110010000011110100000011101", 
    35 => "00111110001000111010111001101000", 
    36 => "00111001000010011010011111110000", 
    37 => "00111101110101001110011001011100", 
    38 => "10111101010001001111111010100010", 
    39 => "00111110000111011000010111100000", 
    40 => "00111110010001010000001111111011", 
    41 => "00111110001101110010111111111101", 
    42 => "10111101010011111010111111010110", 
    43 => "00111101111101011011101100111000", 
    44 => "10111100110010000101101101001110", 
    45 => "00111101001000000100001110100010", 
    46 => "10111101010101110000111100101011", 
    47 => "10111110000110100111101110010001", 
    48 => "10111100001101000001001011000010", 
    49 => "00111100100000010011001001100101", 
    50 => "10111100011011100100001110101010", 
    51 => "00111101110001101100011010001110", 
    52 => "10111101011101011101010000010010", 
    53 => "10111101100011010110100000100110", 
    54 => "00111101000100111011010001100010", 
    55 => "10111101110111101011100101011110", 
    56 => "10111101100100101101010110011101", 
    57 => "00111100100001010000010001001100", 
    58 => "10111101011110000001000000010010", 
    59 => "00111011101010100100011110100111", 
    60 => "10111110000010000010010011010101", 
    61 => "10111110010010100100101011001111", 
    62 => "00111101100111001011011010000101", 
    63 => "00111110000100100000011001000010", 
    64 => "10111101101110001000110111011001", 
    65 => "10111100100010111000010110100101", 
    66 => "10111101101101000101000001011100", 
    67 => "00111110000010100011000101100010", 
    68 => "00111101101010011010010101011000", 
    69 => "10111101011110101101100111110001", 
    70 => "10111101111001011111010110101110", 
    71 => "10111101000100101001011111001101", 
    72 => "00111101101101011000101000100110", 
    73 => "00111101111010110001000111000111", 
    74 => "00111100111000000111011100111001", 
    75 => "00111011111011100000110111100101", 
    76 => "00111101101010000111100110000001", 
    77 => "10111101101000101011111000100000", 
    78 => "10111100111111110111100000011011", 
    79 => "00111101101001111001001111111000", 
    80 => "10111100101110101011001011101111", 
    81 => "10111101101001110010011000000111", 
    82 => "00111101011100110100100001100010", 
    83 => "00111110000100011000000111100000", 
    84 => "00111100100010011100001110011000", 
    85 => "00111110001001110000101111010000", 
    86 => "10111101001110010010001110001000", 
    87 => "00111110001000000001011010001011", 
    88 => "00111101101010111001000010011010", 
    89 => "00111110001101010101000110010011", 
    90 => "10111100001111001011111100111001", 
    91 => "10111110000111111011110100100111", 
    92 => "10111100000001000000011010001010", 
    93 => "10111101100111001011111000010001", 
    94 => "00111110000111101000000101000101", 
    95 => "00111101011010000110011010100001", 
    96 => "10111110000011100110101000110011", 
    97 => "00111101010101000010110111001111", 
    98 => "00111101110000011001101011111101", 
    99 => "00111101101001100100010010110000", 
    100 => "10111100000000011100100000001100", 
    101 => "10111100100110100010000010101000", 
    102 => "00111010011110110101000100000000", 
    103 => "00111110010110010000000110001110", 
    104 => "00111011001100101111001111011110", 
    105 => "10111101100111010010110101010010", 
    106 => "10111101001000101101001111110000", 
    107 => "10111100011011010111010001111000", 
    108 => "00111101111100100111000000101010", 
    109 => "10111100110101000110110010011111", 
    110 => "00111011101011111110000011000011", 
    111 => "10111110010101001010101001010100", 
    112 => "00111100101001010101000110010011", 
    113 => "10111101110011111101111100111011", 
    114 => "10111010110011101101011000111100", 
    115 => "10111100110110000010001101111000", 
    116 => "10111110000101001001111100001110", 
    117 => "00111101111110100101011111101011", 
    118 => "10111101100010110100011011110000", 
    119 => "00111110000000100101001110010111" );


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

entity inference_conv2d_f3_4_4_7 is
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

architecture arch of inference_conv2d_f3_4_4_7 is
    component inference_conv2d_f3_4_4_7_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_4_7_rom_U :  component inference_conv2d_f3_4_4_7_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


