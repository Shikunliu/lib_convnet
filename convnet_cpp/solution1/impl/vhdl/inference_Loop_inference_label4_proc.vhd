-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity inference_Loop_inference_label4_proc is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    bias2_TDATA : IN STD_LOGIC_VECTOR (31 downto 0);
    bias2_TVALID : IN STD_LOGIC;
    bias2_TREADY : OUT STD_LOGIC;
    b2_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    b2_ce0 : OUT STD_LOGIC;
    b2_we0 : OUT STD_LOGIC;
    b2_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of inference_Loop_inference_label4_proc is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_st3_fsm_2 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_bdd_22 : BOOLEAN;
    signal k_fu_74_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_sig_cseq_ST_st2_fsm_1 : STD_LOGIC;
    signal ap_sig_bdd_46 : BOOLEAN;
    signal exitcond_fu_68_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_sig_bdd_53 : BOOLEAN;
    signal k9_reg_57 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_sig_bdd_63 : BOOLEAN;
    signal tmp_4_fu_80_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_sig_cseq_ST_st3_fsm_2 : STD_LOGIC;
    signal ap_sig_bdd_86 : BOOLEAN;
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
                elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    -- k9_reg_57 assign process. --
    k9_reg_57_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_63))) then 
                k9_reg_57 <= ap_const_lv5_0;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond_fu_68_p2 = ap_const_lv1_0) and not(ap_sig_bdd_53))) then 
                k9_reg_57 <= k_fu_74_p2;
            end if; 
        end if;
    end process;

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_CS_fsm, exitcond_fu_68_p2, ap_sig_bdd_53, ap_sig_bdd_63)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not(ap_sig_bdd_63)) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if (((exitcond_fu_68_p2 = ap_const_lv1_0) and not(ap_sig_bdd_53))) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                elsif ((not(ap_sig_bdd_53) and not((exitcond_fu_68_p2 = ap_const_lv1_0)))) then
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                else
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                end if;
            when ap_ST_st3_fsm_2 => 
                ap_NS_fsm <= ap_ST_st1_fsm_0;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;

    -- ap_done assign process. --
    ap_done_assign_proc : process(ap_done_reg, ap_sig_cseq_ST_st3_fsm_2)
    begin
        if (((ap_const_logic_1 = ap_done_reg) or (ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2))) then 
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
    ap_ready_assign_proc : process(ap_sig_cseq_ST_st3_fsm_2)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_bdd_22 assign process. --
    ap_sig_bdd_22_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_22 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    -- ap_sig_bdd_46 assign process. --
    ap_sig_bdd_46_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_46 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    -- ap_sig_bdd_53 assign process. --
    ap_sig_bdd_53_assign_proc : process(bias2_TVALID, exitcond_fu_68_p2)
    begin
                ap_sig_bdd_53 <= ((bias2_TVALID = ap_const_logic_0) and (exitcond_fu_68_p2 = ap_const_lv1_0));
    end process;


    -- ap_sig_bdd_63 assign process. --
    ap_sig_bdd_63_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_sig_bdd_63 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    -- ap_sig_bdd_86 assign process. --
    ap_sig_bdd_86_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_86 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
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


    -- ap_sig_cseq_ST_st2_fsm_1 assign process. --
    ap_sig_cseq_ST_st2_fsm_1_assign_proc : process(ap_sig_bdd_46)
    begin
        if (ap_sig_bdd_46) then 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st3_fsm_2 assign process. --
    ap_sig_cseq_ST_st3_fsm_2_assign_proc : process(ap_sig_bdd_86)
    begin
        if (ap_sig_bdd_86) then 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;

    b2_address0 <= tmp_4_fu_80_p1(4 - 1 downto 0);

    -- b2_ce0 assign process. --
    b2_ce0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, ap_sig_bdd_53)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not(ap_sig_bdd_53))) then 
            b2_ce0 <= ap_const_logic_1;
        else 
            b2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    b2_d0 <= bias2_TDATA;

    -- b2_we0 assign process. --
    b2_we0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_fu_68_p2, ap_sig_bdd_53)
    begin
        if ((((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond_fu_68_p2 = ap_const_lv1_0) and not(ap_sig_bdd_53)))) then 
            b2_we0 <= ap_const_logic_1;
        else 
            b2_we0 <= ap_const_logic_0;
        end if; 
    end process;


    -- bias2_TREADY assign process. --
    bias2_TREADY_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_fu_68_p2, ap_sig_bdd_53)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond_fu_68_p2 = ap_const_lv1_0) and not(ap_sig_bdd_53))) then 
            bias2_TREADY <= ap_const_logic_1;
        else 
            bias2_TREADY <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_fu_68_p2 <= "1" when (k9_reg_57 = ap_const_lv5_10) else "0";
    k_fu_74_p2 <= std_logic_vector(unsigned(k9_reg_57) + unsigned(ap_const_lv5_1));
    tmp_4_fu_80_p1 <= std_logic_vector(resize(unsigned(k9_reg_57),64));
end behav;
