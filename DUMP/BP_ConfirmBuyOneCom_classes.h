// BlueprintGeneratedClass BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C
// Size: 0x1e0 (Inherited: 0x151)
struct UBP_ConfirmBuyOneCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIButtonComponent* BuyButton; // 0x160(0x08)
	struct UUIButtonComponent* CancelButton; // 0x168(0x08)
	struct UUIItem* MoneyBox; // 0x170(0x08)
	struct UUIItem* Warning; // 0x178(0x08)
	struct TArray<struct FConfirmCoinData> CoinList; // 0x180(0x10)
	bool bNotPay; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x198(0x08)
	struct TArray<struct FShopBuyItem> BuyItemList; // 0x1a0(0x10)
	struct UBP_ConfirmMoneyTypeOneCom_C* CurrentCom; // 0x1b0(0x08)
	struct TArray<struct UBP_ConfirmMoneyTypeOneCom_C*> ChildComList; // 0x1b8(0x10)
	bool bCharater; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UUIToggleGroupComponent* MoneyToggleGroup; // 0x1d0(0x08)
	struct UUIText* BuyText; // 0x1d8(0x08)

	void UpdateData(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSkinData(int32_t ItemType, int32_t ItemId, int32_t CoinType, struct FShopBuyItem Data); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.GetSkinData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetWarnning(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.SetWarnning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConfirmBuy(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.InitConfirmBuy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickConfirm(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.OnClickConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenConfirm(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.OpenConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseConfirm(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.CloseConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateConfirm(struct UBP_ConfirmMoneyTypeOneCom_C* Com); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.UpdateConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckWarnning(); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.CheckWarnning // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ConfirmBuyOneCom(int32_t EntryPoint); // Function BP_ConfirmBuyOneCom.BP_ConfirmBuyOneCom_C.ExecuteUbergraph_BP_ConfirmBuyOneCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

