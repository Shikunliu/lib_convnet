-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_4_9_rom is 
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


architecture rtl of inference_conv2d_f3_0_4_9_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110000011010101011000101010", 
    1 => "10111101000000001111010110101110", 
    2 => "10111110001101100001111100011001", 
    3 => "00111100010101001010110000101010", 
    4 => "10111110001000110011101001000111", 
    5 => "00111110000110111110000111101011", 
    6 => "00111100110011011101000110110000", 
    7 => "00111110000010000101010000000100", 
    8 => "10111101101001100011010001000111", 
    9 => "10111100101111010001000010010111", 
    10 => "00111110010011000100011111100101", 
    11 => "10111100111011110111101100011000", 
    12 => "00111110000000111000110000010001", 
    13 => "00111101001100110010101000010100", 
    14 => "10111101101110100011001011011001", 
    15 => "10111100000001101111000111101100", 
    16 => "10111101010000000000011111111000", 
    17 => "00111101110101110011101001111001", 
    18 => "00111011000001101110110001101110", 
    19 => "00111101000011100001100001011100", 
    20 => "10111101111110010011000111001010", 
    21 => "10111101110001001110110011110111", 
    22 => "10111101110111000000111010111111", 
    23 => "10111101100110110101010111111101", 
    24 => "00111100001011110010111110011000", 
    25 => "00111101000000111001101000000011", 
    26 => "10111101101111101001000001010001", 
    27 => "10111101001010111111011101001111", 
    28 => "10111010100110110001111001010100", 
    29 => "00111100101100100111011000001001", 
    30 => "00111100010010101110001110111111", 
    31 => "00111101110100101011000010100111", 
    32 => "00111101011110110001101011110100", 
    33 => "10111110100000101101111111010111", 
    34 => "00111110011000000001110111100010", 
    35 => "10111110001110111011110000101100", 
    36 => "10111101011110111101010100101110", 
    37 => "00111101011010110000011111010001", 
    38 => "00111110001011000111011011010001", 
    39 => "00111101111000000111010001100100", 
    40 => "10111011110111110011110100010010", 
    41 => "10111001001001011001101101011011", 
    42 => "10111110001100100101101110111000", 
    43 => "00111110000110010101101010101111", 
    44 => "10111110001101100000111011011000", 
    45 => "00111011100010000010101100110010", 
    46 => "00111101100010100011111010110011", 
    47 => "00111101101111000100001100101101", 
    48 => "10111110001101001010000000011011", 
    49 => "10111110000100100011100101100000", 
    50 => "00111101101001111110101010111101", 
    51 => "10111110000011110111001001110001", 
    52 => "10111101000100111110101001111110", 
    53 => "00111100101001110101011010000110", 
    54 => "00111101000000001100111111010100", 
    55 => "00111100110010100011010001101100", 
    56 => "10111101111011000111011011010001", 
    57 => "10111101110010110111101111110010", 
    58 => "10111101101100100010110001100000", 
    59 => "10111100101110011001011101100110", 
    60 => "00111010000101101011000011101101", 
    61 => "10111101110000000101010010000100", 
    62 => "00111100001110011110010000100111", 
    63 => "10111110011110011111010011010011", 
    64 => "00111010101010100110101000100001", 
    65 => "00111101111001100010011011110110", 
    66 => "00111101111010000100011110110010", 
    67 => "10111101101001100111111001001111", 
    68 => "10111110000011001001011100001111", 
    69 => "10111110001110100111010011000001", 
    70 => "10111010100101111110011111101001", 
    71 => "00111101010011010101001001111110", 
    72 => "10111101100011011110111010101110", 
    73 => "00111011000100010111100101100101", 
    74 => "00111101100101011100010100010100", 
    75 => "10111001100011101011100100100111", 
    76 => "10111101000111100100101000011101", 
    77 => "00111100000001100000010000110001", 
    78 => "10111101010110101010000101010001", 
    79 => "00111101100110100011111011110110", 
    80 => "10111101111011001111100011010111", 
    81 => "00111101100111110000000101101000", 
    82 => "00111110010100101101101111101000", 
    83 => "10111110001000011011010110000101", 
    84 => "00111100101101001111100001100101", 
    85 => "00111101111000110101011100011101", 
    86 => "00111110011000001000111101100101", 
    87 => "10111101110011111100001101110010", 
    88 => "00111101100011100101101001111001", 
    89 => "00111101111001000101010101100101", 
    90 => "00111101010110101101110000001010", 
    91 => "10111101001110101010111010000111", 
    92 => "10111110010011001000100111110100", 
    93 => "00111101100000010001100111011011", 
    94 => "00111100111101011011010000010111", 
    95 => "10111110001011110110010000000110", 
    96 => "10111101110101111010001011001111", 
    97 => "00111101101011010001010101110111", 
    98 => "00111110000101101001000110100111", 
    99 => "10111101100010000111111111100110", 
    100 => "10111100011100000000110110101111", 
    101 => "10111101011110010111101110110111", 
    102 => "10111110001110100001110011101111", 
    103 => "00111101011100101010101100110011", 
    104 => "10111101110100001010110111001101", 
    105 => "10111101110111110000111101011010", 
    106 => "10111101101000010110101000101110", 
    107 => "10111101111011011010100100000000", 
    108 => "00111110000101111010101110111001", 
    109 => "00111110000110111010110111000001", 
    110 => "00111101101011011001010111101011", 
    111 => "10111101010000101111010100010010", 
    112 => "00111110001010011111011110110110", 
    113 => "10111100001111011010101111001000", 
    114 => "10111110000000111110001100011001", 
    115 => "10111110000010101110110010001101", 
    116 => "10111100100100111110001101110111", 
    117 => "10111110000000101110110011110010", 
    118 => "10111110000010000011010100010110", 
    119 => "00111110010111100101001010011100" );


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

entity inference_conv2d_f3_0_4_9 is
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

architecture arch of inference_conv2d_f3_0_4_9 is
    component inference_conv2d_f3_0_4_9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_4_9_rom_U :  component inference_conv2d_f3_0_4_9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

