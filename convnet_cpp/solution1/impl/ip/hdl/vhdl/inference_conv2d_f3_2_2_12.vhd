-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_2_2_12_rom is 
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


architecture rtl of inference_conv2d_f3_2_2_12_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110000010001011010111001100", 
    1 => "00111110001111101111110111001010", 
    2 => "10111110000101000111101010011110", 
    3 => "00111100110000110011000101111000", 
    4 => "00111110001100111011010001110000", 
    5 => "00111101100010101010100110001100", 
    6 => "00111100101000010010111101011010", 
    7 => "00111101111111111000000000010011", 
    8 => "10111011101011110111110111110010", 
    9 => "00111101101000110000000011011110", 
    10 => "00111101000100010101000100101011", 
    11 => "00111100001100001010011011111100", 
    12 => "00111101000010001011001011000010", 
    13 => "10111110001101100111001011111100", 
    14 => "00111101101100111011011000010000", 
    15 => "00111100110000010001100100111010", 
    16 => "00111100100100111010010100101110", 
    17 => "10111100100011100011001101101010", 
    18 => "00111101010010000110011011010111", 
    19 => "10111101110011000110000000010000", 
    20 => "00111101111101000101100101010011", 
    21 => "00111100100001111111111010011100", 
    22 => "00111101000000000100010101010000", 
    23 => "10111101000011101101010100000000", 
    24 => "10111101100101001010101110100100", 
    25 => "10111110001111010110010111100100", 
    26 => "10111101100011100001101011101110", 
    27 => "10111100110001111001100100011100", 
    28 => "00111101000011001011100110000010", 
    29 => "00111101011101100111001110001111", 
    30 => "10111101110011100100010111000011", 
    31 => "00111011100001111000011100110011", 
    32 => "10111110000000110001000001010110", 
    33 => "10111110010010010111110011000100", 
    34 => "00111101010001110111111000001110", 
    35 => "10111101100100010001101101100001", 
    36 => "00111101000001101110111011101101", 
    37 => "00111101111100111011100101101011", 
    38 => "10111101001011101011100100110110", 
    39 => "00111101000010110010101011010110", 
    40 => "10111110000010101000110110101000", 
    41 => "10111100100000100110000100000011", 
    42 => "10111100010101101010100011101111", 
    43 => "00111110000000000100101111000010", 
    44 => "10111110000010000000011101111001", 
    45 => "00111110010010001010100011110100", 
    46 => "00111101000000010010111111111011", 
    47 => "00111100100101100110001101001111", 
    48 => "10111101000011101000111001010011", 
    49 => "10111110001111001100000100000001", 
    50 => "10111100010001111111001011011110", 
    51 => "10111101000110110000101110111111", 
    52 => "10111100101001000010000011011100", 
    53 => "00111110000011001011111111110100", 
    54 => "10111100100001111100110000010010", 
    55 => "00111100101011010101110110011100", 
    56 => "00111110000100111001000111010101", 
    57 => "10111100110000000010110111101101", 
    58 => "10111101100101100010110101011100", 
    59 => "10111101011000010000101000000110", 
    60 => "10111101001001101111100011001000", 
    61 => "10111101101000011111110110110110", 
    62 => "10111101100011010011011010100111", 
    63 => "00111101111110111010010101011101", 
    64 => "10111101000111100010001110000111", 
    65 => "00111110001100011101011100010011", 
    66 => "10111101100001111001100110100010", 
    67 => "10111101110110110100000000101101", 
    68 => "10111101011100100111000000001111", 
    69 => "10111110010000001110110010110111", 
    70 => "10111101000010101100100100011100", 
    71 => "00111101100011111110011110011111", 
    72 => "00111100101011101001101010110011", 
    73 => "10111101000100000111011100010001", 
    74 => "10111101011100111100110111000011", 
    75 => "00111110001100110100101101010001", 
    76 => "10111101111011011110010111010010", 
    77 => "00111100100001000000000011100001", 
    78 => "10111101001110001101010011111110", 
    79 => "10111100101101001001001001111001", 
    80 => "10111100110110101100110100001011", 
    81 => "10111101110000110111110001100100", 
    82 => "10111001100110101101100101111001", 
    83 => "10111101001011000101011011010110", 
    84 => "10111100110100100011011001100011", 
    85 => "00111110000001011010110011001101", 
    86 => "10111101111001110001100000100010", 
    87 => "10111101001110101011001100111111", 
    88 => "00111100110000001001110011011110", 
    89 => "10111110000001000011110110001010", 
    90 => "00111101010000111001110011011000", 
    91 => "00111101011101110101001110111111", 
    92 => "00111110010000011111100011100100", 
    93 => "10111011101000001111000010010000", 
    94 => "00111101110100001111101101100101", 
    95 => "00111101011010000110101001100111", 
    96 => "10111101111010001101000110010110", 
    97 => "10111011101100100010111111101000", 
    98 => "10111110000110111110100111001001", 
    99 => "10111101101001011111001010100011", 
    100 => "00111100000010101011111010110101", 
    101 => "00111101000101101101110100100111", 
    102 => "10111101011001010000101111011000", 
    103 => "10111101011101001010110100011011", 
    104 => "00111101110101111111011110111110", 
    105 => "00111101010111010010000101011110", 
    106 => "00111110000101000101111110011110", 
    107 => "00111101001011001101010001110100", 
    108 => "00111100100011000110101101001000", 
    109 => "10111101010011110100100011111001", 
    110 => "10111101000001001100000110000000", 
    111 => "10111100100011011011010111001011", 
    112 => "10111101111110100100001011110010", 
    113 => "10111101110000100100001000100010", 
    114 => "00111101110110011101011011110001", 
    115 => "10111010101100000111011001010101", 
    116 => "10111100100001000000110100001011", 
    117 => "00111101101100011000011011001110", 
    118 => "00111101100110011110000111011001", 
    119 => "10111011111010111101000100011111" );


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

entity inference_conv2d_f3_2_2_12 is
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

architecture arch of inference_conv2d_f3_2_2_12 is
    component inference_conv2d_f3_2_2_12_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_2_2_12_rom_U :  component inference_conv2d_f3_2_2_12_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

