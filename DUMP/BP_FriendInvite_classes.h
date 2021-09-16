// BlueprintGeneratedClass BP_FriendInvite.BP_FriendInvite_C
// Size: 0x178 (Inherited: 0x151)
struct UBP_FriendInvite_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<int32_t> InvitationIDs; // 0x160(0x10)
	struct UUIItem* InvitationBox; // 0x170(0x08)

	void RefreshList(struct UBP_OneFriendInvite_C* SelectOne, int32_t RemoveID); // Function BP_FriendInvite.BP_FriendInvite_C.RefreshList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddInvitation(int32_t ID, struct FString Name, enum class EInviteType InviteType, int32_t TeamID); // Function BP_FriendInvite.BP_FriendInvite_C.AddInvitation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInvitationRecevie(int32_t InvitorID, struct FString InvitorName, enum class EInviteType InviteType, int32_t TeamID); // Function BP_FriendInvite.BP_FriendInvite_C.OnInvitationRecevie // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_FriendInvite.BP_FriendInvite_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_FriendInvite.BP_FriendInvite_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnJoinTeamRspEvent_Event_1(int32_t code, int32_t UID, int32_t TeamID); // Function BP_FriendInvite.BP_FriendInvite_C.OnJoinTeamRspEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnReceiveInvitationEvent_Event_1(int32_t InvitorID, struct FString InvitorName, enum class EInviteType InviteType, int32_t TeamID); // Function BP_FriendInvite.BP_FriendInvite_C.OnReceiveInvitationEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_FriendInvite(int32_t EntryPoint); // Function BP_FriendInvite.BP_FriendInvite_C.ExecuteUbergraph_BP_FriendInvite // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

