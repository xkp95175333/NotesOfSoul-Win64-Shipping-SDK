// WidgetBlueprintGeneratedClass WBP_QuickToSpeakButton.WBP_QuickToSpeakButton_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_QuickToSpeakButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_21; // 0x268(0x08)
	struct UTextBlock* TextBlock_Content; // 0x270(0x08)
	struct FText Content; // 0x278(0x18)
	struct FMulticastInlineDelegate AddMessage; // 0x290(0x10)
	struct USoundBase* Sound; // 0x2a0(0x08)

	void SelectState(struct FText State); // Function WBP_QuickToSpeakButton.WBP_QuickToSpeakButton_C.SelectState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Add(); // Function WBP_QuickToSpeakButton.WBP_QuickToSpeakButton_C.Add // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_QuickToSpeakButton.WBP_QuickToSpeakButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_QuickToSpeakButton(int32_t EntryPoint); // Function WBP_QuickToSpeakButton.WBP_QuickToSpeakButton_C.ExecuteUbergraph_WBP_QuickToSpeakButton // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void AddMessage__DelegateSignature(); // Function WBP_QuickToSpeakButton.WBP_QuickToSpeakButton_C.AddMessage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

