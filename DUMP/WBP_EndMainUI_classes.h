// WidgetBlueprintGeneratedClass WBP_EndMainUI.WBP_EndMainUI_C
// Size: 0x3a4 (Inherited: 0x260)
struct UWBP_EndMainUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Exit; // 0x268(0x08)
	struct UButton* Button_NextStep; // 0x270(0x08)
	struct UHorizontalBox* DropItemHorizontalBox; // 0x278(0x08)
	struct UTextBlock* PlayerName; // 0x280(0x08)
	struct UBorder* Rank; // 0x288(0x08)
	struct UOverlay* Rankings; // 0x290(0x08)
	struct UTextBlock* TextBlock_232; // 0x298(0x08)
	struct UUniformGridPanel* UniformGridPanel_Score; // 0x2a0(0x08)
	struct UWBP_AddSceorPanel_C* WBP_AddSceorPanel; // 0x2a8(0x08)
	struct UWBP_AddSceorPanel_C* WBP_AddSceorPanel_105; // 0x2b0(0x08)
	struct UWBP_AddSceorPanel_C* WBP_AddSceorPanel_199; // 0x2b8(0x08)
	struct UWBP_Optional_C* WBP_Optional; // 0x2c0(0x08)
	struct UWBP_PC_RD_GhostRecord_C* WBP_PC_RD_GhostRecord; // 0x2c8(0x08)
	struct UWBP_PC_RD_HumanRecords_C* WBP_PC_RD_HumanRecords; // 0x2d0(0x08)
	struct UWBP_TakeAlongItem_C* WBP_TakeAlongItem; // 0x2d8(0x08)
	struct UWBP_TakeAlongItem_C* WBP_TakeAlongItem_103; // 0x2e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2e8(0x08)
	struct ANOS_CharacterModel* Close Accounts Character; // 0x2f0(0x08)
	struct ANOS_GSArenaBase* As NOS GSArena Base; // 0x2f8(0x08)
	struct TArray<struct UUserWidget*> AddPanel; // 0x300(0x10)
	int32_t Intimacy Level; // 0x310(0x04)
	int32_t intimacy; // 0x314(0x04)
	struct FGhostSettle GhostSettle; // 0x318(0x3c)
	struct FHumanSettle HumanSettle; // 0x354(0x44)
	struct ANOS_CharacterModel* Close Accounts Character_1; // 0x398(0x08)
	int32_t score; // 0x3a0(0x04)

	void PrintInfo(struct FSettleInfo SettleData); // Function WBP_EndMainUI.WBP_EndMainUI_C.PrintInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAllPawnInfo(); // Function WBP_EndMainUI.WBP_EndMainUI_C.SetAllPawnInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddChildItemInfo(); // Function WBP_EndMainUI.WBP_EndMainUI_C.AddChildItemInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddChildScoreInfo(); // Function WBP_EndMainUI.WBP_EndMainUI_C.AddChildScoreInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetItem(struct TArray<int32_t> Return); // Function WBP_EndMainUI.WBP_EndMainUI_C.GetItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct TArray<int32_t> GetTalent(); // Function WBP_EndMainUI.WBP_EndMainUI_C.GetTalent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FText NotNull(float Value); // Function WBP_EndMainUI.WBP_EndMainUI_C.NotNull // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetIntimacy(); // Function WBP_EndMainUI.WBP_EndMainUI_C.GetIntimacy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetScore(struct FSettleInfo SettleInfo); // Function WBP_EndMainUI.WBP_EndMainUI_C.SetScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Widget Tier(enum class EInputMode InputMode, bool CurNeedRemove); // Function WBP_EndMainUI.WBP_EndMainUI_C.Widget Tier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetName(); // Function WBP_EndMainUI.WBP_EndMainUI_C.SetName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_EndMainUI.WBP_EndMainUI_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_EndMainUI.WBP_EndMainUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_NextStep_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_EndMainUI.WBP_EndMainUI_C.BndEvt__Button_NextStep_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_EndMainUI.WBP_EndMainUI_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void SpacebarExitGame(); // Function WBP_EndMainUI.WBP_EndMainUI_C.SpacebarExitGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_EndMainUI(int32_t EntryPoint); // Function WBP_EndMainUI.WBP_EndMainUI_C.ExecuteUbergraph_WBP_EndMainUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

