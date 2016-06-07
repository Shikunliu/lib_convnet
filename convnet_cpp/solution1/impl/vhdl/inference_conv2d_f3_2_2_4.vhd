-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_2_2_4_rom is 
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


architecture rtl of inference_conv2d_f3_2_2_4_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101110010110100011101001110", 
    1 => "00111101101101000001100001011110", 
    2 => "00111101100111110001100101111000", 
    3 => "10111101101001110001101101010101", 
    4 => "10111101110100011111001001010110", 
    5 => "00111101111100110110100010101101", 
    6 => "10111100110000001101000001110101", 
    7 => "00111101111011100000001010100111", 
    8 => "10111101100000011000110000001100", 
    9 => "10111100011110101101100001111001", 
    10 => "00111101110001101011001000001110", 
    11 => "10111101110010111001110111011110", 
    12 => "10111110000010100001100110000111", 
    13 => "00111110000101111100110101000110", 
    14 => "00111101010110100100000001010011", 
    15 => "00111101111101110110000101000110", 
    16 => "00111101101101101100100111001110", 
    17 => "00111101100101000001100000101000", 
    18 => "10111101000010010010001101100000", 
    19 => "00111100110101011010100101001010", 
    20 => "00111101001111010111010111000111", 
    21 => "00111110000101011101011100000010", 
    22 => "10111100101011101110011100111110", 
    23 => "00111011110010110010000100111100", 
    24 => "10111010011000001010100011010101", 
    25 => "00111100110000010000101011111000", 
    26 => "00111101011011011001011011011100", 
    27 => "00111100011011010100110101110110", 
    28 => "10111110001101000000011000111010", 
    29 => "10111110000010110110100000000110", 
    30 => "10111101001001100000011111010010", 
    31 => "10111101000010100001010010001100", 
    32 => "00111110001110111110110100110001", 
    33 => "10111101000111110101011100101110", 
    34 => "10111110001101000000011101000110", 
    35 => "00111101001110110111000001101001", 
    36 => "10111101000000111011111001001011", 
    37 => "10111100010110011001010011000111", 
    38 => "10111101010001000110000000010111", 
    39 => "00111110000000011010011011010111", 
    40 => "10111101100100011000110010111011", 
    41 => "00111101000001110111110000101011", 
    42 => "10111101001100101010110010010000", 
    43 => "00111011101111111100111011111000", 
    44 => "00111101010101111110110101110111", 
    45 => "00111110001000100001011100001001", 
    46 => "10111011111001011000100011011011", 
    47 => "10111101101111001110100111001011", 
    48 => "10111100100001110000000000000100", 
    49 => "10111101011000101010001111101001", 
    50 => "10111011100010000111100001001010", 
    51 => "00111101110001101111100101110110", 
    52 => "00111101110001101111000000010100", 
    53 => "00111101010001001100000001011001", 
    54 => "10111101100001000011111100011100", 
    55 => "10111100100011001000011011110111", 
    56 => "00111101100100101111000011111100", 
    57 => "10111110010111100010011100011000", 
    58 => "10111101110110111100010011010010", 
    59 => "10111101101001000101010100000111", 
    60 => "10111101101010011111111111010110", 
    61 => "10111100101100010001101101100001", 
    62 => "10111110001010010001100001011101", 
    63 => "00111110000001100010011001110000", 
    64 => "10111101101110001101001001010001", 
    65 => "10111101101010010111101001110101", 
    66 => "10111110001001111110111000001011", 
    67 => "10111101100011101011010101000111", 
    68 => "10111101000010100101011110101000", 
    69 => "00111101111100111011011011001100", 
    70 => "00111101011101011001101011010010", 
    71 => "10111101010011000011100000011101", 
    72 => "00111110001101000111101101100111", 
    73 => "00111101100111010001001001000101", 
    74 => "10111110000010010110110010000011", 
    75 => "00111100110110101100011000011111", 
    76 => "00111101011111101101110111000001", 
    77 => "00111101110010111110101011001000", 
    78 => "10111110000001000000000110000010", 
    79 => "10111110001000010111101010001001", 
    80 => "00111100001110010011110011001101", 
    81 => "00111101100000011110001011101100", 
    82 => "10111101101000001110111100010011", 
    83 => "10111110000011110100100101001001", 
    84 => "00111101100101111110001001001101", 
    85 => "10111011100001100100100101110000", 
    86 => "00111101100000100111010110000011", 
    87 => "00111110010100000010110111100000", 
    88 => "10111100000011001101001111001110", 
    89 => "10111101011111111010010111101101", 
    90 => "00111101100101111101001111010100", 
    91 => "10111101100001010011110101111111", 
    92 => "10111100100111001011111111110100", 
    93 => "00111100110110111010001011110100", 
    94 => "00111110000000001011000000101001", 
    95 => "10111101001100010111110101101011", 
    96 => "10111110000010111110000100100010", 
    97 => "10111101101001011100001111111010", 
    98 => "00111101111100100101001001001000", 
    99 => "10111101011111000100000101111111", 
    100 => "10111101100110110110010110110111", 
    101 => "10111101001010111011101000010011", 
    102 => "00111101110010011000000001100010", 
    103 => "10111101100100110001100101110101", 
    104 => "10111110010010001011000000001000", 
    105 => "00111101011001010001001000111110", 
    106 => "10111101001100000100101010110110", 
    107 => "00111100000000101010111011110001", 
    108 => "10111101010100010010001101011001", 
    109 => "00111100010101101100001101011011", 
    110 => "00111101000011010110111001100011", 
    111 => "10111101110111110011011110111001", 
    112 => "00111100110110010011010111111100", 
    113 => "00111110000011100111110111011101", 
    114 => "10111100100101001011000100110010", 
    115 => "00111100101011000000101111111000", 
    116 => "00111101101001101110111110110110", 
    117 => "10111110000110101110000000111011", 
    118 => "00111100100111111010011101100101", 
    119 => "00111101101000111100011010100001" );


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

entity inference_conv2d_f3_2_2_4 is
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

architecture arch of inference_conv2d_f3_2_2_4 is
    component inference_conv2d_f3_2_2_4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_2_2_4_rom_U :  component inference_conv2d_f3_2_2_4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

