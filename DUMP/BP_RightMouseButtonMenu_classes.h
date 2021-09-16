// BlueprintGeneratedClass BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C
// Size: 0x220 (Inherited: 0x151)
struct UBP_RightMouseButtonMenu_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* MenuBox; // 0x160(0x08)
	struct TArray<struct UBP_OneGroup_C*> Groups; // 0x168(0x10)
	enum class EChatChannelType Cur Chat Channel; // 0x178(0x01)
	enum class E_RightMousetMenuType MenuType; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct UBP_OneFriend_C* BP_OneFiend; // 0x180(0x08)
	struct UUIItem* Groups_Root; // 0x188(0x08)
	struct UUISprite* SetGroupButton; // 0x190(0x08)
	struct UUIText* SetGroupText; // 0x198(0x08)
	struct UUISprite* RightMouseButtonMenu_Root; // 0x1a0(0x08)
	struct UUIItem* FriendMenu; // 0x1a8(0x08)
	struct UUIItem* GroupMenu; // 0x1b0(0x08)
	struct UUISprite* InviteButton; // 0x1b8(0x08)
	struct UBP_OneFriendGroup_C* BP_OneFriendGroup; // 0x1c0(0x08)
	struct UBP_FriendMain_C* BP_FriendMain; // 0x1c8(0x08)
	struct FKxFriendData FriendData; // 0x1d0(0x48)
	struct UUISprite* InviteJoinGuildButton; // 0x218(0x08)

	void InviteFriendJoinGuild(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.InviteFriendJoinGuild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeleteCurChatFriend(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.DeleteCurChatFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeleteGroup(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.DeleteGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddGroup(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.AddGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ModifyGroup(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.ModifyGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowInviteButton(bool Show); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.ShowInviteButton // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnClickSendMessage(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnClickSendMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeleteFriend(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.DeleteFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetFriendGroup(int32_t GroupID); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.SetFriendGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WatchFriendInfo(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.WatchFriendInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InviteFriend(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.InviteFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloeMenu(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.CloeMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCall(enum class E_RightMousetMenuType MenuType, struct UBP_OneFriend_C* OneFriend, enum class EChatChannelType CurChatChannel, struct UBP_OneFriendGroup_C* OneFriendGroup); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnCall // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnModifyFriendGroupRsp_Event_1(int32_t code); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnModifyFriendGroupRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAddFriendGroupRsp_Event_1(int32_t code); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnAddFriendGroupRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDeleteFriendGroupRsp_Event_1(int32_t code); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnDeleteFriendGroupRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInviteJoinGuild_Event_1(int32_t nPlayerDbid); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnInviteJoinGuild_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEditFriendGroupRsp_Event_2(int32_t code); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnEditFriendGroupRsp_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDeleteFriendRsp_Event_1(int32_t code); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnDeleteFriendRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInviteRspEvent_Event_1(int32_t code); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.OnInviteRspEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RightMouseButtonMenu(int32_t EntryPoint); // Function BP_RightMouseButtonMenu.BP_RightMouseButtonMenu_C.ExecuteUbergraph_BP_RightMouseButtonMenu // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

