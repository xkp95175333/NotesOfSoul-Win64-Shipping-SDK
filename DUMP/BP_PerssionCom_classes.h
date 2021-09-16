// BlueprintGeneratedClass BP_PerssionCom.BP_PerssionCom_C
// Size: 0x178 (Inherited: 0x151)
struct UBP_PerssionCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	enum class EGuildRightType Right; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UBP_MemberManagementPanelCom_C* MemberManage; // 0x168(0x08)
	struct UUIText* Text; // 0x170(0x08)

	void AwakeBP(); // Function BP_PerssionCom.BP_PerssionCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_PerssionCom.BP_PerssionCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Click(bool InBool); // Function BP_PerssionCom.BP_PerssionCom_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Enter(struct ULGUIPointerEventData* pointerEventData); // Function BP_PerssionCom.BP_PerssionCom_C.Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(struct ULGUIPointerEventData* pointerEventData); // Function BP_PerssionCom.BP_PerssionCom_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PerssionCom(int32_t EntryPoint); // Function BP_PerssionCom.BP_PerssionCom_C.ExecuteUbergraph_BP_PerssionCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

