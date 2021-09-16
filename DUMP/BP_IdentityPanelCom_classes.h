// BlueprintGeneratedClass BP_IdentityPanelCom.BP_IdentityPanelCom_C
// Size: 0x1ac (Inherited: 0x151)
struct UBP_IdentityPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_MemberManagementPanelCom_C* MemberManagePanel; // 0x160(0x08)
	struct FGuildDutyInfo CurDuty; // 0x168(0x30)
	struct UUIToggleGroupComponent* ToggleGroup; // 0x198(0x08)
	bool IsOn; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	struct FColor NormalColor; // 0x1a4(0x04)
	int32_t Num; // 0x1a8(0x04)

	void UpdateDuty(); // Function BP_IdentityPanelCom.BP_IdentityPanelCom_C.UpdateDuty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAddDuty(int32_t DutyId); // Function BP_IdentityPanelCom.BP_IdentityPanelCom_C.OnAddDuty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Click(bool InBool); // Function BP_IdentityPanelCom.BP_IdentityPanelCom_C.Click // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_IdentityPanelCom.BP_IdentityPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Enter(struct ULGUIPointerEventData* pointerEventData); // Function BP_IdentityPanelCom.BP_IdentityPanelCom_C.Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(struct ULGUIPointerEventData* pointerEventData); // Function BP_IdentityPanelCom.BP_IdentityPanelCom_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_IdentityPanelCom(int32_t EntryPoint); // Function BP_IdentityPanelCom.BP_IdentityPanelCom_C.ExecuteUbergraph_BP_IdentityPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

