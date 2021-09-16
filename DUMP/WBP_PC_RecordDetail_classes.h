// WidgetBlueprintGeneratedClass WBP_PC_RecordDetail.WBP_PC_RecordDetail_C
// Size: 0x338 (Inherited: 0x260)
struct UWBP_PC_RecordDetail_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_332; // 0x268(0x08)
	struct UButton* Button_Back; // 0x270(0x08)
	struct UImage* Image_GhostWin; // 0x278(0x08)
	struct UImage* Image_HumanWin; // 0x280(0x08)
	struct UUniformGridPanel* UniformGridPanel_Ghost; // 0x288(0x08)
	struct UUniformGridPanel* UniformGridPanel_Human; // 0x290(0x08)
	struct UWBP_PC_GhostRecordSingle_C* WBP_PC_GhostRecordSingle; // 0x298(0x08)
	struct UWBP_PC_HumanRecordSingle_C* WBP_PC_HumanRecordSingle; // 0x2a0(0x08)
	struct UWBP_PC_HumanRecordSingle_C* WBP_PC_HumanRecordSingle_2; // 0x2a8(0x08)
	struct UWBP_PC_HumanRecordSingle_C* WBP_PC_HumanRecordSingle_3; // 0x2b0(0x08)
	struct UWBP_PC_HumanRecordSingle_C* WBP_PC_HumanRecordSingle_4; // 0x2b8(0x08)
	struct UWBP_PC_HumanRecordSingle_C* WBP_PC_HumanRecordSingle_5; // 0x2c0(0x08)
	struct FPBBattleResultData Battle Data; // 0x2c8(0x68)
	struct UWBP_PC_RecordMain_C* Parent; // 0x330(0x08)

	void SetHumanRecord(struct FPBBattleResultData Battle Data); // Function WBP_PC_RecordDetail.WBP_PC_RecordDetail_C.SetHumanRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostRecord(struct FPBBattleResultData Battle Data); // Function WBP_PC_RecordDetail.WBP_PC_RecordDetail_C.SetGhostRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetRecord(struct FPBBattleResultData BattleResult); // Function WBP_PC_RecordDetail.WBP_PC_RecordDetail_C.SetRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitParent(struct UWBP_PC_RecordMain_C* Parent); // Function WBP_PC_RecordDetail.WBP_PC_RecordDetail_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(struct FPBBattleResultData BattleData); // Function WBP_PC_RecordDetail.WBP_PC_RecordDetail_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RecordDetail.WBP_PC_RecordDetail_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RecordDetail(int32_t EntryPoint); // Function WBP_PC_RecordDetail.WBP_PC_RecordDetail_C.ExecuteUbergraph_WBP_PC_RecordDetail // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

