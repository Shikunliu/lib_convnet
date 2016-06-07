-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_2_3_rom is 
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


architecture rtl of inference_conv2d_f3_0_2_3_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110001111001010111111110111", 
    1 => "00111101001011001001001010110101", 
    2 => "10111101001001101010000001100011", 
    3 => "10111110000100101111000011100001", 
    4 => "00111101011101000001111110100111", 
    5 => "10111101110110011010010010011100", 
    6 => "10111100110000011111010011001101", 
    7 => "10111101001111101111001101000000", 
    8 => "00111101100111100111011011100100", 
    9 => "00111110000101010000110010100010", 
    10 => "10111101110001111101010110101010", 
    11 => "10111100101011101010011010100111", 
    12 => "00111110010000011010011010010011", 
    13 => "10111101000101111001011000011111", 
    14 => "00111101110100000011001000010010", 
    15 => "00111101001001011100001110101001", 
    16 => "00111110001001101100010011000110", 
    17 => "00111101101001010111100111110010", 
    18 => "00111110010001100011100101010000", 
    19 => "10111101100001001000100010010000", 
    20 => "00111110001001001011010101010111", 
    21 => "00111100110011001100001001010000", 
    22 => "10111101111010011101101111101100", 
    23 => "10111101111001010110100100101011", 
    24 => "00111101110001000001001110001011", 
    25 => "00111110000010111100101101100000", 
    26 => "00111101000001101001000101100100", 
    27 => "10111101001011000110110111001101", 
    28 => "00111101010111100000100011001010", 
    29 => "00111101101111100100101100000010", 
    30 => "10111110001110000010110110111110", 
    31 => "10111011010111001000000010011111", 
    32 => "10111101100101010000001010011110", 
    33 => "10111101100010100000100010110010", 
    34 => "10111101110110000111111001111100", 
    35 => "00111101110111111110111010110011", 
    36 => "00111100100111100110111010000000", 
    37 => "10111101010101101110101101001111", 
    38 => "00111101011100000100010110010011", 
    39 => "10111110000010000111011011100010", 
    40 => "10111101010100100010001011111101", 
    41 => "00111101011000000001010101001001", 
    42 => "10111101010100100011010111000010", 
    43 => "00111101100001100111110010010100", 
    44 => "00111110000010000100001001110100", 
    45 => "00111100101011110111101011100010", 
    46 => "10111101110110011100010100011110", 
    47 => "10111101110000101001100110010101", 
    48 => "00111100010000000110000110000100", 
    49 => "10111100110011110101011000010100", 
    50 => "00111101011110001110010001101000", 
    51 => "00111011101001000100100111100001", 
    52 => "00111101101100110101111010110111", 
    53 => "00111101010110100000000100110011", 
    54 => "10111101011001010010101000001011", 
    55 => "10111110011011100101000100001001", 
    56 => "10111101100000011001111011010001", 
    57 => "10111011010111110000000101011000", 
    58 => "10111110010010011100100000000000", 
    59 => "00111101011000000011111111110111", 
    60 => "00111101101110110000011111000011", 
    61 => "00111100000011111100000111110101", 
    62 => "10111100000001101100101011001010", 
    63 => "00111101101001101101011000100000", 
    64 => "00111101110000011100110010111111", 
    65 => "00111100110000001101100101111010", 
    66 => "00111101001011000011111101110100", 
    67 => "00111110000010010011011000111111", 
    68 => "10111100100000111100010100011100", 
    69 => "00111101000011000110110110010111", 
    70 => "10111110000001011011110110010100", 
    71 => "00111100000111111111111110001111", 
    72 => "00111101010001001000100010010000", 
    73 => "00111101100011100100001000100101", 
    74 => "00111101101100111111000101011100", 
    75 => "00111110000001011100010000100010", 
    76 => "00111100110010001011111001001010", 
    77 => "10111100101101110100111110001101", 
    78 => "00111101011101100101101101110001", 
    79 => "10111110001100001001101101110100", 
    80 => "00111101100110110010010101100011", 
    81 => "10111110001011000101111100111001", 
    82 => "00111110010000000100010000101000", 
    83 => "10111100111000101010001100101110", 
    84 => "00111011010011100011000001111010", 
    85 => "10111101010011000011011110110001", 
    86 => "10111110000001000110110001110110", 
    87 => "00111110010011001100001001010000", 
    88 => "00111011011001100101110101101101", 
    89 => "00111100110000110101110001000000", 
    90 => "00111100010001010011101000110001", 
    91 => "10111011000001001001010111111100", 
    92 => "10111101101111110011011001011100", 
    93 => "10111101101100111011110101011010", 
    94 => "10111101000010110100001001010011", 
    95 => "10111101100100010000011110101010", 
    96 => "00111101100011000010100001110000", 
    97 => "10111100100111010101001101100010", 
    98 => "00111101011001010010101000001011", 
    99 => "00111101001110001010001111010000", 
    100 => "00111101100000101000100110100101", 
    101 => "10111101000001111010101010111001", 
    102 => "00111110000010100011001001101110", 
    103 => "00111011101010010110110110100010", 
    104 => "10111110010010001011100011110001", 
    105 => "00111101101111011100011110111001", 
    106 => "00111110001111101001011011000100", 
    107 => "10111101100100101001000000100101", 
    108 => "00111101101000010111010010001111", 
    109 => "00111110001011101010100010010111", 
    110 => "10111110000110100100000110100010", 
    111 => "00111101111110010100010010101010", 
    112 => "10111101000000001011001110000100", 
    113 => "10111101110110001000101110010111", 
    114 => "10111101100010001010011100000011", 
    115 => "00111101001010110110000001101011", 
    116 => "00111011010101001010010101011110", 
    117 => "00111101010110010111100110011110", 
    118 => "00111101110001110110010001101011", 
    119 => "10111110001011100010011000001011" );


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

entity inference_conv2d_f3_0_2_3 is
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

architecture arch of inference_conv2d_f3_0_2_3 is
    component inference_conv2d_f3_0_2_3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_2_3_rom_U :  component inference_conv2d_f3_0_2_3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

