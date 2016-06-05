-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_1_1_rom is 
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


architecture rtl of inference_conv2d_f3_4_1_1_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111100111000010000111101000100", 
    1 => "10111101010011110101000011110001", 
    2 => "10111101011010011110011101011010", 
    3 => "00111101010000000110011011000011", 
    4 => "10111101101111100001100100001011", 
    5 => "10111101010001101010101100110000", 
    6 => "00111101110100100111100010001110", 
    7 => "10111101100111110011101000000111", 
    8 => "00111110010010011011011011110110", 
    9 => "00111110000111011001111111010011", 
    10 => "10111101111100101111101110100000", 
    11 => "10111101110010101101010110001001", 
    12 => "00111101111001011010100000010101", 
    13 => "10111100000110010101100111011001", 
    14 => "10111100100101110110110110100101", 
    15 => "10111101100000000100110001110001", 
    16 => "00111100000010110110010000001100", 
    17 => "00111110001011010001111000010001", 
    18 => "10111101001011001011011111101111", 
    19 => "10111100100110111000010011110110", 
    20 => "10111101011101101000101100001100", 
    21 => "10111100011101010000101011011001", 
    22 => "00111101100101010111000100111110", 
    23 => "00111101100111110000100000010000", 
    24 => "10111101110101000110111011010010", 
    25 => "00111101001011110111110000001001", 
    26 => "00111100100001001011111001000000", 
    27 => "00111100110101111010001010110100", 
    28 => "10111101100101000011110101101111", 
    29 => "00111100000011100111000011010001", 
    30 => "00111100110010010001110011011111", 
    31 => "00111101101100010010111011101111", 
    32 => "00111101000100111100111010110100", 
    33 => "00111110000101111000110000000000", 
    34 => "00111101110100101001100000000011", 
    35 => "00111101011000011010010110111101", 
    36 => "10111100101000010001111010010011", 
    37 => "00111101001110011110001100000000", 
    38 => "10111101011100100001011101110101", 
    39 => "00111100110001010110000111010100", 
    40 => "00111101110111111001100000110001", 
    41 => "00111011111010000010111011101000", 
    42 => "00111101101101010011110100010100", 
    43 => "10111101110110100000000011100010", 
    44 => "10111011100100010111110110000001", 
    45 => "10111110001001001101000110100110", 
    46 => "00111101011101111011001011011010", 
    47 => "10111100100000111110011000111111", 
    48 => "00111101010010111110011010111110", 
    49 => "10111110000000010011000111101100", 
    50 => "00111101111110100111000010001111", 
    51 => "10111110000010010110001010001101", 
    52 => "10111101011010001000000001010010", 
    53 => "10111101111100101010010100011110", 
    54 => "00111101100010000101011110111101", 
    55 => "00111110001110110100100110011101", 
    56 => "00111110001110100000001001110101", 
    57 => "10111101001011111110111110110010", 
    58 => "10111101100000000011000101010110", 
    59 => "10111101001010100001000100110001", 
    60 => "00111100001011111000111001100011", 
    61 => "00111110001100111000011111011111", 
    62 => "10111100100010110001110000101000", 
    63 => "00111100111101100111011111110111", 
    64 => "10111101100110000110001100010000", 
    65 => "10111100010011111000100001101001", 
    66 => "00111100110010100111111101001010", 
    67 => "00111110010010000010111011001011", 
    68 => "00111101010110110111101110100001", 
    69 => "10111101100010001001000111111101", 
    70 => "00111101100011100000100010111100", 
    71 => "00111110000010010110100001010001", 
    72 => "10111110000100111011111011101100", 
    73 => "00111101110111000001010010000011", 
    74 => "10111101101011101000110000101101", 
    75 => "00111101110001010101010011101110", 
    76 => "10111011101110011101100101000000", 
    77 => "10111110001001110110111011100111", 
    78 => "00111101011110110011011001010010", 
    79 => "10111101110111111000011001011101", 
    80 => "10111101010001101011010011110000", 
    81 => "10111101110011011000101100011110", 
    82 => "00111101010000100010011011101100", 
    83 => "00111100110110110100010100110110", 
    84 => "00111110000101110101101100111110", 
    85 => "00111101010101011101100100011011", 
    86 => "10111101001100110010011111000101", 
    87 => "00111101110100010101111100000011", 
    88 => "10111110010000011011101000111101", 
    89 => "00111110001100011100011000001001", 
    90 => "10111011110001110100101111101111", 
    91 => "10111110000000001010111011011010", 
    92 => "10111101101001110001110110110001", 
    93 => "00111101101001101111011111100100", 
    94 => "00111100100000100001000001000110", 
    95 => "00111101011101001110110110011000", 
    96 => "00111100001001010001100100101010", 
    97 => "00111101111011111110111101111100", 
    98 => "00111101011111110010001100010001", 
    99 => "10111101101010101101101111101111", 
    100 => "10111101010111100110011100001110", 
    101 => "10111101000101001101100010000101", 
    102 => "10111100111100101111110111101111", 
    103 => "00111110001010101111100111101100", 
    104 => "00111110001100101111101111100011", 
    105 => "00111101100111101011000111000100", 
    106 => "10111110000010001101100111111001", 
    107 => "00111101101100011100110000010000", 
    108 => "10111101101010110100100010000011", 
    109 => "00111101111100011111100110101101", 
    110 => "00111101111001010011110100100001", 
    111 => "10111101111100001101010000010011", 
    112 => "10111110000100111010000110010000", 
    113 => "10111101011111000010000011001000", 
    114 => "00111100111010001111101011001011", 
    115 => "10111101110011100111000111001110", 
    116 => "10111100111001101011001010111101", 
    117 => "10111101101000101110010011010010", 
    118 => "00111100001011010000101111010010", 
    119 => "00111101000101011000010001100001" );


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

entity inference_conv2d_f3_4_1_1 is
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

architecture arch of inference_conv2d_f3_4_1_1 is
    component inference_conv2d_f3_4_1_1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_1_1_rom_U :  component inference_conv2d_f3_4_1_1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


