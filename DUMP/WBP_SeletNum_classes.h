// WidgetBlueprintGeneratedClass WBP_SeletNum.WBP_SeletNum_C
// Size: 0x2a4 (Inherited: 0x260)
struct UWBP_SeletNum_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UComboBoxString* ComboBoxString_92; // 0x268(0x08)
	struct UTextBlock* TextBlock_227; // 0x270(0x08)
	struct FText SettingName; // 0x278(0x18)
	struct TArray<struct FText> OptionArray; // 0x290(0x10)
	int32_t DefaulIndex; // 0x2a0(0x04)

	void UpdateCombString(struct TArray<struct FText> Resolution); // Function WBP_SeletNum.WBP_SeletNum_C.UpdateCombString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLanguageUpdateText(); // Function WBP_SeletNum.WBP_SeletNum_C.OnLanguageUpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsEnabel(bool bInIsEnabled); // Function WBP_SeletNum.WBP_SeletNum_C.SetIsEnabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSeletFromIndex(int32_t Index); // Function WBP_SeletNum.WBP_SeletNum_C.UpdateSeletFromIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	int32_t GetSeletIndex(); // Function WBP_SeletNum.WBP_SeletNum_C.GetSeletIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_SeletNum.WBP_SeletNum_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_SeletNum(int32_t EntryPoint); // Function WBP_SeletNum.WBP_SeletNum_C.ExecuteUbergraph_WBP_SeletNum // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

