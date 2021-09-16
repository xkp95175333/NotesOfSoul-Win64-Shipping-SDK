// BlueprintGeneratedClass BP_Listinfo.BP_Listinfo_C
// Size: 0x20c (Inherited: 0x140)
struct UBP_Listinfo_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	enum class E_RankType Type; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FGameGuildRank GameGuildRank; // 0x150(0x38)
	struct FGameMarketRank GameMarketRank; // 0x188(0x38)
	struct FGameLevelRank GameLevelRank; // 0x1c0(0x48)
	int32_t Index; // 0x208(0x04)

	void SetBaseInfo(enum class E_RankType Type, struct FGameGuildRank GameGuildRank, struct FGameMarketRank GameMarketRank, struct FGameLevelRank GameLevelRank, int32_t Index); // Function BP_Listinfo.BP_Listinfo_C.SetBaseInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetTextInfo(struct FText Row1, struct FText Row2, struct FText Row3, struct FText Row4); // Function BP_Listinfo.BP_Listinfo_C.SetTextInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Listinfo.BP_Listinfo_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Change(); // Function BP_Listinfo.BP_Listinfo_C.Change // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Listinfo(int32_t EntryPoint); // Function BP_Listinfo.BP_Listinfo_C.ExecuteUbergraph_BP_Listinfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

