// BlueprintGeneratedClass BP_ItemSaleCom.BP_ItemSaleCom_C
// Size: 0x2a8 (Inherited: 0x151)
struct UBP_ItemSaleCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUISprite* PerviewICon; // 0x160(0x08)
	struct UUISprite* PerviewBG; // 0x168(0x08)
	struct UUIText* ItemName; // 0x170(0x08)
	struct UUIItem* OnSaleContent; // 0x178(0x08)
	struct UUIItem* DownPanel; // 0x180(0x08)
	struct UUISprite* DragArrow; // 0x188(0x08)
	struct UUIText* CurrentTimeText; // 0x190(0x08)
	struct UUITextInputComponent* PriceInput; // 0x198(0x08)
	struct UUIText* SCText; // 0x1a0(0x08)
	struct FItemMarketServiceCharge ServiceChargeData; // 0x1a8(0x08)
	int32_t SalePerice; // 0x1b0(0x04)
	int32_t ItemId; // 0x1b4(0x04)
	struct UBP_ItemMarketMainCom_C* MainPanelCom; // 0x1b8(0x08)
	struct TMap<int32_t, int32_t> OnSaleIDs; // 0x1c0(0x50)
	int32_t UID; // 0x210(0x04)
	int32_t AdvicePerice; // 0x214(0x04)
	struct UUIText* PriceText; // 0x218(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x220(0x08)
	struct FText ErrorText; // 0x228(0x18)
	bool CanSale; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct TArray<struct UBP_OnSaleElementCom_C*> OnSaleElements; // 0x248(0x10)
	bool FreeSaleMode; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct TArray<struct FItemMarketProduct> Product List; // 0x260(0x10)
	int32_t Count; // 0x270(0x04)
	bool bWaitReq; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct FDateTime LastRspTime; // 0x278(0x08)
	struct UUIItem* NoticeText; // 0x280(0x08)
	bool bWaitUpdateSearchInfo; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UUIItem* LoadingICon; // 0x290(0x08)
	int32_t ServicePercentCharge; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UUIBackgroundBlur* BG; // 0x2a0(0x08)

	void FindErrorText(int32_t Value, struct FText ErrorText); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.FindErrorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdateWaitState(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.UpdateWaitState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSearchReq(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.UpdateSearchReq // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckConnect(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.CheckConnect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MarkRepSaleDirty(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.MarkRepSaleDirty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnlySaleItemSearch(struct TArray<struct FItemMarketProduct> Array, bool bOnlySaleItem1); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnlySaleItemSearch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAllAdvicePerice(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.GetAllAdvicePerice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateOnSaleElement(struct TArray<struct FItemMarketProduct> Array); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.UpdateOnSaleElement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RepSale(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.RepSale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSalePrice(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.CheckSalePrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenSalePanel(int32_t ItemId, int32_t UID, bool FreeSaleMode, int32_t Count); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OpenSalePanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTopPanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.UpdateTopPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitServiceChargeDropDownPanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.InitServiceChargeDropDownPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateSingleMaketItem(struct FItemMarketProduct ItemData); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.CreateSingleMaketItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItemSalePanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.InitItemSalePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnDropDownItemClicked(struct FItemMarketServiceCharge Data); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnDropDownItemClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClosePanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.ClosePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenDropDownPanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OpenDropDownPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseDropDownPanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.CloseDropDownPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPericeInput(struct FString inputValue); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnPericeInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSaleConfirm(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnSaleConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnConfirmSale(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnConfirmSale // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSaleRsp(struct FItemMarketSaleItemRspInfo SaleInfo); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnSaleRsp // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSearchResUpdate(struct FItemMarketSearchRsp SearchResult); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnSearchResUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickDropDownPanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnClickDropDownPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSearchItem(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnClickSearchItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateServiceCharge(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.UpdateServiceCharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterPanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnEnterPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitPanel(); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.OnExitPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemSaleCom(int32_t EntryPoint); // Function BP_ItemSaleCom.BP_ItemSaleCom_C.ExecuteUbergraph_BP_ItemSaleCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

