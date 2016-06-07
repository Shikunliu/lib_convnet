-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_3_1_rom is 
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


architecture rtl of inference_conv2d_f3_1_3_1_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110000110000001010100011010", 
    1 => "00111101001100001111110110011001", 
    2 => "00111101000001110110010100011001", 
    3 => "10111101011101010011110010001101", 
    4 => "10111100111110111011000111110010", 
    5 => "00111101110100111010010101111111", 
    6 => "00111101001000010000100011111010", 
    7 => "00111101101011010011101010001001", 
    8 => "00111101100000001000010111110101", 
    9 => "00111101000000101001000011010100", 
    10 => "10111110000111111100101110010010", 
    11 => "00111101001000011011110000010010", 
    12 => "10111101111000101001101001011111", 
    13 => "00111101100001001001100010001110", 
    14 => "10111100100000111001001100110010", 
    15 => "00111110000000001010100101011000", 
    16 => "10111101110100110111101100000111", 
    17 => "10111101001011100101110011110000", 
    18 => "00111100111001010100111010100100", 
    19 => "00111101100111011111100001100001", 
    20 => "10111101101011010111001011001010", 
    21 => "10111110000111100100010011111010", 
    22 => "00111100110100000001100001111100", 
    23 => "10111101100001111000011111110111", 
    24 => "00111101100100010011111110011011", 
    25 => "00111101010101100001011111101010", 
    26 => "00111110011010011100101111101111", 
    27 => "10111101001011000010100001000111", 
    28 => "10111101100000110111100111101101", 
    29 => "10111010011111001100010100001101", 
    30 => "10111100100011101110111011100110", 
    31 => "10111110001101111010010001100001", 
    32 => "00111110001000100100101110111010", 
    33 => "00111110001000100000010011110011", 
    34 => "10111101101000000110100010011000", 
    35 => "10111100001001011110001011101001", 
    36 => "00111100100000010000110001101111", 
    37 => "10111101100111011101001111010110", 
    38 => "10111110001110101010000010001000", 
    39 => "00111110001011111110011101011100", 
    40 => "00111101101010100111000101100110", 
    41 => "10111101110000100011110000001101", 
    42 => "00111110000110011101111010001011", 
    43 => "00111110001010110010111000010111", 
    44 => "00111100101000010011010111011011", 
    45 => "00111101101110101110010100001110", 
    46 => "10111101100010110100100001011011", 
    47 => "10111110000011010011110110000110", 
    48 => "10111101101010110010011100101011", 
    49 => "00111100100000000111001100100010", 
    50 => "10111101100010011101110110001100", 
    51 => "10111100111100100010011101100101", 
    52 => "10111101110011000001011010110111", 
    53 => "10111110001011101100110010000001", 
    54 => "00111101000010101111100011010010", 
    55 => "10111010001100010100000110111101", 
    56 => "10111101010100101100001000101010", 
    57 => "10111101100000010100001001010101", 
    58 => "00111101001001111100011011101110", 
    59 => "00111110000001111000100010011000", 
    60 => "00111110000100101011111111011011", 
    61 => "00111101100100111000100001001011", 
    62 => "00111110001100000110011010000000", 
    63 => "10111101110100011010001000011111", 
    64 => "10111101001000011110111010111000", 
    65 => "00111100011101000001100110101101", 
    66 => "00111110000110000001101101100101", 
    67 => "00111110001010100101110100101001", 
    68 => "10111110010000100011101001101101", 
    69 => "10111110001001100011110000110010", 
    70 => "00111101010001111011001000010001", 
    71 => "00111101010110001111110001010000", 
    72 => "10111110000011000111010011111011", 
    73 => "10111101100111011110001101011011", 
    74 => "00111100001101011010110101100001", 
    75 => "00111100111111000011011001111101", 
    76 => "00111100111111111001010101110111", 
    77 => "00111110000111100000001111110111", 
    78 => "10111101101001100000001000110101", 
    79 => "10111100100010011010101110110000", 
    80 => "00111110000101100011011001101101", 
    81 => "00111101111011011101100010110110", 
    82 => "00111101000011010011000110101100", 
    83 => "10111110001000011011000101010011", 
    84 => "00111110010000001110001000111011", 
    85 => "00111100111110101011110011001010", 
    86 => "10111100010110010101100100111000", 
    87 => "00111101010110001110111011100100", 
    88 => "00111101100000100110010111110001", 
    89 => "10111101110010010100000010111100", 
    90 => "10111101100100001000110011101110", 
    91 => "10111101110001000101000010000100", 
    92 => "10111101111000101010010101100001", 
    93 => "10111101100011100111111111000000", 
    94 => "00111101000110001111011011011100", 
    95 => "00111101001110111011001011111111", 
    96 => "00111101011111100010101100010100", 
    97 => "00111010001010111101001011010111", 
    98 => "10111101110100101100000101101110", 
    99 => "10111101111001011000100000011010", 
    100 => "10111110001011101011110101001101", 
    101 => "00111101101011101001111101111000", 
    102 => "00111101010111010100111111101101", 
    103 => "10111100000001011101111100010010", 
    104 => "10111101101001110110011011111101", 
    105 => "10111100100111010010111010101111", 
    106 => "10111100101010110010100001101101", 
    107 => "00111101111110100100001001101100", 
    108 => "00111011100100001100000101101110", 
    109 => "10111110000000010011111111010001", 
    110 => "00111101110101111100110111001101", 
    111 => "10111101101000000110010010001111", 
    112 => "00111110000100000000001100100101", 
    113 => "10111101000001011111001011110100", 
    114 => "10111110000110100111000100010101", 
    115 => "10111101101100011111010000101100", 
    116 => "10111100100100001011100110001100", 
    117 => "10111101000000000101111100110110", 
    118 => "10111101011100111000111010111110", 
    119 => "10111101001111110101111100100110" );


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

entity inference_conv2d_f3_1_3_1 is
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

architecture arch of inference_conv2d_f3_1_3_1 is
    component inference_conv2d_f3_1_3_1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_3_1_rom_U :  component inference_conv2d_f3_1_3_1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

