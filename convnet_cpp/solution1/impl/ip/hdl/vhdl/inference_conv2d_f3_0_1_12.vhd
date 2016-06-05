-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_1_12_rom is 
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


architecture rtl of inference_conv2d_f3_0_1_12_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111010100000111101101011000001", 
    1 => "00111101110100000011011101010000", 
    2 => "10111110010000001100001100001001", 
    3 => "00111101001001001011111011111100", 
    4 => "00111011110010011010010001111001", 
    5 => "10111101110001110100001101010110", 
    6 => "10111101001110000011011000111101", 
    7 => "10111101101001010010011011110100", 
    8 => "00111010001100100000101010111011", 
    9 => "10111110000000100100011100000010", 
    10 => "10111100110101001100101010010010", 
    11 => "10111011001110100110101001001010", 
    12 => "10111110000101101011101000000110", 
    13 => "10111110000111011111100000101011", 
    14 => "00111101110110101111110110010111", 
    15 => "00111101110100010101010110010011", 
    16 => "00111101011101111111000010000010", 
    17 => "10111101110100110001001010110010", 
    18 => "00111101111110011101000000100000", 
    19 => "10111100101011001001110001000000", 
    20 => "00111101101111100000101001000010", 
    21 => "10111101101110111001100000011001", 
    22 => "00111110000110110110001100001011", 
    23 => "00111101000100111111001111101110", 
    24 => "00111110000111001110000011111100", 
    25 => "00111110001011110101101011011001", 
    26 => "10111100111001111100110111011010", 
    27 => "10111100100010100111011101010010", 
    28 => "10111101111010011010011101111110", 
    29 => "00111101110111001001011010001001", 
    30 => "00111101100110101100111010000011", 
    31 => "10111101100001101110000110101001", 
    32 => "10111011111001110111111001101001", 
    33 => "00111110000100111100110100010100", 
    34 => "00111101101101010000101111100110", 
    35 => "10111101001010110001001010011110", 
    36 => "10111101010011111000000011011100", 
    37 => "00111101101000000001000111101110", 
    38 => "00111101110000001001010000011101", 
    39 => "00111101101101111101000000011011", 
    40 => "00111101010000001000101010111010", 
    41 => "10111101101000010001111111111110", 
    42 => "10111101100111111101101110000010", 
    43 => "00111110001101110111010110111000", 
    44 => "10111110000001010010111001110011", 
    45 => "00111100100000110000001110001011", 
    46 => "10111100111100010011000110011100", 
    47 => "10111101001010011100100010100001", 
    48 => "10111100100010010110110000100101", 
    49 => "10111100110111011010101100001100", 
    50 => "00111101110100101101000010100010", 
    51 => "10111100100100100011010001001011", 
    52 => "00111101011110010010101010001110", 
    53 => "00111101110010011101100000011000", 
    54 => "00111100010001010000100010110011", 
    55 => "00111011100111010111011110100000", 
    56 => "10111100101101100010011000101101", 
    57 => "00111110010110010010110010001100", 
    58 => "00111101100101111111101101000001", 
    59 => "10111110000011000100101011000111", 
    60 => "00111110001000000100101011111001", 
    61 => "10111101001011101000100100110000", 
    62 => "00111101000011001101010010101010", 
    63 => "10111110010000010001001000110100", 
    64 => "00111101101000001111011000011010", 
    65 => "10111101101111011111001111010001", 
    66 => "00111101011001110010001110010000", 
    67 => "10111101100010111110001010110101", 
    68 => "00111101010010011101011001011101", 
    69 => "10111101010110110101100000010101", 
    70 => "10111110010110001110011111011110", 
    71 => "00111101100101100111000101110110", 
    72 => "10111101101011111001000010100100", 
    73 => "10111100010100010011010101111101", 
    74 => "00111110000100111000100101110010", 
    75 => "10111110000100100001111101101101", 
    76 => "00111101011101001100110111010011", 
    77 => "10111100101100011000011111001101", 
    78 => "10111100101101101001101011111100", 
    79 => "10111100100111010001011011000111", 
    80 => "10111101011001011000011011110011", 
    81 => "00111101000111100000111111010000", 
    82 => "10111101100111011101001110100000", 
    83 => "10111110000011001100111011100110", 
    84 => "00111110000110000000010001010011", 
    85 => "10111100110000101001101011100101", 
    86 => "00111110000001011101011110001000", 
    87 => "00111101101010010000011101111011", 
    88 => "10111101111110001011111011111001", 
    89 => "00111101101110011101010001101101", 
    90 => "10111101001011011000010100100100", 
    91 => "00111101110101110111101011110110", 
    92 => "00111100001110111100001110010000", 
    93 => "10111101110010001001111000110100", 
    94 => "00111110000011011111010010000000", 
    95 => "00111100110001010000101111011000", 
    96 => "10111110010000000111011110001010", 
    97 => "10111101000110011010110110000110", 
    98 => "10111011111000111001011100101001", 
    99 => "10111101100000101010000010110111", 
    100 => "00111101111111000000011011100010", 
    101 => "10111110010011000100100001101011", 
    102 => "00111101011101101111001000011111", 
    103 => "00111110010110100110100101111011", 
    104 => "10111101011001111001000101011001", 
    105 => "10111100101110110110011101111111", 
    106 => "10111101101100110100101100101001", 
    107 => "00111101111011111010110111110011", 
    108 => "10111101100101011000010110110001", 
    109 => "00111101110111101001010010101011", 
    110 => "00111101111111010111010011010110", 
    111 => "00111101101100010110011011111011", 
    112 => "10111101101000111110011011111010", 
    113 => "10111101000000100000111001001000", 
    114 => "00111110001011101100111011011101", 
    115 => "10111100101101110111011011111010", 
    116 => "00111101110000110010100100010101", 
    117 => "10111100110100010000110010011000", 
    118 => "00111101110110010111001001000111", 
    119 => "10111100110000100101000000000111" );


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

entity inference_conv2d_f3_0_1_12 is
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

architecture arch of inference_conv2d_f3_0_1_12 is
    component inference_conv2d_f3_0_1_12_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_1_12_rom_U :  component inference_conv2d_f3_0_1_12_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


