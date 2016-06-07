-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_2_3_rom is 
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


architecture rtl of inference_conv2d_f3_1_2_3_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101010111110111101010111010", 
    1 => "00111100101110001011000111000011", 
    2 => "00111101010001110010110010110000", 
    3 => "00111110000101011111100111011111", 
    4 => "10111100010001000100000111100100", 
    5 => "00111101011000101100011000011000", 
    6 => "00111101001111011101010011100010", 
    7 => "10111101011001111010100101110111", 
    8 => "00111101100011000010110100001101", 
    9 => "00111110001110110110010010011101", 
    10 => "00111110000011111100100010110000", 
    11 => "10111110001000001111100111010011", 
    12 => "00111101111101000100111101011101", 
    13 => "00111100100010000111110101111101", 
    14 => "00111110001101011111001111011000", 
    15 => "10111100001000010011111101110110", 
    16 => "10111101110100001001010010100011", 
    17 => "10111101110101001111101111011011", 
    18 => "00111101010111010101010111001100", 
    19 => "00111110000001111100011000110010", 
    20 => "10111101001110011001101011011100", 
    21 => "10111010101001010001110011011011", 
    22 => "10111101000110101000010110100010", 
    23 => "10111101100011110001101110111010", 
    24 => "10111101100110000010001100100111", 
    25 => "00111100010011010010100111101010", 
    26 => "00111101001000011011011101000000", 
    27 => "00111101101101100010111101110100", 
    28 => "10111100100101011100100110010110", 
    29 => "10111101101011011110010111010010", 
    30 => "10111101000100000100011001101001", 
    31 => "10111101011010111110110100111110", 
    32 => "00111101110010010101001100100011", 
    33 => "00111101000101010000100011011011", 
    34 => "00111101000011111111110001100010", 
    35 => "10111101011110011100000101110010", 
    36 => "00111100101001011010100000110000", 
    37 => "00111101101110001110001111100010", 
    38 => "00111101100110000000001001100011", 
    39 => "00111010100010010011000100010111", 
    40 => "10111100111110001110101101101110", 
    41 => "10111110001101010100011000001011", 
    42 => "10111101011011011101110111110100", 
    43 => "00111110000000100111011110000001", 
    44 => "00111100100111010001101100101110", 
    45 => "10111110010111100110111111111000", 
    46 => "10111100001101100101011101000000", 
    47 => "00111101010111100001111000101110", 
    48 => "10111011000011100001101100001011", 
    49 => "10111101010001100000110011011010", 
    50 => "00111110010100101011110011111001", 
    51 => "00111101001010001111101101101100", 
    52 => "00111101101111000010010110000000", 
    53 => "00111101100100011111101101001101", 
    54 => "00111101101011111110001011001100", 
    55 => "00111101000001011010000110110000", 
    56 => "00111101110010100010011001101100", 
    57 => "00111101000100101100000110100100", 
    58 => "10111101101111100010000100011110", 
    59 => "00111100101101110100011010001000", 
    60 => "00111110001111011011001001110000", 
    61 => "00111110010100011000011011011011", 
    62 => "00111011110101100111000100010000", 
    63 => "10111110000000111110100110100111", 
    64 => "00111101000010011110110011001110", 
    65 => "10111101011001010110110101111000", 
    66 => "10111100101001101001110111000100", 
    67 => "00111101100010110000000000110111", 
    68 => "10111101110100000010000000111110", 
    69 => "00111011101111101011001000101101", 
    70 => "10111101110110010111110101001010", 
    71 => "00111110000100100010100100100000", 
    72 => "00111100011000001111010000110111", 
    73 => "10111101011101011110001111001101", 
    74 => "00111101110000110101010110011000", 
    75 => "00111101111110111010101010011011", 
    76 => "00111101001000110101111001110100", 
    77 => "10111100010100011000011000000101", 
    78 => "00111101010001000000001001110011", 
    79 => "10111110001000110101011111100110", 
    80 => "10111100001100011000101110010011", 
    81 => "10111101010001100100101100111110", 
    82 => "00111110000010011111110011110100", 
    83 => "00111101011001101100101100010000", 
    84 => "10111101101101001110000000011111", 
    85 => "10111101011000101101101110110010", 
    86 => "00111101000000001111001101000101", 
    87 => "00111101011000011011011011010100", 
    88 => "10111101110010001001110010100010", 
    89 => "10111110000001010001010001111111", 
    90 => "00111101000001011101011010100100", 
    91 => "00111101100001110000101110000000", 
    92 => "00111110001001100011000001100110", 
    93 => "00111110000000101001101011100101", 
    94 => "10111101001000101100110100011111", 
    95 => "00111101011011110011110110001011", 
    96 => "00111100110111111111011101001100", 
    97 => "10111101010100101110001110011101", 
    98 => "10111101111100000000101101000110", 
    99 => "10111101100000000000011010001110", 
    100 => "10111101011011111011101010100011", 
    101 => "10111101001001010101000011011000", 
    102 => "10111110001101101100110100101001", 
    103 => "10111101010010110001110000101000", 
    104 => "00111101000111110001110010010000", 
    105 => "00111101011111111011011000101110", 
    106 => "00111110001111111110001011100111", 
    107 => "10111101011100100000010101010001", 
    108 => "10111101000100101101111111010111", 
    109 => "00111101100100110100101101000100", 
    110 => "10111100100101110100000001011001", 
    111 => "00111101110000000110001000110011", 
    112 => "10111011111010000100010010100010", 
    113 => "00111100111110010111010101101101", 
    114 => "10111101101010010101110100011001", 
    115 => "10111100010011001110100011100111", 
    116 => "00111101101010110110010010011101", 
    117 => "00111110000001011010000001111011", 
    118 => "10111100011000101011101000001001", 
    119 => "00111011111110110110111000001010" );


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

entity inference_conv2d_f3_1_2_3 is
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

architecture arch of inference_conv2d_f3_1_2_3 is
    component inference_conv2d_f3_1_2_3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_2_3_rom_U :  component inference_conv2d_f3_1_2_3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

