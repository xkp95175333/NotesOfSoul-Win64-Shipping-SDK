// WidgetBlueprintGeneratedClass WBP_EndSpeech.WBP_EndSpeech_C
// Size: 0x280 (Inherited: 0x260)
struct UWBP_EndSpeech_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_EndSpeech; // 0x268(0x08)
	struct FMulticastInlineDelegate TerminateSpeak; // 0x270(0x10)

	void BndEvt__Button_EndSpeech_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_EndSpeech.WBP_EndSpeech_C.BndEvt__Button_EndSpeech_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_EndSpeech.WBP_EndSpeech_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void EndSpeak(); // Function WBP_EndSpeech.WBP_EndSpeech_C.EndSpeak // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_EndSpeech(int32_t EntryPoint); // Function WBP_EndSpeech.WBP_EndSpeech_C.ExecuteUbergraph_WBP_EndSpeech // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void TerminateSpeak__DelegateSignature(); // Function WBP_EndSpeech.WBP_EndSpeech_C.TerminateSpeak__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

