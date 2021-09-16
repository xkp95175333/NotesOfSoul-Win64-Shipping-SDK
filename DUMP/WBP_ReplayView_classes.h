// WidgetBlueprintGeneratedClass WBP_ReplayView.WBP_ReplayView_C
// Size: 0x324 (Inherited: 0x260)
struct UWBP_ReplayView_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button; // 0x268(0x08)
	struct UButton* Button_3; // 0x270(0x08)
	struct UButton* Button_59; // 0x278(0x08)
	struct UButton* Button_62; // 0x280(0x08)
	struct UCheckBox* CheckBox_1; // 0x288(0x08)
	struct UCheckBox* CheckBox_61; // 0x290(0x08)
	struct UCanvasPanel* ChoosePawnView; // 0x298(0x08)
	struct UEditableTextBox* EditableTextBox_29; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_68; // 0x2b0(0x08)
	struct UImage* Image_141; // 0x2b8(0x08)
	struct UCanvasPanel* MainControlBoard; // 0x2c0(0x08)
	struct UTextBlock* PlayerName; // 0x2c8(0x08)
	struct UButton* PrevMan; // 0x2d0(0x08)
	struct UProgressBar* ProgressBar_34; // 0x2d8(0x08)
	struct USlider* Slider_85; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_3; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_106; // 0x2f0(0x08)
	struct UButton* TheNextMan; // 0x2f8(0x08)
	struct ANOS_ReplayWatchPawn* OwnerPawn; // 0x300(0x08)
	struct FTimerHandle Timer; // 0x308(0x08)
	struct TArray<struct ANOS_PlayerBase*> AllPlayer; // 0x310(0x10)
	int32_t CurrentIndex; // 0x320(0x04)

	void UnPossess(); // Function WBP_ReplayView.WBP_ReplayView_C.UnPossess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PossessOnePawn(int32_t VectorIndex, struct ANOS_PlayerBase* Pawn); // Function WBP_ReplayView.WBP_ReplayView_C.PossessOnePawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckHasPlayer(); // Function WBP_ReplayView.WBP_ReplayView_C.CheckHasPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchControlBoardVisible(bool IsShow); // Function WBP_ReplayView.WBP_ReplayView_C.SwitchControlBoardVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Second to Minute(float A, struct FString Minute, struct FString Second); // Function WBP_ReplayView.WBP_ReplayView_C.Second to Minute // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	float GetValue_1(); // Function WBP_ReplayView.WBP_ReplayView_C.GetValue_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FText Get Text 0(); // Function WBP_ReplayView.WBP_ReplayView_C.Get Text 0 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void JumpToTimeSecond(float TimeSecond); // Function WBP_ReplayView.WBP_ReplayView_C.JumpToTimeSecond // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetRePlaySpeed(float SpeedScale); // Function WBP_ReplayView.WBP_ReplayView_C.SetRePlaySpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	float GetPercent_1(); // Function WBP_ReplayView.WBP_ReplayView_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ReplayView.WBP_ReplayView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_58_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ReplayView.WBP_ReplayView_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ReplayView.WBP_ReplayView_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_61_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ReplayView.WBP_ReplayView_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ReplayView.WBP_ReplayView_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_ReplayView.WBP_ReplayView_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CheckBox_60_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_ReplayView.WBP_ReplayView_C.BndEvt__CheckBox_60_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_ReplayView.WBP_ReplayView_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function WBP_ReplayView.WBP_ReplayView_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__PrevMan_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ReplayView.WBP_ReplayView_C.BndEvt__PrevMan_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__TheNextMan_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ReplayView.WBP_ReplayView_C.BndEvt__TheNextMan_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ReplayView(int32_t EntryPoint); // Function WBP_ReplayView.WBP_ReplayView_C.ExecuteUbergraph_WBP_ReplayView // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

