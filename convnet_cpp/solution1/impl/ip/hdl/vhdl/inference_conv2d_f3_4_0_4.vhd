-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_0_4_rom is 
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


architecture rtl of inference_conv2d_f3_4_0_4_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111100010010011010111010100000", 
    1 => "10111101000100010010110101001111", 
    2 => "10111011001110010000010011101111", 
    3 => "10111110001010001100101101001011", 
    4 => "00111101100010110011110000110001", 
    5 => "10111101000101001000000010001011", 
    6 => "10111101101100010011110111010011", 
    7 => "10111100110100101110111011110000", 
    8 => "00111101100110101010111111111111", 
    9 => "10111110000111100101000001000000", 
    10 => "10111101010101101110110001000000", 
    11 => "10111101100010111000101001111000", 
    12 => "00111100001110110011101001101001", 
    13 => "10111101001011111100001011010001", 
    14 => "00111101000010010100011101010111", 
    15 => "10111110001011001110101110111100", 
    16 => "00111101100011101111101000011110", 
    17 => "00111101110100000010001011011101", 
    18 => "00111101110100001111100111010011", 
    19 => "00111101101111100100010110000000", 
    20 => "10111101000100001010101000111100", 
    21 => "10111101000101010111000100010110", 
    22 => "10111110000011100010111100111000", 
    23 => "00111110000100010100010100001111", 
    24 => "00111101010000101100110001100011", 
    25 => "00111101010010000000000011101011", 
    26 => "00111100010111100001001001101111", 
    27 => "10111110000100010110011000010111", 
    28 => "00111110000001010100001101101100", 
    29 => "00111101101101101101011001111110", 
    30 => "00111101100010110110011101111111", 
    31 => "10111100101101110010000001011101", 
    32 => "10111110000111010110000010100110", 
    33 => "00111101110000001010001001000100", 
    34 => "10111110001001110111011101001011", 
    35 => "10111101100000101100000000011110", 
    36 => "00111100001111110011110100101101", 
    37 => "00111101100001010010000101001010", 
    38 => "10111100110100100011111000100110", 
    39 => "10111100101110101011111110111010", 
    40 => "00111101101010110010001011000011", 
    41 => "00111101011100001111101010001111", 
    42 => "10111101010111011101101010100111", 
    43 => "10111101000110010110100111100100", 
    44 => "00111101101100010110110001101111", 
    45 => "10111101100010110100111111011010", 
    46 => "00111110000011011010111011000101", 
    47 => "00111101100000110000000001001011", 
    48 => "00111100110111110101110010000111", 
    49 => "00111101001101100111110100110101", 
    50 => "10111101100011111011110001101011", 
    51 => "00111101100000011100010001011011", 
    52 => "10111101010111010010000111100100", 
    53 => "00111011111100100110111001110010", 
    54 => "00111101101010100110000110000011", 
    55 => "00111100010100110000011000110111", 
    56 => "00111101110100011010110010011011", 
    57 => "00111101100000011011000110010110", 
    58 => "10111100101000011001001110011001", 
    59 => "00111101101100010111011001110010", 
    60 => "10111101011101011110010101011111", 
    61 => "00111101000110101000111000000110", 
    62 => "10111101011001010001101111001001", 
    63 => "00111100100101000010111000100000", 
    64 => "00111101000101101111011001010001", 
    65 => "00111100110000111000101100111010", 
    66 => "00111100010101101011010111101111", 
    67 => "00111101010100110001011110111010", 
    68 => "00111101001111110101101000011110", 
    69 => "10111101100110101111110011001110", 
    70 => "00111100110000001111100111111011", 
    71 => "10111100101001110010010100001000", 
    72 => "10111101100111100100100110100101", 
    73 => "10111011011101011110001001110000", 
    74 => "00111100101011100000111010011100", 
    75 => "00111101110110100001101000001101", 
    76 => "00111101101010001001011101110001", 
    77 => "10111110000001000100010011100001", 
    78 => "10111101110000000101100011000011", 
    79 => "00111011110100100101100101101001", 
    80 => "00111101000111000011100110100010", 
    81 => "10111101100000111110000110111100", 
    82 => "10111101110100011100111100110101", 
    83 => "10111110000000001100100100010000", 
    84 => "00111100011001000100111001011110", 
    85 => "10111101111101011100001100010110", 
    86 => "10111101001100001100010110000000", 
    87 => "00111101100101100000011000010111", 
    88 => "00111101101101101111001101010100", 
    89 => "00111101101010100010001000111011", 
    90 => "10111011110110111011000110101101", 
    91 => "10111101100010000111101001011000", 
    92 => "00111101000101000101100110111111", 
    93 => "10111101000010000000010101010010", 
    94 => "00111100100110101111101110011001", 
    95 => "10111101101001101010100011000110", 
    96 => "10111101110000110000100010111100", 
    97 => "00111110000011010011001001000000", 
    98 => "00111011100010101011100100101100", 
    99 => "10111100111011110001101111100010", 
    100 => "00111100110010000011100011101001", 
    101 => "00111011001110011101000111110011", 
    102 => "00111010100111111010110010101110", 
    103 => "00111101110011110010101111101101", 
    104 => "00111101011110011011010111101001", 
    105 => "10111101000011111101100101110111", 
    106 => "10111101101100111000110110111111", 
    107 => "10111011000111110001101110111010", 
    108 => "10111100101100000110100110001010", 
    109 => "00111101101110101110101011100000", 
    110 => "00111010000110001001100011001111", 
    111 => "00111110000011100010011101011011", 
    112 => "00111101101000100101000101111110", 
    113 => "00111101010001111101010101100111", 
    114 => "10111101011010100100110011011011", 
    115 => "10111100010010000101001001111111", 
    116 => "00111101101011011000100101001000", 
    117 => "10111101110101011111111011011010", 
    118 => "10111100101000110101000110101001", 
    119 => "10111101110010111000111001001100" );


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

entity inference_conv2d_f3_4_0_4 is
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

architecture arch of inference_conv2d_f3_4_0_4 is
    component inference_conv2d_f3_4_0_4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_0_4_rom_U :  component inference_conv2d_f3_4_0_4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


