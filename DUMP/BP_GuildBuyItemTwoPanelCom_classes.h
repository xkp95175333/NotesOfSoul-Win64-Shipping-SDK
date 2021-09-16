// BlueprintGeneratedClass BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C
// Size: 0x1a0 (Inherited: 0x151)
struct UBP_GuildBuyItemTwoPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_GuildShopPanelCom_C* BP_ParentCom; // 0x160(0x08)
	int32_t Count; // 0x168(0x04)
	struct FGuildShopItemInfo ShopInfo; // 0x16c(0x14)
	int32_t MaxCount; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct UUIText* OKText; // 0x188(0x08)
	struct UUIItem* OKButton; // 0x190(0x08)
	struct UUIText* Number; // 0x198(0x08)

	void InitCom(); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InputActive(bool InBool); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.InputActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InputChange(struct FString inString); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.InputChange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OK(); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.OK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildBuyItemTwoPanelCom(int32_t EntryPoint); // Function BP_GuildBuyItemTwoPanelCom.BP_GuildBuyItemTwoPanelCom_C.ExecuteUbergraph_BP_GuildBuyItemTwoPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

