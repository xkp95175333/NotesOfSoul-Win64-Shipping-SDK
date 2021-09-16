// WidgetBlueprintGeneratedClass WBP_HeadChoose.WBP_HeadChoose_C
// Size: 0x270 (Inherited: 0x260)
struct UWBP_HeadChoose_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWrapBox* WrapBox_93; // 0x268(0x08)

	bool IsContant(int32_t B); // Function WBP_HeadChoose.WBP_HeadChoose_C.IsContant // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdateBoard(struct UDataTable* ImageTable, struct TArray<int32_t> GetIconIndex, struct TArray<struct UWBP_HeadIcon_C*> NewLocalVar_01); // Function WBP_HeadChoose.WBP_HeadChoose_C.UpdateBoard // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct UWBP_HeadIcon_C* AddIconItem(bool CanChoose, int32_t ID, struct FText InText, struct TSoftObjectPtr<struct UTexture2D> Texture); // Function WBP_HeadChoose.WBP_HeadChoose_C.AddIconItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_HeadChoose.WBP_HeadChoose_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_HeadChoose(int32_t EntryPoint); // Function WBP_HeadChoose.WBP_HeadChoose_C.ExecuteUbergraph_WBP_HeadChoose // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

