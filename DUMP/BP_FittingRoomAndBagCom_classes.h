// BlueprintGeneratedClass BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C
// Size: 0x2c8 (Inherited: 0x151)
struct UBP_FittingRoomAndBagCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIToggleComponent* BagToggle; // 0x160(0x08)
	struct UUIToggleComponent* FittingToggle; // 0x168(0x08)
	struct UUIItem* GridLayoutBox; // 0x170(0x08)
	struct UUIItem* VerticalLayout; // 0x178(0x08)
	struct ULGUIBasePanel* HuamanFittingTagCom; // 0x180(0x08)
	struct ULGUIBasePanel* GhostFittingTagCom; // 0x188(0x08)
	int32_t CharacterID; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct TMap<enum class ECommodityType, struct ULGUIBasePanel*> FittingCommodityMap; // 0x198(0x50)
	struct TMap<enum class ECommodityType, struct UDataTable*> CommodityDTMap; // 0x1e8(0x50)
	struct TArray<enum class ECommodityType> HumanFittingList; // 0x238(0x10)
	struct TArray<enum class ECommodityType> GhostFittingList; // 0x248(0x10)
	struct TArray<enum class ECommodityType> BagList; // 0x258(0x10)
	struct UBP_BasePanel_C* CurrentGridTag; // 0x268(0x08)
	struct ULGUIBasePanel* BagFittingTagCom; // 0x270(0x08)
	bool IsFitting; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct ULGUIBasePanel* CurrentVerticalLayout; // 0x280(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x288(0x08)
	struct FLinearColor NormalTextColor; // 0x290(0x10)
	struct FLinearColor HighTextColor; // 0x2a0(0x10)
	struct UUIText* BagText; // 0x2b0(0x08)
	struct UUIText* FittingText; // 0x2b8(0x08)
	struct FColor NormalSprintColor; // 0x2c0(0x04)
	struct FColor HighSprintColor; // 0x2c4(0x04)

	void SetToggleSelect(bool Select, struct UUIText* TextCom, struct UUIToggleComponent* ToggleCom); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.SetToggleSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Normal ItemByTag(struct UBP_TagCom_C* Com); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.Normal ItemByTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSkinTypeByID(int32_t SkinId, enum class ECommodityType Type); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.GetSkinTypeByID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseCurrentLayout(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.CloseCurrentLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseCurrentTagGrid(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.CloseCurrentTagGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Check Grid Type(enum class ECommodityType In, int32_t Out); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.Check Grid Type // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EquipItemByBag(struct UBP_BagItemCom_C* Com); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.EquipItemByBag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitFittingAndBag(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.InitFittingAndBag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OpenTagGridByTag(enum class ECommodityType Type); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OpenTagGridByTag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseTagGridByTag(enum class ECommodityType Type); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.CloseTagGridByTag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickFittingByToggle(bool IsOn); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickFittingByToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickHumanFittingByToggle(bool IsOn); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickHumanFittingByToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickGhostFittingByToggle(bool IsOn); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickGhostFittingByToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void UpdataFittingSkinData(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.UpdataFittingSkinData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickBagByToggle(bool IsOn); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickBagByToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenTagGridbyToggle(enum class ECommodityType Type); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OpenTagGridbyToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickCharacterByHead(int32_t CharacterID); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.ClickCharacterByHead // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickHumanFittingByCharacter(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickHumanFittingByCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickGhostFittingByCharacter(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickGhostFittingByCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickSkinByShop(int32_t CharaterID, int32_t SkinId); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.ClickSkinByShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickFittingByType(enum class ECommodityType Type); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickFittingByType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickHumanFittingByType(enum class ECommodityType Type); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickHumanFittingByType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickGhostFittingByType(enum class ECommodityType Type); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickGhostFittingByType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickBagByType(enum class ECommodityType Type); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.OnClickBagByType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickItemByShop(int32_t ItemId); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.ClickItemByShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCurrentGridTag(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.UpdateCurrentGridTag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdataBagItemData(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.UpdataBagItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdataBagHumanTalentData(); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.UpdataBagHumanTalentData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_FittingRoomAndBagCom(int32_t EntryPoint); // Function BP_FittingRoomAndBagCom.BP_FittingRoomAndBagCom_C.ExecuteUbergraph_BP_FittingRoomAndBagCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

