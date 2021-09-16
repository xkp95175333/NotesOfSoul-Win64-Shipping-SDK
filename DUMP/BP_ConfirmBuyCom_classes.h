// BlueprintGeneratedClass BP_ConfirmBuyCom.BP_ConfirmBuyCom_C
// Size: 0x218 (Inherited: 0x151)
struct UBP_ConfirmBuyCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIButtonComponent* BuyButton; // 0x160(0x08)
	struct UUIButtonComponent* CancelButton; // 0x168(0x08)
	struct UUIItem* MoneyBox; // 0x170(0x08)
	struct UUIItem* Warning; // 0x178(0x08)
	struct TArray<struct FConfirmCoinData> CoinList; // 0x180(0x10)
	struct TMap<int32_t, int32_t> PayCoinCount; // 0x190(0x50)
	bool bNotPay; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x1e8(0x08)
	struct TArray<struct FShopBuyItem> BuyItemList; // 0x1f0(0x10)
	struct TArray<struct UBP_ConfirmMoneyTypeCom_C*> ChildComList; // 0x200(0x10)
	struct UUIText* BuyText; // 0x210(0x08)

	void GetSkinData(int32_t ItemType, int32_t ItemId, int32_t CoinType, int32_t ItemCount, struct FShopBuyItem Data); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.GetSkinData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetWarnning(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.SetWarnning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConfirmBuy(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.InitConfirmBuy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickConfirm(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.OnClickConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenConfirm(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.OpenConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseConfirm(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.CloseConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckWarnning(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.CheckWarnning // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearConfirmBuy(); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.ClearConfirmBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ConfirmBuyCom(int32_t EntryPoint); // Function BP_ConfirmBuyCom.BP_ConfirmBuyCom_C.ExecuteUbergraph_BP_ConfirmBuyCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

