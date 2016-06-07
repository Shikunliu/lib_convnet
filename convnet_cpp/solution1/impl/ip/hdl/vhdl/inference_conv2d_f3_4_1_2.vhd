-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_1_2_rom is 
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


architecture rtl of inference_conv2d_f3_4_1_2_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101011100000000011110011010", 
    1 => "10111101001110010011000001101110", 
    2 => "00111101110110001000000110100001", 
    3 => "10111101101100011110101101111000", 
    4 => "10111101100001001010010101001011", 
    5 => "00111101111010001101110110100101", 
    6 => "10111101110011101101101100101111", 
    7 => "00111110000010101111111011100111", 
    8 => "00111101000110111110001100111011", 
    9 => "10111101001100100010100101100011", 
    10 => "10111011110111010010110100101101", 
    11 => "00111110001101111000011110001011", 
    12 => "10111101100010101101010111110101", 
    13 => "10111100110101010111110000110011", 
    14 => "10111101000010101011001000100110", 
    15 => "00111001011001001100000011001110", 
    16 => "10111101100010100010010011011010", 
    17 => "10111100000011000001110000111000", 
    18 => "10111110001001010010001111110110", 
    19 => "00111110000000001111101001011001", 
    20 => "00111101000001100011111011111001", 
    21 => "00111100101101110010110011110011", 
    22 => "00111100001101010011111100010010", 
    23 => "10111100110110001101010111110000", 
    24 => "00111100000110001101010000001100", 
    25 => "10111110010010111100101110100011", 
    26 => "00111110000110100100010110010001", 
    27 => "00111010011110101111110100001100", 
    28 => "00111110001011110111111010000000", 
    29 => "10111110000100111101100010011101", 
    30 => "00111101111111000010111111000111", 
    31 => "00111101100101010010000110000000", 
    32 => "00111110010010100110001001100111", 
    33 => "00111010101011110111010001001100", 
    34 => "00111101111011111001111101000101", 
    35 => "00111101001000011110110010111010", 
    36 => "10111101101001011111101111101011", 
    37 => "10111101001010001101110110100101", 
    38 => "10111101011000010111101101111011", 
    39 => "00111110001110001011001000100000", 
    40 => "10111110001001010011100100110010", 
    41 => "10111101010000111111001010111001", 
    42 => "00111101111111011101111000110111", 
    43 => "10111101101011111010101110110010", 
    44 => "10111101011110101110100101110101", 
    45 => "10111101101000011000100001010011", 
    46 => "10111101001100011000100011011001", 
    47 => "10111101101011011000100001111111", 
    48 => "00111110001111010000111101100010", 
    49 => "00111100110011101001000111001001", 
    50 => "00111101100110100101001100001010", 
    51 => "10111110001101001001101111101001", 
    52 => "10111101001110110000001011010110", 
    53 => "10111100100111101111101011001101", 
    54 => "10111101100000010000111011110100", 
    55 => "00111101000110100110000101110101", 
    56 => "00111101011111111100000100010110", 
    57 => "00111101100110111101101110000110", 
    58 => "00111101000101000100001111010100", 
    59 => "00111101000100011010100110010001", 
    60 => "00111110001000010101000010011000", 
    61 => "00111011101111100110101001110100", 
    62 => "00111011100010100010111011000011", 
    63 => "10111101100110100111011100011101", 
    64 => "00111110001010100001001001110011", 
    65 => "10111110001101100111001010111001", 
    66 => "00111011010011011010010100001111", 
    67 => "10111101110010111110110101011001", 
    68 => "10111101000111010011110110010011", 
    69 => "00111101001011001110101111010110", 
    70 => "00111100010111101110001101010000", 
    71 => "10111101100110101110101110110111", 
    72 => "10111100111001010101010010000011", 
    73 => "00111100100110000000001100101100", 
    74 => "00111100101011111111111101101100", 
    75 => "00111101100010111110001010100111", 
    76 => "10111101111000010000011110111000", 
    77 => "00111110001001111001110110010001", 
    78 => "10111101111010011100010111100111", 
    79 => "10111100100110101000110110000000", 
    80 => "10111101010000110111010111110001", 
    81 => "10111101000100001010010001011101", 
    82 => "00111100010101111100011111010011", 
    83 => "00111100000000011000011101001001", 
    84 => "00111110000011000010010000111110", 
    85 => "00111101110000101100000011001101", 
    86 => "10111110001110111001000100101110", 
    87 => "00111110000001011110100100011000", 
    88 => "10111101010000001100010010000001", 
    89 => "00111110001100011010111010110100", 
    90 => "10111110001000010100110101110010", 
    91 => "10111100111110110000110001000110", 
    92 => "10111101011110110010111011100000", 
    93 => "10111110000111110001100001000100", 
    94 => "00111101100010100111101100011001", 
    95 => "10111001110101110100011111010000", 
    96 => "10111100000101100110111110000011", 
    97 => "00111101101101100101000100000010", 
    98 => "10111110001010111011110011110101", 
    99 => "00111110000000000010011001000110", 
    100 => "00111110010010010010000111001101", 
    101 => "00111100111000011001011000011101", 
    102 => "10111101011101011010110101000110", 
    103 => "10111101011110011000010101000010", 
    104 => "00111101111101111100100000001000", 
    105 => "10111110000000001110010111100110", 
    106 => "10111101111010000010100101001010", 
    107 => "10111101011100010001000001000011", 
    108 => "00111100100111111110111110001010", 
    109 => "00111101001011111000010111100101", 
    110 => "00111101110111000000101010001101", 
    111 => "00111101001100111111100111101000", 
    112 => "00111101000100010111001100001010", 
    113 => "00111110000000011010011101011101", 
    114 => "00111101000100011100001111111101", 
    115 => "00111101110101011111111101100001", 
    116 => "10111100000000010000001001111111", 
    117 => "10111101111100101100000001100010", 
    118 => "00111010111101101111011010010111", 
    119 => "10111110010100101100100010000010" );


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

entity inference_conv2d_f3_4_1_2 is
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

architecture arch of inference_conv2d_f3_4_1_2 is
    component inference_conv2d_f3_4_1_2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_1_2_rom_U :  component inference_conv2d_f3_4_1_2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

