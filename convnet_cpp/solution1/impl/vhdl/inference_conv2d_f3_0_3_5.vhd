-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_3_5_rom is 
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


architecture rtl of inference_conv2d_f3_0_3_5_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101111010101000000110011001", 
    1 => "00111101110001000111111101100100", 
    2 => "00111100001111011001011001100100", 
    3 => "00111011100001010111000100000011", 
    4 => "10111101001110011001101110110010", 
    5 => "00111101110011101011000100111110", 
    6 => "00111101011011101100011011011000", 
    7 => "00111100101010000001110110001011", 
    8 => "00111101110010011111110000011101", 
    9 => "00111100110011101101110000111100", 
    10 => "00111101011111001001001110110100", 
    11 => "10111110010010000001000000011111", 
    12 => "10111110001011110111110101110100", 
    13 => "10111011110111010010010010110100", 
    14 => "00111101011001110000011101110110", 
    15 => "00111110010110100011011000011010", 
    16 => "00111101110010011100001001111111", 
    17 => "00111110000011111110000101010100", 
    18 => "00111010111101011011011011010001", 
    19 => "00111110001000110100111110000011", 
    20 => "00111110001010010001110011010010", 
    21 => "00111101100011100110011101010001", 
    22 => "10111101000101011010001011001010", 
    23 => "00111101111101111100001101010000", 
    24 => "00111101110010101111001010100010", 
    25 => "00111100111010100011101100000111", 
    26 => "00111101110100011011100000100100", 
    27 => "00111101001000000001000010101100", 
    28 => "00111100010000111000001100001101", 
    29 => "10111110001001110000101101001010", 
    30 => "00111011111011010110000101000010", 
    31 => "10111101100111000111011101001010", 
    32 => "10111110001000100000010010110000", 
    33 => "00111011110011011111111011100110", 
    34 => "00111101000011000111011001001011", 
    35 => "00111101010111011110000101011101", 
    36 => "00111101101111011101101110001011", 
    37 => "10111101100001111111001101110001", 
    38 => "10111100011011000100111101001001", 
    39 => "10111100111111010111100101110011", 
    40 => "10111101000101110101111111001110", 
    41 => "10111100011000011010101100010110", 
    42 => "10111101111110010010001100011100", 
    43 => "10111100101100110011111111001000", 
    44 => "10111100110110000110100111101111", 
    45 => "00111101010110001001001000110011", 
    46 => "00111101100101100101000011110101", 
    47 => "00111110001000011011000010001010", 
    48 => "10111110000010101110101100111110", 
    49 => "10111100101101011101001100100001", 
    50 => "00111101011110100001101110000101", 
    51 => "00111101011111100001101111111010", 
    52 => "10111110000001001010010001001100", 
    53 => "10111110001010010001001010011001", 
    54 => "10111110001101110110100000010110", 
    55 => "00111101110010111110101001101010", 
    56 => "10111010111100011111111011100000", 
    57 => "00111110000010111100101100011101", 
    58 => "10111101110011111101100011110001", 
    59 => "00111110000010100000101010010110", 
    60 => "10111101101101111101100111000001", 
    61 => "10111101111000011100000011001010", 
    62 => "10111110000000000100110011001111", 
    63 => "10111101011110100011010111010110", 
    64 => "00111101110010000011011010011011", 
    65 => "10111101110100011111110101011001", 
    66 => "10111101100110101110100110101011", 
    67 => "10111101011100001101100010110000", 
    68 => "10111101011110000001001110100010", 
    69 => "10111101010100000000111110010010", 
    70 => "10111101001000011100011111101100", 
    71 => "10111110000101111001010111110110", 
    72 => "00111100011110011110111101000101", 
    73 => "00111101111000110001000001010110", 
    74 => "00111101111101101100101101010011", 
    75 => "10111100100000010101101010101001", 
    76 => "10111110000001101010001101111011", 
    77 => "10111101100011000100101100100101", 
    78 => "10111100001111100100100111101000", 
    79 => "10111101111110110011000001110011", 
    80 => "10111101101111000011010101001000", 
    81 => "00111011110011110100010101001101", 
    82 => "10111101101110001101000100111000", 
    83 => "10111101111000101110000010100000", 
    84 => "00111101000000111010000110010000", 
    85 => "10111100011101101110011110111110", 
    86 => "00111110000011111000001010110010", 
    87 => "00111101110111001110011000111010", 
    88 => "00111101011101100011001010001100", 
    89 => "00111101001101011111000000010001", 
    90 => "10111100011011110011011011110000", 
    91 => "10111110010010001111011000000110", 
    92 => "00111100001000101001000001001110", 
    93 => "00111101010101001011010010101000", 
    94 => "10111101001100000000001010101101", 
    95 => "00111101111100011001100110111011", 
    96 => "10111101101011110001011101101101", 
    97 => "00111101100010010011101011011100", 
    98 => "10111101100110001100010101000011", 
    99 => "10111101100010000100001010101010", 
    100 => "00111101111010100111110001011011", 
    101 => "10111101000011000011011100101011", 
    102 => "10111101010101001101010010001001", 
    103 => "00111100111100100100110010111001", 
    104 => "00111101001010111100011010001101", 
    105 => "00111101000011010101100111110000", 
    106 => "00111110000111011110011001011000", 
    107 => "10111101010101010011111111001101", 
    108 => "00111110001110101111000000111001", 
    109 => "00111011100001100110110101010111", 
    110 => "00111101000110000001011000001100", 
    111 => "00111101001100001000000011010001", 
    112 => "10111101010101001001110001010100", 
    113 => "10111110001001001111101010001011", 
    114 => "00111101110011101101111101100001", 
    115 => "10111101110110100001100001111010", 
    116 => "00111101110001101001010001100001", 
    117 => "10111101101001110011011111000000", 
    118 => "10111101100101100101000010010111", 
    119 => "00111101111101001101010000000010" );


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

entity inference_conv2d_f3_0_3_5 is
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

architecture arch of inference_conv2d_f3_0_3_5 is
    component inference_conv2d_f3_0_3_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_3_5_rom_U :  component inference_conv2d_f3_0_3_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


