// WidgetBlueprintGeneratedClass WBP_ErrorTip.WBP_ErrorTip_C
// Size: 0x2b4 (Inherited: 0x260)
struct UWBP_ErrorTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_131; // 0x268(0x08)
	struct UButton* ConfirmBtn; // 0x270(0x08)
	struct UImage* Image_34; // 0x278(0x08)
	struct UImage* Image_138; // 0x280(0x08)
	struct UTextBlock* TextBlock_84; // 0x288(0x08)
	struct UWidget* FocusUI; // 0x290(0x08)
	struct FText ErroText; // 0x298(0x18)
	int32_t ErroCode; // 0x2b0(0x04)

	void Construct(); // Function WBP_ErrorTip.WBP_ErrorTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ErrorTip.WBP_ErrorTip_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ErrorTip(int32_t EntryPoint); // Function WBP_ErrorTip.WBP_ErrorTip_C.ExecuteUbergraph_WBP_ErrorTip // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

