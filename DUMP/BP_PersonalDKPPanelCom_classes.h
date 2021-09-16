// BlueprintGeneratedClass BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C
// Size: 0x1a4 (Inherited: 0x151)
struct UBP_PersonalDKPPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t PlayerId; // 0x160(0x04)
	int32_t MaxNumber; // 0x164(0x04)
	struct FText PlayerName; // 0x168(0x18)
	struct TArray<struct UBP_PersonalDKPInfoCom_C*> PersonalDKPInfoArray; // 0x180(0x10)
	struct UUIItem* Content; // 0x190(0x08)
	struct UBP_PagePanelCom_C* PagePanelCom; // 0x198(0x08)
	int32_t CurPage; // 0x1a0(0x04)

	void UpdateGuildRecordList(struct FGuildRecordList GuildRecordList, int32_t TotalCount); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.UpdateGuildRecordList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Previous(); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.Previous // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Next(); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.Next // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCom(); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadGuildRecordList(struct FGuildRecordList GuildRecordList, int32_t MaxNumber); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.LoadGuildRecordList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PersonalDKPPanelCom(int32_t EntryPoint); // Function BP_PersonalDKPPanelCom.BP_PersonalDKPPanelCom_C.ExecuteUbergraph_BP_PersonalDKPPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

