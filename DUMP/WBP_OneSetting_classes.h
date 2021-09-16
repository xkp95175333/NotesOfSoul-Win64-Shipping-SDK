// WidgetBlueprintGeneratedClass WBP_OneSetting.WBP_OneSetting_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_OneSetting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Check; // 0x268(0x08)
	struct UTextBlock* CloseText; // 0x270(0x08)
	struct UButton* NoCheck; // 0x278(0x08)
	struct UTextBlock* OpenText; // 0x280(0x08)
	struct UTextBlock* TextBlock_93; // 0x288(0x08)
	bool IsOpen; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FText SettingName; // 0x298(0x18)
	struct FMulticastInlineDelegate OnStateChange; // 0x2b0(0x10)
	bool NewVar_1; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FSlateColor NormalColor; // 0x2c8(0x28)
	struct FSlateColor OnChooseColor; // 0x2f0(0x28)

	void SetIsEnabkle(bool bInIsEnabled); // Function WBP_OneSetting.WBP_OneSetting_C.SetIsEnabkle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetState(bool IsOpen); // Function WBP_OneSetting.WBP_OneSetting_C.GetState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ChangeState(bool Index); // Function WBP_OneSetting.WBP_OneSetting_C.ChangeState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__NoCheck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneSetting.WBP_OneSetting_C.BndEvt__NoCheck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Check_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneSetting.WBP_OneSetting_C.BndEvt__Check_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_OneSetting.WBP_OneSetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_OneSetting(int32_t EntryPoint); // Function WBP_OneSetting.WBP_OneSetting_C.ExecuteUbergraph_WBP_OneSetting // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnStateChange__DelegateSignature(); // Function WBP_OneSetting.WBP_OneSetting_C.OnStateChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

