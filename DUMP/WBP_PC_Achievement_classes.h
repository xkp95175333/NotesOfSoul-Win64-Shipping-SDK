// WidgetBlueprintGeneratedClass WBP_PC_Achievement.WBP_PC_Achievement_C
// Size: 0x284 (Inherited: 0x26c)
struct UWBP_PC_Achievement_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UUniformGridPanel* MissionPanel; // 0x278(0x08)
	int32_t Current Row; // 0x280(0x04)

	void CalculateRowAndColumn(int32_t CurrentRow, int32_t CurrentIndex, int32_t NewParam, int32_t CurrentColumn); // Function WBP_PC_Achievement.WBP_PC_Achievement_C.CalculateRowAndColumn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_Achievement.WBP_PC_Achievement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_Achievement(int32_t EntryPoint); // Function WBP_PC_Achievement.WBP_PC_Achievement_C.ExecuteUbergraph_WBP_PC_Achievement // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

