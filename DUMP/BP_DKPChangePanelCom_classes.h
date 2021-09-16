// BlueprintGeneratedClass BP_DKPChangePanelCom.BP_DKPChangePanelCom_C
// Size: 0x184 (Inherited: 0x151)
struct UBP_DKPChangePanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_PagePanelCom_C* PageCom; // 0x160(0x08)
	struct TArray<struct UBP_ChangeDKPInfoCom_C*> DKPInfoArrray; // 0x168(0x10)
	struct UUIItem* Content; // 0x178(0x08)
	int32_t CurPage; // 0x180(0x04)

	void Close(); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateRecord(struct FGuildRecordList GuildRecordList, int32_t TotalCount); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.UpdateRecord // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadRecord(struct FGuildRecordList GuildRecordList, int32_t TotalCount); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.LoadRecord // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Previous(); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.Previous // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Next(); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.Next // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCom(); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DKPChangePanelCom(int32_t EntryPoint); // Function BP_DKPChangePanelCom.BP_DKPChangePanelCom_C.ExecuteUbergraph_BP_DKPChangePanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

