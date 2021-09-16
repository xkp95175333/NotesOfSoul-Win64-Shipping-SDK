// BlueprintGeneratedClass BP_ItemPanelCom.BP_ItemPanelCom_C
// Size: 0x1508 (Inherited: 0x151)
struct UBP_ItemPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIButtonComponent* BuyButton; // 0x160(0x08)
	struct UUIText* BuyText; // 0x168(0x08)
	struct UUIButtonComponent* ShoppingCartButton; // 0x170(0x08)
	struct UUITexture* Item; // 0x178(0x08)
	struct UUISprite* ItemBG; // 0x180(0x08)
	struct UUIItem* MoneyType1; // 0x188(0x08)
	struct UUIItem* MoneyType2; // 0x190(0x08)
	struct UUIText* DisCountType1Num; // 0x198(0x08)
	struct UUIText* DisCountType2Num; // 0x1a0(0x08)
	struct UUISprite* MoneyType1Pic; // 0x1a8(0x08)
	struct UUIText* MoneyType2Num; // 0x1b0(0x08)
	struct UUIText* MoneyType1Num; // 0x1b8(0x08)
	struct UUISprite* MoneyType2Pic; // 0x1c0(0x08)
	struct UUISprite* TitleBG; // 0x1c8(0x08)
	struct UUIText* ItemType; // 0x1d0(0x08)
	struct UUIText* RoleName; // 0x1d8(0x08)
	struct FNOS_Store StoreData; // 0x1e0(0xb0)
	struct UDataTable* AllAccessoriesData; // 0x290(0x08)
	struct UDataTable* HumanSuitData; // 0x298(0x08)
	struct UDataTable* GhostSuitData; // 0x2a0(0x08)
	struct UDataTable* CoinData; // 0x2a8(0x08)
	struct UUIItem* BuyPanel; // 0x2b0(0x08)
	bool bVisbleButton; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x2c0(0x08)
	bool bHave; // 0x2c8(0x01)
	bool bSelect; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct TArray<struct FConfirmCoinData> ConfirmCoinData; // 0x2d0(0x10)
	struct UUISprite* Mask; // 0x2e0(0x08)
	enum class EClothQualityType SuitQuality; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UUITexture* ItemMaterial; // 0x2f0(0x08)
	struct ULGUISpriteData* TitleTexture; // 0x2f8(0x08)
	struct UTexture2D* BGTexture; // 0x300(0x08)
	struct FLinearColor TextColor; // 0x308(0x10)
	struct FLinearColor MaterialColor; // 0x318(0x10)
	struct UUISprite* DiscountBG; // 0x328(0x08)
	struct UUIText* DiscountNum; // 0x330(0x08)
	float DiscountParamter; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UUIItem* Scale; // 0x340(0x08)
	struct FNOS_Accessories AccessoriesInfo; // 0x348(0x500)
	struct FNOS_HumanSuit HumanInfo; // 0x848(0x350)
	struct FNOS_GhostSuit GhostInfo; // 0xb98(0x350)
	int32_t CategoryID; // 0xee8(0x04)
	char pad_EEC[0x4]; // 0xeec(0x04)
	struct UBP_BaseShopPanel_C* OwnerWidget; // 0xef0(0x08)
	struct FNOS_ItemTable SpecialItemInfo; // 0xef8(0x108)
	struct UDataTable* GhostBodyData; // 0x1000(0x08)
	struct FNOS_Accessories GhostBodyInfo; // 0x1008(0x500)

	void GetGiftBoxDes(int32_t GiftBoxId, struct FString String1); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.GetGiftBoxDes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitGiftBoxData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.InitGiftBoxData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGhostSuitData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.UpdateGhostSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateAccessoriesData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.UpdateAccessoriesData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanSuitData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.UpdateHumanSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTextLanguage(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.UpdateTextLanguage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearItemInfo(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.ClearItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetItemInfo(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.SetItemInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckIsHave(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.CheckIsHave // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetAccessoriesData(enum class ECommodityType Type, struct UDataTable* Data); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.GetAccessoriesData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAccessoriesData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.InitAccessoriesData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGhostSuitData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.InitGhostSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanSuitData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.InitHumanSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetQuailtyInfoBG(enum class EClothQualityType Type); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.SetQuailtyInfoBG // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItem(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.InitItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnHighLightBuy(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.OnHighLightBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNormalBuy(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.OnNormalBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickCar(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.OnClickCar // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickBuy(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.OnClickBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSelect(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.OnClickSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenItemInfo(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.OpenItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseItemIfo(); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.CloseItemIfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventTextLanguage(struct FString ChangedLanguage); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.EventTextLanguage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemPanelCom(int32_t EntryPoint); // Function BP_ItemPanelCom.BP_ItemPanelCom_C.ExecuteUbergraph_BP_ItemPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

