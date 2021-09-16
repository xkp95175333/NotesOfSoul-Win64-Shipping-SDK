// WidgetBlueprintGeneratedClass WBP_CDKey.WBP_CDKey_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_CDKey_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_30; // 0x268(0x08)
	struct UButton* Button_86; // 0x270(0x08)
	struct UButton* ConfirmBtn; // 0x278(0x08)
	struct UEditableTextBox* EditableTextBox_50; // 0x280(0x08)
	struct UTextBlock* ErrorText; // 0x288(0x08)
	struct UImage* Image_23; // 0x290(0x08)
	struct UImage* Image_54; // 0x298(0x08)

	void BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CDKey.WBP_CDKey_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnUseCDKeyRsp(int32_t code); // Function WBP_CDKey.WBP_CDKey_C.OnUseCDKeyRsp // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_29_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CDKey.WBP_CDKey_C.BndEvt__Button_29_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_CDKey(int32_t EntryPoint); // Function WBP_CDKey.WBP_CDKey_C.ExecuteUbergraph_WBP_CDKey // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

