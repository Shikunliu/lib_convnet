-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_0_14_rom is 
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


architecture rtl of inference_conv2d_f3_0_0_14_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101010000100001100011000100", 
    1 => "10111100110101001000001001101110", 
    2 => "10111101000101000101110110000101", 
    3 => "10111101100111011111111110000010", 
    4 => "10111110000100111101000110001001", 
    5 => "10111100110011010000000111011100", 
    6 => "00111101101001110101100101110110", 
    7 => "00111101111111010001111101100000", 
    8 => "00111110000000101011101001011010", 
    9 => "10111100100001011010010000011001", 
    10 => "10111100000101110111010000010000", 
    11 => "10111101100100100001011001000000", 
    12 => "00111110001001000001111101100100", 
    13 => "10111101010001100100011000000000", 
    14 => "10111110000100011011001010100010", 
    15 => "00111101101011011000001110111001", 
    16 => "10111101100011110001100001111001", 
    17 => "10111100101101001101100010111010", 
    18 => "00111101011110000111101000101111", 
    19 => "00111101001000010101110111101001", 
    20 => "00111100110101100110011100010101", 
    21 => "10111110001111000101111101111100", 
    22 => "00111101100110110000101100000011", 
    23 => "10111110001111101011001111011101", 
    24 => "00111110000001111011000010110100", 
    25 => "00111101111010000001011111111100", 
    26 => "10111101110010100011101101110011", 
    27 => "00111101011111010100000101110100", 
    28 => "00111101001101011000100000101000", 
    29 => "10111011110100000100001001100011", 
    30 => "10111110100001010111101111001000", 
    31 => "00111101100000110010100100100010", 
    32 => "10111101111100101111111101001100", 
    33 => "00111101010010100111100000101001", 
    34 => "10111101101111111010001011111110", 
    35 => "00111101101101011010001001010001", 
    36 => "00111101110000101011111000100000", 
    37 => "00111101101101110010100010001011", 
    38 => "10111100101001100101001111110010", 
    39 => "10111110000100001001010110101111", 
    40 => "00111110000110000100010001001010", 
    41 => "00111110000101110000100111111010", 
    42 => "10111101100011101000001001101100", 
    43 => "10111101100000101000000000000000", 
    44 => "10111101101011100000101101011011", 
    45 => "10111101010111001111101110000100", 
    46 => "00111110000000101110100011000000", 
    47 => "00111100111100101000100111000000", 
    48 => "10111101000110000111100100111110", 
    49 => "00111101000001100011000111111001", 
    50 => "10111101101101100001000010010011", 
    51 => "00111110001010110100101100110000", 
    52 => "00111110000111000011111010111000", 
    53 => "10111101100010101000110011101100", 
    54 => "00111100110111001011010010100001", 
    55 => "10111101100000110101100011110011", 
    56 => "10111100000111001110010010010010", 
    57 => "00111101100101001100000010101010", 
    58 => "00111101000010101011101011011010", 
    59 => "00111010000100001011001100010110", 
    60 => "00111101100101101101001111111010", 
    61 => "00111110001010110101100000001000", 
    62 => "10111101110011000101011101101001", 
    63 => "00111101110001001111001100001100", 
    64 => "00111110001100000010111001100110", 
    65 => "10111100011111010000101101011001", 
    66 => "10111101110110110100001101010010", 
    67 => "00111101101010011000101100111100", 
    68 => "00111100111001110111000111111111", 
    69 => "10111011100001001011000110000000", 
    70 => "00111101000000001111001100101010", 
    71 => "00111101001011001000010010001110", 
    72 => "00111101100011000101001001100001", 
    73 => "10111101100001011011010010000010", 
    74 => "00111101100100011100111001111001", 
    75 => "00111101001111101011110100100101", 
    76 => "10111110000000010100110110110110", 
    77 => "00111100110110011000011111000110", 
    78 => "00111100110011011111010101010110", 
    79 => "00111001111101100001100110001000", 
    80 => "10111011110110110001111010011111", 
    81 => "00111011001011010100111100101110", 
    82 => "00111101011111001101100100000100", 
    83 => "10111110001000001110110011111010", 
    84 => "00111101111011000011110110101011", 
    85 => "10111101101101001100011010110001", 
    86 => "00111100101100001001001000000100", 
    87 => "00111101111010011011011110111111", 
    88 => "10111100110110010101000001101001", 
    89 => "10111101001111000010010001011001", 
    90 => "10111101001111111110111000010010", 
    91 => "00111110001101111101000001101100", 
    92 => "10111010111001011001100111111000", 
    93 => "00111101110010011101101000100100", 
    94 => "10111101100111010001000110110001", 
    95 => "10111101110101100110000101101011", 
    96 => "00111101100111011011001111110101", 
    97 => "00111101110010110110011100100001", 
    98 => "00111101101000000000111111010101", 
    99 => "10111101010001010010010010011000", 
    100 => "00111101110101010100010111001000", 
    101 => "00111101110001110010001100010111", 
    102 => "00111101100001111110111110000011", 
    103 => "00111110001001010000000111100010", 
    104 => "00111100110010001001110000011011", 
    105 => "00111101010001100111100110010111", 
    106 => "10111100100010010000111011010010", 
    107 => "10111101101011111011001111111010", 
    108 => "10111110001110011100001000111011", 
    109 => "00111101001111010001101000111101", 
    110 => "10111110001000011011010011111110", 
    111 => "00111101001101000101101100110111", 
    112 => "00111101111111111101110101100110", 
    113 => "10111110000010011110000000011110", 
    114 => "00111101101111010000010000101010", 
    115 => "10111110000111001000001111101101", 
    116 => "00111101110000111100100110111001", 
    117 => "10111101000010010111101000110010", 
    118 => "10111101001001110101011001010000", 
    119 => "10111101010100010111000110101101" );


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

entity inference_conv2d_f3_0_0_14 is
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

architecture arch of inference_conv2d_f3_0_0_14 is
    component inference_conv2d_f3_0_0_14_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_0_14_rom_U :  component inference_conv2d_f3_0_0_14_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

