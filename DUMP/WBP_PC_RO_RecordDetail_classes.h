// WidgetBlueprintGeneratedClass WBP_PC_RO_RecordDetail.WBP_PC_RO_RecordDetail_C
// Size: 0x338 (Inherited: 0x26c)
struct UWBP_PC_RO_RecordDetail_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBorder* Border_Ghost; // 0x278(0x08)
	struct UBorder* Border_Human; // 0x280(0x08)
	struct UButton* Button_Ghost; // 0x288(0x08)
	struct UButton* Button_Human; // 0x290(0x08)
	struct UTextBlock* Text_Current_FailNum; // 0x298(0x08)
	struct UTextBlock* Text_Current_Total_2; // 0x2a0(0x08)
	struct UTextBlock* Text_Current_VictoryNum; // 0x2a8(0x08)
	struct UTextBlock* Text_Current_VictoryRate; // 0x2b0(0x08)
	struct UTextBlock* Text_Entertain_FailNum; // 0x2b8(0x08)
	struct UTextBlock* Text_Entertain_Total; // 0x2c0(0x08)
	struct UTextBlock* Text_Entertain_VictoryNum_4; // 0x2c8(0x08)
	struct UTextBlock* Text_Entertain_VictoryRate; // 0x2d0(0x08)
	struct UTextBlock* Text_Matching_FailNum; // 0x2d8(0x08)
	struct UTextBlock* Text_Matching_Total; // 0x2e0(0x08)
	struct UTextBlock* Text_Matching_VictoryNum; // 0x2e8(0x08)
	struct UTextBlock* Text_Matching_VictoryRate; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_Ghost_; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_Human_; // 0x300(0x08)
	struct TArray<struct FBattleWinInfo> Win Info List; // 0x308(0x10)
	struct TArray<struct FBattleWinInfo> GhostWinInfo; // 0x318(0x10)
	struct TArray<struct FBattleWinInfo> HumanWinInfo; // 0x328(0x10)

	void SetGhostOrHuman(int32_t GhostOrHuman, int32_t Ghost_Or_Human); // Function WBP_PC_RO_RecordDetail.WBP_PC_RO_RecordDetail_C.SetGhostOrHuman // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMatchDataShow(int32_t MatchType, int32_t WinCount, int32_t FailCount, int32_t GhostOrHuman); // Function WBP_PC_RO_RecordDetail.WBP_PC_RO_RecordDetail_C.SetMatchDataShow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_RO_RecordDetail.WBP_PC_RO_RecordDetail_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Ghost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RO_RecordDetail.WBP_PC_RO_RecordDetail_C.BndEvt__Button_Ghost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Human_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RO_RecordDetail.WBP_PC_RO_RecordDetail_C.BndEvt__Button_Human_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RO_RecordDetail(int32_t EntryPoint); // Function WBP_PC_RO_RecordDetail.WBP_PC_RO_RecordDetail_C.ExecuteUbergraph_WBP_PC_RO_RecordDetail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

