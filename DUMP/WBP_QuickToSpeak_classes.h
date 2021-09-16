// WidgetBlueprintGeneratedClass WBP_QuickToSpeak.WBP_QuickToSpeak_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_QuickToSpeak_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Quit; // 0x268(0x08)
	struct UImage* Image_111; // 0x270(0x08)
	struct UOverlay* Overlay_QuickToSpeak; // 0x278(0x08)
	struct UOverlay* Point; // 0x280(0x08)
	struct UWBP_QuickToSpeakButton_C* WBP_QuickToSpeakButton_2; // 0x288(0x08)
	struct UWBP_QuickToSpeakButton_C* WBP_QuickToSpeakButton_3; // 0x290(0x08)
	struct UWBP_QuickToSpeakButton_C* WBP_QuickToSpeakButton_4; // 0x298(0x08)
	struct UWBP_QuickToSpeakButton_C* WBP_QuickToSpeakButton_5; // 0x2a0(0x08)
	struct UWBP_QuickToSpeakButton_C* WBP_QuickToSpeakButton_6; // 0x2a8(0x08)
	struct UWBP_QuickToSpeakButton_C* WBP_QuickToSpeakButton_7; // 0x2b0(0x08)
	struct FMulticastInlineDelegate SetNews; // 0x2b8(0x10)
	struct UWBP_QuickToSpeakButton_C* GetCurrent; // 0x2c8(0x08)
	struct TArray<struct UWBP_QuickToSpeakButton_C*> QuickToSpeak; // 0x2d0(0x10)
	struct UWBP_QuickToSpeakButton_C* Current; // 0x2e0(0x08)
	struct FTimerHandle TimerHandle; // 0x2e8(0x08)

	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Call Bind Fun(float Float, struct UWBP_QuickToSpeakButton_C* WBP_QuickToSpeakButton); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.Call Bind Fun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void News(); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.News // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryActiveDir(); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.TryActiveDir // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_QuickToSpeak(int32_t EntryPoint); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.ExecuteUbergraph_WBP_QuickToSpeak // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void SetNews__DelegateSignature(); // Function WBP_QuickToSpeak.WBP_QuickToSpeak_C.SetNews__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

