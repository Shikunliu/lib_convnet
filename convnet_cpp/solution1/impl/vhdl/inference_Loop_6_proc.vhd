-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity inference_Loop_6_proc is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    Filter3_address0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    Filter3_ce0 : OUT STD_LOGIC;
    Filter3_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    f3_0_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    f3_0_ce0 : OUT STD_LOGIC;
    f3_0_we0 : OUT STD_LOGIC;
    f3_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    f3_1_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    f3_1_ce0 : OUT STD_LOGIC;
    f3_1_we0 : OUT STD_LOGIC;
    f3_1_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    f3_2_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    f3_2_ce0 : OUT STD_LOGIC;
    f3_2_we0 : OUT STD_LOGIC;
    f3_2_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    f3_3_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    f3_3_ce0 : OUT STD_LOGIC;
    f3_3_we0 : OUT STD_LOGIC;
    f3_3_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    f3_4_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    f3_4_ce0 : OUT STD_LOGIC;
    f3_4_we0 : OUT STD_LOGIC;
    f3_4_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of inference_Loop_6_proc is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_pp0_stg0_fsm_1 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_st5_fsm_2 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_true : BOOLEAN := true;
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv14_0 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000000";
    constant ap_const_lv12_0 : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv3_3 : STD_LOGIC_VECTOR (2 downto 0) := "011";
    constant ap_const_lv3_2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv16_BB80 : STD_LOGIC_VECTOR (15 downto 0) := "1011101110000000";
    constant ap_const_lv16_1 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000001";
    constant ap_const_lv14_2580 : STD_LOGIC_VECTOR (13 downto 0) := "10010110000000";
    constant ap_const_lv7_78 : STD_LOGIC_VECTOR (6 downto 0) := "1111000";
    constant ap_const_lv12_780 : STD_LOGIC_VECTOR (11 downto 0) := "011110000000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv12_1 : STD_LOGIC_VECTOR (11 downto 0) := "000000000001";
    constant ap_const_lv14_1 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_bdd_22 : BOOLEAN;
    signal indvar_flatten3_reg_171 : STD_LOGIC_VECTOR (15 downto 0);
    signal i7_reg_182 : STD_LOGIC_VECTOR (2 downto 0);
    signal indvar_flatten4_reg_193 : STD_LOGIC_VECTOR (13 downto 0);
    signal j7_reg_204 : STD_LOGIC_VECTOR (2 downto 0);
    signal indvar_flatten_reg_215 : STD_LOGIC_VECTOR (11 downto 0);
    signal k8_reg_226 : STD_LOGIC_VECTOR (4 downto 0);
    signal l3_reg_237 : STD_LOGIC_VECTOR (6 downto 0);
    signal exitcond_flatten4_fu_248_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten4_reg_590 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_sig_cseq_ST_pp0_stg0_fsm_1 : STD_LOGIC;
    signal ap_sig_bdd_91 : BOOLEAN;
    signal ap_reg_ppiten_pp0_it0 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it1 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it2 : STD_LOGIC := '0';
    signal indvar_flatten_next4_fu_254_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal i7_mid2_fu_310_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal i7_mid2_reg_599 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_reg_ppstg_i7_mid2_reg_599_pp0_it1 : STD_LOGIC_VECTOR (2 downto 0);
    signal j7_mid2_fu_356_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal j7_mid2_reg_607 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 : STD_LOGIC_VECTOR (2 downto 0);
    signal l3_mid2_fu_382_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal l3_mid2_reg_613 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_reg_ppstg_l3_mid2_reg_613_pp0_it1 : STD_LOGIC_VECTOR (6 downto 0);
    signal k8_mid2_fu_390_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal k8_mid2_reg_619 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_reg_ppstg_k8_mid2_reg_619_pp0_it1 : STD_LOGIC_VECTOR (4 downto 0);
    signal l_fu_398_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal indvar_flatten_next_fu_410_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal indvar_flatten_next3_fu_424_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal ap_sig_bdd_137 : BOOLEAN;
    signal i7_phi_fu_186_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal j7_phi_fu_208_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal k8_phi_fu_230_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_743_cast_fu_521_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_744_cast_fu_581_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal exitcond_flatten_fu_266_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_fu_286_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal not_exitcond_flatten_fu_280_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten1_fu_298_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_fu_260_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal j7_mid_fu_272_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal exitcond_flatten_mid_fu_304_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_706_fu_324_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten_not_fu_338_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond5_mid_fu_292_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal not_exitcond_flatten_mid_fu_344_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_fu_318_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal k8_mid_fu_330_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal exitcond5_mid1_fu_350_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_709_fu_370_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_753_fu_376_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal k_fu_364_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal indvar_flatten_op_fu_404_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal indvar_flatten11_op_fu_418_p2 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_fu_435_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_5_cast_fu_432_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal p_shl5_cast_fu_442_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_704_fu_446_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_10_cast_fu_452_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_707_fu_455_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_752_fu_461_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_708_fu_469_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_16_fu_473_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_710_fu_476_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_754_fu_482_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_755_fu_494_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal p_shl3_cast_fu_486_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal p_shl4_cast_fu_498_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_711_fu_506_p2 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_22_cast_fu_512_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_714_fu_515_p2 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_705_fu_526_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_729_cast_fu_533_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_16_cast_fu_537_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_712_fu_540_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_756_fu_554_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal p_shl_cast_fu_546_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal p_shl2_cast_fu_562_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_713_fu_566_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_22_cast1_fu_572_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_715_fu_575_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_sig_cseq_ST_st5_fsm_2 : STD_LOGIC;
    signal ap_sig_bdd_418 : BOOLEAN;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);


