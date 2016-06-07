-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_1_15_rom is 
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


architecture rtl of inference_conv2d_f3_4_1_15_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110000010111111011111110000", 
    1 => "10111100110100101101101000101101", 
    2 => "10111101100110110110011011011110", 
    3 => "00111101100101101100010100100100", 
    4 => "10111101000010111100001111010011", 
    5 => "10111101011011011101001010111100", 
    6 => "00111101100010000111010010100001", 
    7 => "10111100011010001001001111010011", 
    8 => "00111101100011000101110001100101", 
    9 => "10111101011100111111001011000110", 
    10 => "00111100111011011010010011101001", 
    11 => "10111101011110110011110010011100", 
    12 => "10111100110110101011111111010101", 
    13 => "10111101011010110101000110111101", 
    14 => "00111101110010101100110000001100", 
    15 => "10111101110111111000001000101100", 
    16 => "00111101100010010110111110011011", 
    17 => "00111101101010011110110011001110", 
    18 => "00111110000010110111010001011000", 
    19 => "00111110000111100111100110101011", 
    20 => "00111101110100000111010010100111", 
    21 => "10111100000101001011000011111101", 
    22 => "10111101110010011111011101100101", 
    23 => "00111101110101111010011100000001", 
    24 => "10111101011100010110101010001100", 
    25 => "10111101111101001010100100000100", 
    26 => "00111110000000011000110010100000", 
    27 => "10111101101011001110001101100110", 
    28 => "10111101111110111111000011011100", 
    29 => "10111100100111100110010000000100", 
    30 => "10111101101001110011010101010110", 
    31 => "10111110010000111100011111010110", 
    32 => "10111110000000111000111100110110", 
    33 => "10111101011110101000010010110001", 
    34 => "10111100100110000101011101000101", 
    35 => "10111101010110011000101110001101", 
    36 => "10111110001010100010110000100011", 
    37 => "00111100110110101010110101100000", 
    38 => "10111110001111011101101110011000", 
    39 => "10111101100101010000110100001101", 
    40 => "10111101000011011000110100110111", 
    41 => "10111110001111000010010011000100", 
    42 => "00111100100010111101011111011010", 
    43 => "00111101101000101101100110100111", 
    44 => "10111101101101001101001010001010", 
    45 => "10111100101100100111100011111001", 
    46 => "00111101000001010011110111111000", 
    47 => "10111101000100111000011110110111", 
    48 => "00111101101001000111100100001100", 
    49 => "10111100001011101111101001010100", 
    50 => "10111101011001110010101111110100", 
    51 => "10111101100101100100010000110111", 
    52 => "00111101100110011111001010010010", 
    53 => "10111101010101101010000001110000", 
    54 => "00111101101101111010110001110100", 
    55 => "10111101010000000111011111011010", 
    56 => "00111101111110010010011011001000", 
    57 => "00111011101100010001010101100001", 
    58 => "10111101000011001111000111010001", 
    59 => "10111101001011010111100110110110", 
    60 => "10111100100001101100010110000001", 
    61 => "00111101100111100111000011011100", 
    62 => "10111101101011001000000111100001", 
    63 => "00111010111111011101011010000101", 
    64 => "10111101101100001011000101010000", 
    65 => "10111101111000011001000110011011", 
    66 => "00111100110111110001011001000110", 
    67 => "00111011111110100111101100011011", 
    68 => "00111100100110110110011100101111", 
    69 => "00111101011100010011011011110101", 
    70 => "10111101100001101110010111011011", 
    71 => "00111011100010100011100111101011", 
    72 => "10111101111000011111010000101100", 
    73 => "00111110000000111111111011100011", 
    74 => "10111011101111010001100000100100", 
    75 => "00111100100100101010100100011010", 
    76 => "10111011110110111110011000000101", 
    77 => "10111100011110001101111101111010", 
    78 => "10111101110100111101111000011110", 
    79 => "10111100100011010011011001001001", 
    80 => "00111011110000000110101000010011", 
    81 => "00111101110100001101000101110100", 
    82 => "00111101100011000100111101111111", 
    83 => "00111110000110010011110000000100", 
    84 => "00111101010000110111001001000110", 
    85 => "10111100101111011010011000011110", 
    86 => "10111110000100001110110100111110", 
    87 => "00111110001101011011110001000101", 
    88 => "10111101001111111001000110010110", 
    89 => "00111011110101111010101101111000", 
    90 => "00111101100101011111011111111100", 
    91 => "00111101100001010001111111100000", 
    92 => "00111100010111100100010011000100", 
    93 => "00111100101110101011000110101101", 
    94 => "10111101100101001101101110110111", 
    95 => "00111101100000010100010110111101", 
    96 => "10111010101110111110100111111100", 
    97 => "00111101101110001011010011001101", 
    98 => "00111101101001011010111000001111", 
    99 => "00111010100011000011000011010000", 
    100 => "10111101011011111000011001101011", 
    101 => "10111101100000110110011101011110", 
    102 => "00111101111000100011010110110101", 
    103 => "10111101110100101110000111101111", 
    104 => "00111101100011110001111001110100", 
    105 => "00111110000010010101111100100100", 
    106 => "00111101101001000001100101000010", 
    107 => "10111101110000100011011111001110", 
    108 => "00111101011110101101010001000111", 
    109 => "00111001000101010111100100110101", 
    110 => "10111101000010111001110010110111", 
    111 => "00111101101010010101111010011110", 
    112 => "10111101100100000110111000011010", 
    113 => "10111110000100101000011101111111", 
    114 => "00111100110111111101110001110100", 
    115 => "00111101010011001110101110000110", 
    116 => "00111101100101000110101010101110", 
    117 => "00111100111110001111011010001100", 
    118 => "00111110001110100010100101000001", 
    119 => "10111101101101000110100000110111" );


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

entity inference_conv2d_f3_4_1_15 is
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

architecture arch of inference_conv2d_f3_4_1_15 is
    component inference_conv2d_f3_4_1_15_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_1_15_rom_U :  component inference_conv2d_f3_4_1_15_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

