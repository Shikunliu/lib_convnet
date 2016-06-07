-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_conv2d_f3_1_0_11_rom is 
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


architecture rtl of inference_conv2d_f3_1_0_11_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100100000001101100011011000", 
    1 => "10111110000101010011111011110111", 
    2 => "10111101011000001111111101101111", 
    3 => "00111101100110000110100110101100", 
    4 => "00111100001000101100110010101001", 
    5 => "00111110000000011001101011001000", 
    6 => "10111100101010100010001101010101", 
    7 => "00111100100110100000101011011001", 
    8 => "10111101010000001110101000100110", 
    9 => "10111101001011010110011110010010", 
    10 => "10111101110000110100101011100110", 
    11 => "10111101110110101001001100101001", 
    12 => "10111110001010001001010100000111", 
    13 => "10111101111111011111100011110100", 
    14 => "00111101110011011000000110101110", 
    15 => "10111110001100101111101011010111", 
    16 => "00111100110011111101111011010000", 
    17 => "10111101100101111001100111110011", 
    18 => "10111011010011101101100011101100", 
    19 => "10111011101110001010111110001001", 
    20 => "00111100011011011010100001111010", 
    21 => "10111101010111100011011101110011", 
    22 => "00111110000001101011011000010111", 
    23 => "00111101101000111111010101001011", 
    24 => "00111101100111100111001001000110", 
    25 => "00111101100111001010011111010110", 
    26 => "00111101100101010001001110101000", 
    27 => "10111101101101101101101100110110", 
    28 => "10111110001010000110010010001000", 
    29 => "00111100101001100001100011001110", 
    30 => "00111110011101010100011110011101", 
    31 => "10111101100100100001001000000001", 
    32 => "10111101000110101111000110100011", 
    33 => "00111110001100010000011001101000", 
    34 => "00111101001000000111101110000110", 
    35 => "10111100111001111010111100000110", 
    36 => "00111101010111000011000101110100", 
    37 => "00111101110100100001001101011110", 
    38 => "10111101001001001100101100100110", 
    39 => "10111101101101101011000010010110", 
    40 => "00111101010100010001001111101111", 
    41 => "10111100001111101000011100100100", 
    42 => "10111101011011001100100101010111", 
    43 => "10111101110011110000011000101101", 
    44 => "10111101100000010111101111011001", 
    45 => "00111101011101110011101110111100", 
    46 => "10111101100011010101011110100010", 
    47 => "10111101100000101000101010010111", 
    48 => "00111110000101010111100100101001", 
    49 => "10111101000000101101110100101010", 
    50 => "10111100111001110010010011010010", 
    51 => "10111100001011010111001101101011", 
    52 => "00111101100001100111111110000011", 
    53 => "10111100101101111011101110001110", 
    54 => "10111110000011101111100001001000", 
    55 => "10111101000101010101000001000100", 
    56 => "10111100011010010110100001111001", 
    57 => "00111101110110000111010010000110", 
    58 => "10111101110110110110101010100101", 
    59 => "10111101000000001111100010000011", 
    60 => "00111100011101111101010100100100", 
    61 => "00111110001010000110010010001000", 
    62 => "10111101100110101010011000100100", 
    63 => "10111010100001011111011101010000", 
    64 => "00111100101001101011101010110101", 
    65 => "00111110000100111000001011100100", 
    66 => "10111110010101010100110100011111", 
    67 => "00111110011000110011011111101011", 
    68 => "00111101110000000000001100011000", 
    69 => "00111101110111001001100000011100", 
    70 => "10111110010001101011101101010110", 
    71 => "00111100111000001100110010010100", 
    72 => "10111110000001000011100010001111", 
    73 => "00111101110110011000011101000000", 
    74 => "10111100101011111000100111000110", 
    75 => "10111100001000111100110110010000", 
    76 => "10111110000001100100001100000011", 
    77 => "00111100100110111101101101011110", 
    78 => "00111101000101100110101110010111", 
    79 => "00111101101110110100110111101010", 
    80 => "00111110001011100001101111010010", 
    81 => "00111100111001111011010001000100", 
    82 => "00111100110010010101011110011000", 
    83 => "00111101101001110001100000100010", 
    84 => "10111110010000100101010010100100", 
    85 => "10111101101110011111111010100001", 
    86 => "10111110000001011111101111111000", 
    87 => "10111110010001011100110110010010", 
    88 => "00111100001110000101000111101100", 
    89 => "00111101111110010010011001000010", 
    90 => "00111110000011101111101101101110", 
    91 => "00111101010000010001111000101000", 
    92 => "10111100011100000010100011110010", 
    93 => "10111100110001100101100000111111", 
    94 => "10111100110101000001001111101001", 
    95 => "10111101110001111110010100100001", 
    96 => "10111110001001110010001110101011", 
    97 => "00111101011101110011110101101001", 
    98 => "10111101011101111011011101110111", 
    99 => "00111101110101001101001001110000", 
    100 => "10111100111100110101001111101010", 
    101 => "00111101100101110001011011000101", 
    102 => "00111101100110111010111110110001", 
    103 => "00111101101001011001000101111101", 
    104 => "10111101100011111000110000101111", 
    105 => "00111101100111100011011010011100", 
    106 => "10111011100101000001101100101010", 
    107 => "00111101101001111010011100101001", 
    108 => "00111110000111100010101100000110", 
    109 => "10111110000011100011100100101110", 
    110 => "00111101100111011111100011100111", 
    111 => "00111100010010010011000001100000", 
    112 => "00111101000110110100011001111000", 
    113 => "00111101111011110000101011100101", 
    114 => "00111101110011010110001111001100", 
    115 => "10111101100001010011110101100100", 
    116 => "10111001100111010000111001000011", 
    117 => "00111101111101111001001100010100", 
    118 => "00111110000000110111000010001011", 
    119 => "00111101001000100010001001001111" );


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

entity inference_conv2d_f3_1_0_11 is
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

architecture arch of inference_conv2d_f3_1_0_11 is
    component inference_conv2d_f3_1_0_11_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_conv2d_f3_1_0_11_rom_U :  component inference_conv2d_f3_1_0_11_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

