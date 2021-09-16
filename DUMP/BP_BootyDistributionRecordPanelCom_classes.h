// BlueprintGeneratedClass BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C
// Size: 0x188 (Inherited: 0x151)
struct UBP_BootyDistributionRecordPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_PagePanelCom_C* PageCom; // 0x160(0x08)
	int32_t CurPage; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UUIItem* Content; // 0x170(0x08)
	struct TArray<struct UBP_BootyDistributionRecordInfoCom_C*> InfoArray; // 0x178(0x10)

	void UpdateRecordList(struct FGuildRecordList GuildRecordList, int32_t TotalCount); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.UpdateRecordList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Previous(); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.Previous // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Next(); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.Next // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCom(); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadRecordList(struct FGuildRecordList GuildRecordList, int32_t TotalCount); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.LoadRecordList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BootyDistributionRecordPanelCom(int32_t EntryPoint); // Function BP_BootyDistributionRecordPanelCom.BP_BootyDistributionRecordPanelCom_C.ExecuteUbergraph_BP_BootyDistributionRecordPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

