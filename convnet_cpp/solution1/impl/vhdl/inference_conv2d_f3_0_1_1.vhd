-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_1_1_rom is 
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


architecture rtl of inference_conv2d_f3_0_1_1_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111011000010101101011001011101", 
    1 => "10111101111000101001101111110001", 
    2 => "10111101110001101101010010011011", 
    3 => "10111101100111001011101001001011", 
    4 => "10111110000010000100001010110111", 
    5 => "00111101010101111110001101001100", 
    6 => "10111100111110010001111101110001", 
    7 => "10111110000010001111100001100010", 
    8 => "10111101100111011111001010110111", 
    9 => "10111110010000100010100101100011", 
    10 => "10111100111111010101100100100111", 
    11 => "00111101001010000101111001110011", 
    12 => "00111101111101110111000100000000", 
    13 => "00111100100100011110100000101010", 
    14 => "00111101100000110000000001001011", 
    15 => "00111101011101100111111100110011", 
    16 => "10111101100110001001111011100011", 
    17 => "00111101110000000010010100000100", 
    18 => "10111110001000000011100101101001", 
    19 => "00111011110111110100011111111010", 
    20 => "00111100100100000111110010000101", 
    21 => "10111101011001110100100010010100", 
    22 => "00111101110101011010010100110011", 
    23 => "10111101000101001001101111101001", 
    24 => "00111101010111011000001110000100", 
    25 => "00111101100011111101011000101001", 
    26 => "00111101010010100000100000101100", 
    27 => "10111101101010110011011101010001", 
    28 => "00111101101110010001110011111010", 
    29 => "00111110000001001011110111111101", 
    30 => "00111101101001010100100011111010", 
    31 => "10111110000101101110001011101011", 
    32 => "00111100101101001111100001100101", 
    33 => "10111110000010100100111110000111", 
    34 => "10111100111101000100010111101101", 
    35 => "10111100011011100110100010010011", 
    36 => "00111101100011110111010110010111", 
    37 => "00111101111100001010000000101100", 
    38 => "10111100110111100000110011000110", 
    39 => "00111101010101110001100111000010", 
    40 => "10111110001000001100000111111101", 
    41 => "10111101000000110000010110100100", 
    42 => "10111100001111001011010111111110", 
    43 => "10111100110001100100001001101111", 
    44 => "10111101101111001100100111010000", 
    45 => "00111101100111110010100010000101", 
    46 => "00111100111000001111001111001011", 
    47 => "10111101010001110101001000111010", 
    48 => "10111101001111101010001100111110", 
    49 => "10111101001110101100001100010101", 
    50 => "00111101010010100010001110100101", 
    51 => "10111110000101101110110001011011", 
    52 => "10111101011000100000000110011000", 
    53 => "10111101010011101111100111001110", 
    54 => "00111101101010001011111100101110", 
    55 => "10111101100100001010101011000011", 
    56 => "00111101011101010110110101010000", 
    57 => "10111101001100110110011111010111", 
    58 => "00111101000100110000000000100010", 
    59 => "10111110001001110100101101000000", 
    60 => "00111101010101011010111001010011", 
    61 => "10111101100010101110101011111011", 
    62 => "10111101011000110001101001100111", 
    63 => "00111101111011100111111011101001", 
    64 => "10111100111111011101000100011100", 
    65 => "00111110010000000011011001000100", 
    66 => "10111101111100101000001010000100", 
    67 => "00111100110111000010100110010111", 
    68 => "10111100111101010101010101001100", 
    69 => "00111100111011100001101111010010", 
    70 => "10111101010011010011111010101101", 
    71 => "10111110001011000111111111111110", 
    72 => "10111110010100101011110101111111", 
    73 => "10111101101101010011000100101101", 
    74 => "00111101110100101101001111001000", 
    75 => "00111101111111100110000000111101", 
    76 => "10111100000100111101010101101010", 
    77 => "00111101000000001010010101110111", 
    78 => "10111011111101011101000000100110", 
    79 => "00111100111000111001111000110101", 
    80 => "10111011000100010110101001001011", 
    81 => "10111101100000011010010100011100", 
    82 => "10111101110111101101110110001011", 
    83 => "10111101011001011100100100011101", 
    84 => "10111110000101111100000011110100", 
    85 => "10111101111011001010011010000111", 
    86 => "10111101100100011010110111000010", 
    87 => "00111101000011100110111000100010", 
    88 => "10111101000001111011001101101110", 
    89 => "00111110001011110101110110111100", 
    90 => "00111101011101100000101111011011", 
    91 => "00111101100110101111001100001110", 
    92 => "00111101001000111001011111010000", 
    93 => "10111011111110011101101000110111", 
    94 => "00111110000010100000011100101101", 
    95 => "10111101011110111010100010011101", 
    96 => "10111110000100001100001011000110", 
    97 => "00111100110101011000000100111100", 
    98 => "00111101101010110011101101011010", 
    99 => "10111101110001110111101011011011", 
    100 => "00111100110001000011010110000100", 
    101 => "10111100101011011000111011100100", 
    102 => "10111110000001011111111101100001", 
    103 => "10111101000101011110111011101010", 
    104 => "10111100011111110000000010010001", 
    105 => "10111101011010011011101010010100", 
    106 => "10111100001010011110100111011110", 
    107 => "10111100000011000000101100111100", 
    108 => "10111011111111000001001011100001", 
    109 => "00111011101000101000000000110011", 
    110 => "00111100011000000011011100001101", 
    111 => "10111101100000111001110001011111", 
    112 => "10111101001100100101011011001010", 
    113 => "10111100111111111001011010000011", 
    114 => "10111101001110110010010001111110", 
    115 => "10111101101000001100101011011001", 
    116 => "00111101111101011010101011111000", 
    117 => "10111110000101010000000111100010", 
    118 => "10111100111001100010101101000011", 
    119 => "10111101100001111011101010101010" );


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

entity inference_conv2d_f3_0_1_1 is
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

architecture arch of inference_conv2d_f3_0_1_1 is
    component inference_conv2d_f3_0_1_1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_1_1_rom_U :  component inference_conv2d_f3_0_1_1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

