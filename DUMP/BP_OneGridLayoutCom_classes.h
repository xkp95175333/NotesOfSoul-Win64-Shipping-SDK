// BlueprintGeneratedClass BP_OneGridLayoutCom.BP_OneGridLayoutCom_C
// Size: 0x1a0 (Inherited: 0x151)
struct UBP_OneGridLayoutCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* OneGridLayout; // 0x160(0x08)
	enum class ECommodityType CommodityType; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UDataTable* SuitData; // 0x170(0x08)
	struct UBP_FittingRoomAndBagCom_C* BP_ParentCom; // 0x178(0x08)
	int32_t CharacterID; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x188(0x08)
	struct TArray<struct UBP_BagItemCom_C*> LayoutComList; // 0x190(0x10)

	void UpdateSocialData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateSocialData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSocialList(struct TArray<int32_t> Values); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.GetSocialList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ResetSocialData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ResetSocialData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSocialData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitSocialData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearComList(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ClearComList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetVaildSeconds(int32_t EndSecomds, int32_t OffsetSeconds); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.GetVaildSeconds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetVaildItemList(struct TArray<int32_t> List); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.GetVaildItemList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetGhostSkinListID(struct TArray<int32_t> NewParam); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.GetGhostSkinListID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetHumanSkinListID(struct TArray<int32_t> NewParam); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.GetHumanSkinListID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSpecialData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateSpecialData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanTalentData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateHumanTalentData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateConsumableData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateConsumableData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHomeData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateHomeData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGhostSuitData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateGhostSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateAccessoriesData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateAccessoriesData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanSuitData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateHumanSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetGhostSuit Data(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ResetGhostSuit Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetOne Grid Layout(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ResetOne Grid Layout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetAccessories Data(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ResetAccessories Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetHuman Suit Data(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ResetHuman Suit Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ResetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSpecialData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitSpecialData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanTalentData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitHumanTalentData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConsumableData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitConsumableData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHomeData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitHomeData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGhostSuitData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitGhostSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAccessoriesData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitAccessoriesData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanSuitData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitHumanSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsValidConsumable(enum class EInventoryType Type, bool IsVaild); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.IsValidConsumable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitOneGridLayout(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.InitOneGridLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void EnterClip(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.EnterClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExitClip(); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ExitClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneGridLayoutCom(int32_t EntryPoint); // Function BP_OneGridLayoutCom.BP_OneGridLayoutCom_C.ExecuteUbergraph_BP_OneGridLayoutCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

