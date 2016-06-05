-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_1_5_rom is 
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


architecture rtl of inference_conv2d_f3_3_1_5_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101111100000110000010111011", 
    1 => "00111100100001010001000010101011", 
    2 => "00111101111011111101011111100100", 
    3 => "10111101100000111100110010110110", 
    4 => "10111110001100011110010001110001", 
    5 => "00111101101010010100011100100001", 
    6 => "00111101001010101110000010011001", 
    7 => "10111101101100000000101010110010", 
    8 => "00111101000011010000100100110011", 
    9 => "00111101101010000100110011010110", 
    10 => "10111101001110000000111010110101", 
    11 => "10111101101001001000011011001000", 
    12 => "00111101001100010001111010000110", 
    13 => "00111101111000001111111011001110", 
    14 => "00111110001011100001001101101110", 
    15 => "00111101101100011101010110001101", 
    16 => "10111110001111001111110101001100", 
    17 => "10111100100011110111100110000101", 
    18 => "10111110001001001000010101011110", 
    19 => "10111101011101101100111001011110", 
    20 => "00111101110111011110101101010011", 
    21 => "00111101101110010101100110111110", 
    22 => "00111011000000011001110001001101", 
    23 => "00111100100111010100111000100100", 
    24 => "10111110000000001011111010010100", 
    25 => "00111101100110000111011011100010", 
    26 => "00111100100111101110111000000010", 
    27 => "10111110000011001011110000000110", 
    28 => "10111101111000101101010100010111", 
    29 => "10111101000010100111000010110111", 
    30 => "00111101001011111000110010000000", 
    31 => "00111101011010111010100000001010", 
    32 => "10111101011001011001111011011011", 
    33 => "10111101111111001011010101111000", 
    34 => "10111100100110111011000011001011", 
    35 => "00111101001101001101101101011001", 
    36 => "10111100111110010011011010000010", 
    37 => "00111110000001010101110010010110", 
    38 => "00111010101010101000000001000111", 
    39 => "10111101100000010110111111111111", 
    40 => "00111101101100101011101111000100", 
    41 => "10111101001100011110101011100100", 
    42 => "00111110000110100000101101011111", 
    43 => "00111101010010001011101100100101", 
    44 => "00111101100000010010100101101110", 
    45 => "10111101001001000110010011101010", 
    46 => "00111100010010100101111110100000", 
    47 => "00111011101111001010010001001011", 
    48 => "00111101010000011011110101101111", 
    49 => "10111101110011011111001101110011", 
    50 => "10111110010110000000010111100110", 
    51 => "10111101101000101101001001101011", 
    52 => "00111101111011000000110101101111", 
    53 => "00111101000100001111101111101100", 
    54 => "00111100101111110010111100100000", 
    55 => "00111110000100010011011100101010", 
    56 => "00111101110011100111101100111110", 
    57 => "10111101101110010010010100000000", 
    58 => "00111101000100011100111100000000", 
    59 => "10111101101011110000000011100010", 
    60 => "00111101010101011101001100000110", 
    61 => "00111101011001010000001000011000", 
    62 => "10111100100111000111011111010000", 
    63 => "00111110000000011000011011011011", 
    64 => "00111101111000011100110101100000", 
    65 => "10111011101110000000110000100000", 
    66 => "10111100011110000010110100111000", 
    67 => "00111100110100110110111001110010", 
    68 => "00111110000000011000000010010001", 
    69 => "00111010100110001101110110000111", 
    70 => "10111101101010100110101100000000", 
    71 => "00111101010100011000001001110100", 
    72 => "10111101101010000010110101111011", 
    73 => "00111101000100101111010101110000", 
    74 => "10111110000001101011110000011111", 
    75 => "10111101100000010011111101110011", 
    76 => "00111101010001011010000111001011", 
    77 => "10111101001001010001101000110110", 
    78 => "00111110001101001000000100101100", 
    79 => "00111101010010110001111101001110", 
    80 => "10111110010000111001010001110101", 
    81 => "00111110001011011111000011010100", 
    82 => "10111110001100100000101110000000", 
    83 => "10111100111101100001111001101010", 
    84 => "10111101100000001110000111011101", 
    85 => "10111101001110001000010011000111", 
    86 => "10111101101110001011010011101000", 
    87 => "00111101101011010111001011011000", 
    88 => "00111101110100010111011100100001", 
    89 => "00111110001100100011111011100010", 
    90 => "10111110001110000101111111010000", 
    91 => "10111101011011111111010111000111", 
    92 => "00111100111000101110101000010000", 
    93 => "00111110000011000101001110110001", 
    94 => "10111110010011011111011100011111", 
    95 => "00111101101100011010111110100101", 
    96 => "10111101001000010010001011100000", 
    97 => "00111011101110010011000100111010", 
    98 => "10111100100111001010110011011111", 
    99 => "10111010111100011001000100100111", 
    100 => "00111110000101000011111011011001", 
    101 => "00111101000111100101100100110111", 
    102 => "10111101001101000011000100101010", 
    103 => "10111101011000000000111110000101", 
    104 => "10111101100010110100000000111011", 
    105 => "00111101101011100110001011011100", 
    106 => "10111011101011000111011000010101", 
    107 => "10111100011011101000100001110100", 
    108 => "00111100010111011011100100011001", 
    109 => "10111101101011101001100110011001", 
    110 => "10111101100010001001111011001000", 
    111 => "10111110000001011001110110011001", 
    112 => "00111110001100011011011100010111", 
    113 => "00111101011011111101010000011110", 
    114 => "10111101110001000011110110100101", 
    115 => "10111101010001111101000000001110", 
    116 => "00111100000100000111001101010101", 
    117 => "10111101010010101110011100011001", 
    118 => "00111100100001011101001001110010", 
    119 => "00111100110111011100011011110000" );


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

entity inference_conv2d_f3_3_1_5 is
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

architecture arch of inference_conv2d_f3_3_1_5 is
    component inference_conv2d_f3_3_1_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_1_5_rom_U :  component inference_conv2d_f3_3_1_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


