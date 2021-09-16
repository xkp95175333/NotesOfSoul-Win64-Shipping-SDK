// BlueprintGeneratedClass BP_GuildPanelCom.BP_GuildPanelCom_C
// Size: 0x168 (Inherited: 0x151)
struct UBP_GuildPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_GuildRootPanelCom_C* GuildRoot; // 0x160(0x08)

	void help(); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.help // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetGuildRoot(struct UBP_GuildBasePanelCom_C* GuildBase); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.GetGuildRoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.UpdateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Refresh(struct ULGUIPrefab* Prefab); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateRed(bool InBool); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.UpdateRed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NoOpenSpoil(); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.NoOpenSpoil // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSpoils(); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.UpdateSpoils // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildPanelCom(int32_t EntryPoint); // Function BP_GuildPanelCom.BP_GuildPanelCom_C.ExecuteUbergraph_BP_GuildPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

