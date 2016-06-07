-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_3_0_rom is 
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


architecture rtl of inference_conv2d_f3_4_3_0_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101101111111110010111111111", 
    1 => "10111101101000001110001100000100", 
    2 => "00111100100110000011001101101000", 
    3 => "00111100010101100111110001111001", 
    4 => "00111101010000111010000011101111", 
    5 => "00111101001100001111100100010111", 
    6 => "00111101000101010001111011000110", 
    7 => "00111110000101110100100110101110", 
    8 => "00111101001001010111110110111001", 
    9 => "10111101101111011110010100111110", 
    10 => "00111101100100110100010110011010", 
    11 => "00111110000001111000011110001011", 
    12 => "10111101100001011111101111101011", 
    13 => "10111101001010001001110101011101", 
    14 => "00111100111010101101100111111110", 
    15 => "00111110010000011100110101100000", 
    16 => "10111110000000100100001000000111", 
    17 => "10111101110010101001110001010110", 
    18 => "00111101110001011001000011011100", 
    19 => "00111101111000011011010000110101", 
    20 => "10111110000000011101011011010000", 
    21 => "10111101011101010100100010110111", 
    22 => "00111100111100000111000110000010", 
    23 => "00111101101010110011101010101100", 
    24 => "00111101101000010000000010010110", 
    25 => "10111101100101110101001111110100", 
    26 => "00111011110111111111101111101001", 
    27 => "10111101110101111100010001011101", 
    28 => "00111100110110111010101010000000", 
    29 => "10111101011111110100000101011110", 
    30 => "00111101010011110001111011010001", 
    31 => "10111110011000111100110110011010", 
    32 => "10111110000001010000100100111001", 
    33 => "10111101001110110000111001011110", 
    34 => "10111101100101000100110011110100", 
    35 => "10111010000001100111100001011101", 
    36 => "00111101100010000101011111100110", 
    37 => "00111101101011011100000110110010", 
    38 => "10111101010010110000011101100101", 
    39 => "10111110000101000100111101011101", 
    40 => "00111011111001111110011110110000", 
    41 => "10111110001000110111101011000100", 
    42 => "00111101011100011111001101100010", 
    43 => "00111101101000111110001111110000", 
    44 => "10111011110001101001100010000000", 
    45 => "00111100110001010100110000000101", 
    46 => "00111101011001010001001011011111", 
    47 => "00111101111111000110100111111001", 
    48 => "10111110000100010110010111010100", 
    49 => "10111100110100110001011101101010", 
    50 => "10111101011001111010011100101001", 
    51 => "10111101010001011001001011100111", 
    52 => "00111101101110000110101010000010", 
    53 => "10111100111100110001010011001011", 
    54 => "00111101110100011001110111101101", 
    55 => "00111101100011101110000010111110", 
    56 => "10111101100000001100000100001011", 
    57 => "00111011111011001000111110001011", 
    58 => "10111101101011000010000000001100", 
    59 => "00111110001011001011001110100010", 
    60 => "10111101011011111110000011001110", 
    61 => "10111101110100101000010010011101", 
    62 => "10111110000111100111010111111111", 
    63 => "00111101000111110011111110110001", 
    64 => "10111110001100110100010011000011", 
    65 => "00111110000011001101100101100010", 
    66 => "00111101101111101001001110101100", 
    67 => "10111101100111001000101011001011", 
    68 => "10111101100100110110110011111010", 
    69 => "10111110000101111100001101010000", 
    70 => "00111101001110011111110110100010", 
    71 => "00111100101010100101101110111110", 
    72 => "00111100101010111110011000111000", 
    73 => "10111101001001000001001010110100", 
    74 => "10111101001110111111111001001000", 
    75 => "10111101001100100111010111101111", 
    76 => "00111110001011100010101111010000", 
    77 => "10111011110111111001001110100100", 
    78 => "00111011000000110010100000010011", 
    79 => "10111101110010011111110100011100", 
    80 => "00111110010100110001001101111011", 
    81 => "10111100000110011101110100001011", 
    82 => "00111100101010000100101000110111", 
    83 => "00111110001001001100000001011001", 
    84 => "10111011101100000011101111011101", 
    85 => "00111101110001001110111000111001", 
    86 => "10111101001100010111100111011011", 
    87 => "10111101100100100011111110010000", 
    88 => "00111110000000101010111111011110", 
    89 => "00111101100111101010110101011101", 
    90 => "10111101010101010101110110110000", 
    91 => "10111100100010100000000111100010", 
    92 => "00111101101010110110100111011011", 
    93 => "10111100011001111110101110100010", 
    94 => "00111100001011111011101000000010", 
    95 => "00111101111001110111101010110011", 
    96 => "10111101011101001000000000011111", 
    97 => "00111101011101110111101110010111", 
    98 => "10111101101100010110010000110100", 
    99 => "00111100011111100001011011110010", 
    100 => "10111100001010111011011100111110", 
    101 => "10111100000001100100000101111000", 
    102 => "10111101111110111011100011000011", 
    103 => "00111101100011111100111100111110", 
    104 => "10111101111000100011010110110101", 
    105 => "10111101101100111010001110000001", 
    106 => "00111101010100100101111000000110", 
    107 => "10111110000001111011001010001001", 
    108 => "10111100100001011101100111111111", 
    109 => "10111101011011000001011100110000", 
    110 => "00111101111000101110111111010100", 
    111 => "00111110001001100011110001110101", 
    112 => "10111101111011111111010010111010", 
    113 => "00111110001011110100001000110101", 
    114 => "10111101010100100110001001101110", 
    115 => "00111110000111110100111111010111", 
    116 => "00111110000100010010101101011110", 
    117 => "00111110000111101100001100010001", 
    118 => "10111010000001011110011100000010", 
    119 => "00111101111000111101010011110001" );


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

entity inference_conv2d_f3_4_3_0 is
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

architecture arch of inference_conv2d_f3_4_3_0 is
    component inference_conv2d_f3_4_3_0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_3_0_rom_U :  component inference_conv2d_f3_4_3_0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

