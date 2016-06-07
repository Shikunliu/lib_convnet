-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_2_0_9_rom is 
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


architecture rtl of inference_conv2d_f3_2_0_9_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101100001010100100111000100", 
    1 => "00111100110100000101001011111111", 
    2 => "00111100100111010111100100100010", 
    3 => "10111110000101101111000101010110", 
    4 => "10111101000110100110010100111100", 
    5 => "10111100011110101011101111110011", 
    6 => "00111010001001101111111111010110", 
    7 => "10111110010010001001111010111010", 
    8 => "10111110010010110111111111100001", 
    9 => "10111101100000001111011011100011", 
    10 => "10111101101010111001100001101010", 
    11 => "10111101110100000001100011100111", 
    12 => "00111110001011101000010011110001", 
    13 => "10111011111101111111001101010111", 
    14 => "10111101111101011000010110111110", 
    15 => "10111101111010011111001001111000", 
    16 => "10111100111100011001010100111001", 
    17 => "00111110001011010010100100010011", 
    18 => "00111110010001000011110000111010", 
    19 => "00111100011001101000100011001011", 
    20 => "10111110000010100001111100001000", 
    21 => "00111011001100011100011101100011", 
    22 => "00111101100000110001111001111110", 
    23 => "10111100101001101101010111000010", 
    24 => "10111101011101000111000001001010", 
    25 => "10111101101100100110100111111010", 
    26 => "10111110001101011011111101101010", 
    27 => "00111100101010001010111110110111", 
    28 => "10111101100010001000011000001001", 
    29 => "10111101100111111000010001000101", 
    30 => "10111100110101000101100001111101", 
    31 => "00111101111100111000110111100111", 
    32 => "10111110001101010100101000111100", 
    33 => "10111100110100000000011010101001", 
    34 => "00111011111100110111111011111110", 
    35 => "10111101111001010101000010000111", 
    36 => "00111100011100111011010101101111", 
    37 => "00111110001001100100101110101001", 
    38 => "00111101001100111111010110110110", 
    39 => "10111011111001101010100110000010", 
    40 => "00111110001001100000001001000011", 
    41 => "00111101100001000101001011000110", 
    42 => "00111100100011100101110111000111", 
    43 => "10111110011010100110011011011100", 
    44 => "10111101100100001110011011100101", 
    45 => "00111101111100101110100101000111", 
    46 => "00111101100111010001101111000010", 
    47 => "10111110000000001111100011000110", 
    48 => "10111100000011001111111001010110", 
    49 => "10111101100101011101100010000111", 
    50 => "10111100110110000111000011011010", 
    51 => "00111101001111010101110001100111", 
    52 => "00111101000010000101100010010100", 
    53 => "10111101111110101010011010001111", 
    54 => "00111110000001101110000110011100", 
    55 => "00111101100000010010111111111011", 
    56 => "10111101000111100100000001000010", 
    57 => "00111100111011000111100001100100", 
    58 => "10111101111100011111111011101011", 
    59 => "10111101101001110010001000100110", 
    60 => "10111101010010110000100101111110", 
    61 => "00111110010010101100010111000001", 
    62 => "00111101100011110001001100000110", 
    63 => "00111110000101010100100010101010", 
    64 => "10111101011111111111000111110011", 
    65 => "00111101101111101101100001110101", 
    66 => "00111101110110000010100100000111", 
    67 => "10111011111011110011001001101000", 
    68 => "10111110000001010001100100110111", 
    69 => "10111100011011000011000110000010", 
    70 => "00111110000011010100111010010000", 
    71 => "10111110000110001001001010101011", 
    72 => "10111011010110111011100111010000", 
    73 => "00111100111011100001011101101010", 
    74 => "00111101010111001001100011110011", 
    75 => "10111100100000110010110001110000", 
    76 => "10111110000001101110111001110100", 
    77 => "10111110001011100111000001111110", 
    78 => "10111101110000110100011010011001", 
    79 => "10111101001011011110001001011100", 
    80 => "00111101010001100100000011000010", 
    81 => "10111110001010000001111111011010", 
    82 => "00111101110000000000100011000001", 
    83 => "00111101001111000001000101000011", 
    84 => "10111101000000111110100000100010", 
    85 => "10111011101100000001001010101101", 
    86 => "10111110001000101111011101101110", 
    87 => "10111101100010111001001100011110", 
    88 => "10111101010000001100100011101000", 
    89 => "00111101100001001000101011101100", 
    90 => "10111011000011110011100011101110", 
    91 => "00111101100001000000001100100010", 
    92 => "10111110000001111010001010001100", 
    93 => "10111101010000110010011111010011", 
    94 => "00111101110110010011100110101000", 
    95 => "00111011110111101001001010011101", 
    96 => "10111100001100111001101001100001", 
    97 => "10111011100111010000101010111101", 
    98 => "10111110001110010000001111101010", 
    99 => "00111011111011011011110110001000", 
    100 => "00111101110101101111001100101100", 
    101 => "10111101100100101010110001101000", 
    102 => "00111100110010111110010101111100", 
    103 => "00111101101010000111000000011110", 
    104 => "00111101100010100001011010111111", 
    105 => "10111101000110110110110011011000", 
    106 => "10111100010111101011001111101010", 
    107 => "10111101100010101100101001011110", 
    108 => "00111110000111001000111010101100", 
    109 => "00111101000000101011100011000111", 
    110 => "00111101000111010111000100101010", 
    111 => "10111110000001001010011000100010", 
    112 => "10111101101110000101010011110110", 
    113 => "10111100110101101010000110011000", 
    114 => "10111100000101001110001100110001", 
    115 => "10111101011001100001110100011011", 
    116 => "00111110001111101111101011101000", 
    117 => "00111101110101010110000110010001", 
    118 => "00111110000011110011101100100001", 
    119 => "00111110010100011011001110101111" );


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

entity inference_conv2d_f3_2_0_9 is
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

architecture arch of inference_conv2d_f3_2_0_9 is
    component inference_conv2d_f3_2_0_9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_2_0_9_rom_U :  component inference_conv2d_f3_2_0_9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

