-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_4_1_rom is 
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


architecture rtl of inference_conv2d_f3_1_4_1_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111100010011011111101100110110", 
    1 => "00111101111011011000100110001011", 
    2 => "10111101001100110100011011101010", 
    3 => "00111110010000000100010110111011", 
    4 => "10111101001110101001001001101101", 
    5 => "00111101101111111001010100011001", 
    6 => "10111100110111101000000110010110", 
    7 => "00111110000101101010011101101001", 
    8 => "00111101101010010100010101001011", 
    9 => "00111101101101110110011111010011", 
    10 => "10111110000101101110001001100101", 
    11 => "10111100101111011100010101011101", 
    12 => "10111110000101000101100000000100", 
    13 => "00111101100111010010010001110110", 
    14 => "10111101001110110001100100010000", 
    15 => "00111101011010101100001110101000", 
    16 => "10111101100110101010010001011100", 
    17 => "00111101101100001100000111010100", 
    18 => "00111100110111010001010110000101", 
    19 => "00111110000010001101011111100000", 
    20 => "10111100010111001000111001110110", 
    21 => "10111101000101001001100001011000", 
    22 => "00111100100101101011000110001000", 
    23 => "10111101100011101111000011110001", 
    24 => "10111100111110000111011011010100", 
    25 => "10111100001011101101010111010110", 
    26 => "10111101100101011100101111110010", 
    27 => "00111101100100111001110110100001", 
    28 => "00111101100000101000011000000111", 
    29 => "00111101100110001100010010111101", 
    30 => "00111100000110110110101110010110", 
    31 => "10111101010111000011110100110011", 
    32 => "10111110000011000100111010110101", 
    33 => "10111110000001011100011110001010", 
    34 => "00111100111100100101010011100111", 
    35 => "00111101110001000111011000101001", 
    36 => "00111101010011111011111100001010", 
    37 => "10111110001010100001011101101110", 
    38 => "10111101000001000001011000001111", 
    39 => "00111101101101000000010110011001", 
    40 => "10111101000001001101010011001100", 
    41 => "00111101011111000110010100100110", 
    42 => "10111101001101011111011100011000", 
    43 => "00111101110111110101101001010011", 
    44 => "10111100110101100000011100111110", 
    45 => "10111100010100100100000000111111", 
    46 => "00111101011001100001010011010010", 
    47 => "00111101100001100000100101010111", 
    48 => "00111110000111001011101000110000", 
    49 => "10111101001000001011001110000100", 
    50 => "00111100001011111001100110110110", 
    51 => "00111101000101110100011100101010", 
    52 => "10111101010001100100111100011111", 
    53 => "00111100010111110101010011111010", 
    54 => "00111101011010100000100100000011", 
    55 => "00111110000000001000110111010010", 
    56 => "10111100101001000001001111011011", 
    57 => "00111101100000011001100010100001", 
    58 => "10111101101110001101000000111001", 
    59 => "00111101101010110011010110110001", 
    60 => "10111110000000111000101100000101", 
    61 => "00111101001101101111011111111111", 
    62 => "10111101111010011101100011000111", 
    63 => "10111110001010000011101001010100", 
    64 => "00111101001000000111000000110011", 
    65 => "00111101101110010001100000100111", 
    66 => "00111100110011110011001011011001", 
    67 => "00111100111111011100011111100010", 
    68 => "10111101010110000100100110001000", 
    69 => "10111101101110111101100100011100", 
    70 => "00111100101001111000111011110000", 
    71 => "10111101111100101101101000010010", 
    72 => "00111110000110000010001000110110", 
    73 => "10111011101100001001101100101000", 
    74 => "10111101100010010001001101010100", 
    75 => "00111010000000000110000111100101", 
    76 => "00111101010011100100101100000010", 
    77 => "10111101101110001100100001011011", 
    78 => "00111100000111100000000100101000", 
    79 => "10111100110000110001101100001000", 
    80 => "10111100110011111010111110100000", 
    81 => "00111101001111000011100100110111", 
    82 => "00111110000110110111010111101010", 
    83 => "10111100010100000110011110001100", 
    84 => "00111011110000110011011011100001", 
    85 => "00111101101011000000100101001011", 
    86 => "10111100110011000100000000010101", 
    87 => "00111101110101010000010000111110", 
    88 => "10111110000010001110011101011000", 
    89 => "00111100111111001001100100001110", 
    90 => "10111101011101010010000100010100", 
    91 => "10111100111100110110110000111110", 
    92 => "00111101100011011000110000001111", 
    93 => "00111101110101100110101101100001", 
    94 => "00111101101010110100111100111001", 
    95 => "00111101000001010011100100100101", 
    96 => "00111101101010110010011001111100", 
    97 => "10111101000101111000111100011000", 
    98 => "10111101010000011011011101000000", 
    99 => "00111100101110010001000000100010", 
    100 => "10111100101110011111110100011100", 
    101 => "00111101100010011010111011001000", 
    102 => "00111100000111011001010101100111", 
    103 => "00111110000001001010101100011101", 
    104 => "00111101100010111110110010010000", 
    105 => "10111101101000111011110011100001", 
    106 => "00111100001011001111001100010011", 
    107 => "00111110001011000101101000111110", 
    108 => "10111011100101100101111100101000", 
    109 => "10111110000010001010111110000001", 
    110 => "00111101111000011101110000001110", 
    111 => "10111101001011001101001110111000", 
    112 => "00111101101110011101111011001110", 
    113 => "10111101111000010100000111101010", 
    114 => "00111101001111100010110111001110", 
    115 => "10111011110101110001101011011001", 
    116 => "10111110000101000100111001010001", 
    117 => "10111011011101010001001000010000", 
    118 => "00111011100001101011100010101100", 
    119 => "00111101101011001010101010101011" );


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

entity inference_conv2d_f3_1_4_1 is
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

architecture arch of inference_conv2d_f3_1_4_1 is
    component inference_conv2d_f3_1_4_1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_4_1_rom_U :  component inference_conv2d_f3_1_4_1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

