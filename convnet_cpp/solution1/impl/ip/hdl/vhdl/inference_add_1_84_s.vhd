-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity inference_add_1_84_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    A_0_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    A_0_ce0 : OUT STD_LOGIC;
    A_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    A_1_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    A_1_ce0 : OUT STD_LOGIC;
    A_1_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    A_2_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    A_2_ce0 : OUT STD_LOGIC;
    A_2_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    A_3_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    A_3_ce0 : OUT STD_LOGIC;
    A_3_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    B_0_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    B_0_ce0 : OUT STD_LOGIC;
    B_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    C_0_0_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    C_0_0_ce0 : OUT STD_LOGIC;
    C_0_0_we0 : OUT STD_LOGIC;
    C_0_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    C_1_0_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    C_1_0_ce0 : OUT STD_LOGIC;
    C_1_0_we0 : OUT STD_LOGIC;
    C_1_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    C_2_0_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    C_2_0_ce0 : OUT STD_LOGIC;
    C_2_0_we0 : OUT STD_LOGIC;
    C_2_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    C_3_0_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    C_3_0_ce0 : OUT STD_LOGIC;
    C_3_0_we0 : OUT STD_LOGIC;
    C_3_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of inference_add_1_84_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_pp0_stg0_fsm_1 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_st9_fsm_2 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_true : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv7_54 : STD_LOGIC_VECTOR (6 downto 0) := "1010100";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_bdd_21 : BOOLEAN;
    signal j_reg_166 : STD_LOGIC_VECTOR (6 downto 0);
    signal exitcond_fu_181_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_sig_cseq_ST_pp0_stg0_fsm_1 : STD_LOGIC;
    signal ap_sig_bdd_93 : BOOLEAN;
    signal ap_reg_ppiten_pp0_it0 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it1 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it2 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it3 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it4 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it5 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it6 : STD_LOGIC := '0';
    signal j_3_fu_187_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_750_fu_198_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_750_reg_246 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_reg_ppstg_tmp_750_reg_246_pp0_it1 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_reg_ppstg_tmp_750_reg_246_pp0_it2 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_reg_ppstg_tmp_750_reg_246_pp0_it3 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_reg_ppstg_tmp_750_reg_246_pp0_it4 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_reg_ppstg_tmp_750_reg_246_pp0_it5 : STD_LOGIC_VECTOR (1 downto 0);
    signal C_0_0_addr_reg_276 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it1 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it3 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it4 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it5 : STD_LOGIC_VECTOR (4 downto 0);
    signal C_1_0_addr_reg_281 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it1 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it3 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it4 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it5 : STD_LOGIC_VECTOR (4 downto 0);
    signal C_2_0_addr_reg_286 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it1 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it3 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it4 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it5 : STD_LOGIC_VECTOR (4 downto 0);
    signal C_3_0_addr_reg_291 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it1 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it3 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it4 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it5 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_fu_224_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_reg_296 : STD_LOGIC_VECTOR (31 downto 0);
    signal B_0_load_reg_301 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_177_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_18_reg_306 : STD_LOGIC_VECTOR (31 downto 0);
    signal newIndex7_fu_212_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_fu_193_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal newIndex_fu_202_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_fu_177_ce : STD_LOGIC;
    signal ap_sig_cseq_ST_st9_fsm_2 : STD_LOGIC;
    signal ap_sig_bdd_252 : BOOLEAN;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);

    component inference_fadd_32ns_32ns_32_4_full_dsp IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component inference_mux_4to1_sel2_32_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        din5_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        din2 : IN STD_LOGIC_VECTOR (31 downto 0);
        din3 : IN STD_LOGIC_VECTOR (31 downto 0);
        din4 : IN STD_LOGIC_VECTOR (31 downto 0);
        din5 : IN STD_LOGIC_VECTOR (1 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    inference_fadd_32ns_32ns_32_4_full_dsp_U1652 : component inference_fadd_32ns_32ns_32_4_full_dsp
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_reg_296,
        din1 => B_0_load_reg_301,
        ce => grp_fu_177_ce,
        dout => grp_fu_177_p2);

    inference_mux_4to1_sel2_32_1_U1653 : component inference_mux_4to1_sel2_32_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 32,
        din5_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din1 => A_0_q0,
        din2 => A_1_q0,
        din3 => A_2_q0,
        din4 => A_3_q0,
        din5 => tmp_750_reg_246,
        dout => tmp_fu_224_p6);





    -- the current state (ap_CS_fsm) of the state machine. --
    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_st1_fsm_0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it0 assign process. --
    ap_reg_ppiten_pp0_it0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and not((exitcond_fu_181_p2 = ap_const_lv1_0)))) then 
                    ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
                elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0)))) then 
                    ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it1 assign process. --
    ap_reg_ppiten_pp0_it1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (exitcond_fu_181_p2 = ap_const_lv1_0))) then 
                    ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
                elsif ((((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0))) or ((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and not((exitcond_fu_181_p2 = ap_const_lv1_0))))) then 
                    ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it2 assign process. --
    ap_reg_ppiten_pp0_it2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
            else
                ap_reg_ppiten_pp0_it2 <= ap_reg_ppiten_pp0_it1;
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it3 assign process. --
    ap_reg_ppiten_pp0_it3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it3 <= ap_const_logic_0;
            else
                ap_reg_ppiten_pp0_it3 <= ap_reg_ppiten_pp0_it2;
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it4 assign process. --
    ap_reg_ppiten_pp0_it4_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it4 <= ap_const_logic_0;
            else
                ap_reg_ppiten_pp0_it4 <= ap_reg_ppiten_pp0_it3;
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it5 assign process. --
    ap_reg_ppiten_pp0_it5_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it5 <= ap_const_logic_0;
            else
                ap_reg_ppiten_pp0_it5 <= ap_reg_ppiten_pp0_it4;
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it6 assign process. --
    ap_reg_ppiten_pp0_it6_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it6 <= ap_const_logic_0;
            else
                ap_reg_ppiten_pp0_it6 <= ap_reg_ppiten_pp0_it5;
            end if;
        end if;
    end process;


    -- j_reg_166 assign process. --
    j_reg_166_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0)))) then 
                j_reg_166 <= ap_const_lv7_0;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and (exitcond_fu_181_p2 = ap_const_lv1_0))) then 
                j_reg_166 <= j_3_fu_187_p2;
            end if; 
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1)) then
                B_0_load_reg_301 <= B_0_q0;
                ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it1 <= C_0_0_addr_reg_276;
                ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it1 <= C_1_0_addr_reg_281;
                ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it1 <= C_2_0_addr_reg_286;
                ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it1 <= C_3_0_addr_reg_291;
                ap_reg_ppstg_tmp_750_reg_246_pp0_it1 <= tmp_750_reg_246;
                tmp_reg_296 <= tmp_fu_224_p6;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (exitcond_fu_181_p2 = ap_const_lv1_0))) then
                C_0_0_addr_reg_276 <= newIndex7_fu_212_p1(5 - 1 downto 0);
                C_1_0_addr_reg_281 <= newIndex7_fu_212_p1(5 - 1 downto 0);
                C_2_0_addr_reg_286 <= newIndex7_fu_212_p1(5 - 1 downto 0);
                C_3_0_addr_reg_291 <= newIndex7_fu_212_p1(5 - 1 downto 0);
                tmp_750_reg_246 <= tmp_750_fu_198_p1;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_true = ap_true)) then
                ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it2 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it1;
                ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it3 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it2;
                ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it4 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it3;
                ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it5 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it4;
                ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it2 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it1;
                ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it3 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it2;
                ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it4 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it3;
                ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it5 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it4;
                ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it2 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it1;
                ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it3 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it2;
                ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it4 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it3;
                ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it5 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it4;
                ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it2 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it1;
                ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it3 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it2;
                ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it4 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it3;
                ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it5 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it4;
                ap_reg_ppstg_tmp_750_reg_246_pp0_it2 <= ap_reg_ppstg_tmp_750_reg_246_pp0_it1;
                ap_reg_ppstg_tmp_750_reg_246_pp0_it3 <= ap_reg_ppstg_tmp_750_reg_246_pp0_it2;
                ap_reg_ppstg_tmp_750_reg_246_pp0_it4 <= ap_reg_ppstg_tmp_750_reg_246_pp0_it3;
                ap_reg_ppstg_tmp_750_reg_246_pp0_it5 <= ap_reg_ppstg_tmp_750_reg_246_pp0_it4;
                tmp_18_reg_306 <= grp_fu_177_p2;
            end if;
        end if;
    end process;

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, exitcond_fu_181_p2, ap_reg_ppiten_pp0_it0, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it5, ap_reg_ppiten_pp0_it6)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not((ap_start = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_pp0_stg0_fsm_1 => 
                if ((not(((ap_const_logic_1 = ap_reg_ppiten_pp0_it6) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it5)))) and not(((ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((exitcond_fu_181_p2 = ap_const_lv1_0)) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1)))))) then
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_1;
                elsif (((ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((exitcond_fu_181_p2 = ap_const_lv1_0)) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1)))) then
                    ap_NS_fsm <= ap_ST_st9_fsm_2;
                else
                    ap_NS_fsm <= ap_ST_st9_fsm_2;
                end if;
            when ap_ST_st9_fsm_2 => 
                ap_NS_fsm <= ap_ST_st1_fsm_0;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    A_0_address0 <= newIndex7_fu_212_p1(5 - 1 downto 0);

    -- A_0_ce0 assign process. --
    A_0_ce0_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it0)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0))) then 
            A_0_ce0 <= ap_const_logic_1;
        else 
            A_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    A_1_address0 <= newIndex7_fu_212_p1(5 - 1 downto 0);

    -- A_1_ce0 assign process. --
    A_1_ce0_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it0)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0))) then 
            A_1_ce0 <= ap_const_logic_1;
        else 
            A_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    A_2_address0 <= newIndex7_fu_212_p1(5 - 1 downto 0);

    -- A_2_ce0 assign process. --
    A_2_ce0_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it0)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0))) then 
            A_2_ce0 <= ap_const_logic_1;
        else 
            A_2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    A_3_address0 <= newIndex7_fu_212_p1(5 - 1 downto 0);

    -- A_3_ce0 assign process. --
    A_3_ce0_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it0)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0))) then 
            A_3_ce0 <= ap_const_logic_1;
        else 
            A_3_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    B_0_address0 <= tmp_s_fu_193_p1(7 - 1 downto 0);

    -- B_0_ce0 assign process. --
    B_0_ce0_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it0)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0))) then 
            B_0_ce0 <= ap_const_logic_1;
        else 
            B_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    C_0_0_address0 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it5;

    -- C_0_0_ce0 assign process. --
    C_0_0_ce0_assign_proc : process(ap_reg_ppiten_pp0_it6)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it6)) then 
            C_0_0_ce0 <= ap_const_logic_1;
        else 
            C_0_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    C_0_0_d0 <= tmp_18_reg_306;

    -- C_0_0_we0 assign process. --
    C_0_0_we0_assign_proc : process(ap_reg_ppiten_pp0_it6, ap_reg_ppstg_tmp_750_reg_246_pp0_it5)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it6) and (ap_reg_ppstg_tmp_750_reg_246_pp0_it5 = ap_const_lv2_0)))) then 
            C_0_0_we0 <= ap_const_logic_1;
        else 
            C_0_0_we0 <= ap_const_logic_0;
        end if; 
    end process;

    C_1_0_address0 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it5;

    -- C_1_0_ce0 assign process. --
    C_1_0_ce0_assign_proc : process(ap_reg_ppiten_pp0_it6)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it6)) then 
            C_1_0_ce0 <= ap_const_logic_1;
        else 
            C_1_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    C_1_0_d0 <= tmp_18_reg_306;

    -- C_1_0_we0 assign process. --
    C_1_0_we0_assign_proc : process(ap_reg_ppiten_pp0_it6, ap_reg_ppstg_tmp_750_reg_246_pp0_it5)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it6) and (ap_reg_ppstg_tmp_750_reg_246_pp0_it5 = ap_const_lv2_1)))) then 
            C_1_0_we0 <= ap_const_logic_1;
        else 
            C_1_0_we0 <= ap_const_logic_0;
        end if; 
    end process;

    C_2_0_address0 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it5;

    -- C_2_0_ce0 assign process. --
    C_2_0_ce0_assign_proc : process(ap_reg_ppiten_pp0_it6)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it6)) then 
            C_2_0_ce0 <= ap_const_logic_1;
        else 
            C_2_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    C_2_0_d0 <= tmp_18_reg_306;

    -- C_2_0_we0 assign process. --
    C_2_0_we0_assign_proc : process(ap_reg_ppiten_pp0_it6, ap_reg_ppstg_tmp_750_reg_246_pp0_it5)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it6) and (ap_reg_ppstg_tmp_750_reg_246_pp0_it5 = ap_const_lv2_2)))) then 
            C_2_0_we0 <= ap_const_logic_1;
        else 
            C_2_0_we0 <= ap_const_logic_0;
        end if; 
    end process;

    C_3_0_address0 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it5;

    -- C_3_0_ce0 assign process. --
    C_3_0_ce0_assign_proc : process(ap_reg_ppiten_pp0_it6)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it6)) then 
            C_3_0_ce0 <= ap_const_logic_1;
        else 
            C_3_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    C_3_0_d0 <= tmp_18_reg_306;

    -- C_3_0_we0 assign process. --
    C_3_0_we0_assign_proc : process(ap_reg_ppiten_pp0_it6, ap_reg_ppstg_tmp_750_reg_246_pp0_it5)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it6) and not((ap_reg_ppstg_tmp_750_reg_246_pp0_it5 = ap_const_lv2_2)) and not((ap_reg_ppstg_tmp_750_reg_246_pp0_it5 = ap_const_lv2_1)) and not((ap_reg_ppstg_tmp_750_reg_246_pp0_it5 = ap_const_lv2_0))))) then 
            C_3_0_we0 <= ap_const_logic_1;
        else 
            C_3_0_we0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_done assign process. --
    ap_done_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0, ap_sig_cseq_ST_st9_fsm_2)
    begin
        if (((not((ap_const_logic_1 = ap_start)) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0)) or (ap_const_logic_1 = ap_sig_cseq_ST_st9_fsm_2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_idle assign process. --
    ap_idle_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0)
    begin
        if ((not((ap_const_logic_1 = ap_start)) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_ready assign process. --
    ap_ready_assign_proc : process(ap_sig_cseq_ST_st9_fsm_2)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st9_fsm_2)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_bdd_21 assign process. --
    ap_sig_bdd_21_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_21 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    -- ap_sig_bdd_252 assign process. --
    ap_sig_bdd_252_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_252 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
    end process;


    -- ap_sig_bdd_93 assign process. --
    ap_sig_bdd_93_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_93 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    -- ap_sig_cseq_ST_pp0_stg0_fsm_1 assign process. --
    ap_sig_cseq_ST_pp0_stg0_fsm_1_assign_proc : process(ap_sig_bdd_93)
    begin
        if (ap_sig_bdd_93) then 
            ap_sig_cseq_ST_pp0_stg0_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_pp0_stg0_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st1_fsm_0 assign process. --
    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_bdd_21)
    begin
        if (ap_sig_bdd_21) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st9_fsm_2 assign process. --
    ap_sig_cseq_ST_st9_fsm_2_assign_proc : process(ap_sig_bdd_252)
    begin
        if (ap_sig_bdd_252) then 
            ap_sig_cseq_ST_st9_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st9_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_fu_181_p2 <= "1" when (j_reg_166 = ap_const_lv7_54) else "0";
    grp_fu_177_ce <= ap_const_logic_1;
    j_3_fu_187_p2 <= std_logic_vector(unsigned(j_reg_166) + unsigned(ap_const_lv7_1));
    newIndex7_fu_212_p1 <= std_logic_vector(resize(unsigned(newIndex_fu_202_p4),64));
    newIndex_fu_202_p4 <= j_reg_166(6 downto 2);
    tmp_750_fu_198_p1 <= j_reg_166(2 - 1 downto 0);
    tmp_s_fu_193_p1 <= std_logic_vector(resize(unsigned(j_reg_166),64));
end behav;
