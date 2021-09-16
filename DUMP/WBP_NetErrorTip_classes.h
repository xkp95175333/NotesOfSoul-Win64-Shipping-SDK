// WidgetBlueprintGeneratedClass WBP_NetErrorTip.WBP_NetErrorTip_C
// Size: 0x2a1 (Inherited: 0x260)
struct UWBP_NetErrorTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* ConfirmBtn; // 0x268(0x08)
	struct UImage* Image_34; // 0x270(0x08)
	struct UTextBlock* TextBlock_84; // 0x278(0x08)
	struct UWidget* FocusUI; // 0x280(0x08)
	struct FText ErroText; // 0x288(0x18)
	enum class ENetworkFailure NetError; // 0x2a0(0x01)

	void Construct(); // Function WBP_NetErrorTip.WBP_NetErrorTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_NetErrorTip.WBP_NetErrorTip_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_NetErrorTip(int32_t EntryPoint); // Function WBP_NetErrorTip.WBP_NetErrorTip_C.ExecuteUbergraph_WBP_NetErrorTip // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

