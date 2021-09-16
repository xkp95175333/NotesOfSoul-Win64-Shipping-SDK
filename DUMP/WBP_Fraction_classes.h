// WidgetBlueprintGeneratedClass WBP_Fraction.WBP_Fraction_C
// Size: 0x2b2 (Inherited: 0x260)
struct UWBP_Fraction_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* StartAnimation; // 0x268(0x08)
	struct UWidgetAnimation* ExitAnimation; // 0x270(0x08)
	struct UBorder* Border_BG; // 0x278(0x08)
	struct USizeBox* SizeBox_Base; // 0x280(0x08)
	struct UTextBlock* TextBlock_Numbar; // 0x288(0x08)
	int32_t KxTextFraction; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FText Type; // 0x298(0x18)
	bool ScreeORSoul; // 0x2b0(0x01)
	bool RecoverORLose; // 0x2b1(0x01)

	void SequenceEvent__ENTRYPOINTWBP_Fraction_1(); // Function WBP_Fraction.WBP_Fraction_C.SequenceEvent__ENTRYPOINTWBP_Fraction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClierSelfAnim(); // Function WBP_Fraction.WBP_Fraction_C.ClierSelfAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Border_33_Event_1(); // Function WBP_Fraction.WBP_Fraction_C.Border_33_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_Fraction.WBP_Fraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Fraction(int32_t EntryPoint); // Function WBP_Fraction.WBP_Fraction_C.ExecuteUbergraph_WBP_Fraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

