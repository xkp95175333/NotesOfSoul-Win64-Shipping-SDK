// BlueprintGeneratedClass BP_SeedShopPropCom.BP_SeedShopPropCom_C
// Size: 0x268 (Inherited: 0x151)
struct UBP_SeedShopPropCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUISprite* BoxBG; // 0x160(0x08)
	struct UUISprite* PropPic; // 0x168(0x08)
	struct UUIText* NameText; // 0x170(0x08)
	struct UUIText* Text2; // 0x178(0x08)
	struct UUIText* MoneyNum; // 0x180(0x08)
	struct UUISprite* MoneyPic; // 0x188(0x08)
	struct FNOS_Store Data; // 0x190(0xb0)
	struct UDataTable* CoinData; // 0x240(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x248(0x08)
	struct UDataTable* HomeData; // 0x250(0x08)
	int32_t CategoryID; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UBP_BaseShopPanel_C* OwnerWidget; // 0x260(0x08)

	void InitData(); // Function BP_SeedShopPropCom.BP_SeedShopPropCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitProp(); // Function BP_SeedShopPropCom.BP_SeedShopPropCom_C.InitProp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SeedShopPropCom.BP_SeedShopPropCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSelect(); // Function BP_SeedShopPropCom.BP_SeedShopPropCom_C.OnClickSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SeedShopPropCom(int32_t EntryPoint); // Function BP_SeedShopPropCom.BP_SeedShopPropCom_C.ExecuteUbergraph_BP_SeedShopPropCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

