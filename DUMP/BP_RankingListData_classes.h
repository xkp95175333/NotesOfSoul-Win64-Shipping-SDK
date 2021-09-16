// BlueprintGeneratedClass BP_RankingListData.BP_RankingListData_C
// Size: 0x2c0 (Inherited: 0x151)
struct UBP_RankingListData_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct UBP_OnList_C*> TopThree; // 0x160(0x10)
	struct TArray<struct UBP_Listinfo_C*> ListInfo; // 0x170(0x10)
	struct TArray<struct FGameLevelRank> HumanGameLevel; // 0x180(0x10)
	struct TArray<struct FGameLevelRank> GhostGameLevel; // 0x190(0x10)
	int32_t CharacterGhostRankingIndex; // 0x1a0(0x04)
	int32_t CharacterHumanRankingIndex; // 0x1a4(0x04)
	struct FGameLevelRank MyGhost; // 0x1a8(0x48)
	struct FGameLevelRank MyHuman; // 0x1f0(0x48)
	struct TArray<struct FGameMarketRank> Market Rank; // 0x238(0x10)
	struct TArray<struct FGameGuildRank> Guild Rank; // 0x248(0x10)
	int32_t NotShamButtonNumber; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FGameMarketRank My Marke Rank; // 0x260(0x38)
	int32_t GameMarketRankingIndex; // 0x298(0x04)
	int32_t GameGuildRankingIndex; // 0x29c(0x04)
	struct TArray<struct UBP_Catalog_C*> CatalogArray; // 0x2a0(0x10)
	enum class E_RankType RankTypeByCreateButton; // 0x2b0(0x01)
	enum class E_Subdirectory Subdirectory; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct UBP_Listinfo_C* ThisListinfo; // 0x2b8(0x08)

	void AnimEnd(); // Function BP_RankingListData.BP_RankingListData_C.AnimEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeButtonColor(enum class E_RankType Type); // Function BP_RankingListData.BP_RankingListData_C.ChangeButtonColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeString(enum class E_RankType Type); // Function BP_RankingListData.BP_RankingListData_C.ChangeString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostCharacterRanking(struct TArray<struct FGameLevelRank> CharacterArray, struct FGameLevelRank ThisRanking); // Function BP_RankingListData.BP_RankingListData_C.SetGhostCharacterRanking // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RequestGameHumanCharacterRank(bool SubcatalogUse); // Function BP_RankingListData.BP_RankingListData_C.RequestGameHumanCharacterRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RefreshRank(enum class E_Subdirectory Subdirectory); // Function BP_RankingListData.BP_RankingListData_C.RefreshRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RequestGameGuildRanking(bool SubcatalogUse); // Function BP_RankingListData.BP_RankingListData_C.RequestGameGuildRanking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Request Game Market Rank(bool SubcatalogUse); // Function BP_RankingListData.BP_RankingListData_C.Request Game Market Rank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearArrayandPanel(); // Function BP_RankingListData.BP_RankingListData_C.ClearArrayandPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RequestGameGhostCharacterRank(bool SubcatalogUse); // Function BP_RankingListData.BP_RankingListData_C.RequestGameGhostCharacterRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGuilRank(struct TArray<struct FGameGuildRank> GameGuildRank); // Function BP_RankingListData.BP_RankingListData_C.SetGuilRank // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set on List Type(int32_t Index, enum class E_RankType Type, struct FGameLevelRank GameLevelRank, struct FGameMarketRank GameMarketRank, struct FGameGuildRank GameGuildRank); // Function BP_RankingListData.BP_RankingListData_C.Set on List Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMarketRanking(struct TArray<struct FGameMarketRank> GameMarkeRanking, struct FGameMarketRank ThisGameMarkeRanking); // Function BP_RankingListData.BP_RankingListData_C.SetMarketRanking // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanCharacterRanking(struct TArray<struct FGameLevelRank> CharacterArray, struct FGameLevelRank ThisRanking); // Function BP_RankingListData.BP_RankingListData_C.SetHumanCharacterRanking // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Create Button(enum class E_RankType RankingType, bool IsRefresh); // Function BP_RankingListData.BP_RankingListData_C.Create Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set This Info(int32_t Index, struct FGameLevelRank GameLevelRank, struct FGameMarketRank GameMarketRank, struct FGameGuildRank GameGuildRank, enum class E_RankType RankType); // Function BP_RankingListData.BP_RankingListData_C.Set This Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetTopThree(struct FString UIName, int32_t Index, enum class E_RankType RankType, struct FGameLevelRank Character, struct FGameMarketRank Market, struct FGameGuildRank Guild); // Function BP_RankingListData.BP_RankingListData_C.SetTopThree // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_RankingListData.BP_RankingListData_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_RankingListData.BP_RankingListData_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Catalog(struct FText Ctatalog, enum class E_Subdirectory SubdirectoryType, bool IsOn, bool IsRaycast, bool IsShom); // Function BP_RankingListData.BP_RankingListData_C.Catalog // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Humans(struct TArray<struct FGameLevelRank> HumanRanks, struct FGameLevelRank MyHumanRank); // Function BP_RankingListData.BP_RankingListData_C.Humans // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Ghosts(struct TArray<struct FGameLevelRank> GhostRank, struct FGameLevelRank MyGhostRank); // Function BP_RankingListData.BP_RankingListData_C.Ghosts // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDestroyBP(); // Function BP_RankingListData.BP_RankingListData_C.OnDestroyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void DestroyBP(); // Function BP_RankingListData.BP_RankingListData_C.DestroyBP // (BlueprintEvent) // @ game+0x1ec38f0
	void MarketRank(struct TArray<struct FGameMarketRank> MarketRank, struct FGameMarketRank MyMarkeRank); // Function BP_RankingListData.BP_RankingListData_C.MarketRank // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GuildRank(struct TArray<struct FGameGuildRank> GuildRank); // Function BP_RankingListData.BP_RankingListData_C.GuildRank // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnScrollRefresh(); // Function BP_RankingListData.BP_RankingListData_C.OnScrollRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RankingListData(int32_t EntryPoint); // Function BP_RankingListData.BP_RankingListData_C.ExecuteUbergraph_BP_RankingListData // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

