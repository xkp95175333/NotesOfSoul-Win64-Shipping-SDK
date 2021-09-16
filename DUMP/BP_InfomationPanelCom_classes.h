// BlueprintGeneratedClass BP_InfomationPanelCom.BP_InfomationPanelCom_C
// Size: 0x1b0 (Inherited: 0x170)
struct UBP_InfomationPanelCom_C : UBP_GuildBasePanelCom_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	int32_t MaxNumber; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct UUIItem* AttachUI; // 0x180(0x08)
	struct UBP_PagePanelCom_C* PagePanel; // 0x188(0x08)
	struct TArray<struct UBP_RecordContentCom_C*> RecordArray; // 0x190(0x10)
	struct TArray<enum class EGuildRecordType> Record TypeArray; // 0x1a0(0x10)

	void ModAnnouncement(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.ModAnnouncement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBag(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.UpdateBag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddButton(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.AddButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RecordsManagement(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.RecordsManagement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LootRecord(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.LootRecord // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AllTheRecords(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.AllTheRecords // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetRecordList(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.GetRecordList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectRecordType(struct TArray<enum class EGuildRecordType> Record TypeArray); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.SelectRecordType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetRecord(struct UBP_RecordContentCom_C* Record); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.GetRecord // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void LoadRecord(struct FGuildRecordList GuildRecordList, int32_t TotalCount); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.LoadRecord // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Previous(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.Previous // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Next(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.Next // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetActiveLevel(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.GetActiveLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitActive(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.InitActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSubmit(struct FString inString); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.OnSubmit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSalary(struct FItemS ItemS); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.OnSalary // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Salary(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.Salary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLevelUp(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.OnLevelUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnModifyGuildName(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.OnModifyGuildName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LevelUp(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.LevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ModifyGuildName(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.ModifyGuildName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDissolution(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.OnDissolution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Dissolution(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.Dissolution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitRecord(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.InitRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChangeAnnouncement(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.OnChangeAnnouncement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeAnnouncement(bool Inactive); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.ChangeAnnouncement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAnnouncement(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.InitAnnouncement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void guildlist(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.guildlist // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.Exit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCom(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Click(struct ULGUIPointerEventData* pointerEventData); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_InfomationPanelCom(int32_t EntryPoint); // Function BP_InfomationPanelCom.BP_InfomationPanelCom_C.ExecuteUbergraph_BP_InfomationPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

