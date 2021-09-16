// BlueprintGeneratedClass BP_NewFriend.BP_NewFriend_C
// Size: 0x1c8 (Inherited: 0x151)
struct UBP_NewFriend_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUISprite* AddFriendInterfaceButton; // 0x160(0x08)
	int32_t CurInterfaceIndex; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UUIText* AddFriendInterfaceText; // 0x170(0x08)
	struct UUISprite* NewFriendReplyInterfaceButton; // 0x178(0x08)
	struct UUIText* NewFriendReplyInterfaceText; // 0x180(0x08)
	struct UUIItem* AddFriendPanel; // 0x188(0x08)
	struct UUIItem* NewFriendReplyListPanel; // 0x190(0x08)
	struct UUIItem* NewFriendReplyList; // 0x198(0x08)
	struct TArray<struct UBP_OneFriendReply_C*> Replies; // 0x1a0(0x10)
	struct UUIText* ErrorTip; // 0x1b0(0x08)
	struct UUIText* SearchAddFriendText; // 0x1b8(0x08)
	struct UUIItem* NewFriendMain; // 0x1c0(0x08)

	void AddFriend(); // Function BP_NewFriend.BP_NewFriend_C.AddFriend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFriendAddReplyList(); // Function BP_NewFriend.BP_NewFriend_C.UpdateFriendAddReplyList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnUnhoverInterfaceButton(int32_t InterfaceIndex); // Function BP_NewFriend.BP_NewFriend_C.OnUnhoverInterfaceButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnHoverInterfaceButton(int32_t InterfaceIndex); // Function BP_NewFriend.BP_NewFriend_C.OnHoverInterfaceButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchInterface(int32_t IntefaceIndex); // Function BP_NewFriend.BP_NewFriend_C.SwitchInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_NewFriend.BP_NewFriend_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendReplyAddRequestRsp_Event_1(int32_t code, int64_t UID); // Function BP_NewFriend.BP_NewFriend_C.OnFriendReplyAddRequestRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAddFriendRsp_Event_1(int32_t code); // Function BP_NewFriend.BP_NewFriend_C.OnAddFriendRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_NewFriend(int32_t EntryPoint); // Function BP_NewFriend.BP_NewFriend_C.ExecuteUbergraph_BP_NewFriend // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

