-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_1_9_rom is 
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


architecture rtl of inference_conv2d_f3_3_1_9_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101001100001110100101110111", 
    1 => "00111110001011000101100101110101", 
    2 => "00111100100110111010001110010101", 
    3 => "00111101110011000100010111110100", 
    4 => "00111110000111111000111110001010", 
    5 => "10111101101100101011111010001100", 
    6 => "00111011100111110000111101111010", 
    7 => "10111101000011101110010110101100", 
    8 => "10111101100110110011000011101011", 
    9 => "00111101111100010010011001100011", 
    10 => "00111110001111111111111000101010", 
    11 => "00111101001110001110000100101000", 
    12 => "10111100111001001011111101101000", 
    13 => "00111101011110011000111100000010", 
    14 => "00111110010011111010100100111011", 
    15 => "10111110001010011111111101010000", 
    16 => "00111110001101111101011100111101", 
    17 => "10111100110010100001110110010000", 
    18 => "10111110010000011111101001110110", 
    19 => "00111101110010001000100101110001", 
    20 => "00111101110000100011101100000001", 
    21 => "00111101110010011001010110000011", 
    22 => "00111100101100110101011000000011", 
    23 => "00111101111010101111011100001010", 
    24 => "10111101110011001000100100010000", 
    25 => "00111101110110111111110101110010", 
    26 => "00111101001110000011110010100010", 
    27 => "00111101001100111001011010110110", 
    28 => "00111101111010011001100111011101", 
    29 => "10111101100111110001011101010010", 
    30 => "00111101111000010100101011010011", 
    31 => "00111101101100101011010100110111", 
    32 => "00111101101111010000011011110010", 
    33 => "00111110010101000001011100000001", 
    34 => "10111101111111101000000010111111", 
    35 => "10111011000001001101100011000010", 
    36 => "10111101111000011010110111101011", 
    37 => "10111101111000000101011010000010", 
    38 => "10111100100110001100101101110011", 
    39 => "00111100101011110110000101001100", 
    40 => "00111100100010001011010010100101", 
    41 => "10111100011101010100001010100010", 
    42 => "00111101001111000010000001110111", 
    43 => "10111110000111000001111111001001", 
    44 => "00111110000110111111111011000001", 
    45 => "00111100100001011111110111011011", 
    46 => "00111101100111111101001000101101", 
    47 => "10111101011001111101101100101011", 
    48 => "00111100001010100111010010110011", 
    49 => "00111101110100111010010011111000", 
    50 => "10111101011001111000000010010010", 
    51 => "10111011110010001011110110110100", 
    52 => "10111100010101001111110010110010", 
    53 => "00111101101001001110111010110010", 
    54 => "00111100010110111011110100101011", 
    55 => "00111110011001100110000101101011", 
    56 => "10111101100110101001111000111001", 
    57 => "10111101001110000100111110011101", 
    58 => "00111100100001010010000111011110", 
    59 => "00111011100100010101000111110111", 
    60 => "00111110000101111110000001101001", 
    61 => "00111110000011010011010010011100", 
    62 => "10111101011010010011011101001100", 
    63 => "00111101000110111100000011110001", 
    64 => "10111101010111000101111001010101", 
    65 => "00111101100111000001001101011100", 
    66 => "10111101100000100000111011011011", 
    67 => "10111101111000001001011001111000", 
    68 => "10111110001111001000111111111100", 
    69 => "10111100111011111011011111101001", 
    70 => "10111110000101110101111100101101", 
    71 => "10111100110100111000110110110001", 
    72 => "10111101010110011010011001001010", 
    73 => "10111101010010000111001110100010", 
    74 => "00111101100000010000001000110110", 
    75 => "00111100101001100101101101111111", 
    76 => "10111011101110101001101010110001", 
    77 => "10111101000100011010110001100101", 
    78 => "00111101100010100100100100111101", 
    79 => "10111101111010010101011000111011", 
    80 => "10111011111110001001111010100010", 
    81 => "10111100110101110010101001010100", 
    82 => "10111101000110110010110100110010", 
    83 => "10111101110111001010000110001100", 
    84 => "00111101110101111010110000111111", 
    85 => "10111101000100110111100111111011", 
    86 => "00111101001100010101110100111010", 
    87 => "00111101010111001101001110010000", 
    88 => "10111100111001010011010100001110", 
    89 => "10111110001011011101101111011011", 
    90 => "00111110000000100100111101100110", 
    91 => "10111101110100101000111110011111", 
    92 => "10111101000010001110100110110100", 
    93 => "10111101101001111101100010001100", 
    94 => "00111101101111110001110101110101", 
    95 => "10111110010010010011010011110000", 
    96 => "00111100111000000100011111010100", 
    97 => "10111101101001001001111001000101", 
    98 => "00111101111110001000110110110000", 
    99 => "00111100111101000011111100000010", 
    100 => "00111100100000110010111011110100", 
    101 => "00111101000101101001101010010001", 
    102 => "00111100101101101110011101010011", 
    103 => "10111101001001101100111000000000", 
    104 => "00111101100011001100101100010010", 
    105 => "10111101101100101010010011110110", 
    106 => "10111110001011010001000000101100", 
    107 => "10111101111010000000000011101011", 
    108 => "00111101000011000101111100000100", 
    109 => "00111101100010110001000011111101", 
    110 => "10111100000111010010000101100011", 
    111 => "10111110000000001100100000000100", 
    112 => "00111110001101111011011110000100", 
    113 => "10111101100001110100101101000000", 
    114 => "10111101110101000101000101110110", 
    115 => "00111100100110101000011110100000", 
    116 => "00111101011001101111101011000110", 
    117 => "00111100100011100001000100111011", 
    118 => "10111101100011110111110001001101", 
    119 => "10111100100001001111010110011110" );


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

entity inference_conv2d_f3_3_1_9 is
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

architecture arch of inference_conv2d_f3_3_1_9 is
    component inference_conv2d_f3_3_1_9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_1_9_rom_U :  component inference_conv2d_f3_3_1_9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


