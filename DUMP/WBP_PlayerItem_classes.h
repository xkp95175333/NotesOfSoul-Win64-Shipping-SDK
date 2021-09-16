// WidgetBlueprintGeneratedClass WBP_PlayerItem.WBP_PlayerItem_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_PlayerItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_114; // 0x268(0x08)
	struct UImage* Image_41; // 0x270(0x08)
	struct UImage* Image_57; // 0x278(0x08)
	struct UProgressBar* ProgressBar_105; // 0x280(0x08)
	struct USlider* Slider_47; // 0x288(0x08)
	struct UTextBlock* TextBlock_51; // 0x290(0x08)
	struct UTextBlock* TextBlock_82; // 0x298(0x08)
	struct FString Name; // 0x2a0(0x10)
	int32_t UID; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct ANOS_PlayerBase* Character; // 0x2b8(0x08)

	void GetReportInfo(struct TSoftObjectPtr<struct UTexture2D> Character Ico, struct FText PlayerName, struct FText Character Name, int32_t TargetUID); // Function WBP_PlayerItem.WBP_PlayerItem_C.GetReportInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FText GetText_1(); // Function WBP_PlayerItem.WBP_PlayerItem_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	float GetPercent_1(); // Function WBP_PlayerItem.WBP_PlayerItem_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PlayerItem.WBP_PlayerItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_113_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PlayerItem.WBP_PlayerItem_C.BndEvt__Button_113_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Slider_46_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature(); // Function WBP_PlayerItem.WBP_PlayerItem_C.BndEvt__Slider_46_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PlayerItem(int32_t EntryPoint); // Function WBP_PlayerItem.WBP_PlayerItem_C.ExecuteUbergraph_WBP_PlayerItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

