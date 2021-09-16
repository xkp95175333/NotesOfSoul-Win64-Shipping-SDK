// BlueprintGeneratedClass BP_ShoppingCartCom.BP_ShoppingCartCom_C
// Size: 0x278 (Inherited: 0x151)
struct UBP_ShoppingCartCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* ItemPanels; // 0x160(0x08)
	struct UUIToggleComponent* TotalIcon; // 0x168(0x08)
	struct UUIButtonComponent* BuyButton; // 0x170(0x08)
	struct TArray<struct FNOS_Store> StoreDataList; // 0x178(0x10)
	struct TArray<struct UBP_BuyItemCom_C*> BP Buy Item ComList; // 0x188(0x10)
	struct TArray<struct UBP_BuyItemCom_C*> ConfirmItemComList; // 0x198(0x10)
	struct UUIText* ItemNum; // 0x1a8(0x08)
	struct UUIItem* TotalType; // 0x1b0(0x08)
	struct TMap<int32_t, int32_t> TotalTypeMap; // 0x1b8(0x50)
	struct TMap<int32_t, struct UBP_TotalTypeCom_C*> TotalTypeComMap; // 0x208(0x50)
	struct TArray<struct FConfirmCoinData> ConfirmCoinData; // 0x258(0x10)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x268(0x08)
	struct UUIButtonComponent* CancelButton; // 0x270(0x08)

	void ClearConfirmComList(struct TArray<struct FShopBuyItem> Array); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.ClearConfirmComList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckCanBuy(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.CheckCanBuy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Check Have Shopping Car(int32_t NewParam, struct UBP_BuyItemCom_C* OutParam); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.Check Have Shopping Car // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckIsBuy(int32_t SkinId, bool bHave, struct FNOS_Store Data); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.CheckIsBuy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTotalData(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.UpdateTotalData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitShoppingCart(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.InitShoppingCart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void DeleteItemByCom(struct UBP_BuyItemCom_C* Com); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.DeleteItemByCom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddItem(struct FNOS_Store StorData); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.AddItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectConfirmByCom(struct UBP_BuyItemCom_C* Com); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.SelectConfirmByCom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CancelConfirmByCom(struct UBP_BuyItemCom_C* Com); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.CancelConfirmByCom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickAllConfirm(bool IsOn); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.ClickAllConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickBuy(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.OnClickBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CleanShopCart(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.CleanShopCart // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickCancel(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.OnClickCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EnterClip(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.EnterClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExitClip(); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.ExitClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BuyReq(int32_t code, struct TArray<struct FShopBuyItem> List); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.BuyReq // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ShoppingCartCom(int32_t EntryPoint); // Function BP_ShoppingCartCom.BP_ShoppingCartCom_C.ExecuteUbergraph_BP_ShoppingCartCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

