// BlueprintGeneratedClass BP_AllRoleInfoPanel.BP_AllRoleInfoPanel_C
// Size: 0x170 (Inherited: 0x151)
struct UBP_AllRoleInfoPanel_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* GhostPanel; // 0x160(0x08)
	struct UUIItem* HumanPanel; // 0x168(0x08)

	void Init(); // Function BP_AllRoleInfoPanel.BP_AllRoleInfoPanel_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCharactersInfo(struct UDataTable* Table, struct USceneComponent* AttachTo); // Function BP_AllRoleInfoPanel.BP_AllRoleInfoPanel_C.GetCharactersInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Create Intimacy(); // Function BP_AllRoleInfoPanel.BP_AllRoleInfoPanel_C.Create Intimacy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_AllRoleInfoPanel.BP_AllRoleInfoPanel_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_AllRoleInfoPanel.BP_AllRoleInfoPanel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_AllRoleInfoPanel(int32_t EntryPoint); // Function BP_AllRoleInfoPanel.BP_AllRoleInfoPanel_C.ExecuteUbergraph_BP_AllRoleInfoPanel // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

