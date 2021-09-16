// BlueprintGeneratedClass BP_GuildShopPanelCom.BP_GuildShopPanelCom_C
// Size: 0x1b8 (Inherited: 0x151)
struct UBP_GuildShopPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct UBP_GuildShopItemCom_C*> ShopItemArray; // 0x160(0x10)
	int32_t Lingbi; // 0x170(0x04)
	int32_t GUbi; // 0x174(0x04)
	int32_t ShopTypeID; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct UBP_PagePanelCom_C* BP_PageCom; // 0x180(0x08)
	struct UBP_GuildPanelCom_C* BP_GuildPanel; // 0x188(0x08)
	int32_t ShopPage; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct TArray<struct UBP_GuildShopTypeButtonCom_C*> ShopArray; // 0x198(0x10)
	struct TArray<struct FName> ShopTpye; // 0x1a8(0x10)

	void ShopNextPage(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.ShopNextPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnUpdateBag(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.OnUpdateBag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBuy(int32_t s_id, int32_t item_count, bool sucess); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.OnBuy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Refresh(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetShopItem(struct UBP_GuildShopItemCom_C* ShopItem); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.GetShopItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Previous(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.Previous // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Next(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.Next // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCom(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateShopType(int32_t InShopTypeID); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.UpdateShopType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGuildShopType(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.InitGuildShopType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitShopItem(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.InitShopItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadShopItem(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.LoadShopItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildShopPanelCom(int32_t EntryPoint); // Function BP_GuildShopPanelCom.BP_GuildShopPanelCom_C.ExecuteUbergraph_BP_GuildShopPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

