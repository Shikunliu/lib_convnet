-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity inference_mult_1_120_120_84_s_W4_34_rom is 
    generic(
             dwidth     : integer := 32; 
             awidth     : integer := 7; 
             mem_size    : integer := 84
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of inference_mult_1_120_120_84_s_W4_34_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110001110101101111010101001", 
    1 => "00111110010010100010000001011000", 
    2 => "10111101000010010101100110110000", 
    3 => "00111100111001101010101000100011", 
    4 => "00111101100110101011011110001100", 
    5 => "10111101100100111010100011001100", 
    6 => "10111101010110100111000110110110", 
    7 => "10111101000111100101111010101011", 
    8 => "10111110010100011010111000101110", 
    9 => "10111101101110010010110101100011", 
    10 => "00111110000000011101001000011000", 
    11 => "10111100100100011001001100111011", 
    12 => "00111110000000011000000101011010", 
    13 => "10111101010000110010100000001000", 
    14 => "10111101101010101010011011000101", 
    15 => "00111100000000011001011111111011", 
    16 => "00111100010111110110010111000001", 
    17 => "00111101110101001001010110011110", 
    18 => "00111101111000011110011010001010", 
    19 => "10111101101111011010101001000010", 
    20 => "10111011100111110110110010000010", 
    21 => "00111100100010100110011111001101", 
    22 => "00111101000011111010001011010110", 
    23 => "10111110000000110001111001111110", 
    24 => "10111110010111000100011010010101", 
    25 => "10111110010000100111000110111101", 
    26 => "10111110000000001010010010100000", 
    27 => "00111101001111111101100010010011", 
    28 => "10111101101111111011100111011010", 
    29 => "00111100100000000000111001111000", 
    30 => "10111110000011110110011001100010", 
    31 => "00111101101110111101000100110010", 
    32 => "10111101001011100010110110001010", 
    33 => "00111110010000011011010111001000", 
    34 => "00111101010110110100001100000010", 
    35 => "00111101000010011101100101001101", 
    36 => "00111101011111101010001011010011", 
    37 => "00111101100011011101001010101111", 
    38 => "10111100011001001101000011010000", 
    39 => "10111010101011010000011000110011", 
    40 => "10111101010110111110100100011010", 
    41 => "00111101011010000101011011100111", 
    42 => "10111110000001011001010110111100", 
    43 => "10111110000010001110100110110100", 
    44 => "10111101000111011100001110010101", 
    45 => "00111110000000000010110000001010", 
    46 => "10111101010001001110111111011001", 
    47 => "10111101100000001000011010111110", 
    48 => "00111101010111000011010100111010", 
    49 => "00111101100101011010000110001000", 
    50 => "10111110001001110010101110001000", 
    51 => "10111101100001000011101010001101", 
    52 => "00111101000011101000010110111010", 
    53 => "00111101000101111110001100110001", 
    54 => "10111110000101000001100011010111", 
    55 => "10111110001000001111010011011000", 
    56 => "10111100011001000010100010011111", 
    57 => "00111101011101101100101001100010", 
    58 => "10111101001001001110000000000100", 
    59 => "00111100111111100110001001110001", 
    60 => "10111101011000000100111010100101", 
    61 => "00111101000101001101110100000111", 
    62 => "10111101011000011100011000001001", 
    63 => "10111011001110100011000000010010", 
    64 => "10111110011000001110101000011000", 
    65 => "10111010101101100110000110100110", 
    66 => "00111100111110001000101100101100", 
    67 => "10111110001111010010111110100001", 
    68 => "10111101000000100111100000110000", 
    69 => "10111101101101101101011011011100", 
    70 => "00111101000110010000001100000110", 
    71 => "10111110000011100111110110011010", 
    72 => "00111100001011011000111100011010", 
    73 => "00111110010100110010110110110010", 
    74 => "00111110010011011101101000000110", 
    75 => "00111100000101111001010010011100", 
    76 => "00111101000111101111001101011011", 
    77 => "00111011111110100011010000100100", 
    78 => "00111100110010000100101100101000", 
    79 => "10111100101101001010101100000010", 
    80 => "00111101100010010011111100110110", 
    81 => "00111101001010001101000010001001", 
    82 => "10111110001011100000100010101111", 
    83 => "10111101100010000110000000100001" );


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

entity inference_mult_1_120_120_84_s_W4_34 is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 84;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of inference_mult_1_120_120_84_s_W4_34 is
    component inference_mult_1_120_120_84_s_W4_34_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    inference_mult_1_120_120_84_s_W4_34_rom_U :  component inference_mult_1_120_120_84_s_W4_34_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


