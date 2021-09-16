// BlueprintGeneratedClass BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C
// Size: 0x268 (Inherited: 0x151)
struct UBP_SetConditionsTwoPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FColor TextNormolColor; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct TArray<struct FString> RankMap; // 0x168(0x10)
	int32_t CurLevel; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FRankNodeNew CurRank; // 0x180(0x20)
	struct FString CurNotice; // 0x1a0(0x10)
	bool CanJoin; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct UUIText* Level; // 0x1b8(0x08)
	struct UUIText* Rank; // 0x1c0(0x08)
	struct UUIText* MinLevelTitle; // 0x1c8(0x08)
	struct UUIText* MinRankTitle; // 0x1d0(0x08)
	struct UUIText* slogan; // 0x1d8(0x08)
	struct FColor TextDesableColor; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct ULGUISpriteData* Box_Normal; // 0x1e8(0x08)
	struct ULGUISpriteData* Box_Ok; // 0x1f0(0x08)
	struct UUIToggleComponent* YesBotton; // 0x1f8(0x08)
	struct UUIToggleComponent* NoButton; // 0x200(0x08)
	struct TArray<struct UUIItem*> ItemArray; // 0x208(0x10)
	struct UTexture2D* NormalTexture; // 0x218(0x08)
	struct UTexture2D* OkTexture; // 0x220(0x08)
	struct UUISprite* YesSpri; // 0x228(0x08)
	struct UUISprite* NoSpri; // 0x230(0x08)
	struct UUIItem* RankSButton; // 0x238(0x08)
	struct UUIItem* LevelSButton; // 0x240(0x08)
	struct TArray<struct UUIItem*> InitputArray; // 0x248(0x10)
	struct TArray<struct FRankNodeNew> RankArray; // 0x258(0x10)

	void UpdateCanJoin(bool CanJoin); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.UpdateCanJoin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void No(bool InBool); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.No // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Yes(bool InBool); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.Yes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OK(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.OK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Levels(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.Levels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitLevel(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.InitLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateRank(struct FRankNodeNew NewLevel); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.UpdateRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateLevel(int32_t NewLevel); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.UpdateLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RankS(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.RankS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitRank(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.InitRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SetConditionsTwoPanelCom(int32_t EntryPoint); // Function BP_SetConditionsTwoPanelCom.BP_SetConditionsTwoPanelCom_C.ExecuteUbergraph_BP_SetConditionsTwoPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

