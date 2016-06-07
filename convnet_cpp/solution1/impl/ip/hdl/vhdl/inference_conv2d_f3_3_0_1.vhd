-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_0_1_rom is 
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


architecture rtl of inference_conv2d_f3_3_0_1_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110011000110010111100000001", 
    1 => "10111101100100110101110111000110", 
    2 => "00111011000001110011011101101100", 
    3 => "00111011111000111011011100011111", 
    4 => "00111100101011101000100110110110", 
    5 => "10111110010110111000111100010101", 
    6 => "00111101001110101010111111100100", 
    7 => "10111100100100111110000011110011", 
    8 => "00111101111101101100101111011010", 
    9 => "00111010100010001110111011111100", 
    10 => "10111110000110110001110111010110", 
    11 => "00111101000101110001111000001111", 
    12 => "00111011101000101010100000100001", 
    13 => "10111100111001111110001100111110", 
    14 => "00111110001001111000110001000011", 
    15 => "00111101001110001010100101000100", 
    16 => "10111101100111011101011000111111", 
    17 => "10111101101011010110000010011001", 
    18 => "00111101111000100001001000001110", 
    19 => "00111110001001111100101011101010", 
    20 => "00111100000111100001001111110010", 
    21 => "00111101101010100111011010110001", 
    22 => "10111110001100010001000100100111", 
    23 => "10111101100111100111000000111011", 
    24 => "00111100100000011111010111011001", 
    25 => "00111101010011000101000111101000", 
    26 => "10111011110110101101100011111111", 
    27 => "00111110001001010001101101010000", 
    28 => "00111110010011000100001010100110", 
    29 => "00111101111011110110100111001011", 
    30 => "10111100100011001000011000100000", 
    31 => "10111101100111101101011011100011", 
    32 => "00111100000000010001011111001101", 
    33 => "10111101100100001000000010011100", 
    34 => "00111101011011110010101001011010", 
    35 => "00111010110100011100110011100111", 
    36 => "10111101111101000101111110011110", 
    37 => "00111110001001101111000100010011", 
    38 => "00111100010101001101111000010011", 
    39 => "00111101100000011010100001001110", 
    40 => "10111101110111010110001100000010", 
    41 => "10111100011100100010011000100011", 
    42 => "10111110000011100111110011010000", 
    43 => "10111100111001100100100010011111", 
    44 => "00111100101110111001111101111110", 
    45 => "00111101100000001111000000000101", 
    46 => "10111110000100101001011000101101", 
    47 => "00111100100111101100110010101010", 
    48 => "10111101011010011010011101100100", 
    49 => "00111101101010110111000101110110", 
    50 => "10111110001010101010100000100010", 
    51 => "10111101110100010000111111011000", 
    52 => "00111101100100111100110110110101", 
    53 => "00111100111110000011000010010011", 
    54 => "00111110010101110110010110111010", 
    55 => "10111011010111000001101000011101", 
    56 => "00111101100101111110001100111110", 
    57 => "10111110001010100010110110110110", 
    58 => "10111101010101001000011000110100", 
    59 => "00111011111001001011110000000010", 
    60 => "00111101100111010101010010010111", 
    61 => "10111101110011001000011010110100", 
    62 => "00111101011100000000000100011010", 
    63 => "00111110001010011100010011011011", 
    64 => "10111101010000111110001000001101", 
    65 => "10111101111111010101100010000110", 
    66 => "00111110001010111111101000001001", 
    67 => "10111100000100101000101101111110", 
    68 => "10111101010100000010101000110101", 
    69 => "10111101100101110101011000101000", 
    70 => "00111101111101001110000010011000", 
    71 => "00111110001010111111000100100000", 
    72 => "00111100101000001111111110001010", 
    73 => "00111100110100011011100011111011", 
    74 => "00111101011110010100111111001000", 
    75 => "10111100111001001011100110111110", 
    76 => "10111101100110100001111100100011", 
    77 => "00111100110110110010110001000001", 
    78 => "00111101100000111001101001010100", 
    79 => "10111110001101001000001111001011", 
    80 => "00111100001010111110100100100111", 
    81 => "00111110001110100110111011111100", 
    82 => "10111101110000001101010101110000", 
    83 => "00111101111000011010000011001111", 
    84 => "00111110010000011010111101111101", 
    85 => "10111110000011001100111110101111", 
    86 => "00111101101010110000001101101001", 
    87 => "00111110001111000100011010010101", 
    88 => "00111101011010101001001111110011", 
    89 => "00111101100110101011011101110001", 
    90 => "00111101101101111000001111000101", 
    91 => "00111101101001010111110101011011", 
    92 => "00111101100001001011000111010011", 
    93 => "00111101010010100011011101110111", 
    94 => "00111100001000110011000000010001", 
    95 => "10111101011110000101100010000111", 
    96 => "00111110000100110000001001110001", 
    97 => "00111101010000011110101111001000", 
    98 => "10111101100001100110101001100010", 
    99 => "10111011110100111110010011011010", 
    100 => "10111100100110101111000000010001", 
    101 => "00111101011111000001011100001000", 
    102 => "10111101011010010101101100001101", 
    103 => "00111100001000100000110011011011", 
    104 => "10111100100100010101011010011111", 
    105 => "00111110010000100111011111000100", 
    106 => "00111100011111100100101010001001", 
    107 => "10111101000110010101010110100111", 
    108 => "10111101001111000100001001010110", 
    109 => "10111101101010011110111110010101", 
    110 => "10111101100111100011000100000000", 
    111 => "10111100110011011011111110100110", 
    112 => "10111101110000000000000111010110", 
    113 => "10111101000101101110101000001100", 
    114 => "00111101010101010111010011011100", 
    115 => "10111101011001011001010110111100", 
    116 => "00111100111001010110010110110101", 
    117 => "10111101101101110011010000101111", 
    118 => "00111110010011010010001001000010", 
    119 => "00111110000000010101011111101111" );


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

entity inference_conv2d_f3_3_0_1 is
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

architecture arch of inference_conv2d_f3_3_0_1 is
    component inference_conv2d_f3_3_0_1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_0_1_rom_U :  component inference_conv2d_f3_3_0_1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

