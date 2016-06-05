-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_0_3_rom is 
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


architecture rtl of inference_conv2d_f3_0_0_3_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111010111110001110110100111100", 
    1 => "00111101101110100100000100000001", 
    2 => "10111101011110010110101000110100", 
    3 => "00111101001100010001101000111001", 
    4 => "00111110001001011101110001000000", 
    5 => "10111101010110010101111001110110", 
    6 => "10111110000110101010100001100101", 
    7 => "00111101101110001000101000010010", 
    8 => "10111110000101101101010011000011", 
    9 => "10111110000100111111100011011011", 
    10 => "00111101110100110000011100101001", 
    11 => "00111101101001100101011011100010", 
    12 => "00111101010111000010001000001010", 
    13 => "10111100101100011100000101000011", 
    14 => "00111101100110010101000110101011", 
    15 => "00111101001100011110101001111001", 
    16 => "10111110001000101001111011010100", 
    17 => "10111110010110011100111101010111", 
    18 => "00111101100011010100101011110010", 
    19 => "00111100100011101001101111011010", 
    20 => "10111100110011100000100000110110", 
    21 => "00111110000100111000001110101110", 
    22 => "00111101001000110011011000010101", 
    23 => "00111101110110001010001110110101", 
    24 => "10111101110100110000101011010100", 
    25 => "10111100001010111101110000100111", 
    26 => "10111101100001010000011001110010", 
    27 => "10111100001111000101001000101011", 
    28 => "10111101110010101101100000101000", 
    29 => "10111110010000010001100011000010", 
    30 => "00111110010111100101101010111100", 
    31 => "00111100011000011100100101001001", 
    32 => "00111110000111000110111100110111", 
    33 => "00111101110001100011110010000010", 
    34 => "00111101010001010001100100101010", 
    35 => "00111101010011011000100010110100", 
    36 => "00111110000101000001100110100000", 
    37 => "10111001011000101100001011000111", 
    38 => "10111101001001101110010000000101", 
    39 => "00111101010010111000001100000110", 
    40 => "00111101100010011111010110011101", 
    41 => "10111101000000110000010110001001", 
    42 => "10111100100001000010110111000010", 
    43 => "10111101001110000011000001111000", 
    44 => "00111101001111010000101100001000", 
    45 => "10111101101110000011100000010011", 
    46 => "00111101111100101001110000110100", 
    47 => "00111101001100100001011001101000", 
    48 => "00111110010001000010101111111010", 
    49 => "10111101110110100110110111110000", 
    50 => "00111101101110101100010111001111", 
    51 => "10111100110111111001100010110111", 
    52 => "10111101011010000011011001001010", 
    53 => "10111101011101100011011000111000", 
    54 => "10111101000101100000111000101010", 
    55 => "10111100000010100000100110011001", 
    56 => "00111101111110100110101111010111", 
    57 => "00111101110000000100000100000011", 
    58 => "00111101010100110001001010010111", 
    59 => "10111101101101100110010111000101", 
    60 => "10111101100011101110001100001101", 
    61 => "10111101001010010010000101111100", 
    62 => "10111101100110001011000101010111", 
    63 => "00111110001000011010010110000111", 
    64 => "00111101011110101110001111100111", 
    65 => "00111100111001010011000101001000", 
    66 => "00111101100100111001101111110100", 
    67 => "00111110010000000100011001000001", 
    68 => "10111101010100000101011010101010", 
    69 => "10111110010011010001110000111011", 
    70 => "10111100101111101011101100100111", 
    71 => "00111101000010010100101010110010", 
    72 => "10111101000101010011100111010011", 
    73 => "10111101011100001100110111111110", 
    74 => "00111100110111100011111110000110", 
    75 => "00111101110101001011011000100000", 
    76 => "10111011100010000011101100001101", 
    77 => "00111110000100000100010100110101", 
    78 => "10111101001011011000110011100110", 
    79 => "10111110000010000101010111011010", 
    80 => "10111100101010010100110001011111", 
    81 => "00111110001001110011101100000000", 
    82 => "10111100110111001010000001111111", 
    83 => "00111110010101110101111110110011", 
    84 => "10111101101111100011000100110110", 
    85 => "10111101111111100101001110101000", 
    86 => "00111100111111001111101011111101", 
    87 => "00111101010111111010100001110010", 
    88 => "10111101111101101111000100010011", 
    89 => "00111101110110001000011001011001", 
    90 => "00111101110010010000111111111001", 
    91 => "00111011011100000100010001001011", 
    92 => "00111101110100000100101010110110", 
    93 => "10111101011101000001110010000010", 
    94 => "10111101000001111010010011011010", 
    95 => "10111011111100101100000010111101", 
    96 => "10111100011110001100010101111001", 
    97 => "10111101100110001111110101111000", 
    98 => "10111100111110100000011011110111", 
    99 => "10111110000011001011111001100010", 
    100 => "10111101010001111101000001011110", 
    101 => "10111101001000000100000011101000", 
    102 => "00111101110000010100001010100110", 
    103 => "10111100100010010001101000100101", 
    104 => "00111101101011110000011100111010", 
    105 => "10111110000111001001011111011001", 
    106 => "10111101011101011011100101010101", 
    107 => "00111011100110011010000111010010", 
    108 => "00111101110101010011001011101000", 
    109 => "00111100100110000100100110100011", 
    110 => "10111101001001010111010111011011", 
    111 => "00111101010010100111101010010010", 
    112 => "10111101010111011000110010100011", 
    113 => "10111110001111111010110011100110", 
    114 => "10111110000011011100101100010100", 
    115 => "00111101110000010110100100111100", 
    116 => "00111101100010101011100101000111", 
    117 => "00111101001000010101001011100110", 
    118 => "10111101100101001101011111001001", 
    119 => "00111101000000101010011101000100" );


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

entity inference_conv2d_f3_0_0_3 is
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

architecture arch of inference_conv2d_f3_0_0_3 is
    component inference_conv2d_f3_0_0_3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_0_3_rom_U :  component inference_conv2d_f3_0_0_3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


