-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_1_9_rom is 
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


architecture rtl of inference_conv2d_f3_0_1_9_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111011001010111100100001110000", 
    1 => "10111101011101001010000100100111", 
    2 => "10111100110010110000011001011001", 
    3 => "10111101101000101011000100111011", 
    4 => "10111101101000101010101001110111", 
    5 => "10111110010110100010111000111100", 
    6 => "10111101110111010100110011111101", 
    7 => "10111100100011000100001000101110", 
    8 => "10111110001001111110010101100100", 
    9 => "10111100100100100010001110111001", 
    10 => "10111101010010100101101100011101", 
    11 => "00111110000001010110101000111000", 
    12 => "10111101011001100111110011110010", 
    13 => "00111110000111010000100011010101", 
    14 => "10111101010100011111000101001010", 
    15 => "10111001011101110011010110001010", 
    16 => "00111110000101110011001001011001", 
    17 => "00111011100011011010011110011110", 
    18 => "10111101010110011000001001101101", 
    19 => "10111110000000010000000110110000", 
    20 => "00111101101111011000111100011010", 
    21 => "00111101100111010110111011101001", 
    22 => "00111101011111111000011110000101", 
    23 => "10111100101000010101100110110111", 
    24 => "10111100101001110000110100100000", 
    25 => "10111101111110000100111101001100", 
    26 => "00111101010011011010110111101110", 
    27 => "10111110000000100010100001010110", 
    28 => "00111101001111011101000101101100", 
    29 => "00111101011101011111101100101111", 
    30 => "00111101011110101000000101110001", 
    31 => "00111101011100001011111100011010", 
    32 => "10111110000010000100110011110000", 
    33 => "00111101010100110001100100110010", 
    34 => "10111110001101100101100000111111", 
    35 => "10111101111100110101101100001100", 
    36 => "10111101100010000000111011011101", 
    37 => "10111101010100110101100001010010", 
    38 => "00111110001001011000110010001111", 
    39 => "00111101111010001000011010011100", 
    40 => "10111110000000010101000000010010", 
    41 => "00111101011000100100100111110010", 
    42 => "10111101011110100101011101111111", 
    43 => "10111110001000110101100110111100", 
    44 => "10111100101001110011001011011111", 
    45 => "10111101111100000001001000010111", 
    46 => "00111110000000111000101011000010", 
    47 => "00111101100000011110010001111111", 
    48 => "10111110000110110100101111111001", 
    49 => "10111100101001000111110101011000", 
    50 => "00111101101101111000010011101100", 
    51 => "10111101010000001110010011001101", 
    52 => "10111101101101001111001001011110", 
    53 => "00111101100101110010110100101000", 
    54 => "00111101110011111001000100011101", 
    55 => "00111100100010111100011101111111", 
    56 => "00111110001011101100100110011111", 
    57 => "10111101001001100000001000001101", 
    58 => "00111100010111111100000001011010", 
    59 => "10111101100100001000101101000000", 
    60 => "10111101000110011011000011111100", 
    61 => "00111101100110001011100110111011", 
    62 => "00111101101010011100010100010000", 
    63 => "10111011101100100000010000011111", 
    64 => "00111101111001001000010000001110", 
    65 => "10111101101110000001110100101101", 
    66 => "00111101111111001100001100011010", 
    67 => "00111101011101001011010101111111", 
    68 => "10111100010000000001101000110111", 
    69 => "00111101101001010011001111100111", 
    70 => "10111100001010011101110101001001", 
    71 => "10111100100000001001000111110110", 
    72 => "00111100011000100100000011010010", 
    73 => "00111100111100010011011010100100", 
    74 => "00111101010110001001011100111011", 
    75 => "10111101001000111001110000000001", 
    76 => "10111101101010011001111101011110", 
    77 => "10111011111111000000001111000111", 
    78 => "10111110001000111010001101100110", 
    79 => "10111101010001111001001100111101", 
    80 => "10111101011000011000000010111001", 
    81 => "00111101111011101100011101000011", 
    82 => "10111101111001000011001111010111", 
    83 => "10111101001110110110110011011000", 
    84 => "00111101000110111101001010001111", 
    85 => "10111100001011000100011111110010", 
    86 => "00111101011011101100110111000011", 
    87 => "00111101110100101010100001000100", 
    88 => "00111101010110011001111101111001", 
    89 => "00111110001100000110110101010000", 
    90 => "00111100101001101100110010111110", 
    91 => "00111101010000011010000010110100", 
    92 => "10111100100011011001100001101111", 
    93 => "10111101000100011001001011101010", 
    94 => "00111101100000000010000000001001", 
    95 => "00111010100011010011001011011001", 
    96 => "00111101110110110001111010011111", 
    97 => "00111110000111000110110001010101", 
    98 => "00111101110101110001000010001000", 
    99 => "00111100100100011000001110000000", 
    100 => "10111101000100010011111110001110", 
    101 => "10111100111001010100000100111000", 
    102 => "00111110000010101110110101010111", 
    103 => "00111101101101110111001111010101", 
    104 => "00111100111011100001011100110101", 
    105 => "10111101100001010101110111001011", 
    106 => "00111110000110011001000011110011", 
    107 => "10111100001100100100111010011100", 
    108 => "10111110001000100010100000010011", 
    109 => "00111101110110111101100111001011", 
    110 => "10111101111011111000100010111001", 
    111 => "00111101111000111111111111101111", 
    112 => "00111101110001100000001111110000", 
    113 => "00111101100001010101001011010110", 
    114 => "00111100010000010000011011000110", 
    115 => "10111100111111110100100000010100", 
    116 => "00111100111011010000101011111011", 
    117 => "00111101100111001110111111000101", 
    118 => "00111101010110100111100100101000", 
    119 => "10111101100100111000111001010010" );


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

entity inference_conv2d_f3_0_1_9 is
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

architecture arch of inference_conv2d_f3_0_1_9 is
    component inference_conv2d_f3_0_1_9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_1_9_rom_U :  component inference_conv2d_f3_0_1_9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

