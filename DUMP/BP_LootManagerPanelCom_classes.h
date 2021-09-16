// BlueprintGeneratedClass BP_LootManagerPanelCom.BP_LootManagerPanelCom_C
// Size: 0x170 (Inherited: 0x151)
struct UBP_LootManagerPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* Content; // 0x160(0x08)
	struct UBP_SpoilsPanelCom_C* BP_ParentCom; // 0x168(0x08)

	void LoadMember(); // Function BP_LootManagerPanelCom.BP_LootManagerPanelCom_C.LoadMember // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateInfo(); // Function BP_LootManagerPanelCom.BP_LootManagerPanelCom_C.UpdateInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_LootManagerPanelCom.BP_LootManagerPanelCom_C.InitInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(); // Function BP_LootManagerPanelCom.BP_LootManagerPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_LootManagerPanelCom.BP_LootManagerPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_LootManagerPanelCom.BP_LootManagerPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_LootManagerPanelCom(int32_t EntryPoint); // Function BP_LootManagerPanelCom.BP_LootManagerPanelCom_C.ExecuteUbergraph_BP_LootManagerPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

