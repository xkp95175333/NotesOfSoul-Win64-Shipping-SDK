// BlueprintGeneratedClass BP_IntergrationLeftCom.BP_IntergrationLeftCom_C
// Size: 0x2e0 (Inherited: 0x151)
struct UBP_IntergrationLeftCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct ULGUIPrefab* BulletinBoardAndTagsPanel; // 0x160(0x08)
	struct UObject* BP_OldCoinPanelCom; // 0x168(0x08)
	struct ULGUIPrefab* TreasureBoxPanel; // 0x170(0x08)
	struct AActor* CurrentPanel; // 0x178(0x08)
	struct UObject* BP_SeedShopPanelCom; // 0x180(0x08)
	struct UObject* BP_ConversionShopPanelCom; // 0x188(0x08)
	struct AActor* TreasureShopPanel; // 0x190(0x08)
	enum class EShopType EShopType; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UObject* BP_RMBShopPanelCom; // 0x1a0(0x08)
	struct UObject* BP_GiveGfitPanelCom; // 0x1a8(0x08)
	struct UUIButtonComponent* ExchangeButton; // 0x1b0(0x08)
	struct UUIButtonComponent* HomeButton; // 0x1b8(0x08)
	struct UUIButtonComponent* TreasureBoxButton; // 0x1c0(0x08)
	struct UUIButtonComponent* OldCoinButton; // 0x1c8(0x08)
	struct FColor NormalButtomColor; // 0x1d0(0x04)
	struct FColor HoverButtomColor; // 0x1d4(0x04)
	struct FColor HighButtomColor; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct UUIButtonComponent* RMBCoinButton; // 0x1e0(0x08)
	struct UUIButtonComponent* GiveShopButton; // 0x1e8(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x1f0(0x08)
	struct UUIText* ExchangeText; // 0x1f8(0x08)
	struct UUIText* HomeText; // 0x200(0x08)
	struct UUIText* OldCoinText; // 0x208(0x08)
	struct UUIText* RMBCoinText; // 0x210(0x08)
	struct UUIText* TreasureBoxText; // 0x218(0x08)
	struct FLinearColor HighTextColor; // 0x220(0x10)
	struct FLinearColor NormalTextColor; // 0x230(0x10)
	struct UUIText* GiveShopText; // 0x240(0x08)
	struct TMap<enum class EShopType, struct UBP_BulletinBoardAndTagsPanelCom_C*> StorePanels; // 0x248(0x50)
	struct ULGUIPrefab* ItemMaketPerfab; // 0x298(0x08)
	struct AActor* ItemMarketPanel; // 0x2a0(0x08)
	struct UUIButtonComponent* ItemMaketButton; // 0x2a8(0x08)
	struct UUIText* ItemMaketText; // 0x2b0(0x08)
	struct UBP_ItemMarketMainCom_C* ItemMarketMain; // 0x2b8(0x08)
	struct ULGUIPrefab* TopUpPanel; // 0x2c0(0x08)
	struct AActor* TopUpActor; // 0x2c8(0x08)
	struct UUIButtonComponent* TopUpButton; // 0x2d0(0x08)
	struct UUIText* TopUpText; // 0x2d8(0x08)

	void FindStorePanel(enum class EShopType Key, struct UBP_BulletinBoardAndTagsPanelCom_C* Com); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.FindStorePanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetShopType(enum class EShopType OldShop, enum class EShopType NewShop); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.SetShopType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitIntegrationLeft(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.InitIntegrationLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideCurrentPanel(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.HideCurrentPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSeedShop(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OnClickSeedShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickConversionShop(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OnClickConversionShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickTeasureBox(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OnClickTeasureBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickRMBShop(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OnClickRMBShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickGiveGift(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OnClickGiveGift // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenPanel(enum class EShopType NewShop); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OpenPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickOldCoin(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OnClickOldCoin // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickItemMarket(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OnClickItemMarket // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickTopUp(); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.OnClickTopUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_IntergrationLeftCom(int32_t EntryPoint); // Function BP_IntergrationLeftCom.BP_IntergrationLeftCom_C.ExecuteUbergraph_BP_IntergrationLeftCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

