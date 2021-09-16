// BlueprintGeneratedClass BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C
// Size: 0x1c0 (Inherited: 0x151)
struct UBP_TwoGridLayoutCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* DownGridLayout; // 0x160(0x08)
	enum class ECommodityType CommodityType; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UDataTable* HumanSkinData; // 0x170(0x08)
	struct UBP_FittingRoomAndBagCom_C* BP_ParentCom; // 0x178(0x08)
	struct UDataTable* CharacterData; // 0x180(0x08)
	struct UDataTable* GhostSkinData; // 0x188(0x08)
	struct UDataTable* HumanAccessoriesData; // 0x190(0x08)
	int32_t CharacterID; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct UUIItem* UpGridLayout; // 0x1a0(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x1a8(0x08)
	struct TArray<struct UBP_BagItemCom_C*> LayoutComList; // 0x1b0(0x10)

	void ResetItemData(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.ResetItemData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearComList(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.ClearComList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetData(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.ResetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetVaildItemList(struct TArray<int32_t> List); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.GetVaildItemList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateItemData(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.UpdateItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItemData(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.InitItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitTwoGridLayout(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.InitTwoGridLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void EnterClip(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.EnterClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExitClip(); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.ExitClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TwoGridLayoutCom(int32_t EntryPoint); // Function BP_TwoGridLayoutCom.BP_TwoGridLayoutCom_C.ExecuteUbergraph_BP_TwoGridLayoutCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

