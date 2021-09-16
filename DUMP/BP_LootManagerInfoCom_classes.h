// BlueprintGeneratedClass BP_LootManagerInfoCom.BP_LootManagerInfoCom_C
// Size: 0x260 (Inherited: 0x151)
struct UBP_LootManagerInfoCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FGuildUserData PlayerInfo; // 0x158(0x100)
	struct UBP_LootManagerPanelCom_C* BP_ParentCom; // 0x258(0x08)

	void InitAll(); // Function BP_LootManagerInfoCom.BP_LootManagerInfoCom_C.InitAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnValueChange(); // Function BP_LootManagerInfoCom.BP_LootManagerInfoCom_C.OnValueChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ValueChange(bool InBool); // Function BP_LootManagerInfoCom.BP_LootManagerInfoCom_C.ValueChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_LootManagerInfoCom.BP_LootManagerInfoCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_LootManagerInfoCom.BP_LootManagerInfoCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

