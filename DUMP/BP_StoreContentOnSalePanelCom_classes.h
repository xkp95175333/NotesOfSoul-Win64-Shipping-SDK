// BlueprintGeneratedClass BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C
// Size: 0x1c8 (Inherited: 0x151)
struct UBP_StoreContentOnSalePanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	enum class ItemMarketType CurrentMarketType; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	int32_t ElementCountPrePage; // 0x164(0x04)
	struct UUIItem* StoreContentPanel; // 0x168(0x08)
	int32_t CurrentPage; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct UBP_ItemMarketStoreItemCom_C*> OnSaleItems; // 0x178(0x10)
	struct TArray<struct UBP_ItemMaketTradeRecordItemCom_C*> TradeInfoItems; // 0x188(0x10)
	struct TArray<struct FItemMarketProduct> ItemS; // 0x198(0x10)
	struct TArray<struct FItemMarketRecordData> Records; // 0x1a8(0x10)
	int32_t CurrentCategoryID; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct UBP_ItemMarketLeftPanelCom_C* ItemMarketPanel; // 0x1c0(0x08)

	void SortAndUpdateData(enum class ESortRole inRole); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.SortAndUpdateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	int32_t GetDataNum(); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.GetDataNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetScreenData_Record(struct TArray<struct FItemMarketRecordData> Records); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.GetScreenData_Record // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ChangeCategoryID(int32_t CurrentCategoryID); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.ChangeCategoryID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetScreenData_Normal(struct TArray<struct FItemMarketProduct> ItemS); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.GetScreenData_Normal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetRecordData(struct TArray<struct FItemMarketRecordData> Records, enum class ItemMarketType NewType); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.SetRecordData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOnSaleData(struct TArray<struct FItemMarketProduct> Item, enum class ItemMarketType CurrentMarketType); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.SetOnSaleData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPage(int32_t NewPage); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.SetPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Update Data(); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.Update Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPanelType(enum class ItemMarketType NewType); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.SetPanelType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitPanel(); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.InitPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitStoreContent(); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.InitStoreContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_StoreContentOnSalePanelCom(int32_t EntryPoint); // Function BP_StoreContentOnSalePanelCom.BP_StoreContentOnSalePanelCom_C.ExecuteUbergraph_BP_StoreContentOnSalePanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

