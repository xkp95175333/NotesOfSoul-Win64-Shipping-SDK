// BlueprintGeneratedClass BP_GuildShopItemCom.BP_GuildShopItemCom_C
// Size: 0x1488 (Inherited: 0x13e1)
struct UBP_GuildShopItemCom_C : UBP_GuildItemBaseCom_C {
	char pad_13E1[0x7]; // 0x13e1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e8(0x08)
	int32_t GuildShopId; // 0x13f0(0x04)
	int32_t ID; // 0x13f4(0x04)
	struct UBP_GuildShopPanelCom_C* BP_ParentCom; // 0x13f8(0x08)
	struct FGuildShopItemInfo ShopItemInfo; // 0x1400(0x14)
	char pad_1414[0x4]; // 0x1414(0x04)
	struct FS_GuildShop GuildShopInfo; // 0x1418(0x70)

	void Click(); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.Click // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetQualifiedText(struct FText Qualified); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.GetQualifiedText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetCountText(struct FText Count); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.GetCountText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetTimeText(struct FText Time); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.GetTimeText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetLimitText(struct FText NewParam); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.GetLimitText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdateItem(); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.UpdateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGuildItem(); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.InitGuildItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildShopItemCom(int32_t EntryPoint); // Function BP_GuildShopItemCom.BP_GuildShopItemCom_C.ExecuteUbergraph_BP_GuildShopItemCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

