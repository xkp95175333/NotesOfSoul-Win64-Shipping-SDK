// WidgetBlueprintGeneratedClass WBP_QuitConfim.WBP_QuitConfim_C
// Size: 0x2a1 (Inherited: 0x260)
struct UWBP_QuitConfim_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Cancel; // 0x268(0x08)
	struct UTextBlock* CancelText; // 0x270(0x08)
	struct UButton* Confim; // 0x278(0x08)
	struct UTextBlock* ConfimText; // 0x280(0x08)
	struct UImage* Image_64; // 0x288(0x08)
	struct UImage* Image_157; // 0x290(0x08)
	struct UTextBlock* TextBlock_437; // 0x298(0x08)
	bool IsInGame; // 0x2a0(0x01)

	struct FText GetText_1(); // Function WBP_QuitConfim.WBP_QuitConfim_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_QuitConfim.WBP_QuitConfim_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_QuitConfim.WBP_QuitConfim_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Confim_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_QuitConfim.WBP_QuitConfim_C.BndEvt__Confim_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Confim_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_QuitConfim.WBP_QuitConfim_C.BndEvt__Confim_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Confim_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_QuitConfim.WBP_QuitConfim_C.BndEvt__Confim_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // Function WBP_QuitConfim.WBP_QuitConfim_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_QuitConfim.WBP_QuitConfim_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_QuitConfim(int32_t EntryPoint); // Function WBP_QuitConfim.WBP_QuitConfim_C.ExecuteUbergraph_WBP_QuitConfim // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

