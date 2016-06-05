-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_2_9_rom is 
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


architecture rtl of inference_conv2d_f3_1_2_9_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111100000001110111000001001100", 
    1 => "00111101101000001100010011000100", 
    2 => "10111101101000001101000010010000", 
    3 => "10111100100001101001101001001110", 
    4 => "10111101011111101001111000000000", 
    5 => "10111101110001101101011000101110", 
    6 => "00111110000110111000001110001100", 
    7 => "10111101011100111110100110001100", 
    8 => "00111101011000111111001100001001", 
    9 => "10111110000011001111011000111000", 
    10 => "10111110000010100001001101111111", 
    11 => "00111101010000100010100000101110", 
    12 => "10111010110100110011111100000010", 
    13 => "10111101001110101110010010100011", 
    14 => "00111110000011100110101011111101", 
    15 => "10111101011001011110110000001000", 
    16 => "10111110000001001001101010011001", 
    17 => "00111101110100101011110111000010", 
    18 => "00111101000100010011110010111001", 
    19 => "00111100100101110101101110011100", 
    20 => "00111110001100100111100000000111", 
    21 => "10111101011000001101001111101011", 
    22 => "00111101000101001001110000011111", 
    23 => "10111100110000011010110000000111", 
    24 => "00111110001000000111011111001101", 
    25 => "10111100101101011101111111101100", 
    26 => "10111101011111110001001011101011", 
    27 => "10111110000111000000011011100010", 
    28 => "00111101101011011110011111000010", 
    29 => "00111100001010110101001111010110", 
    30 => "10111100000001011010100111011000", 
    31 => "00111101010111010101000001011000", 
    32 => "10111101110110101101001110100110", 
    33 => "10111101101011011101100110001101", 
    34 => "10111100101011100001011000101000", 
    35 => "00111101010000011001010010100101", 
    36 => "00111011111011000011101100100111", 
    37 => "00111110000101100111110101111000", 
    38 => "00111100100110000110010100011100", 
    39 => "10111101000000110001000011000001", 
    40 => "10111101110010101111110110001010", 
    41 => "10111100100101101111000101111110", 
    42 => "10111101110111110011111110010110", 
    43 => "10111101100100100000001111001011", 
    44 => "10111101001100000111100001010011", 
    45 => "10111110011100011100010111000101", 
    46 => "10111100101010011101110010101000", 
    47 => "00111101000101001101110010110110", 
    48 => "00111110010110110011111011011110", 
    49 => "10111101100011110011100001100111", 
    50 => "00111101011111000001001000011010", 
    51 => "10111101000000001001010001100000", 
    52 => "10111101101101110110001101000100", 
    53 => "10111101001100010101001100001111", 
    54 => "00111101110111001010010100110111", 
    55 => "10111101011001101100010110011100", 
    56 => "10111110000101011011111100100111", 
    57 => "00111011111001101000100101100001", 
    58 => "10111101011011000101000010001011", 
    59 => "00111110001111111101111011111000", 
    60 => "00111101100101010100110001100011", 
    61 => "10111110001001001111111101000011", 
    62 => "10111101110101011000001110100101", 
    63 => "00111101110011100110000010000000", 
    64 => "10111110000010011011111110011100", 
    65 => "00111101110111001101010001100111", 
    66 => "10111110000111010101000110110101", 
    67 => "10111101110101110110101111000010", 
    68 => "10111101101110100001001101001010", 
    69 => "10111101100100111001100111000000", 
    70 => "10111101010110011001111010111101", 
    71 => "00111100111110101101100101010000", 
    72 => "10111110000010101001010110000101", 
    73 => "00111101010011001100011111000100", 
    74 => "00111011111110011010100100100100", 
    75 => "10111100100111010111011111100000", 
    76 => "00111101001010100101000100100111", 
    77 => "10111101000000110110110011101101", 
    78 => "00111101101110100110000111100001", 
    79 => "00111101100011111011000100001011", 
    80 => "10111100110010110001100011001101", 
    81 => "00111101110110010110010110110010", 
    82 => "10111101100010000100001110001110", 
    83 => "00111101001011000100110110000001", 
    84 => "00111101110001101110001001001010", 
    85 => "00111011111101101000110101111011", 
    86 => "00111101000011100010101010011011", 
    87 => "00111100100000010101010000101000", 
    88 => "00111101011110111010110100100000", 
    89 => "10111100110010101110011000001101", 
    90 => "10111101101110010000100001101101", 
    91 => "10111101100111010011100000111010", 
    92 => "00111101000001001001100010000001", 
    93 => "00111110010011000111011111011110", 
    94 => "00111101100001111000111101110110", 
    95 => "10111101001111111101000010011011", 
    96 => "10111101100101111011110001111111", 
    97 => "00111100101100111110011100100011", 
    98 => "00111101110000111110101001001000", 
    99 => "10111100101110101001101111011101", 
    100 => "10111101100110110011001111101000", 
    101 => "10111101100100111110011111000100", 
    102 => "10111100110100111000111010001000", 
    103 => "00111110010100001101000111111010", 
    104 => "00111110000001101110001111111000", 
    105 => "00111101100100000110110111110001", 
    106 => "00111101110010100101010101100110", 
    107 => "10111101100001101110110110010000", 
    108 => "00111101101010110110111111111110", 
    109 => "10111110010001010011111010110100", 
    110 => "10111101001001001101011001011110", 
    111 => "10111101011001101101010100111100", 
    112 => "10111101111011010010010001011011", 
    113 => "00111011111100010001001111010100", 
    114 => "10111011100010111100111000010100", 
    115 => "00111100100001010011100111111100", 
    116 => "10111100100010100011110010011010", 
    117 => "00111110001110111111100101000000", 
    118 => "10111110001100111110101010110011", 
    119 => "00111011010001001010101111000001" );


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

entity inference_conv2d_f3_1_2_9 is
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

architecture arch of inference_conv2d_f3_1_2_9 is
    component inference_conv2d_f3_1_2_9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_2_9_rom_U :  component inference_conv2d_f3_1_2_9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


