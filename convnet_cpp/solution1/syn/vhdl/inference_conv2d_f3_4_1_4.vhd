-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_4_1_4_rom is 
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


architecture rtl of inference_conv2d_f3_4_1_4_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100101110110100110101001001", 
    1 => "00111100100011101100110111111001", 
    2 => "10111101110100011001010110001001", 
    3 => "00111101000011100110011011100110", 
    4 => "00111101110010001010011011110110", 
    5 => "00111110001001100011000011101100", 
    6 => "10111101101010000100000010101100", 
    7 => "10111011111001101010001101100011", 
    8 => "10111101111100010011101111100010", 
    9 => "00111100110011101000101110110100", 
    10 => "10111101100100101101101111011011", 
    11 => "00111101111001100100011001101011", 
    12 => "10111101111111100111011001000010", 
    13 => "10111101100101010000110011001010", 
    14 => "00111101011000000111010111011100", 
    15 => "00111101111011101010111000011001", 
    16 => "00111101110000101101001101000001", 
    17 => "00111100011100010010111010101100", 
    18 => "10111110000110011101110011111001", 
    19 => "10111110000001010001001110110110", 
    20 => "10111011100101100100100010010111", 
    21 => "00111101110000010110001000000000", 
    22 => "00111110000100000001100101101110", 
    23 => "10111101101010001110110010100011", 
    24 => "10111110000010011101111110011000", 
    25 => "00111101010011111111000011011001", 
    26 => "00111101110100011011010001111000", 
    27 => "00111110000000111000110001010100", 
    28 => "10111101110010110000010001000000", 
    29 => "10111110000010110110101100101011", 
    30 => "00111101100111101111111110111010", 
    31 => "00111101110000011101110010101111", 
    32 => "10111100111111101011110101110101", 
    33 => "10111110000001000011010111110000", 
    34 => "00111101110000001010001011100101", 
    35 => "10111011011111111001001011001000", 
    36 => "00111100001100101100110110110011", 
    37 => "00111101100111010100010000100001", 
    38 => "00111110001001011001001111100110", 
    39 => "00111101101100010001110000101010", 
    40 => "10111101100010010010111011011011", 
    41 => "10111101001110010001010100001111", 
    42 => "00111101010011111100110010010001", 
    43 => "10111101101011101100010001111100", 
    44 => "10111100110000110111000100000011", 
    45 => "10111100000111101010100001000001", 
    46 => "00111100101100011001100010010100", 
    47 => "00111101101001100110011111000011", 
    48 => "00111101010110000001110100010010", 
    49 => "10111101100101011101101101011100", 
    50 => "10111101011110000100001111000100", 
    51 => "00111101110001101100001000100111", 
    52 => "10111101100010101110101001100111", 
    53 => "10111110010010101101001101100011", 
    54 => "10111110000011011110101000000011", 
    55 => "10111101111001101100000100011010", 
    56 => "00111101000111101000100101011000", 
    57 => "00111101100111010100011001101111", 
    58 => "00111101001110010001010000011110", 
    59 => "10111101011011100100000010100000", 
    60 => "10111101111111000111000001000011", 
    61 => "10111101100100101001111110001111", 
    62 => "10111100100101001111001000000000", 
    63 => "00111101110100010101011000011001", 
    64 => "10111110000000001001100101011011", 
    65 => "00111101100110010110000101011000", 
    66 => "10111110000101111111010101100010", 
    67 => "10111100110010011101101110110110", 
    68 => "00111101110110010101111101100111", 
    69 => "00111110000100110000100001111000", 
    70 => "10111101111100100000011111010101", 
    71 => "10111101110010011010111100001011", 
    72 => "00111101111011010001011101000000", 
    73 => "00111101000011100001100001011100", 
    74 => "00111110001010111010100000111111", 
    75 => "10111110000011000101001000011110", 
    76 => "10111101001110001111010000001000", 
    77 => "10111101010110100110001101011001", 
    78 => "00111101100100100101110000110001", 
    79 => "10111110000100001010100010001111", 
    80 => "00111110000011010110011111111101", 
    81 => "10111110000010011111101011011011", 
    82 => "00111101110100111011010100111001", 
    83 => "10111101101010000010110101111011", 
    84 => "10111101100000100001110101111100", 
    85 => "00111100001111010101100010111100", 
    86 => "00111101100010100001011000111001", 
    87 => "00111101010000111010000011010100", 
    88 => "00111100011100100100011001101110", 
    89 => "10111101101000000100011111010100", 
    90 => "10111100001101011101010100111010", 
    91 => "10111101101001101110000010110111", 
    92 => "10111100111110111100100101101111", 
    93 => "00111110000001010100000100010000", 
    94 => "00111100000101001001000101011101", 
    95 => "00111101001111101011001010001110", 
    96 => "00111110000111001100111001011111", 
    97 => "10111100000110110111001011000010", 
    98 => "10111110000101010010110011100000", 
    99 => "10111101000000001010000000000011", 
    100 => "00111101101010000000101110011101", 
    101 => "10111101100100000111001001110100", 
    102 => "00111101100111111111110101010011", 
    103 => "10111101000001000010011101011100", 
    104 => "10111101101110010101011011110111", 
    105 => "00111011100101110110011000100011", 
    106 => "00111101110010010111001100011110", 
    107 => "10111101010101101111110111000011", 
    108 => "00111101100101011011100111110110", 
    109 => "10111101100111100110100011010111", 
    110 => "10111101100010111001101101110100", 
    111 => "00111110000100100110000010110011", 
    112 => "00111101111111001111100100011010", 
    113 => "00111101101000011010110011101100", 
    114 => "00111100111010100001101010000110", 
    115 => "10111101011010000100100001010011", 
    116 => "10111101000101010111100101011111", 
    117 => "10111101111101111011110100000110", 
    118 => "10111110001011111110100100110010", 
    119 => "00111110001001001111011111101100" );


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

entity inference_conv2d_f3_4_1_4 is
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

architecture arch of inference_conv2d_f3_4_1_4 is
    component inference_conv2d_f3_4_1_4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_4_1_4_rom_U :  component inference_conv2d_f3_4_1_4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


