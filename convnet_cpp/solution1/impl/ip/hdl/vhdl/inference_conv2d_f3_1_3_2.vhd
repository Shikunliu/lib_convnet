-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_3_2_rom is 
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


architecture rtl of inference_conv2d_f3_1_3_2_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101000110011001100001110010", 
    1 => "10111101000010001111001101110100", 
    2 => "10111100110011001111001101100011", 
    3 => "10111101101111110100000001101101", 
    4 => "10111101101111101010000101110110", 
    5 => "10111100100000100010001001001111", 
    6 => "00111101100101101000000000010111", 
    7 => "00111101100011010000101010011101", 
    8 => "10111101101111011001101010110000", 
    9 => "10111101001001110011101011110010", 
    10 => "00111101100011001101100110100101", 
    11 => "10111101000011001110011101010100", 
    12 => "10111101001110110000000101111001", 
    13 => "00111110010100001101110011111101", 
    14 => "00111100110111011111011001010101", 
    15 => "10111110000001100110101100011110", 
    16 => "00111101101111111011010010000001", 
    17 => "00111100110010000000000010000000", 
    18 => "10111100010111011110001010011111", 
    19 => "00111101101010111000000110110110", 
    20 => "00111101011001000011000100011101", 
    21 => "10111110000001010001001100110000", 
    22 => "10111101101110001101001001011111", 
    23 => "10111101101011010010110100101010", 
    24 => "00111101001100101000010011101101", 
    25 => "10111101111000101010110100111111", 
    26 => "00111101100110000100100101010010", 
    27 => "10111100001011101110011100001001", 
    28 => "10111100000111001100111101101111", 
    29 => "00111101010100100001111001000101", 
    30 => "10111100110011110110100010001000", 
    31 => "10111110001011001110101100110101", 
    32 => "10111100000001101110101011001011", 
    33 => "00111011110011010011001001100011", 
    34 => "00111100001100111110011111111001", 
    35 => "00111101101110001111011111101001", 
    36 => "10111101000001000110010011101010", 
    37 => "00111100101000001101000111010010", 
    38 => "10111110001000001100010100100010", 
    39 => "10111110000001101111000100010011", 
    40 => "00111110000010101101111111111000", 
    41 => "10111101100100110000011100000001", 
    42 => "10111101101001001101100110011110", 
    43 => "10111101001011000100111110110100", 
    44 => "10111100100011001111011001010011", 
    45 => "10111101000000111010110000001100", 
    46 => "00111100111110111011110000000011", 
    47 => "00111101110001101100110100101001", 
    48 => "00111110001011100000000100010101", 
    49 => "00111101101011100011110001010011", 
    50 => "00111010111011000100010100111000", 
    51 => "00111101110011010000010101101100", 
    52 => "10111011011010101100100110111000", 
    53 => "00111110000010110001111100100101", 
    54 => "00111101010110101011010100100011", 
    55 => "00111110000101111000010010101001", 
    56 => "00111101011010011011110111010100", 
    57 => "00111101110000111001001100100101", 
    58 => "10111101101111100010100001001100", 
    59 => "00111101011011110011001100101001", 
    60 => "10111011110101011000110110100110", 
    61 => "10111101100110110010000000111111", 
    62 => "10111101101101000000111000100101", 
    63 => "10111101100011110100001010000110", 
    64 => "10111110000000110000001101111101", 
    65 => "00111100101010100001011010111111", 
    66 => "00111100111110110010010011001111", 
    67 => "00111100110111001110000011100001", 
    68 => "10111101101001011000110011111010", 
    69 => "10111100111010100000111101101000", 
    70 => "10111101110100101001110101000001", 
    71 => "10111101111011101101011110000100", 
    72 => "00111100000111001110011000110101", 
    73 => "00111011100010111000001001010101", 
    74 => "10111101101000010101000101010100", 
    75 => "00111011111000001111101111011001", 
    76 => "00111101001100101000111011001001", 
    77 => "00111101001110010000011110001001", 
    78 => "10111101110000110110001110110010", 
    79 => "00111101001101011101101010101101", 
    80 => "10111010010111111100010101000100", 
    81 => "00111100110010011100100011010111", 
    82 => "10111100101100101001001010001111", 
    83 => "00111101101010000011000111100011", 
    84 => "00111101111110011111010011010011", 
    85 => "00111101110111110110110110111001", 
    86 => "00111100111101100001000011001001", 
    87 => "00111100101010100101010010011101", 
    88 => "10111110000100010101111011000000", 
    89 => "00111101001100100011100000101100", 
    90 => "10111101010111111100100110010100", 
    91 => "00111110000101110001110001010100", 
    92 => "00111110001111011111001101110011", 
    93 => "10111101100010100111011000010000", 
    94 => "00111100010111100000001101010110", 
    95 => "00111101100011010100100110101111", 
    96 => "10111100000010000011100010111110", 
    97 => "10111100100010010111010001010011", 
    98 => "10111101100001110110001000110111", 
    99 => "00111101010001100110111101101011", 
    100 => "10111101111011011101101101010101", 
    101 => "10111110001101110101110010001110", 
    102 => "10111101011101011000011100011011", 
    103 => "00111100110010101001011010010010", 
    104 => "00111101110110110011111110100111", 
    105 => "10111100100011011000010101011001", 
    106 => "00111101000001011011111010100001", 
    107 => "00111011001111000000110111100011", 
    108 => "00111101111111110100010101011010", 
    109 => "00111101011011100011100011011110", 
    110 => "10111101110001011011101100101011", 
    111 => "10111110001010001101001100101000", 
    112 => "00111101110001011001000100011111", 
    113 => "00111101101101000110100011110011", 
    114 => "00111101011111010100001001100110", 
    115 => "00111101100110011011001111000011", 
    116 => "10111100111101101001010001000110", 
    117 => "10111101001111000101010111110010", 
    118 => "00111101001101001001011001011010", 
    119 => "00111101111111110110100110001000" );


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

entity inference_conv2d_f3_1_3_2 is
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

architecture arch of inference_conv2d_f3_1_3_2 is
    component inference_conv2d_f3_1_3_2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_3_2_rom_U :  component inference_conv2d_f3_1_3_2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

