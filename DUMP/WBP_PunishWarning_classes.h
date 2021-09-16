// WidgetBlueprintGeneratedClass WBP_PunishWarning.WBP_PunishWarning_C
// Size: 0x2a4 (Inherited: 0x260)
struct UWBP_PunishWarning_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ButtonAnim; // 0x268(0x08)
	struct UButton* BG_Btn; // 0x270(0x08)
	struct UButton* Confirm; // 0x278(0x08)
	struct UImage* PanleBG; // 0x280(0x08)
	struct UImage* Title; // 0x288(0x08)
	struct TArray<struct FColor> RGB; // 0x290(0x10)
	int32_t Times; // 0x2a0(0x04)

	void Construct(); // Function WBP_PunishWarning.WBP_PunishWarning_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Ticker(); // Function WBP_PunishWarning.WBP_PunishWarning_C.Ticker // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PunishWarning.WBP_PunishWarning_C.BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__BG_Btn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_PunishWarning.WBP_PunishWarning_C.BndEvt__BG_Btn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PunishWarning(int32_t EntryPoint); // Function WBP_PunishWarning.WBP_PunishWarning_C.ExecuteUbergraph_WBP_PunishWarning // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

