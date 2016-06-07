-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_0_5_rom is 
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


architecture rtl of inference_conv2d_f3_1_0_5_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101010001111101011000100011", 
    1 => "00111101001010000101110100010110", 
    2 => "00111101010101010011101100110000", 
    3 => "10111101110110011110100000111110", 
    4 => "10111100000011101101000110011111", 
    5 => "10111011110001010011110100001011", 
    6 => "00111101001101111001010101100011", 
    7 => "00111110000111011100111101000110", 
    8 => "00111100001110001110011001100110", 
    9 => "00111101000001000100011111011110", 
    10 => "10111101010101111101110111011000", 
    11 => "10111100101010110100011101000001", 
    12 => "10111101101101010011001101100000", 
    13 => "10111101110101010110110110100000", 
    14 => "10111101111111001101010101110011", 
    15 => "00111100110111110000010001110010", 
    16 => "10111101110000101010000110011011", 
    17 => "00111110000100101011010100011100", 
    18 => "10111101110000101100101101100100", 
    19 => "10111101110000101111011110100100", 
    20 => "10111100001001101010111100101100", 
    21 => "00111101111100000101111000011100", 
    22 => "00111110010000010110010011000111", 
    23 => "00111010100001001010001110111110", 
    24 => "10111101010111111110001101100000", 
    25 => "10111101001000010011010000010010", 
    26 => "10111101000100001001101100111110", 
    27 => "00111101110010111011100010001101", 
    28 => "00111110000100111100001011011011", 
    29 => "00111100011000011100001011111110", 
    30 => "10111101110111110101001001110110", 
    31 => "00111101010101101001001001100011", 
    32 => "00111101011101101100010001001101", 
    33 => "00111110000010010010001111100110", 
    34 => "00111101110001001111110110010110", 
    35 => "10111110000110101110001110100100", 
    36 => "10111011011000000101001111101000", 
    37 => "00111011000100101100110110100011", 
    38 => "10111101101100110110111110011001", 
    39 => "10111101011111010001010011100100", 
    40 => "10111101001000000110110010100010", 
    41 => "00111101111100011101000011001000", 
    42 => "00111011001101100101100010010111", 
    43 => "00111101110001100100011111100011", 
    44 => "10111110001100001000000110000000", 
    45 => "10111101101011100011110001000110", 
    46 => "10111100100010110111101010001000", 
    47 => "10111101000110101110100010011111", 
    48 => "10111100011010000111111011011010", 
    49 => "00111101000110101000100111010100", 
    50 => "10111101111100101101000110101111", 
    51 => "00111101110010011010000010000101", 
    52 => "10111101111110000000001111001101", 
    53 => "00111101101010101100110111111100", 
    54 => "00111100001001001101100111010100", 
    55 => "00111100110001100001101101101101", 
    56 => "10111100001110100101101001101111", 
    57 => "00111101000101000101010110101000", 
    58 => "10111100111000000100001111011000", 
    59 => "00111110001010011000110001111110", 
    60 => "10111101100010110100110000100001", 
    61 => "00111110000001110001000010001000", 
    62 => "00111101010011101101001100000010", 
    63 => "10111101001001111011110101001001", 
    64 => "10111101001011000111001001101010", 
    65 => "00111000111100010011111001101001", 
    66 => "00111101101001111111110010111001", 
    67 => "00111101101011111000110110001100", 
    68 => "10111101101010110101011100001001", 
    69 => "00111101001000101001010001111111", 
    70 => "10111101111011110000111110011101", 
    71 => "10111100001110011110101001110010", 
    72 => "00111100110001000101000101101001", 
    73 => "10111110000100000000001001011100", 
    74 => "10111010011101110111110110111111", 
    75 => "00111100000000001100000100100110", 
    76 => "10111110000111011100110101110000", 
    77 => "00111101110100001000001011001111", 
    78 => "00111101011100010100110110110110", 
    79 => "10111101101100101100101000101111", 
    80 => "10111110011011100001010001111011", 
    81 => "10111110000011011011011000011100", 
    82 => "00111101011011001101001111101110", 
    83 => "10111101110111111101011110100001", 
    84 => "10111101010010010111101010000010", 
    85 => "00111101110111000000001000101010", 
    86 => "00111101101111100011011110001110", 
    87 => "00111100110001000111010011011010", 
    88 => "00111101110100111110010001101001", 
    89 => "00111101110011001011100100001001", 
    90 => "00111100001110110100110000000110", 
    91 => "10111100011001011101100000110111", 
    92 => "00111110000010010011111001100000", 
    93 => "10111101110110010111101000100101", 
    94 => "00111101100010101110000000111011", 
    95 => "00111110001111000110011010010000", 
    96 => "00111101101001111100101001110010", 
    97 => "10111011010010010100011100110001", 
    98 => "00111110011010110001110010000110", 
    99 => "00111101001000101010111011010001", 
    100 => "00111101110110011100000001100110", 
    101 => "10111101101011110101001110111000", 
    102 => "10111101000111110010000000000110", 
    103 => "10111101101100110010100100100010", 
    104 => "00111011011011011111111001001011", 
    105 => "10111100011110011001011100110000", 
    106 => "00111101100110010110100011100101", 
    107 => "00111110001010001001111000110100", 
    108 => "10111100100110000001010101101011", 
    109 => "00111110000000001110010111100110", 
    110 => "00111101101110011001001111100011", 
    111 => "00111101101000001111011001111000", 
    112 => "00111101111000100101010000011110", 
    113 => "10111110000100010010011010100110", 
    114 => "10111110000011001001011000000011", 
    115 => "10111110001111000001101011001110", 
    116 => "10111100111000110010011001000000", 
    117 => "10111101110111100100001111101110", 
    118 => "00111100111111101110001001011110", 
    119 => "10111101100110110100101010000001" );


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

entity inference_conv2d_f3_1_0_5 is
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

architecture arch of inference_conv2d_f3_1_0_5 is
    component inference_conv2d_f3_1_0_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_0_5_rom_U :  component inference_conv2d_f3_1_0_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

