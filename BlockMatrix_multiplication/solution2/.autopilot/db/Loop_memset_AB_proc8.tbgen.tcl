set moduleName Loop_memset_AB_proc8
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Loop_memset_AB_proc8}
set C_modelType { void 0 }
set C_modelArgList {
	{ AB int 32 regular {array 16 { 2 2 } 1 1 }  }
	{ it int 32 regular  }
	{ Arows_V_a_0 int 32 regular {fifo 0 volatile }  }
	{ Arows_V_a_1 int 32 regular {fifo 0 volatile }  }
	{ Arows_V_a_2 int 32 regular {fifo 0 volatile }  }
	{ Arows_V_a_3 int 32 regular {fifo 0 volatile }  }
	{ Bcols_V_a_0 int 32 regular {fifo 0 volatile }  }
	{ Bcols_V_a_1 int 32 regular {fifo 0 volatile }  }
	{ Bcols_V_a_2 int 32 regular {fifo 0 volatile }  }
	{ Bcols_V_a_3 int 32 regular {fifo 0 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "AB", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "it", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Arows_V_a_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Arows_V_a_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Arows_V_a_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Arows_V_a_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Bcols_V_a_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Bcols_V_a_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Bcols_V_a_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Bcols_V_a_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 42
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ AB_address0 sc_out sc_lv 4 signal 0 } 
	{ AB_ce0 sc_out sc_logic 1 signal 0 } 
	{ AB_we0 sc_out sc_logic 1 signal 0 } 
	{ AB_d0 sc_out sc_lv 32 signal 0 } 
	{ AB_q0 sc_in sc_lv 32 signal 0 } 
	{ AB_address1 sc_out sc_lv 4 signal 0 } 
	{ AB_ce1 sc_out sc_logic 1 signal 0 } 
	{ AB_we1 sc_out sc_logic 1 signal 0 } 
	{ AB_d1 sc_out sc_lv 32 signal 0 } 
	{ AB_q1 sc_in sc_lv 32 signal 0 } 
	{ it sc_in sc_lv 32 signal 1 } 
	{ Arows_V_a_0_dout sc_in sc_lv 32 signal 2 } 
	{ Arows_V_a_0_empty_n sc_in sc_logic 1 signal 2 } 
	{ Arows_V_a_0_read sc_out sc_logic 1 signal 2 } 
	{ Arows_V_a_1_dout sc_in sc_lv 32 signal 3 } 
	{ Arows_V_a_1_empty_n sc_in sc_logic 1 signal 3 } 
	{ Arows_V_a_1_read sc_out sc_logic 1 signal 3 } 
	{ Arows_V_a_2_dout sc_in sc_lv 32 signal 4 } 
	{ Arows_V_a_2_empty_n sc_in sc_logic 1 signal 4 } 
	{ Arows_V_a_2_read sc_out sc_logic 1 signal 4 } 
	{ Arows_V_a_3_dout sc_in sc_lv 32 signal 5 } 
	{ Arows_V_a_3_empty_n sc_in sc_logic 1 signal 5 } 
	{ Arows_V_a_3_read sc_out sc_logic 1 signal 5 } 
	{ Bcols_V_a_0_dout sc_in sc_lv 32 signal 6 } 
	{ Bcols_V_a_0_empty_n sc_in sc_logic 1 signal 6 } 
	{ Bcols_V_a_0_read sc_out sc_logic 1 signal 6 } 
	{ Bcols_V_a_1_dout sc_in sc_lv 32 signal 7 } 
	{ Bcols_V_a_1_empty_n sc_in sc_logic 1 signal 7 } 
	{ Bcols_V_a_1_read sc_out sc_logic 1 signal 7 } 
	{ Bcols_V_a_2_dout sc_in sc_lv 32 signal 8 } 
	{ Bcols_V_a_2_empty_n sc_in sc_logic 1 signal 8 } 
	{ Bcols_V_a_2_read sc_out sc_logic 1 signal 8 } 
	{ Bcols_V_a_3_dout sc_in sc_lv 32 signal 9 } 
	{ Bcols_V_a_3_empty_n sc_in sc_logic 1 signal 9 } 
	{ Bcols_V_a_3_read sc_out sc_logic 1 signal 9 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "AB_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AB", "role": "address0" }} , 
 	{ "name": "AB_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AB", "role": "ce0" }} , 
 	{ "name": "AB_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AB", "role": "we0" }} , 
 	{ "name": "AB_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AB", "role": "d0" }} , 
 	{ "name": "AB_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AB", "role": "q0" }} , 
 	{ "name": "AB_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AB", "role": "address1" }} , 
 	{ "name": "AB_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AB", "role": "ce1" }} , 
 	{ "name": "AB_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AB", "role": "we1" }} , 
 	{ "name": "AB_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AB", "role": "d1" }} , 
 	{ "name": "AB_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AB", "role": "q1" }} , 
 	{ "name": "it", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "it", "role": "default" }} , 
 	{ "name": "Arows_V_a_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Arows_V_a_0", "role": "dout" }} , 
 	{ "name": "Arows_V_a_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Arows_V_a_0", "role": "empty_n" }} , 
 	{ "name": "Arows_V_a_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Arows_V_a_0", "role": "read" }} , 
 	{ "name": "Arows_V_a_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Arows_V_a_1", "role": "dout" }} , 
 	{ "name": "Arows_V_a_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Arows_V_a_1", "role": "empty_n" }} , 
 	{ "name": "Arows_V_a_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Arows_V_a_1", "role": "read" }} , 
 	{ "name": "Arows_V_a_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Arows_V_a_2", "role": "dout" }} , 
 	{ "name": "Arows_V_a_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Arows_V_a_2", "role": "empty_n" }} , 
 	{ "name": "Arows_V_a_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Arows_V_a_2", "role": "read" }} , 
 	{ "name": "Arows_V_a_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Arows_V_a_3", "role": "dout" }} , 
 	{ "name": "Arows_V_a_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Arows_V_a_3", "role": "empty_n" }} , 
 	{ "name": "Arows_V_a_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Arows_V_a_3", "role": "read" }} , 
 	{ "name": "Bcols_V_a_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Bcols_V_a_0", "role": "dout" }} , 
 	{ "name": "Bcols_V_a_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Bcols_V_a_0", "role": "empty_n" }} , 
 	{ "name": "Bcols_V_a_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Bcols_V_a_0", "role": "read" }} , 
 	{ "name": "Bcols_V_a_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Bcols_V_a_1", "role": "dout" }} , 
 	{ "name": "Bcols_V_a_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Bcols_V_a_1", "role": "empty_n" }} , 
 	{ "name": "Bcols_V_a_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Bcols_V_a_1", "role": "read" }} , 
 	{ "name": "Bcols_V_a_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Bcols_V_a_2", "role": "dout" }} , 
 	{ "name": "Bcols_V_a_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Bcols_V_a_2", "role": "empty_n" }} , 
 	{ "name": "Bcols_V_a_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Bcols_V_a_2", "role": "read" }} , 
 	{ "name": "Bcols_V_a_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Bcols_V_a_3", "role": "dout" }} , 
 	{ "name": "Bcols_V_a_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Bcols_V_a_3", "role": "empty_n" }} , 
 	{ "name": "Bcols_V_a_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Bcols_V_a_3", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "Loop_memset_AB_proc8",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "198", "EstimateLatencyMax" : "215",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "AB", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "it", "Type" : "None", "Direction" : "I"},
			{"Name" : "Arows_V_a_0", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "Arows_V_a_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "Arows_V_a_1", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "Arows_V_a_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "Arows_V_a_2", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "Arows_V_a_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "Arows_V_a_3", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "Arows_V_a_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "Bcols_V_a_0", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "Bcols_V_a_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "Bcols_V_a_1", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "Bcols_V_a_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "Bcols_V_a_2", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "Bcols_V_a_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "Bcols_V_a_3", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "Bcols_V_a_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "A", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Loop_memset_AB_proc8 {
		AB {Type IO LastRead 12 FirstWrite 2}
		it {Type I LastRead 0 FirstWrite -1}
		Arows_V_a_0 {Type I LastRead 4 FirstWrite -1}
		Arows_V_a_1 {Type I LastRead 4 FirstWrite -1}
		Arows_V_a_2 {Type I LastRead 4 FirstWrite -1}
		Arows_V_a_3 {Type I LastRead 4 FirstWrite -1}
		Bcols_V_a_0 {Type I LastRead 5 FirstWrite -1}
		Bcols_V_a_1 {Type I LastRead 5 FirstWrite -1}
		Bcols_V_a_2 {Type I LastRead 5 FirstWrite -1}
		Bcols_V_a_3 {Type I LastRead 5 FirstWrite -1}
		A {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "198", "Max" : "215"}
	, {"Name" : "Interval", "Min" : "198", "Max" : "215"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	AB { ap_memory {  { AB_address0 mem_address 1 4 }  { AB_ce0 mem_ce 1 1 }  { AB_we0 mem_we 1 1 }  { AB_d0 mem_din 1 32 }  { AB_q0 mem_dout 0 32 }  { AB_address1 MemPortADDR2 1 4 }  { AB_ce1 MemPortCE2 1 1 }  { AB_we1 MemPortWE2 1 1 }  { AB_d1 MemPortDIN2 1 32 }  { AB_q1 MemPortDOUT2 0 32 } } }
	it { ap_none {  { it in_data 0 32 } } }
	Arows_V_a_0 { ap_fifo {  { Arows_V_a_0_dout fifo_data 0 32 }  { Arows_V_a_0_empty_n fifo_status 0 1 }  { Arows_V_a_0_read fifo_update 1 1 } } }
	Arows_V_a_1 { ap_fifo {  { Arows_V_a_1_dout fifo_data 0 32 }  { Arows_V_a_1_empty_n fifo_status 0 1 }  { Arows_V_a_1_read fifo_update 1 1 } } }
	Arows_V_a_2 { ap_fifo {  { Arows_V_a_2_dout fifo_data 0 32 }  { Arows_V_a_2_empty_n fifo_status 0 1 }  { Arows_V_a_2_read fifo_update 1 1 } } }
	Arows_V_a_3 { ap_fifo {  { Arows_V_a_3_dout fifo_data 0 32 }  { Arows_V_a_3_empty_n fifo_status 0 1 }  { Arows_V_a_3_read fifo_update 1 1 } } }
	Bcols_V_a_0 { ap_fifo {  { Bcols_V_a_0_dout fifo_data 0 32 }  { Bcols_V_a_0_empty_n fifo_status 0 1 }  { Bcols_V_a_0_read fifo_update 1 1 } } }
	Bcols_V_a_1 { ap_fifo {  { Bcols_V_a_1_dout fifo_data 0 32 }  { Bcols_V_a_1_empty_n fifo_status 0 1 }  { Bcols_V_a_1_read fifo_update 1 1 } } }
	Bcols_V_a_2 { ap_fifo {  { Bcols_V_a_2_dout fifo_data 0 32 }  { Bcols_V_a_2_empty_n fifo_status 0 1 }  { Bcols_V_a_2_read fifo_update 1 1 } } }
	Bcols_V_a_3 { ap_fifo {  { Bcols_V_a_3_dout fifo_data 0 32 }  { Bcols_V_a_3_empty_n fifo_status 0 1 }  { Bcols_V_a_3_read fifo_update 1 1 } } }
}
