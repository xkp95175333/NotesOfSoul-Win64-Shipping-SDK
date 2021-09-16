// BlueprintGeneratedClass BP_FittingRoomCom.BP_FittingRoomCom_C
// Size: 0x921 (Inherited: 0x151)
struct UBP_FittingRoomCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_FittingRoomAndBagCom_C* BP_ParentCom; // 0x160(0x08)
	struct TMap<enum class ECommodityType, struct UBP_TagCom_C*> FittingTagMap; // 0x168(0x50)
	struct TMap<enum class ECommodityType, struct UBP_BagCom_C*> BagTagMap; // 0x1b8(0x50)
	struct TArray<enum class ECommodityType> CommodityTagList; // 0x208(0x10)
	enum class ECommodityType CommodityType; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x220(0x08)
	int32_t CharacterID; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FNOS_HumanSuit CommodityHumanSuitData; // 0x230(0x350)
	struct FNOS_GhostSuit CommodityGhostSuitData; // 0x580(0x350)
	struct TMap<enum class ECommodityType, struct FNOS_Accessories> CommodityAccessoriesDataList; // 0x8d0(0x50)
	bool bFit; // 0x920(0x01)

	void InitData(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.UpdateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetGhostSuitAllType(struct FNOS_GhostSuit GhostSuit, struct TArray<enum class EAccessoriesType> NewParam); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.GetGhostSuitAllType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetHumanSuitAllType(struct FNOS_HumanSuit HumanSuit, struct TArray<enum class EAccessoriesType> NewParam); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.GetHumanSuitAllType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResolveCharacterDress(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.ResolveCharacterDress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateItemListInfo(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.UpdateItemListInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetVaildCommodityType(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.GetVaildCommodityType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Normal ItemByTag(struct UBP_TagCom_C* Com); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.Normal ItemByTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Equip ItemByBag(struct UBP_BagItemCom_C* Com); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.Equip ItemByBag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBagRoom(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.InitBagRoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init Fitting Room(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.Init Fitting Room // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickTagByTag(bool IsOn, enum class ECommodityType Type); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.OnClickTagByTag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickTagByToggle(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.OnClickTagByToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickTagByType(); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.OnClickTagByType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_FittingRoomCom(int32_t EntryPoint); // Function BP_FittingRoomCom.BP_FittingRoomCom_C.ExecuteUbergraph_BP_FittingRoomCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

