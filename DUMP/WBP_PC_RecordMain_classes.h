// WidgetBlueprintGeneratedClass WBP_PC_RecordMain.WBP_PC_RecordMain_C
// Size: 0x2c8 (Inherited: 0x26c)
struct UWBP_PC_RecordMain_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBorder* Border_List; // 0x278(0x08)
	struct UBorder* Border_Overview; // 0x280(0x08)
	struct UButton* Button_RecordList; // 0x288(0x08)
	struct UButton* Button_RecordOverview; // 0x290(0x08)
	struct UHorizontalBox* HorBox_RecordMain; // 0x298(0x08)
	struct UTextBlock* Text_RecordList; // 0x2a0(0x08)
	struct UTextBlock* Text_RecordOverview; // 0x2a8(0x08)
	struct UWBP_PC_RecordDetail_C* WBP_PC_RecordDetail; // 0x2b0(0x08)
	struct UWBP_PC_RecordList_C* WBP_PC_RecordList; // 0x2b8(0x08)
	struct UWBP_PC_RecordOverview_C* WBP_PC_RecordOverview; // 0x2c0(0x08)

	void ShowChooseButton(); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.ShowChooseButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideChooseButton(); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.HideChooseButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BackToRecordList(); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.BackToRecordList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitRecord(); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.InitRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Switch Button(int32_t Button); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.Switch Button // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_RecordOverview_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.BndEvt__Button_RecordOverview_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_RecordList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.BndEvt__Button_RecordList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowDetail(); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.ShowDetail // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RecordMain(int32_t EntryPoint); // Function WBP_PC_RecordMain.WBP_PC_RecordMain_C.ExecuteUbergraph_WBP_PC_RecordMain // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