begin




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


    -- ap_done_reg assign process. --
    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_continue)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_2)) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
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
                if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and not((exitcond_flatten4_fu_248_p2 = ap_const_lv1_0)))) then 
                    ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
                elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137))) then 
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
                if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (exitcond_flatten4_fu_248_p2 = ap_const_lv1_0))) then 
                    ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
                elsif ((((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137)) or ((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and not((exitcond_flatten4_fu_248_p2 = ap_const_lv1_0))))) then 
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


    -- i7_reg_182 assign process. --
    i7_reg_182_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond_flatten4_reg_590 = ap_const_lv1_0))) then 
                i7_reg_182 <= i7_mid2_reg_599;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137))) then 
                i7_reg_182 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    -- indvar_flatten3_reg_171 assign process. --
    indvar_flatten3_reg_171_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and (exitcond_flatten4_fu_248_p2 = ap_const_lv1_0))) then 
                indvar_flatten3_reg_171 <= indvar_flatten_next4_fu_254_p2;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137))) then 
                indvar_flatten3_reg_171 <= ap_const_lv16_0;
            end if; 
        end if;
    end process;

    -- indvar_flatten4_reg_193 assign process. --
    indvar_flatten4_reg_193_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and (exitcond_flatten4_fu_248_p2 = ap_const_lv1_0))) then 
                indvar_flatten4_reg_193 <= indvar_flatten_next3_fu_424_p3;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137))) then 
                indvar_flatten4_reg_193 <= ap_const_lv14_0;
            end if; 
        end if;
    end process;

    -- indvar_flatten_reg_215 assign process. --
    indvar_flatten_reg_215_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and (exitcond_flatten4_fu_248_p2 = ap_const_lv1_0))) then 
                indvar_flatten_reg_215 <= indvar_flatten_next_fu_410_p3;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137))) then 
                indvar_flatten_reg_215 <= ap_const_lv12_0;
            end if; 
        end if;
    end process;

    -- j7_reg_204 assign process. --
    j7_reg_204_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond_flatten4_reg_590 = ap_const_lv1_0))) then 
                j7_reg_204 <= j7_mid2_reg_607;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137))) then 
                j7_reg_204 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    -- k8_reg_226 assign process. --
    k8_reg_226_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond_flatten4_reg_590 = ap_const_lv1_0))) then 
                k8_reg_226 <= k8_mid2_reg_619;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137))) then 
                k8_reg_226 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    -- l3_reg_237 assign process. --
    l3_reg_237_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and (exitcond_flatten4_fu_248_p2 = ap_const_lv1_0))) then 
                l3_reg_237 <= l_fu_398_p2;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_137))) then 
                l3_reg_237 <= ap_const_lv7_0;
            end if; 
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1)) then
                ap_reg_ppstg_i7_mid2_reg_599_pp0_it1 <= i7_mid2_reg_599;
                ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 <= j7_mid2_reg_607;
                ap_reg_ppstg_k8_mid2_reg_619_pp0_it1 <= k8_mid2_reg_619;
                ap_reg_ppstg_l3_mid2_reg_613_pp0_it1 <= l3_mid2_reg_613;
                exitcond_flatten4_reg_590 <= exitcond_flatten4_fu_248_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and (exitcond_flatten4_fu_248_p2 = ap_const_lv1_0))) then
                i7_mid2_reg_599 <= i7_mid2_fu_310_p3;
                j7_mid2_reg_607 <= j7_mid2_fu_356_p3;
                k8_mid2_reg_619 <= k8_mid2_fu_390_p3;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (exitcond_flatten4_fu_248_p2 = ap_const_lv1_0))) then
                l3_mid2_reg_613 <= l3_mid2_fu_382_p3;
            end if;
        end if;
    end process;

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_CS_fsm, exitcond_flatten4_fu_248_p2, ap_reg_ppiten_pp0_it0, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, ap_sig_bdd_137)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not(ap_sig_bdd_137)) then
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_pp0_stg0_fsm_1 => 
                if ((not(((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1)))) and not(((ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((exitcond_flatten4_fu_248_p2 = ap_const_lv1_0)) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1)))))) then
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_1;
                elsif (((ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((exitcond_flatten4_fu_248_p2 = ap_const_lv1_0)) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1)))) then
                    ap_NS_fsm <= ap_ST_st5_fsm_2;
                else
                    ap_NS_fsm <= ap_ST_st5_fsm_2;
                end if;
            when ap_ST_st5_fsm_2 => 
                ap_NS_fsm <= ap_ST_st1_fsm_0;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    Filter3_address0 <= tmp_743_cast_fu_521_p1(16 - 1 downto 0);

    -- Filter3_ce0 assign process. --
    Filter3_ce0_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it1)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))) then 
            Filter3_ce0 <= ap_const_logic_1;
        else 
            Filter3_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_done assign process. --
    ap_done_assign_proc : process(ap_done_reg, ap_sig_cseq_ST_st5_fsm_2)
    begin
        if (((ap_const_logic_1 = ap_done_reg) or (ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_2))) then 
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
    ap_ready_assign_proc : process(ap_sig_cseq_ST_st5_fsm_2)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_2)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_bdd_137 assign process. --
    ap_sig_bdd_137_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_sig_bdd_137 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    -- ap_sig_bdd_22 assign process. --
    ap_sig_bdd_22_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_22 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    -- ap_sig_bdd_418 assign process. --
    ap_sig_bdd_418_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_418 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
    end process;


    -- ap_sig_bdd_91 assign process. --
    ap_sig_bdd_91_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_91 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    -- ap_sig_cseq_ST_pp0_stg0_fsm_1 assign process. --
    ap_sig_cseq_ST_pp0_stg0_fsm_1_assign_proc : process(ap_sig_bdd_91)
    begin
        if (ap_sig_bdd_91) then 
            ap_sig_cseq_ST_pp0_stg0_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_pp0_stg0_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st1_fsm_0 assign process. --
    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_bdd_22)
    begin
        if (ap_sig_bdd_22) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st5_fsm_2 assign process. --
    ap_sig_cseq_ST_st5_fsm_2_assign_proc : process(ap_sig_bdd_418)
    begin
        if (ap_sig_bdd_418) then 
            ap_sig_cseq_ST_st5_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st5_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond5_mid1_fu_350_p2 <= (exitcond5_mid_fu_292_p2 and not_exitcond_flatten_mid_fu_344_p2);
    exitcond5_mid_fu_292_p2 <= (exitcond_fu_286_p2 and not_exitcond_flatten_fu_280_p2);
    exitcond_flatten1_fu_298_p2 <= "1" when (indvar_flatten_reg_215 = ap_const_lv12_780) else "0";
    exitcond_flatten4_fu_248_p2 <= "1" when (indvar_flatten3_reg_171 = ap_const_lv16_BB80) else "0";
    exitcond_flatten_fu_266_p2 <= "1" when (indvar_flatten4_reg_193 = ap_const_lv14_2580) else "0";
    exitcond_flatten_mid_fu_304_p2 <= (exitcond_flatten1_fu_298_p2 and not_exitcond_flatten_fu_280_p2);
    exitcond_flatten_not_fu_338_p2 <= (exitcond_flatten1_fu_298_p2 xor ap_const_lv1_1);
    exitcond_fu_286_p2 <= "1" when (l3_reg_237 = ap_const_lv7_78) else "0";
    f3_0_address0 <= tmp_744_cast_fu_581_p1(14 - 1 downto 0);

    -- f3_0_ce0 assign process. --
    f3_0_ce0_assign_proc : process(ap_reg_ppiten_pp0_it2)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2)) then 
            f3_0_ce0 <= ap_const_logic_1;
        else 
            f3_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_0_d0 <= Filter3_q0;

    -- f3_0_we0 assign process. --
    f3_0_we0_assign_proc : process(ap_reg_ppiten_pp0_it2, ap_reg_ppstg_j7_mid2_reg_607_pp0_it1)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 = ap_const_lv3_0)))) then 
            f3_0_we0 <= ap_const_logic_1;
        else 
            f3_0_we0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_1_address0 <= tmp_744_cast_fu_581_p1(14 - 1 downto 0);

    -- f3_1_ce0 assign process. --
    f3_1_ce0_assign_proc : process(ap_reg_ppiten_pp0_it2)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2)) then 
            f3_1_ce0 <= ap_const_logic_1;
        else 
            f3_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_1_d0 <= Filter3_q0;

    -- f3_1_we0 assign process. --
    f3_1_we0_assign_proc : process(ap_reg_ppiten_pp0_it2, ap_reg_ppstg_j7_mid2_reg_607_pp0_it1)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 = ap_const_lv3_1)))) then 
            f3_1_we0 <= ap_const_logic_1;
        else 
            f3_1_we0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_2_address0 <= tmp_744_cast_fu_581_p1(14 - 1 downto 0);

    -- f3_2_ce0 assign process. --
    f3_2_ce0_assign_proc : process(ap_reg_ppiten_pp0_it2)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2)) then 
            f3_2_ce0 <= ap_const_logic_1;
        else 
            f3_2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_2_d0 <= Filter3_q0;

    -- f3_2_we0 assign process. --
    f3_2_we0_assign_proc : process(ap_reg_ppiten_pp0_it2, ap_reg_ppstg_j7_mid2_reg_607_pp0_it1)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 = ap_const_lv3_2)))) then 
            f3_2_we0 <= ap_const_logic_1;
        else 
            f3_2_we0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_3_address0 <= tmp_744_cast_fu_581_p1(14 - 1 downto 0);

    -- f3_3_ce0 assign process. --
    f3_3_ce0_assign_proc : process(ap_reg_ppiten_pp0_it2)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2)) then 
            f3_3_ce0 <= ap_const_logic_1;
        else 
            f3_3_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_3_d0 <= Filter3_q0;

    -- f3_3_we0 assign process. --
    f3_3_we0_assign_proc : process(ap_reg_ppiten_pp0_it2, ap_reg_ppstg_j7_mid2_reg_607_pp0_it1)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 = ap_const_lv3_3)))) then 
            f3_3_we0 <= ap_const_logic_1;
        else 
            f3_3_we0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_4_address0 <= tmp_744_cast_fu_581_p1(14 - 1 downto 0);

    -- f3_4_ce0 assign process. --
    f3_4_ce0_assign_proc : process(ap_reg_ppiten_pp0_it2)
    begin
        if ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2)) then 
            f3_4_ce0 <= ap_const_logic_1;
        else 
            f3_4_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    f3_4_d0 <= Filter3_q0;

    -- f3_4_we0 assign process. --
    f3_4_we0_assign_proc : process(ap_reg_ppiten_pp0_it2, ap_reg_ppstg_j7_mid2_reg_607_pp0_it1)
    begin
        if ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and not((ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 = ap_const_lv3_3)) and not((ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 = ap_const_lv3_2)) and not((ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 = ap_const_lv3_1)) and not((ap_reg_ppstg_j7_mid2_reg_607_pp0_it1 = ap_const_lv3_0))))) then 
            f3_4_we0 <= ap_const_logic_1;
        else 
            f3_4_we0 <= ap_const_logic_0;
        end if; 
    end process;

    i7_mid2_fu_310_p3 <= 
        i_fu_260_p2 when (exitcond_flatten_fu_266_p2(0) = '1') else 
        i7_phi_fu_186_p4;

    -- i7_phi_fu_186_p4 assign process. --
    i7_phi_fu_186_p4_assign_proc : process(i7_reg_182, exitcond_flatten4_reg_590, ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it1, i7_mid2_reg_599)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond_flatten4_reg_590 = ap_const_lv1_0))) then 
            i7_phi_fu_186_p4 <= i7_mid2_reg_599;
        else 
            i7_phi_fu_186_p4 <= i7_reg_182;
        end if; 
    end process;

    i_fu_260_p2 <= std_logic_vector(unsigned(ap_const_lv3_1) + unsigned(i7_phi_fu_186_p4));
    indvar_flatten11_op_fu_418_p2 <= std_logic_vector(unsigned(indvar_flatten4_reg_193) + unsigned(ap_const_lv14_1));
    indvar_flatten_next3_fu_424_p3 <= 
        ap_const_lv14_1 when (exitcond_flatten_fu_266_p2(0) = '1') else 
        indvar_flatten11_op_fu_418_p2;
    indvar_flatten_next4_fu_254_p2 <= std_logic_vector(unsigned(indvar_flatten3_reg_171) + unsigned(ap_const_lv16_1));
    indvar_flatten_next_fu_410_p3 <= 
        ap_const_lv12_1 when (tmp_706_fu_324_p2(0) = '1') else 
        indvar_flatten_op_fu_404_p2;
    indvar_flatten_op_fu_404_p2 <= std_logic_vector(unsigned(indvar_flatten_reg_215) + unsigned(ap_const_lv12_1));
    j7_mid2_fu_356_p3 <= 
        j_fu_318_p2 when (exitcond_flatten_mid_fu_304_p2(0) = '1') else 
        j7_mid_fu_272_p3;
    j7_mid_fu_272_p3 <= 
        ap_const_lv3_0 when (exitcond_flatten_fu_266_p2(0) = '1') else 
        j7_phi_fu_208_p4;

    -- j7_phi_fu_208_p4 assign process. --
    j7_phi_fu_208_p4_assign_proc : process(j7_reg_204, exitcond_flatten4_reg_590, ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it1, j7_mid2_reg_607)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond_flatten4_reg_590 = ap_const_lv1_0))) then 
            j7_phi_fu_208_p4 <= j7_mid2_reg_607;
        else 
            j7_phi_fu_208_p4 <= j7_reg_204;
        end if; 
    end process;

    j_fu_318_p2 <= std_logic_vector(unsigned(ap_const_lv3_1) + unsigned(j7_mid_fu_272_p3));
    k8_mid2_fu_390_p3 <= 
        k_fu_364_p2 when (exitcond5_mid1_fu_350_p2(0) = '1') else 
        k8_mid_fu_330_p3;
    k8_mid_fu_330_p3 <= 
        ap_const_lv5_0 when (tmp_706_fu_324_p2(0) = '1') else 
        k8_phi_fu_230_p4;

    -- k8_phi_fu_230_p4 assign process. --
    k8_phi_fu_230_p4_assign_proc : process(k8_reg_226, exitcond_flatten4_reg_590, ap_sig_cseq_ST_pp0_stg0_fsm_1, ap_reg_ppiten_pp0_it1, k8_mid2_reg_619)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_1) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond_flatten4_reg_590 = ap_const_lv1_0))) then 
            k8_phi_fu_230_p4 <= k8_mid2_reg_619;
        else 
            k8_phi_fu_230_p4 <= k8_reg_226;
        end if; 
    end process;

    k_fu_364_p2 <= std_logic_vector(unsigned(ap_const_lv5_1) + unsigned(k8_mid_fu_330_p3));
    l3_mid2_fu_382_p3 <= 
        ap_const_lv7_0 when (tmp_753_fu_376_p2(0) = '1') else 
        l3_reg_237;
    l_fu_398_p2 <= std_logic_vector(unsigned(l3_mid2_fu_382_p3) + unsigned(ap_const_lv7_1));
    not_exitcond_flatten_fu_280_p2 <= (exitcond_flatten_fu_266_p2 xor ap_const_lv1_1);
    not_exitcond_flatten_mid_fu_344_p2 <= (exitcond_flatten_fu_266_p2 or exitcond_flatten_not_fu_338_p2);
    p_shl2_cast_fu_562_p1 <= std_logic_vector(resize(unsigned(tmp_756_fu_554_p3),15));
    p_shl3_cast_fu_486_p3 <= (tmp_754_fu_482_p1 & ap_const_lv7_0);
    p_shl4_cast_fu_498_p3 <= (tmp_755_fu_494_p1 & ap_const_lv3_0);
    p_shl5_cast_fu_442_p1 <= std_logic_vector(resize(unsigned(tmp_fu_435_p3),6));
    p_shl_cast_fu_546_p3 <= (tmp_712_fu_540_p2 & ap_const_lv7_0);
    tmp_10_cast_fu_452_p1 <= std_logic_vector(resize(unsigned(j7_mid2_reg_607),6));
    tmp_16_cast_fu_537_p1 <= std_logic_vector(resize(unsigned(ap_reg_ppstg_k8_mid2_reg_619_pp0_it1),8));
    tmp_16_fu_473_p1 <= std_logic_vector(resize(unsigned(k8_mid2_reg_619),64));
    tmp_22_cast1_fu_572_p1 <= std_logic_vector(resize(unsigned(ap_reg_ppstg_l3_mid2_reg_613_pp0_it1),15));
    tmp_22_cast_fu_512_p1 <= std_logic_vector(resize(unsigned(l3_mid2_reg_613),17));
    tmp_5_cast_fu_432_p1 <= std_logic_vector(resize(unsigned(i7_mid2_reg_599),6));
    tmp_704_fu_446_p2 <= std_logic_vector(unsigned(tmp_5_cast_fu_432_p1) + unsigned(p_shl5_cast_fu_442_p1));
    tmp_705_fu_526_p3 <= (ap_reg_ppstg_i7_mid2_reg_599_pp0_it1 & ap_const_lv4_0);
    tmp_706_fu_324_p2 <= (exitcond_flatten_mid_fu_304_p2 or exitcond_flatten_fu_266_p2);
    tmp_707_fu_455_p2 <= std_logic_vector(unsigned(tmp_704_fu_446_p2) + unsigned(tmp_10_cast_fu_452_p1));
    tmp_708_fu_469_p1 <= std_logic_vector(resize(unsigned(tmp_752_fu_461_p3),64));
    tmp_709_fu_370_p2 <= (exitcond5_mid1_fu_350_p2 or exitcond_flatten_mid_fu_304_p2);
    tmp_710_fu_476_p2 <= std_logic_vector(unsigned(tmp_708_fu_469_p1) + unsigned(tmp_16_fu_473_p1));
    tmp_711_fu_506_p2 <= std_logic_vector(unsigned(p_shl3_cast_fu_486_p3) - unsigned(p_shl4_cast_fu_498_p3));
    tmp_712_fu_540_p2 <= std_logic_vector(unsigned(tmp_729_cast_fu_533_p1) + unsigned(tmp_16_cast_fu_537_p1));
    tmp_713_fu_566_p2 <= std_logic_vector(unsigned(p_shl_cast_fu_546_p3) - unsigned(p_shl2_cast_fu_562_p1));
    tmp_714_fu_515_p2 <= std_logic_vector(unsigned(tmp_711_fu_506_p2) + unsigned(tmp_22_cast_fu_512_p1));
    tmp_715_fu_575_p2 <= std_logic_vector(unsigned(tmp_713_fu_566_p2) + unsigned(tmp_22_cast1_fu_572_p1));
    tmp_729_cast_fu_533_p1 <= std_logic_vector(resize(unsigned(tmp_705_fu_526_p3),8));
    tmp_743_cast_fu_521_p1 <= std_logic_vector(resize(unsigned(tmp_714_fu_515_p2),64));
    tmp_744_cast_fu_581_p1 <= std_logic_vector(resize(unsigned(tmp_715_fu_575_p2),64));
    tmp_752_fu_461_p3 <= (tmp_707_fu_455_p2 & ap_const_lv4_0);
    tmp_753_fu_376_p2 <= (tmp_709_fu_370_p2 or exitcond_flatten_fu_266_p2);
    tmp_754_fu_482_p1 <= tmp_710_fu_476_p2(10 - 1 downto 0);
    tmp_755_fu_494_p1 <= tmp_710_fu_476_p2(14 - 1 downto 0);
    tmp_756_fu_554_p3 <= (tmp_712_fu_540_p2 & ap_const_lv3_0);
    tmp_fu_435_p3 <= (i7_mid2_reg_599 & ap_const_lv2_0);
end behav;
