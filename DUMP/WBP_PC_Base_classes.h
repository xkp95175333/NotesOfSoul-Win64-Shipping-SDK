// WidgetBlueprintGeneratedClass WBP_PC_Base.WBP_PC_Base_C
// Size: 0x26c (Inherited: 0x260)
struct UWBP_PC_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	int32_t SpecPlayerUID; // 0x268(0x04)

	void Set Rank Base Data(struct UImage* Image, struct UTextBlock* Text, struct FRankLevel RankLevel); // Function WBP_PC_Base.WBP_PC_Base_C.Set Rank Base Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetRankLevel(struct FRankLevel RankLevel, int32_t RankLevelResult); // Function WBP_PC_Base.WBP_PC_Base_C.GetRankLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_Base.WBP_PC_Base_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_Base(int32_t EntryPoint); // Function WBP_PC_Base.WBP_PC_Base_C.ExecuteUbergraph_WBP_PC_Base // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

