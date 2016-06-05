#!/usr/bin/python
# Filename : riffa_builder_top_script.py

print ('RIFFA Builder 0.1')
file = open('log.txt','w')
file.write('000000000000000')
file.close()

from riffa_builder import RiffaBuilder

bld = RiffaBuilder()

file = open('log.txt','w')
file.write('1111111111111')
file.close()
#######################################################################
#User options begin
#Please edit these options for you design
bld.output_dir = 'C:/Users/Vikasini/Desktop/EmbeddedImageProccessing/RIFFA_BUILDER/user/Output'
bld.verilog_src_file = 'C:/Users/Vikasini/Documents/GitHub/lib_convnet/convnet_cpp/solution1/syn/verilog/inference.v'
bld.prj_start = 'Verilog'
bld.create_fpga = True
bld.copy_fpga_template = True
bld.fpga_board_name = 'VC709'
bld.fpga_template_name = 'VC709_Gen3x4If128'
bld.riffa_clk_freq_mhz = 250
bld.clk_div = 2
bld.external_prefixs = []
bld.create_host = True
bld.copy_host_template = True
bld.host_os = 'windows'
bld.host_platform = 'x64'
bld.host_template_type = 'Common'
bld.performance_counters = True
bld.performance_counters_tick_div = 0  #0=no divide, 1= div by 2, 2= div by 4, 3= div by 8...
bld.port_atrbs = [ \
    'inference inputImage_TDATA float 784 debug',\
    'inference outDigit_TDATA float 1 debug']
bld.host_debug_level = 3
bld.hardware_timeout = 10000
#User options end
#######################################################################


if ('cancel' in bld.user_wizard()):
    print('Quit')
    sys.exit()


bld.build_fpga_project()
bld.build_host_project()
