// BlueprintGeneratedClass BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C
// Size: 0x26c (Inherited: 0x151)
struct UBP_MembersOfTheManagementInfo_Com_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGuildUserData PlayerInfo; // 0x160(0x100)
	struct UBP_MemberManagementPanelCom_C* MemberManage; // 0x260(0x08)
	float tmpheight; // 0x268(0x04)

	void GetTimeString(struct FString Time); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.GetTimeString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Manger(bool isManger); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.Manger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInOffice(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.OnInOffice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnKickedOut(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.OnKickedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InOffice(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.InOffice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void KickedOut(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.KickedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInOffice(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.SetInOffice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetKickedOut(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.SetKickedOut // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateButton(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.UpdateButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.InitInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MembersOfTheManagementInfo_Com(int32_t EntryPoint); // Function BP_MembersOfTheManagementInfo_Com.BP_MembersOfTheManagementInfo_Com_C.ExecuteUbergraph_BP_MembersOfTheManagementInfo_Com // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

