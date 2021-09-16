// WidgetBlueprintGeneratedClass WBP_PC_RecordList.WBP_PC_RecordList_C
// Size: 0x360 (Inherited: 0x26c)
struct UWBP_PC_RecordList_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* PageDown; // 0x278(0x08)
	struct UTextBlock* PageText; // 0x280(0x08)
	struct UButton* PageUp; // 0x288(0x08)
	struct UUniformGridPanel* UniformGridPanel_33; // 0x290(0x08)
	struct TArray<struct FPBBattleReportSingle> Brief Lsit; // 0x298(0x10)
	struct FPBBattleReportSingle Array Element; // 0x2a8(0x48)
	struct UWBP_PC_RecordMain_C* Parent; // 0x2f0(0x08)
	struct FPBBattleReportSingleList Battle Report Single List; // 0x2f8(0x10)
	struct TArray<struct FPBBattleReportSingle> Page1; // 0x308(0x10)
	struct TArray<struct FPBBattleReportSingle> Page2; // 0x318(0x10)
	struct TArray<struct FPBBattleReportSingle> Page3; // 0x328(0x10)
	struct TArray<struct FPBBattleReportSingle> Page4; // 0x338(0x10)
	struct TArray<struct FPBBattleReportSingle> Page5; // 0x348(0x10)
	int32_t PageCount; // 0x358(0x04)
	int32_t CurPage; // 0x35c(0x04)

	void ShowPage(int32_t Page); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.ShowPage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckPage(); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.CheckPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearPage(); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.ClearPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandlePage(struct FPBBattleReportSingleList List); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.HandlePage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitParent(struct UWBP_PC_RecordMain_C* Parent); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SingleRsp(int32_t code, struct FPBBattleReportSingleList BattleReportSingleList); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.SingleRsp // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__PageDown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.BndEvt__PageDown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Pageup_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.BndEvt__Pageup_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RecordList(int32_t EntryPoint); // Function WBP_PC_RecordList.WBP_PC_RecordList_C.ExecuteUbergraph_WBP_PC_RecordList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

