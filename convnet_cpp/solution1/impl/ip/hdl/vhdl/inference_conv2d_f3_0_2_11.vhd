-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_0_2_11_rom is 
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


architecture rtl of inference_conv2d_f3_0_2_11_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101011111111101001010011001", 
    1 => "10111101100100000101001111110000", 
    2 => "00111101111101001111000111100101", 
    3 => "00111101011000011000010000010100", 
    4 => "00111110000101001010100110001011", 
    5 => "00111101111000000011000011000010", 
    6 => "00111101001110010011011100100100", 
    7 => "10111101110111111000111000111011", 
    8 => "10111101100110000000101110101010", 
    9 => "10111101000001101000000000010111", 
    10 => "00111101010010011101000010110100", 
    11 => "10111101000100001100010011011111", 
    12 => "00111110000010001110110100011100", 
    13 => "00111110001110100111000101011000", 
    14 => "00111010111110100001100100110110", 
    15 => "10111101101101010001001001001011", 
    16 => "00111101111100101110000001011101", 
    17 => "00111100100010010011101000111011", 
    18 => "10111101101110001100100100111111", 
    19 => "00111101101000101011010100101001", 
    20 => "00111101111010001011100011110001", 
    21 => "10111101111100000010100010100010", 
    22 => "00111101100100101100001111110010", 
    23 => "00111100001110011001111101011110", 
    24 => "00111100101011111011011100010010", 
    25 => "10111100111001000011010011001000", 
    26 => "00111101011000100111100010110110", 
    27 => "00111101110100101110101001010011", 
    28 => "10111011111110101000111101010011", 
    29 => "00111101101111110001001000010100", 
    30 => "10111100011011110100010011000111", 
    31 => "10111101000010111001110100100010", 
    32 => "00111101010001011111111100011110", 
    33 => "00111100111000010010011011110111", 
    34 => "10111110000011110010000110110100", 
    35 => "10111101011110101000111101100011", 
    36 => "10111101101110000001000100010001", 
    37 => "10111101100010100110010110110101", 
    38 => "10111011111100100000001000010000", 
    39 => "10111101011100111010001100010101", 
    40 => "10111100111111100110101000110011", 
    41 => "00111101111011010011111000001100", 
    42 => "10111101001101110011111110111000", 
    43 => "10111101010110011001100101111111", 
    44 => "00111110000100001000100001010001", 
    45 => "00111110001101110101000100000101", 
    46 => "00111100101110010111111101111110", 
    47 => "10111101111011011000011011101100", 
    48 => "10111110000100010111011011011110", 
    49 => "10111011101110111101010111101111", 
    50 => "10111101101001001011000111000110", 
    51 => "00111110010001100010010010011010", 
    52 => "10111110000001001001000001100000", 
    53 => "00111110001000001110100010000110", 
    54 => "00111101111010011011010100100000", 
    55 => "10111101110110010001101111000101", 
    56 => "00111101011110000001011100011000", 
    57 => "00111101000000101011010100011100", 
    58 => "10111101100000101100100000100100", 
    59 => "10111101001011000000010101110111", 
    60 => "10111101111111101010111011100010", 
    61 => "10111101011010001001011110011001", 
    62 => "00111101110010000100100101111011", 
    63 => "10111101101011000000111111001011", 
    64 => "00111101100110000010001011100100", 
    65 => "00111110000000101001100010001001", 
    66 => "10111101110110010110011101000101", 
    67 => "00111110001110010000001011011110", 
    68 => "10111101101111111100011010111111", 
    69 => "10111101110011011101000001010011", 
    70 => "10111010100100010100111011000111", 
    71 => "10111101111111101100001011001110", 
    72 => "10111101011000100100111000111110", 
    73 => "10111101010110001111010000111101", 
    74 => "10111101001000110010100011011111", 
    75 => "00111101100000100100000111101100", 
    76 => "10111101011111010001111010111111", 
    77 => "10111100111001111111110001101001", 
    78 => "00111100010000011100100000100001", 
    79 => "10111101010111010111111111011000", 
    80 => "10111101111001100010010011011101", 
    81 => "10111100100000100111101110100110", 
    82 => "00111101001100001111000111011011", 
    83 => "00111101111000001111000000100000", 
    84 => "00111110010000000110001010010001", 
    85 => "10111101011101110001100100000110", 
    86 => "00111101010110101000000111011100", 
    87 => "10111010010110011110010100101000", 
    88 => "10111110010000011001101110010001", 
    89 => "00111101101100011010111010011001", 
    90 => "00111100001100011111010110110001", 
    91 => "10111100110010011101011000001101", 
    92 => "10111101011110101000100011100011", 
    93 => "00111101001010000010101000111011", 
    94 => "00111110000101111010000000110000", 
    95 => "10111110000000011010000011001111", 
    96 => "00111101001110000010110001100010", 
    97 => "00111101000011000001100100010011", 
    98 => "00111110000000101001011010110011", 
    99 => "00111110001010010101111001011011", 
    100 => "10111110000001010011110000010101", 
    101 => "00111101100100000001111011100001", 
    102 => "10111101110000010110100000110000", 
    103 => "10111101101101100111100010001010", 
    104 => "10111101101101101011100001110011", 
    105 => "10111110000100011100110011011001", 
    106 => "00111101101101001010001011010101", 
    107 => "10111110000110110010110011000111", 
    108 => "00111100010111101110011010101011", 
    109 => "00111110000001010110011110011001", 
    110 => "10111101010101001111111101101100", 
    111 => "10111110011001100000000001101101", 
    112 => "10111101010100001001001000000100", 
    113 => "10111100101110001100101110001110", 
    114 => "00111100101001011110111010100111", 
    115 => "00111101010100011001000100100010", 
    116 => "00111101111010110001101010110001", 
    117 => "10111100000001001101110000011101", 
    118 => "10111101110101100100011010101110", 
    119 => "10111110001101010100000101010011" );


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

entity inference_conv2d_f3_0_2_11 is
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

architecture arch of inference_conv2d_f3_0_2_11 is
    component inference_conv2d_f3_0_2_11_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_0_2_11_rom_U :  component inference_conv2d_f3_0_2_11_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

