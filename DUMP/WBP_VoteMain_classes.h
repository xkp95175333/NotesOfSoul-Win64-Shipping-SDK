// WidgetBlueprintGeneratedClass WBP_VoteMain.WBP_VoteMain_C
// Size: 0x2d1 (Inherited: 0x260)
struct UWBP_VoteMain_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_True; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_114; // 0x278(0x08)
	struct UImage* Image_340; // 0x280(0x08)
	struct UBorder* OutBorder; // 0x288(0x08)
	struct URichTextBlock* RichTextCD; // 0x290(0x08)
	struct UUniformGridPanel* UniformGridPanel_Humans; // 0x298(0x08)
	struct ABP_GSLangRenSha_C* As BP GSLang Ren Sha; // 0x2a0(0x08)
	struct ANOS_PlayerHuman* Player; // 0x2a8(0x08)
	struct TArray<struct UWBP_HumanState_C*> HumansStatePanel; // 0x2b0(0x10)
	struct FTimerHandle TimerHandle; // 0x2c0(0x08)
	float Vote Duration; // 0x2c8(0x04)
	int32_t ClickNumber; // 0x2cc(0x04)
	bool fakeValue; // 0x2d0(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_VoteMain.WBP_VoteMain_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_VoteMain.WBP_VoteMain_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_True_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_VoteMain.WBP_VoteMain_C.BndEvt__Button_True_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void DieOutPlayer(struct FEventRelevantData RelevantData); // Function WBP_VoteMain.WBP_VoteMain_C.DieOutPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(struct ANOS_PlayerHuman* Player, struct UWBP_HumanState_C* HumanState); // Function WBP_VoteMain.WBP_VoteMain_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetVoteCD(); // Function WBP_VoteMain.WBP_VoteMain_C.SetVoteCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Destroy(); // Function WBP_VoteMain.WBP_VoteMain_C.Destroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_VoteMain(int32_t EntryPoint); // Function WBP_VoteMain.WBP_VoteMain_C.ExecuteUbergraph_WBP_VoteMain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

