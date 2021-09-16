// BlueprintGeneratedClass BP_MembersPanelCom.BP_MembersPanelCom_C
// Size: 0x1a1 (Inherited: 0x170)
struct UBP_MembersPanelCom_C : UBP_GuildBasePanelCom_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct UUIItem* AttachUI; // 0x178(0x08)
	bool IsShowOnline; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct TArray<struct UBP_PlayerInfoPanelCom_C*> PlayerInfoArray; // 0x188(0x10)
	struct UBP_OperationGuildPanelCom_C* Oper; // 0x198(0x08)
	enum class EGuildPersonSort PersonSort; // 0x1a0(0x01)

	void SetConditions(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.SetConditions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PositionSort(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.PositionSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NameSort(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.NameSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoginDateSort(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.LoginDateSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LevelSort(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.LevelSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HumanDanSort(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.HumanDanSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GhostDanSort(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.GhostDanSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ContributionValueSort(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.ContributionValueSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAnjian(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.InitAnjian // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(bool InBool); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetApply(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.GetApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateMemberList(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.UpdateMemberList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideOper(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.HideOper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowOper(struct FGuildUserData UserInfo); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.ShowOper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadMemberList(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.LoadMemberList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowOnline(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.ShowOnline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TeamApply(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.TeamApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Click(struct ULGUIPointerEventData* pointerEventData); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MembersPanelCom(int32_t EntryPoint); // Function BP_MembersPanelCom.BP_MembersPanelCom_C.ExecuteUbergraph_BP_MembersPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

