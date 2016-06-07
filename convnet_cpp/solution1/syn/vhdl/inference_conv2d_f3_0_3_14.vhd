-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_3_14_rom is 
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


architecture rtl of inference_conv2d_f3_0_3_14_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110000110100110110101101010", 
    1 => "00111101100101011110110010000001", 
    2 => "00111101001000110100000101001110", 
    3 => "00111101011111100001001010001010", 
    4 => "10111110001110010010010100110101", 
    5 => "10111101011011000100111011011110", 
    6 => "10111100101000011101111010101101", 
    7 => "00111110001100000101111000011100", 
    8 => "00111110011000100101001101010100", 
    9 => "10111101101010010100010011111011", 
    10 => "00111110011011010110110111000010", 
    11 => "10111011110101010010100110101000", 
    12 => "00111101001100111110000001101101", 
    13 => "00111110010100000100000101000110", 
    14 => "10111110001111101100100000001100", 
    15 => "00111101011110101011000101110111", 
    16 => "00111101101000101011101001001101", 
    17 => "00111101010011111100110110011110", 
    18 => "00111100100101110011000001101000", 
    19 => "10111110100100101100111101110100", 
    20 => "10111011011001111110111001100110", 
    21 => "10111101010001110001010011000111", 
    22 => "00111110000001110110100011100000", 
    23 => "10111100111110001000110000000011", 
    24 => "00111101001111110101011001110010", 
    25 => "10111101101000010100010001111011", 
    26 => "10111110000001010111111010101010", 
    27 => "00111101100110011011110111101111", 
    28 => "10111110001100010000111111011000", 
    29 => "10111110000110010110001001001010", 
    30 => "00111110010100110101111111000100", 
    31 => "00111101010111101010000001101010", 
    32 => "00111101101001000011001111111111", 
    33 => "00111100000110100001100010010000", 
    34 => "00111110000100101011101100100011", 
    35 => "00111110001011111101000011010000", 
    36 => "10111101011101100101010101000001", 
    37 => "10111101110101000111000101110001", 
    38 => "00111110000101001101111111001110", 
    39 => "00111100111110110011101100001010", 
    40 => "00111110000101011000011001000100", 
    41 => "10111110000111110111011100101001", 
    42 => "10111101001001111100111001100000", 
    43 => "10111011100010011000011000111100", 
    44 => "10111110000110110001111000011001", 
    45 => "00111101010011011101110111110100", 
    46 => "00111100101110101001001101000100", 
    47 => "00111101110110000001100111010010", 
    48 => "10111101101011010100101111111110", 
    49 => "10111101111001010111011001000111", 
    50 => "00111110010010001010110011100010", 
    51 => "10111101001101000000101011100100", 
    52 => "10111101100001110000011111010100", 
    53 => "10111101101010110111101010010101", 
    54 => "10111101111010000110001011110110", 
    55 => "10111101100101001001011100010110", 
    56 => "10111100011011111001000110001000", 
    57 => "00111110000100101100000000011110", 
    58 => "10111101100001010100100111111001", 
    59 => "10111101001000001111010100001101", 
    60 => "10111110001110011000100010010000", 
    61 => "10111101111101010001011100011110", 
    62 => "00111100000001110101111001101110", 
    63 => "10111100101111001110000111010011", 
    64 => "10111101110010101111011110011101", 
    65 => "10111110000000111001000011001001", 
    66 => "10111100011111011010001011000011", 
    67 => "10111110011101001110001001101101", 
    68 => "10111101111010001011110110101001", 
    69 => "10111110000111111110111110111111", 
    70 => "00111101100100101111110100110011", 
    71 => "00111101100111001100100000111101", 
    72 => "00111101110110110100001111011001", 
    73 => "10111011101110100101110011011110", 
    74 => "10111100001011101010011000000110", 
    75 => "10111110000010011100010011011011", 
    76 => "10111101000100101010111001110011", 
    77 => "10111101000111101110110011000000", 
    78 => "00111101100000110001111101101111", 
    79 => "00111101100010001100001100011101", 
    80 => "10111100110111011001011110001011", 
    81 => "00111100011110010011110010010111", 
    82 => "10111101101011011100100111101101", 
    83 => "10111100110111000100111100100001", 
    84 => "00111110000100100100011000111001", 
    85 => "00111101001010111011101110100101", 
    86 => "00111110010000101000100000000101", 
    87 => "10111110100011111001001011110011", 
    88 => "00111101001100111011110100010110", 
    89 => "00111010000010001000000001010011", 
    90 => "10111101010100010100111100101101", 
    91 => "00111101000100110010100100000111", 
    92 => "10111110000000010111001111111011", 
    93 => "10111101010000101011111110011000", 
    94 => "00111101100010000111010100110100", 
    95 => "00111101011100011001111100010100", 
    96 => "00111110001100111100010010110001", 
    97 => "10111110010000110111111001101111", 
    98 => "00111101011101110010101101100000", 
    99 => "00111110000111101111001101001101", 
    100 => "10111101001101110100000110000000", 
    101 => "10111110001010001010000011010011", 
    102 => "00111101101111010111000010001001", 
    103 => "10111110000111011001010101010111", 
    104 => "00111101100111010111111111001011", 
    105 => "10111101110101100101110111000000", 
    106 => "00111101011101100011010011011011", 
    107 => "00111100110010001001100010001011", 
    108 => "00111101110101010110111010101101", 
    109 => "10111100111001000000010011000010", 
    110 => "00111100001101100111010000110000", 
    111 => "10111100111110101000110100101111", 
    112 => "00111110011101111100001100001101", 
    113 => "00111101111010100000000000011001", 
    114 => "10111101000111000000111010001001", 
    115 => "10111100111011100111101100111110", 
    116 => "00111101101001101011111111110011", 
    117 => "10111101100101101011000111100110", 
    118 => "10111101110000111010101110010100", 
    119 => "00111100111101110001110010010111" );


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

entity inference_conv2d_f3_0_3_14 is
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

architecture arch of inference_conv2d_f3_0_3_14 is
    component inference_conv2d_f3_0_3_14_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_3_14_rom_U :  component inference_conv2d_f3_0_3_14_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

