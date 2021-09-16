// BlueprintGeneratedClass BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C
// Size: 0x222 (Inherited: 0x170)
struct UBP_MemberManagementPanelCom_C : UBP_GuildBasePanelCom_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct TArray<struct UBP_MembersOfTheManagementInfo_Com_C*> MembersList; // 0x178(0x10)
	struct UUIItem* AttachMember; // 0x188(0x08)
	struct TMap<enum class EGuildRightType, struct UUIToggleComponent*> PermissionMap; // 0x190(0x50)
	int32_t CurDutyId; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct UUIToggleGroupComponent* IdentityListActor; // 0x1e8(0x08)
	struct TArray<struct UBP_IdentityPanelCom_C*> IdentityList; // 0x1f0(0x10)
	struct UUIItem* IdentityPanel; // 0x200(0x08)
	int32_t IndentityMaxNumber; // 0x208(0x04)
	struct FColor TransferNormalColor; // 0x20c(0x04)
	struct FColor GeneralMemberNormalColor; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct UBP_IdentityPanelCom_C* CerateIdentity; // 0x218(0x08)
	enum class EGuildPersonSort PersonSort; // 0x220(0x01)
	bool IsMange; // 0x221(0x01)

	void Manage(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.Manage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateMemberSort(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.UpdateMemberSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PositionSort(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.PositionSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NameSort(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.NameSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LevelSort(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.LevelSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ContributionValueSort(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.ContributionValueSort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDemiseGuild(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.OnDemiseGuild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferExit(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.TransferExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferEnter(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.TransferEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GeneralMemberExit(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.GeneralMemberExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GeneralMemberEnter(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.GeneralMemberEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateMemberList(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.UpdateMemberList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateLevel(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.UpdateLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferClick(bool InBool); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.TransferClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GeneralMemberClick(bool InBool); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.GeneralMemberClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SubLevel(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.SubLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLevelChange(int32_t DelId); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.OnLevelChange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddLevel(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.AddLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDelDuty(int32_t DutyId); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.OnDelDuty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DelDuty(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.DelDuty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChangeDutyName(int32_t DutyId); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.OnChangeDutyName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IdentityChangeName(bool InActivate); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.IdentityChangeName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAddIndentity(int32_t DutyId); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.OnAddIndentity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateIndentityList(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.UpdateIndentityList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitIndentityList(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.InitIndentityList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitPermissionList(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.InitPermissionList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Update Permission List(int32_t DutyId); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.Update Permission List // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadMemberList(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.LoadMemberList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitMemberList(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.InitMemberList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(struct ULGUIPointerEventData* pointerEventData); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MemberManagementPanelCom(int32_t EntryPoint); // Function BP_MemberManagementPanelCom.BP_MemberManagementPanelCom_C.ExecuteUbergraph_BP_MemberManagementPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

