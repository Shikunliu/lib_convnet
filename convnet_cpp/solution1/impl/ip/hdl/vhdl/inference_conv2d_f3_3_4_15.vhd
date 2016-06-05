-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_4_15_rom is 
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


architecture rtl of inference_conv2d_f3_3_4_15_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111011100111101010100010100010", 
    1 => "10111101100000001110010001100001", 
    2 => "10111110000111000100001110110011", 
    3 => "00111101111111100110001111101001", 
    4 => "10111100011011100010111100011101", 
    5 => "00111101100111101101111000011111", 
    6 => "00111100010101001000111001100010", 
    7 => "00111101001001011111100111011111", 
    8 => "00111101011110001110010111000101", 
    9 => "00111110000101010010000111011110", 
    10 => "10111101011100100100000110011100", 
    11 => "10111101011110111101100100101010", 
    12 => "10111110000100010001001011111101", 
    13 => "00111100001100001101010010110100", 
    14 => "10111100110101110010000101001111", 
    15 => "10111101010011101011101100011001", 
    16 => "00111101101010110010110000011001", 
    17 => "10111101100000011001000000001000", 
    18 => "00111010100011000011001001111110", 
    19 => "10111110000000110101010100000100", 
    20 => "00111110000101111001110101001110", 
    21 => "00111101101100001111011110101100", 
    22 => "10111101100100110100111111000110", 
    23 => "10111101001001001110100001001101", 
    24 => "10111101111001111001011001111101", 
    25 => "00111101100001100000011000010111", 
    26 => "00111101111101100000000101111001", 
    27 => "10111100111111100100011011000010", 
    28 => "00111101110000011010011101001111", 
    29 => "10111110000110010011100010011011", 
    30 => "10111110001011110101000011100011", 
    31 => "10111101000110100110011111000000", 
    32 => "10111101011100111000010001011100", 
    33 => "10111101010000111111000100100110", 
    34 => "00111101110011110011101000010101", 
    35 => "10111101110010011011001111101011", 
    36 => "10111110001001011101001010001101", 
    37 => "00111101110000100011101001111010", 
    38 => "10111101011100100001001111111111", 
    39 => "00111110010101000110000010101010", 
    40 => "10111101011000110011011110001101", 
    41 => "00111100001110100100001101011101", 
    42 => "10111100110000001100001001101000", 
    43 => "10111101010100010110100110011010", 
    44 => "10111110000000100011001000001001", 
    45 => "10111100110011011111100011100111", 
    46 => "00111110000001000001100100011010", 
    47 => "10111100100010011111001101101001", 
    48 => "10111101101000100111111101010001", 
    49 => "10111010101111000110110111011010", 
    50 => "10111101001101010111001111010000", 
    51 => "00111100101100001001000111001110", 
    52 => "00111101100110001111001100110001", 
    53 => "10111101000011110100001011100100", 
    54 => "10111101110001001010011001100101", 
    55 => "00111001000010101110001111100011", 
    56 => "00111110010110101111101101111111", 
    57 => "00111110010000011101011101010110", 
    58 => "10111101000110101001010000110110", 
    59 => "10111011101010100111011010100001", 
    60 => "10111101100001010000000101101010", 
    61 => "00111101100101100000110001111100", 
    62 => "00111101000110110001111110010001", 
    63 => "10111110000110101100101101000011", 
    64 => "00111100110110011011101011110010", 
    65 => "00111101110010111010000011001101", 
    66 => "10111011111001101010000000110011", 
    67 => "00111101100000011111011111100101", 
    68 => "00111101011000111010000111000110", 
    69 => "00111100111110001010100110010101", 
    70 => "10111101001100111010111110101010", 
    71 => "00111100010110101110001101111011", 
    72 => "10111101111100010000010011010101", 
    73 => "00111101010001100101001011001011", 
    74 => "10111010111001101001101010101001", 
    75 => "10111101001101100100001110001001", 
    76 => "00111101111000010001000100100111", 
    77 => "00111101010010001101111100110111", 
    78 => "00111100111111001101110010010101", 
    79 => "00111100001101001110111000011110", 
    80 => "10111101111101111110101010100011", 
    81 => "10111101000110010110011110010101", 
    82 => "10111110001111000111110010010101", 
    83 => "10111110001101010110101000111000", 
    84 => "00111101110010110001001100001001", 
    85 => "10111100101000001000001010001100", 
    86 => "10111101001000101101011101100110", 
    87 => "10111100101011101000001001011111", 
    88 => "10111101101100101110110001000100", 
    89 => "10111101110110011101001111001100", 
    90 => "10111110001000001110111000000111", 
    91 => "00111011110110101000001101101111", 
    92 => "00111011100010110100011000101111", 
    93 => "10111101101001100010101011110010", 
    94 => "00111101000111010010101111011010", 
    95 => "00111101100010110000101010110011", 
    96 => "00111101001100011111101010111001", 
    97 => "10111101110000100001111100011100", 
    98 => "10111110000111011100011110101100", 
    99 => "00111100101110011001110100001111", 
    100 => "10111101011101010000110111111111", 
    101 => "00111101110110101011011011010000", 
    102 => "00111100100000001101101000011011", 
    103 => "00111100010001011111110110100110", 
    104 => "10111101111010100110100001101110", 
    105 => "00111101110100001100111101011011", 
    106 => "10111101100111001000001000001001", 
    107 => "00111101000101111000110100011010", 
    108 => "00111101100111010001000001000111", 
    109 => "00111101101110000000001000000101", 
    110 => "00111110001001101100110011100110", 
    111 => "00111011101001110011110111000111", 
    112 => "10111101110010000101111110110101", 
    113 => "00111101011000110010100100110000", 
    114 => "10111101011101110111000001011111", 
    115 => "00111110000011010010010000011000", 
    116 => "10111100110101101000001111010000", 
    117 => "10111100110110110001101010100011", 
    118 => "00111101000011010010101010100110", 
    119 => "10111100000101000010000000111110" );


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

entity inference_conv2d_f3_3_4_15 is
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

architecture arch of inference_conv2d_f3_3_4_15 is
    component inference_conv2d_f3_3_4_15_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_4_15_rom_U :  component inference_conv2d_f3_3_4_15_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


