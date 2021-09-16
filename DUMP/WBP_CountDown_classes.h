// WidgetBlueprintGeneratedClass WBP_CountDown.WBP_CountDown_C
// Size: 0x299 (Inherited: 0x260)
struct UWBP_CountDown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_29; // 0x268(0x08)
	struct ANOS_GSArenaBase* NOSGS; // 0x270(0x08)
	bool bPauseGameTime; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FText Result; // 0x280(0x18)
	bool Save Pause Game Time; // 0x298(0x01)

	struct FText GetText_1(); // Function WBP_CountDown.WBP_CountDown_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_CountDown.WBP_CountDown_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_CountDown(int32_t EntryPoint); // Function WBP_CountDown.WBP_CountDown_C.ExecuteUbergraph_WBP_CountDown // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

