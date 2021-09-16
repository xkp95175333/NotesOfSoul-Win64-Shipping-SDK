// WidgetBlueprintGeneratedClass WBP_PC_RO_HistoryRank.WBP_PC_RO_HistoryRank_C
// Size: 0x2f8 (Inherited: 0x26c)
struct UWBP_PC_RO_HistoryRank_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* Image_GhostHistRank; // 0x278(0x08)
	struct UImage* Image_HumanHistRank; // 0x280(0x08)
	struct UTextBlock* Text_GhostHistRank; // 0x288(0x08)
	struct UTextBlock* Text_HumanHistRank; // 0x290(0x08)
	struct TArray<struct UTexture2D*> Grank; // 0x298(0x10)
	struct TArray<struct UTexture2D*> Hrank; // 0x2a8(0x10)
	struct FRankNodeNew Ghost Top Rank; // 0x2b8(0x20)
	struct FRankNodeNew Human Top Rank; // 0x2d8(0x20)

	void SetHumanRank(); // Function WBP_PC_RO_HistoryRank.WBP_PC_RO_HistoryRank_C.SetHumanRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostRank(); // Function WBP_PC_RO_HistoryRank.WBP_PC_RO_HistoryRank_C.SetGhostRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_RO_HistoryRank.WBP_PC_RO_HistoryRank_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RO_HistoryRank(int32_t EntryPoint); // Function WBP_PC_RO_HistoryRank.WBP_PC_RO_HistoryRank_C.ExecuteUbergraph_WBP_PC_RO_HistoryRank // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

