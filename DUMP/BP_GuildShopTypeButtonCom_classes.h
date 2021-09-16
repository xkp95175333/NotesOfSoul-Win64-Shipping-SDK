// BlueprintGeneratedClass BP_GuildShopTypeButtonCom.BP_GuildShopTypeButtonCom_C
// Size: 0x199 (Inherited: 0x151)
struct UBP_GuildShopTypeButtonCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FS_GuildShopType ShopType; // 0x160(0x28)
	struct UUIToggleGroupComponent* ToggleGroup; // 0x188(0x08)
	struct UBP_GuildShopPanelCom_C* BP_ParentCom; // 0x190(0x08)
	bool IsOn; // 0x198(0x01)

	void Up(); // Function BP_GuildShopTypeButtonCom.BP_GuildShopTypeButtonCom_C.Up // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Down(); // Function BP_GuildShopTypeButtonCom.BP_GuildShopTypeButtonCom_C.Down // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnToggle(bool InBool); // Function BP_GuildShopTypeButtonCom.BP_GuildShopTypeButtonCom_C.OnToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_GuildShopTypeButtonCom.BP_GuildShopTypeButtonCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildShopTypeButtonCom.BP_GuildShopTypeButtonCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildShopTypeButtonCom(int32_t EntryPoint); // Function BP_GuildShopTypeButtonCom.BP_GuildShopTypeButtonCom_C.ExecuteUbergraph_BP_GuildShopTypeButtonCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

