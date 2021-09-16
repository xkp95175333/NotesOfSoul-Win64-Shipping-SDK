// WidgetBlueprintGeneratedClass WBP_PC_RecordOverview.WBP_PC_RecordOverview_C
// Size: 0x2a8 (Inherited: 0x26c)
struct UWBP_PC_RecordOverview_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWBP_PC_RO_BuildBase_C* WBP_PC_RO_BuildBase; // 0x278(0x08)
	struct UWBP_PC_RO_CurrentRank_C* WBP_PC_RO_CurrentRank; // 0x280(0x08)
	struct UWBP_PC_RO_HistoryRank_C* WBP_PC_RO_HistoryRank; // 0x288(0x08)
	struct UWBP_PC_RO_MaxIntimacy_C* WBP_PC_RO_MaxIntimacy; // 0x290(0x08)
	struct UWBP_PC_RO_RecordData_C* WBP_PC_RO_RecordData; // 0x298(0x08)
	struct UWBP_PC_RO_RecordDetail_C* WBP_PC_RO_RecordDetail; // 0x2a0(0x08)

	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_RecordOverview.WBP_PC_RecordOverview_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RecordOverview(int32_t EntryPoint); // Function WBP_PC_RecordOverview.WBP_PC_RecordOverview_C.ExecuteUbergraph_WBP_PC_RecordOverview // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

