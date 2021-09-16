// BlueprintGeneratedClass BP_ApplyPersonPanelCom.BP_ApplyPersonPanelCom_C
// Size: 0x190 (Inherited: 0x151)
struct UBP_ApplyPersonPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* AttachUI; // 0x160(0x08)
	struct UBP_GuildRootPanelCom_C* GuildRoot; // 0x168(0x08)
	struct UUIItem* RootUI; // 0x170(0x08)
	struct TArray<struct UBP_ApplyPersonInfoCom_C*> PersonArray; // 0x178(0x10)
	struct UBP_MembersPanelCom_C* Member; // 0x188(0x08)

	void OnRefresh(); // Function BP_ApplyPersonPanelCom.BP_ApplyPersonPanelCom_C.OnRefresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Refresh(); // Function BP_ApplyPersonPanelCom.BP_ApplyPersonPanelCom_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadApplyList(); // Function BP_ApplyPersonPanelCom.BP_ApplyPersonPanelCom_C.LoadApplyList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(); // Function BP_ApplyPersonPanelCom.BP_ApplyPersonPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ApplyPersonPanelCom.BP_ApplyPersonPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ApplyPersonPanelCom(int32_t EntryPoint); // Function BP_ApplyPersonPanelCom.BP_ApplyPersonPanelCom_C.ExecuteUbergraph_BP_ApplyPersonPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

