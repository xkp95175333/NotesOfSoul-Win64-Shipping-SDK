// BlueprintGeneratedClass BP_SeedShopMainCom.BP_SeedShopMainCom_C
// Size: 0x2f0 (Inherited: 0x1e0)
struct UBP_SeedShopMainCom_C : UBP_BaseShopPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e0(0x08)
	struct UUIItem* ItemBox; // 0x1e8(0x08)
	struct UUIItem* PropBox; // 0x1f0(0x08)
	struct TArray<struct FNOS_Store> PropData; // 0x1f8(0x10)
	struct TArray<struct FNOS_Store> ItemData; // 0x208(0x10)
	struct UObject* BP_ParentCom; // 0x218(0x08)
	struct UUIText* MoneyNum; // 0x220(0x08)
	struct UUISprite* MoneyPic; // 0x228(0x08)
	struct UUISprite* TitlePic; // 0x230(0x08)
	struct FNOS_Store TitleData; // 0x238(0xb0)
	struct UDataTable* CoinData; // 0x2e8(0x08)

	void InitTitle(); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.InitTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BProp(int32_t Index, bool B); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.BProp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BSuit(int32_t Index, bool B); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.BSuit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitProp(); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.InitProp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItem(); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.InitItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitMain(); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.InitMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SeedShopMainCom(int32_t EntryPoint); // Function BP_SeedShopMainCom.BP_SeedShopMainCom_C.ExecuteUbergraph_BP_SeedShopMainCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

