-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_3_0_4_rom is 
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


architecture rtl of inference_conv2d_f3_3_0_4_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110001100100001100011011111", 
    1 => "00111101000110110001101011011001", 
    2 => "10111101101000001001010010001000", 
    3 => "00111110010110011111000001011111", 
    4 => "10111101011001011111010011110010", 
    5 => "00111100011101110100101001001111", 
    6 => "10111101011011101101010010010100", 
    7 => "00111110001000110111001110110000", 
    8 => "00111101100001110100001101010110", 
    9 => "10111110001001010010001010100111", 
    10 => "00111011100010001100100101101000", 
    11 => "00111101001110110000111111110001", 
    12 => "10111110000111000111000110010011", 
    13 => "00111100110000000101000111001010", 
    14 => "00111110000111111000000110100110", 
    15 => "10111101111010010101100001010011", 
    16 => "00111101001001100010010101111110", 
    17 => "00111100110011011101111001000101", 
    18 => "00111101001110101001011001101001", 
    19 => "00111101100101101111101001000000", 
    20 => "00111100101001011100011110100101", 
    21 => "10111101010101010000110111100100", 
    22 => "00111100110101000010010110111100", 
    23 => "10111110001000000000101100000011", 
    24 => "10111100010110011110110110110010", 
    25 => "10111110000110000000001011000001", 
    26 => "00111101001101110000010001000011", 
    27 => "10111100110101011101111010001111", 
    28 => "10111101010011101100000011011110", 
    29 => "00111100110101001001111010001000", 
    30 => "00111101101010000101110111101101", 
    31 => "00111101010110001001100110001010", 
    32 => "10111101111011101010011011000010", 
    33 => "10111101100111100000110001110101", 
    34 => "10111101000100000111101001010001", 
    35 => "10111101001011110110001000111110", 
    36 => "10111100000011000011100011001000", 
    37 => "00111101011110111101100010100100", 
    38 => "10111101010011101110100111011101", 
    39 => "00111101111110011011110000110100", 
    40 => "00111101100100101101101001110000", 
    41 => "10111101011100100100000000100100", 
    42 => "00111101100010100010111110001100", 
    43 => "10111011011000111101010111010011", 
    44 => "00111101011000111100100011111101", 
    45 => "10111101101010000010100011101100", 
    46 => "10111101101000110000100110100000", 
    47 => "00111101110010011011000111010010", 
    48 => "00111101001011011000111011001001", 
    49 => "10111101100011111011111010010010", 
    50 => "00111101111101010001000001001101", 
    51 => "10111101100100100111100100000110", 
    52 => "10111101111110111011100000111101", 
    53 => "10111101110001101001101100100101", 
    54 => "10111101111001101010011101101001", 
    55 => "10111101011010000110000000111100", 
    56 => "10111101001111101110000011100110", 
    57 => "10111101011101001000110011010000", 
    58 => "00111011101000010001011110101000", 
    59 => "00111100111011000110010110111010", 
    60 => "00111101100011001100101010110100", 
    61 => "10111011111011111111011100011110", 
    62 => "00111100111011110101100100011110", 
    63 => "00111101100101000000001000010110", 
    64 => "00111101011110010001110111111001", 
    65 => "00111101111100101010010110100100", 
    66 => "10111101000001110010011100100001", 
    67 => "10111110000001011110100000001100", 
    68 => "10111101100000001101111111101100", 
    69 => "10111101000100111001101110111110", 
    70 => "00111100110001001011010011010000", 
    71 => "00111101000110011111010001001101", 
    72 => "00111101000010100111110010010000", 
    73 => "00111101110011100101000101001100", 
    74 => "10111101111011110110011010100101", 
    75 => "10111101101100111101000011101000", 
    76 => "10111100101101010001010110001100", 
    77 => "00111101001011100100111100011000", 
    78 => "00111001111000100010101101100001", 
    79 => "00111110010001000010000101111101", 
    80 => "10111101000111010110000110001010", 
    81 => "00111101101111101100110010001111", 
    82 => "10111101101111100010110000111011", 
    83 => "10111100100001001101111101100011", 
    84 => "10111101100101001010101111011001", 
    85 => "00111101110111001101001111100001", 
    86 => "10111101101101000011101001001010", 
    87 => "10111101001101101101100000000011", 
    88 => "10111101100000111100010111100101", 
    89 => "10111101110010100101111010101110", 
    90 => "00111100100110101111110110110010", 
    91 => "00111101110011011110010000111111", 
    92 => "00111110000010100111010111001101", 
    93 => "10111110001011100100010010110111", 
    94 => "00111011100110110011111110110111", 
    95 => "00111101110010010011101011000010", 
    96 => "00111101001000110001000001110001", 
    97 => "00111100010011110010010100000001", 
    98 => "00111101000010111010001111110011", 
    99 => "00111100010000110111110001010111", 
    100 => "10111101001001110011001110011011", 
    101 => "10111101100000110011000001010001", 
    102 => "00111101100111101011110111100001", 
    103 => "00111101101111010011001110011101", 
    104 => "10111101001101010110100100011110", 
    105 => "10111100010010001001110110010011", 
    106 => "10111011000011111010111100001010", 
    107 => "00111101001101010010111100111100", 
    108 => "10111101100010011010110101010000", 
    109 => "00111110001011011001101010010101", 
    110 => "00111010111110111010010101111101", 
    111 => "10111101000001001010010011100000", 
    112 => "10111101100011001001011101100000", 
    113 => "10111101010011001111010010100101", 
    114 => "10111100010011010111100100110000", 
    115 => "00111110001001001000110101111110", 
    116 => "10111101010010000110100111000110", 
    117 => "00111100101010111000010001111110", 
    118 => "00111101111010100010100001111000", 
    119 => "10111101111001111101001111010100" );


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

entity inference_conv2d_f3_3_0_4 is
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

architecture arch of inference_conv2d_f3_3_0_4 is
    component inference_conv2d_f3_3_0_4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_3_0_4_rom_U :  component inference_conv2d_f3_3_0_4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


