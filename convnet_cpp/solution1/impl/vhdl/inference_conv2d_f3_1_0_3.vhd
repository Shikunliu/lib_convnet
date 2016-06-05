-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_0_3_rom is 
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


architecture rtl of inference_conv2d_f3_1_0_3_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111010100111101000101000011001", 
    1 => "10111100010101001110010011001001", 
    2 => "00111101111100010010101010010101", 
    3 => "00111110001001100000000101111001", 
    4 => "10111101100000010010110000101000", 
    5 => "10111101011011101100110101110011", 
    6 => "00111101100010010100101111110100", 
    7 => "10111001001010001001010011101000", 
    8 => "00111100111011001111111001100110", 
    9 => "00111101000000011110100111001010", 
    10 => "00111100111110001101001101010000", 
    11 => "00111101110101101111001010100110", 
    12 => "10111101111011110011001101000100", 
    13 => "00111110000010100001100010111101", 
    14 => "00111100101010110001010110001101", 
    15 => "10111101101111111000100011111101", 
    16 => "00111101001100001011000010000111", 
    17 => "00111101110001000111110110000000", 
    18 => "00111101001001011111010000110110", 
    19 => "10111110001001010010100100110101", 
    20 => "10111101001110101100010000000110", 
    21 => "00111101100011101010110011110001", 
    22 => "00111101110011000011011011101000", 
    23 => "10111100110011000010001001001101", 
    24 => "10111100101000111100010111011000", 
    25 => "10111101101101111011010110000110", 
    26 => "00111101001100010110110101111011", 
    27 => "00111101001011100011010001000000", 
    28 => "00111100110101010110001100111111", 
    29 => "00111100100100000000110010001000", 
    30 => "10111101010010111101010111000001", 
    31 => "10111100110111111111101100010010", 
    32 => "10111110000001000110011101111011", 
    33 => "00111100000110101000111111000100", 
    34 => "10111110001010011100111100010100", 
    35 => "10111101110110000001010000001110", 
    36 => "00111101100110000011110101101100", 
    37 => "10111101101101000001111101110010", 
    38 => "00111101011010100101000101111000", 
    39 => "00111100101001110001111011110011", 
    40 => "10111101100110110101101100101101", 
    41 => "10111101011101000110010101001000", 
    42 => "00111110000001000100110110000111", 
    43 => "00111100110101110001011101110100", 
    44 => "00111110000000010011110100110010", 
    45 => "00111101111000100010101110111111", 
    46 => "00111011111101101000010000000000", 
    47 => "00111110001100001011000000101001", 
    48 => "00111101111000010010100101000101", 
    49 => "00111101010110011110000000101011", 
    50 => "10111101010011001111100000011011", 
    51 => "10111101010101001110000001000111", 
    52 => "00111101000100111110101010011001", 
    53 => "10111101100011001110100110001000", 
    54 => "00111101101001100101101111001111", 
    55 => "00111101101011110110010111001111", 
    56 => "00111101101001010101011101001010", 
    57 => "10111101101110100000100001010100", 
    58 => "00111101010100110011100011011101", 
    59 => "00111110000010010101100101100000", 
    60 => "00111110000100010101010100001101", 
    61 => "10111100101010011110111011100111", 
    62 => "00111100011011100111100101011010", 
    63 => "00111110000011111001110010100110", 
    64 => "10111110001110011011110011111101", 
    65 => "10111110001000110001101001001100", 
    66 => "00111101110000000100101110001101", 
    67 => "10111101101001100101010101101010", 
    68 => "10111110000011111110100010101011", 
    69 => "10111101000011001111100000011011", 
    70 => "00111110000001111010000011111001", 
    71 => "00111101000010000111101011111001", 
    72 => "10111110000010101001101110001101", 
    73 => "00111011010101100011110000001100", 
    74 => "00111101101110101110010000011100", 
    75 => "00111101011110010101110001011101", 
    76 => "00111110001111101110101011101010", 
    77 => "00111101011011011101000010111110", 
    78 => "10111101011000001110110011111010", 
    79 => "10111101011000010101001110111101", 
    80 => "00111110010110000101011001100000", 
    81 => "00111101111001101100001010101101", 
    82 => "00111101011000101010000011011111", 
    83 => "10111110000101001111010100001010", 
    84 => "00111101100010101100101101011101", 
    85 => "00111101100100101010010101000110", 
    86 => "00111110001001011010111000011101", 
    87 => "10111010100011101111000001110011", 
    88 => "10111110001011011100110011101010", 
    89 => "10111100000100010110111101101001", 
    90 => "00111011110011110110011110000111", 
    91 => "00111110001100101000010011100000", 
    92 => "10111101111111111011000011010101", 
    93 => "10111101001000001011101111001101", 
    94 => "00111101100010011000010111111110", 
    95 => "10111101000100001011100101110001", 
    96 => "00111100100000010100000101001001", 
    97 => "00111101010111011111010001110010", 
    98 => "10111101010111011110100110100101", 
    99 => "00111101111011001111011101000100", 
    100 => "00111101010111111111010010101101", 
    101 => "00111100111100110101001010101000", 
    102 => "10111101100110010111000010100111", 
    103 => "00111100010001110011111011101110", 
    104 => "10111110000101000100010111101101", 
    105 => "00111100011000100011000000001011", 
    106 => "00111100100011100101101010100001", 
    107 => "10111101101101101111001001001000", 
    108 => "00111100101010100000110111110001", 
    109 => "00111101101011101000101000111100", 
    110 => "10111110000110110001110000000000", 
    111 => "10111101010001111010001111101001", 
    112 => "10111101010001000111110101110011", 
    113 => "10111101111010000010110011110101", 
    114 => "00111101010101011001000000100000", 
    115 => "00111011000111100011011101100011", 
    116 => "00111101010001100111010111010000", 
    117 => "00111101111000100011000110000011", 
    118 => "00111101111001001101111111001110", 
    119 => "10111101110001000110011111001100" );


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

entity inference_conv2d_f3_1_0_3 is
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

architecture arch of inference_conv2d_f3_1_0_3 is
    component inference_conv2d_f3_1_0_3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_0_3_rom_U :  component inference_conv2d_f3_1_0_3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


