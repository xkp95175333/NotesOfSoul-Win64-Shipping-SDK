// WidgetBlueprintGeneratedClass WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C
// Size: 0x3a8 (Inherited: 0x260)
struct UWBP_PC_RL_RecordSingle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Record; // 0x268(0x08)
	struct UButton* Button_Single; // 0x270(0x08)
	struct UImage* Image_Carry1; // 0x278(0x08)
	struct UImage* Image_Carry2; // 0x280(0x08)
	struct UImage* Image_Carry3; // 0x288(0x08)
	struct UImage* Image_Role; // 0x290(0x08)
	struct UTextBlock* Text_Competition; // 0x298(0x08)
	struct UTextBlock* Text_Day; // 0x2a0(0x08)
	struct UTextBlock* Text_Hour; // 0x2a8(0x08)
	struct UTextBlock* Text_Map; // 0x2b0(0x08)
	struct UTextBlock* Text_Result; // 0x2b8(0x08)
	struct UTextBlock* Text_Score; // 0x2c0(0x08)
	bool IsOpenRecordMain; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FPBBattleReportSingle SingleList; // 0x2d0(0x48)
	struct FPBBattleResultData Battle Result Data; // 0x318(0x68)
	struct UWBP_PC_RecordMain_C* RecordMain; // 0x380(0x08)
	struct FString MapName; // 0x388(0x10)
	struct TArray<struct UImage*> ItemArray; // 0x398(0x10)

	void HandleTime(); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.HandleTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleMatchType(int32_t Type); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.HandleMatchType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleItem(); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.HandleItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleMap(); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.HandleMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleWin(int32_t IsWin); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.HandleWin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBriefSingleList(); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.InitBriefSingleList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBriefInfo(struct FPBBattleReportSingle SingleList); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.SetBriefInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitParent(struct UWBP_PC_RecordMain_C* RecordList); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Record_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.BndEvt__Button_Record_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Single_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.BndEvt__Button_Single_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(int32_t code, struct FPBBattleResultData BattleResultData); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RL_RecordSingle(int32_t EntryPoint); // Function WBP_PC_RL_RecordSingle.WBP_PC_RL_RecordSingle_C.ExecuteUbergraph_WBP_PC_RL_RecordSingle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

