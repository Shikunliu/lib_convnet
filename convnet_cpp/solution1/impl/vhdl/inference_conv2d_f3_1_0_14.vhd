-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_0_14_rom is 
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


architecture rtl of inference_conv2d_f3_1_0_14_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101010111010100101010010100", 
    1 => "00111101111001001000111010001010", 
    2 => "00111100101110010110001011000010", 
    3 => "10111101100001011111010100001101", 
    4 => "10111100000110101010001011000100", 
    5 => "00111101100111001100011100100011", 
    6 => "10111101100010100010010101111011", 
    7 => "10111010110101101000000111010111", 
    8 => "00111110000010101010100000100010", 
    9 => "00111110000110001011000001001011", 
    10 => "00111101110010110001001111000101", 
    11 => "00111110000001110111111101101011", 
    12 => "00111100101111110011000100111001", 
    13 => "10111100110100011010110111011101", 
    14 => "10111101010101100100110110011010", 
    15 => "10111011111010010010111000010111", 
    16 => "10111101110111110101011010101000", 
    17 => "00111110010010001111000101001110", 
    18 => "10111101101111110101000111110000", 
    19 => "00111100001110001101100101100101", 
    20 => "10111101001010110110110101101100", 
    21 => "10111101001011111000011110010010", 
    22 => "00111100110010001110001011001000", 
    23 => "10111101101010010101101000110111", 
    24 => "10111101000101111110001111101101", 
    25 => "00111100001011111011010101100101", 
    26 => "10111110000101011001100011100001", 
    27 => "10111110000101101101110001011101", 
    28 => "10111110011001011110011110000110", 
    29 => "00111101000010100101011100000110", 
    30 => "10111101101101110100100101010000", 
    31 => "00111101001100101100111000111001", 
    32 => "10111110001101111011100101011010", 
    33 => "10111110000001001100110010101011", 
    34 => "00111110001100010010010011010001", 
    35 => "00111011101100111010011000001010", 
    36 => "00111101010010100100001001000011", 
    37 => "00111110100011010110010111100100", 
    38 => "00111110010011011110001010101100", 
    39 => "10111110000100111011010011110110", 
    40 => "00111100111101111111111101001011", 
    41 => "10111100100111011111010101001001", 
    42 => "00111101101011110011100101001011", 
    43 => "10111101110001010110100001100010", 
    44 => "10111101111000100011010100101111", 
    45 => "10111100100000010001011111000011", 
    46 => "10111100111101000000101011111111", 
    47 => "10111110011000000111101110111011", 
    48 => "10111101000000010011001010011011", 
    49 => "10111110000011010101010010010111", 
    50 => "00111110000100101110011011101011", 
    51 => "10111100111010110110000010100001", 
    52 => "10111101111010010111110100000111", 
    53 => "00111101111100110001011011100011", 
    54 => "00111100111010001101110111011010", 
    55 => "10111110001100000010100001011111", 
    56 => "00111100011010100111110101001100", 
    57 => "10111101010011000100001110100101", 
    58 => "10111101011100011001111111010000", 
    59 => "10111101001111100011000010111101", 
    60 => "10111110000110101001101100000111", 
    61 => "00111101100111010011111111101111", 
    62 => "00111101101010010011011111000101", 
    63 => "00111110000110011100010101100001", 
    64 => "10111100010100100000000101010101", 
    65 => "10111101000110000000010000000011", 
    66 => "10111110000100100010101011110101", 
    67 => "00111100101111010100011000010001", 
    68 => "00111101111010011100100110010011", 
    69 => "00111110000010101011010001110100", 
    70 => "10111101110010011011001001001011", 
    71 => "00111100010000101100011111111100", 
    72 => "00111101101011001101101001000110", 
    73 => "10111101100010011001110100101010", 
    74 => "10111101100001010010110110101010", 
    75 => "00111101010011000010011111011100", 
    76 => "10111110000011111000000000010011", 
    77 => "10111110000111110000000010101100", 
    78 => "00111101101011110010101111010010", 
    79 => "00111100100001110011110010100000", 
    80 => "10111101110100111001000100001100", 
    81 => "00111110000011001110101110111100", 
    82 => "10111101011111100101110101101001", 
    83 => "10111110010000001101100000000010", 
    84 => "00111110000000111010001000010110", 
    85 => "00111101000101110110000100010000", 
    86 => "10111110010001100111110011110010", 
    87 => "00111110000101011100100101100000", 
    88 => "10111101000101000000101011111111", 
    89 => "00111101011101100111101011001011", 
    90 => "10111100110010100101111011111111", 
    91 => "10111110010001001111001010101110", 
    92 => "00111110011101000100110000111000", 
    93 => "00111011100010001010100010110001", 
    94 => "10111110000010011000111100011101", 
    95 => "10111101110001100111000101011100", 
    96 => "10111101100000110110000001100101", 
    97 => "00111101010011100010111010110010", 
    98 => "00111101111100000111111000010111", 
    99 => "00111110000010111001001101000111", 
    100 => "00111101101011100110100001011110", 
    101 => "10111101110101101001111011000011", 
    102 => "00111100111011000000100011010010", 
    103 => "00111110100010111101111110001111", 
    104 => "00111101011110011011100110010101", 
    105 => "00111100110111010010101001111110", 
    106 => "00111101010110010100111000011010", 
    107 => "10111101111100111000000001000101", 
    108 => "00111101011000001110100001000010", 
    109 => "00111101010111100101101110100000", 
    110 => "00111110000101100110001101000001", 
    111 => "00111101101000100011111001000001", 
    112 => "00111010111001101110001100100011", 
    113 => "00111101000100110101101000110101", 
    114 => "10111100110101001100011101101101", 
    115 => "10111101100011010011111011111101", 
    116 => "00111110000110010010111000011111", 
    117 => "00111100111101010000110101011110", 
    118 => "00111110000100010010110101110111", 
    119 => "10111101101011010111011000110011" );


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

entity inference_conv2d_f3_1_0_14 is
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

architecture arch of inference_conv2d_f3_1_0_14 is
    component inference_conv2d_f3_1_0_14_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_0_14_rom_U :  component inference_conv2d_f3_1_0_14_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


