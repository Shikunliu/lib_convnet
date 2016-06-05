-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_4_5_rom is 
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


architecture rtl of inference_conv2d_f3_0_4_5_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100111000001001100100110010", 
    1 => "00111101011110101111101000000111", 
    2 => "00111101001110110100001100011101", 
    3 => "10111100100111110111010110110001", 
    4 => "10111100111011011111010011010000", 
    5 => "00111101101100011010110101001001", 
    6 => "10111101000100001101001010000000", 
    7 => "00111100010011001110101100000000", 
    8 => "00111100101111010000011100100111", 
    9 => "10111100100000100110010110100000", 
    10 => "00111011011101000110101100100001", 
    11 => "00111110001010010101100101100000", 
    12 => "10111101111101100111111011001000", 
    13 => "10111110001011100011001100100111", 
    14 => "10111100000010011000011001110001", 
    15 => "10111101010001001101001100000011", 
    16 => "00111100101111000111101010100101", 
    17 => "10111100101110010010111011000000", 
    18 => "00111101101010111001010101000101", 
    19 => "10111100110010001001111010100000", 
    20 => "10111101110010101100101010010100", 
    21 => "00111101001001100111111111111100", 
    22 => "10111100000011010010100101110100", 
    23 => "00111101100000110000100011001001", 
    24 => "00111110010001010100011001001110", 
    25 => "10111101110111110100011111111010", 
    26 => "00111101000000010100111100000101", 
    27 => "00111101001001110100101000100111", 
    28 => "00111101001110011001100011011110", 
    29 => "10111101110000111000101011000010", 
    30 => "10111110001110110110110110000111", 
    31 => "10111100110101110111011000001001", 
    32 => "00111101100110101111110100101100", 
    33 => "00111101010111000110110100011110", 
    34 => "10111100010101010101001001000010", 
    35 => "00111110000001110101101011111011", 
    36 => "00111101100110111000010001100011", 
    37 => "00111110000011101011110110010000", 
    38 => "10111110001100000001110101011100", 
    39 => "10111110000001111110101111110010", 
    40 => "00111101111000111111100010011000", 
    41 => "10111100001000000000100111101011", 
    42 => "00111100010110011101100111111100", 
    43 => "00111100110011011000011110101000", 
    44 => "00111101100101110101111111000000", 
    45 => "10111101110001011001101010101001", 
    46 => "10111100011110000100010010110101", 
    47 => "00111100100011000000010101011100", 
    48 => "00111110000101100000010111101110", 
    49 => "10111100110110000101001000111100", 
    50 => "10111100011010101101111100000111", 
    51 => "00111101100011101111110000000001", 
    52 => "00111101110010110101001010000111", 
    53 => "00111101101100100101110001001011", 
    54 => "00111101101101000110000101110100", 
    55 => "00111110001100111010001101100110", 
    56 => "10111101100001100000101010110100", 
    57 => "10111011010011101111001101101110", 
    58 => "10111101110111111000000100011111", 
    59 => "00111100100011010001010111001000", 
    60 => "10111100101110111010010111111110", 
    61 => "10111101111100111100111001100100", 
    62 => "10111101101011001001001001011000", 
    63 => "00111101111010010001010110111110", 
    64 => "10111101100110001011010011110101", 
    65 => "00111100000100101100011100001101", 
    66 => "00111101000000111000001000110110", 
    67 => "00111110010011001001101010111011", 
    68 => "00111101100100010101101111000011", 
    69 => "00111110001010110010101011110001", 
    70 => "10111100100100101011111000010011", 
    71 => "00111101100000110000000010101001", 
    72 => "10111101110110001110100001100100", 
    73 => "00111101011110100011011100110011", 
    74 => "00111101101011110011011101110110", 
    75 => "10111100011011010101010111011001", 
    76 => "00111101110001111111000101100110", 
    77 => "00111101000000010111001010101100", 
    78 => "10111101100001000011000110111110", 
    79 => "00111110000111001001110000001011", 
    80 => "10111100011111010100100010010110", 
    81 => "00111110001110010101111110101011", 
    82 => "00111101101111010110101001001100", 
    83 => "00111101110111111100010101001000", 
    84 => "10111101100101111000010110000000", 
    85 => "00111100110000100011110001010000", 
    86 => "10111101100000100011111011111101", 
    87 => "10111100110001100110011000010110", 
    88 => "10111110001011111110010000110110", 
    89 => "10111101011111011111101101011110", 
    90 => "00111100110010100101111111010101", 
    91 => "10111101010000111110110111001011", 
    92 => "10111100100111101001111111001001", 
    93 => "10111101100100111000100110101000", 
    94 => "00111110001111000111100011101010", 
    95 => "10111101010101001011011101100010", 
    96 => "10111101010100101110001010010001", 
    97 => "00111101000101100100110101001001", 
    98 => "00111101100111000111100101110000", 
    99 => "00111110001100111101111110110001", 
    100 => "00111101001101110000110000000110", 
    101 => "00111101101110001100110011101011", 
    102 => "10111100110110110111101100011011", 
    103 => "10111100101001110011111100111111", 
    104 => "00111110000000000011111111110111", 
    105 => "10111101110001010000110011110010", 
    106 => "10111101101000001110111000101111", 
    107 => "10111101111110000100000100100101", 
    108 => "00111110000001010110100011101000", 
    109 => "10111101000101010110101011001011", 
    110 => "00111100110000110101001100000110", 
    111 => "10111110000010011110010110011111", 
    112 => "10111101101011110000010101010111", 
    113 => "00111101110100111001111000101000", 
    114 => "00111101101110100110001100010101", 
    115 => "00111101000100101101101111000000", 
    116 => "10111101101011111010100010100111", 
    117 => "10111101100011111100010000100000", 
    118 => "10111110000000010011001001110010", 
    119 => "00111010010110001100110011111010" );


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

entity inference_conv2d_f3_0_4_5 is
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

architecture arch of inference_conv2d_f3_0_4_5 is
    component inference_conv2d_f3_0_4_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_4_5_rom_U :  component inference_conv2d_f3_0_4_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


