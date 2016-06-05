-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_3_2_rom is 
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


architecture rtl of inference_conv2d_f3_4_3_2_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101010000000110001000100110", 
    1 => "00111101001011011000001101000001", 
    2 => "00111110001000010100000001010111", 
    3 => "00111101001000011111011000001111", 
    4 => "00111101111010010011001100011010", 
    5 => "10111100101001011111110000010011", 
    6 => "00111100101101100111101101010010", 
    7 => "10111101101001100000111000110111", 
    8 => "10111101011000001111110111000001", 
    9 => "00111101110111111000001110111110", 
    10 => "10111101001011100110011111110010", 
    11 => "10111101101101101000101001101011", 
    12 => "00111101100011111000000111101001", 
    13 => "00111100000011010000011101100101", 
    14 => "00111100111001001011110011100011", 
    15 => "10111101101110010101111110011101", 
    16 => "10111101011101011011000010000110", 
    17 => "10111100010110011100101000001011", 
    18 => "10111100101000110100111101011011", 
    19 => "00111101101001001011111100001010", 
    20 => "00111110000110000000111110011001", 
    21 => "10111101111100001111000011101001", 
    22 => "10111011100100011010111000101000", 
    23 => "00111101001010101111110001001000", 
    24 => "00111110000011101100100001010000", 
    25 => "00111101111111010001110011000001", 
    26 => "10111100111110100110000100100101", 
    27 => "00111110000010001000110010100100", 
    28 => "10111100100010110010100000011100", 
    29 => "10111101100100111101101111010000", 
    30 => "10111101011000100000001101111011", 
    31 => "10111101101101100100110000010101", 
    32 => "00111101000001111010001000111011", 
    33 => "00111100111000110010100010001111", 
    34 => "10111101001111001001101011110001", 
    35 => "10111101100100111010010110100111", 
    36 => "10111110001001010011010101000100", 
    37 => "10111101010101011001011110101100", 
    38 => "00111101101100101101010011000111", 
    39 => "10111110001011111100101000000000", 
    40 => "00111101010110001110100011001111", 
    41 => "00111110000100010111001010101100", 
    42 => "10111101011110011011100110010101", 
    43 => "00111101100010010110110011101110", 
    44 => "10111101111110011000010000011011", 
    45 => "00111010010100110000100101110100", 
    46 => "10111110000001101010000110100101", 
    47 => "00111101100100000010001001010111", 
    48 => "00111101101001100100000100100000", 
    49 => "00111100011001110001001001011110", 
    50 => "10111100000101000111101111101110", 
    51 => "00111101010111010010100100111011", 
    52 => "00111101000110001101100110011011", 
    53 => "10111101001000010010010101100100", 
    54 => "00111110000111111010101100010001", 
    55 => "00111101101010001101001000101001", 
    56 => "10111101001100110011011001011001", 
    57 => "00111101111001010001100011110100", 
    58 => "00111100111011100111000111001110", 
    59 => "10111110000111011110100000101101", 
    60 => "10111101110000010110100011101011", 
    61 => "00111100001110111101111110101010", 
    62 => "10111110000100110001110011101011", 
    63 => "10111101100010111001001011001110", 
    64 => "00111110001110011010101001100001", 
    65 => "10111100111000100101000000100010", 
    66 => "00111101010110110111100001000110", 
    67 => "00111101001110100110100010010111", 
    68 => "10111101011100101100011001110110", 
    69 => "10111101110111110010100100001011", 
    70 => "10111101001110010010010110100001", 
    71 => "10111011111001001011010110110111", 
    72 => "10111101110011111101011101011110", 
    73 => "00111101001110001001000101011100", 
    74 => "10111101101001111010001001100011", 
    75 => "00111011111111000100111011011011", 
    76 => "10111101001001101010000001001000", 
    77 => "00111101011000111001100110110011", 
    78 => "10111110000101111000100110100100", 
    79 => "00111110000100110101111000110001", 
    80 => "00111110010110011000000011110101", 
    81 => "00111101101001110010111100001100", 
    82 => "00111100001010110010111111000100", 
    83 => "00111101010010010001110110000000", 
    84 => "00111101010000010000010101101001", 
    85 => "00111110001000101000101101101110", 
    86 => "00111110000001011011010100110001", 
    87 => "00111101001011111101110000010110", 
    88 => "00111101000100000100001010100011", 
    89 => "10111110001001000000000000110010", 
    90 => "00111100110100010111010011010010", 
    91 => "10111100100101001100011001100001", 
    92 => "00111101011010100010001100000100", 
    93 => "10111101110101101111011011010111", 
    94 => "00111101010111011000001010101101", 
    95 => "10111110000000110001011101101010", 
    96 => "10111101001101110011011010110011", 
    97 => "10111101011010110010100110010100", 
    98 => "00111100000001001001000000001000", 
    99 => "00111101011111000010111000011001", 
    100 => "10111100001111011010010111101000", 
    101 => "00111101101111100100111101001110", 
    102 => "00111101110100000010000101001011", 
    103 => "10111101111110000101010110010111", 
    104 => "00111101100101110111010111000101", 
    105 => "10111011110001101000101011111111", 
    106 => "10111100101100000001100101101110", 
    107 => "10111011101000000101111101110001", 
    108 => "00111101110100001011100011010000", 
    109 => "00111110010011101110001011001010", 
    110 => "00111101100100100110000101100001", 
    111 => "00111101111001011001011001000010", 
    112 => "10111011100100101011001010100000", 
    113 => "10111110000100011100001110101101", 
    114 => "00111110010001110101111100101101", 
    115 => "10111101001010011011110011001000", 
    116 => "00111101101001100100011011111111", 
    117 => "10111100110000011111101011100010", 
    118 => "10111101000011110001110111000101", 
    119 => "00111101110111000011001011101100" );


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

entity inference_conv2d_f3_4_3_2 is
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

architecture arch of inference_conv2d_f3_4_3_2 is
    component inference_conv2d_f3_4_3_2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_3_2_rom_U :  component inference_conv2d_f3_4_3_2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


