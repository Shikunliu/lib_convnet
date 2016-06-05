-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_2_0_15_rom is 
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


architecture rtl of inference_conv2d_f3_2_0_15_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100000101011010001111101100", 
    1 => "00111100110101100100110111101010", 
    2 => "10111101111101010001101011001010", 
    3 => "00111101010111010001001001111010", 
    4 => "00111101101001001011001001100111", 
    5 => "00111101010111100101110000100110", 
    6 => "10111101010101000111001001001000", 
    7 => "00111101000011001001110100010111", 
    8 => "00111100001011011001101001101101", 
    9 => "00111101010011000101010000011100", 
    10 => "10111101100110010011110100111000", 
    11 => "10111101101111110000000101001101", 
    12 => "00111101110111001011011110010001", 
    13 => "10111110001101001011000000011000", 
    14 => "00111101111001010100001101101100", 
    15 => "00111101101000010111001110011110", 
    16 => "10111101001011110101110001011111", 
    17 => "10111101101111100101110111100001", 
    18 => "00111110001000101110010101011000", 
    19 => "00111100101100101011000111001110", 
    20 => "10111101110101101010101111011110", 
    21 => "10111100001011101000010001111000", 
    22 => "10111101000011101100101110101011", 
    23 => "10111100011100000100100100111110", 
    24 => "00111101011110111100000110101101", 
    25 => "10111110001111011000111000000000", 
    26 => "10111011101101001111111011010000", 
    27 => "10111101110100010100110110110110", 
    28 => "00111100001011101001101010110011", 
    29 => "00111100100111011001101001111010", 
    30 => "00111101001011011011100101011100", 
    31 => "10111101000000000110101110110000", 
    32 => "10111101111100011100101100000100", 
    33 => "00111101101101101101100101100000", 
    34 => "00111101111110110110110111001010", 
    35 => "10111101110001110001111011110011", 
    36 => "00111101100010000101010000111010", 
    37 => "10111101001000011110010010100111", 
    38 => "00111101101001111101100000101110", 
    39 => "10111100100011001111110011010011", 
    40 => "10111100111000111000111111110010", 
    41 => "10111101011110101011110110100001", 
    42 => "00111101010101000100011110000000", 
    43 => "10111101001011100001110001011000", 
    44 => "10111101001101000111100111010101", 
    45 => "10111101110000100001001010111101", 
    46 => "10111100111000101011100011111101", 
    47 => "10111110000111111011101111011000", 
    48 => "10111101100000111111101000011101", 
    49 => "00111101111000000111010011101011", 
    50 => "10111011101011110000000011110100", 
    51 => "10111101111100110011110010100011", 
    52 => "00111101111011100000001100101110", 
    53 => "00111101010000001101011000011111", 
    54 => "00111110001100111110011100001000", 
    55 => "00111100011101001110000110111111", 
    56 => "00111100100001100000000000101010", 
    57 => "00111101001010011110001010100010", 
    58 => "10111011101100100101010110111110", 
    59 => "00111011100111010101111001001010", 
    60 => "00111101001000111010011110001010", 
    61 => "00111100111000110101101000001101", 
    62 => "00111101101001101111111100111011", 
    63 => "10111101100011101110100101001010", 
    64 => "10111110011100101100101010011011", 
    65 => "00111101011111111011001100111111", 
    66 => "00111101101001111011110000111100", 
    67 => "10111101100011000000111000011110", 
    68 => "00111101101000111001110000011100", 
    69 => "10111101010001111001001111111000", 
    70 => "00111100100001101001111001001010", 
    71 => "10111101000001100111000011100011", 
    72 => "00111101000000101011001010011000", 
    73 => "00111100101101011111001001100000", 
    74 => "10111100010111011010000011000101", 
    75 => "00111101101000101101000001000100", 
    76 => "10111101110101110100110101011001", 
    77 => "00111101111010101100101001111001", 
    78 => "10111100100010111001001101000111", 
    79 => "00111101000111110111001010100111", 
    80 => "00111101110010000000101111010011", 
    81 => "10111011011010011101111110000010", 
    82 => "10111101001011111011001100010110", 
    83 => "00111110001010101110000110001011", 
    84 => "10111101000001110000100011010011", 
    85 => "10111101011101011111110100101101", 
    86 => "00111110000011100000011101011111", 
    87 => "00111110001100011111110010001111", 
    88 => "10111101001001101101110001111000", 
    89 => "10111101001100110110101010010001", 
    90 => "10111101000001010100110001110000", 
    91 => "00111110000000101001001000111110", 
    92 => "00111101100101011101110111000101", 
    93 => "00111101101001110011010000111100", 
    94 => "00111110001001110010011001001010", 
    95 => "00111101100100000100011010010010", 
    96 => "00111010010110011010101001001101", 
    97 => "00111100111110100100111001000101", 
    98 => "10111101011001100000100100010100", 
    99 => "10111101100011000110110010011000", 
    100 => "00111110000001011101101110111010", 
    101 => "10111101100101000111011111110010", 
    102 => "10111101110110101110001011011010", 
    103 => "10111110010001101000000011100000", 
    104 => "00111101000100110100010010011011", 
    105 => "10111101100111000011000001001101", 
    106 => "00111101000110111010100110101010", 
    107 => "10111101101100001111100010000011", 
    108 => "00111110001111100011011100010101", 
    109 => "00111100000001111000110010110001", 
    110 => "00111100001101100011101010111010", 
    111 => "00111101001110100111110110101010", 
    112 => "00111101001101110001101000010011", 
    113 => "00111101101101101110010111011011", 
    114 => "10111100111111100101001101011000", 
    115 => "10111101100011111010101100011110", 
    116 => "00111101000000110010001001011111", 
    117 => "10111101100001111110100101010011", 
    118 => "00111110000000101011011101111000", 
    119 => "00111101010110100111011001010011" );


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

entity inference_conv2d_f3_2_0_15 is
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

architecture arch of inference_conv2d_f3_2_0_15 is
    component inference_conv2d_f3_2_0_15_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_2_0_15_rom_U :  component inference_conv2d_f3_2_0_15_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


