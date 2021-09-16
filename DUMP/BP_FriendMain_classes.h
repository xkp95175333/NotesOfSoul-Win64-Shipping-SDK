// BlueprintGeneratedClass BP_FriendMain.BP_FriendMain_C
// Size: 0x278 (Inherited: 0x151)
struct UBP_FriendMain_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUITextInputComponent* NicknameInputBox; // 0x160(0x08)
	struct UUIItem* OnlineStateSelectBox; // 0x168(0x08)
	struct UUITexture* AccountHeadIconFrame; // 0x170(0x08)
	struct UUITexture* AccountHeadIcon; // 0x178(0x08)
	struct UUIText* GKDIDText; // 0x180(0x08)
	struct UUIText* NicknameInputText; // 0x188(0x08)
	struct UUIText* OnlineStateText; // 0x190(0x08)
	struct UUITexture* OnlineStateImage; // 0x198(0x08)
	struct UUITexture* NewReplyButton; // 0x1a0(0x08)
	struct UBP_NewFriend_C* BP_NewFriend; // 0x1a8(0x08)
	struct TArray<struct FKxFriendData> NotMathSearchFriendList; // 0x1b0(0x10)
	struct UUIItem* FriendListBox; // 0x1c0(0x08)
	struct TMap<int32_t, struct UBP_OneFriendGroup_C*> FriendGroupMap; // 0x1c8(0x50)
	struct UBP_RightMouseButtonMenu_C* BP_RightMouseButtonMenu; // 0x218(0x08)
	struct UBP_ChatMain_C* BP_ChatMain; // 0x220(0x08)
	struct UUISprite* GroupModifyCancelButton; // 0x228(0x08)
	struct UUIItem* FriendMain_Root; // 0x230(0x08)
	struct UUITextInputComponent* SearchFriendBox; // 0x238(0x08)
	struct UUIItem* FriendMainBox; // 0x240(0x08)
	struct UUIItem* FriendListClip; // 0x248(0x08)
	struct UUIItem* CurWatchGroupBox; // 0x250(0x08)
	struct UUIText* CurGroupNameText; // 0x258(0x08)
	struct UUIScrollViewComponent* FriendListScrollBox; // 0x260(0x08)
	struct UBP_OneFriendGroup_C* CurWatchFriengGroup; // 0x268(0x08)
	struct UUITexture* NewFriendRedDot; // 0x270(0x08)

	void ShowEditNicknameUI(); // Function BP_FriendMain.BP_FriendMain_C.ShowEditNicknameUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShrinkCurWatchGroup(); // Function BP_FriendMain.BP_FriendMain_C.ShrinkCurWatchGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnScrollFriendList(); // Function BP_FriendMain.BP_FriendMain_C.OnScrollFriendList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(bool Open); // Function BP_FriendMain.BP_FriendMain_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SearchFriend(); // Function BP_FriendMain.BP_FriendMain_C.SearchFriend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFriendGroup(); // Function BP_FriendMain.BP_FriendMain_C.UpdateFriendGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateAddList(); // Function BP_FriendMain.BP_FriendMain_C.UpdateAddList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddChatFriend(int64_t UID); // Function BP_FriendMain.BP_FriendMain_C.AddChatFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRightMouseClickFriend(struct UBP_OneFriend_C* OneFriend); // Function BP_FriendMain.BP_FriendMain_C.OnRightMouseClickFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFriendList(); // Function BP_FriendMain.BP_FriendMain_C.UpdateFriendList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseFriendList(); // Function BP_FriendMain.BP_FriendMain_C.CloseFriendList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateAccountData(); // Function BP_FriendMain.BP_FriendMain_C.UpdateAccountData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOnlineState(enum class EKxOnlineState State); // Function BP_FriendMain.BP_FriendMain_C.SetOnlineState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOnlineStateSelectBoxVisibility(); // Function BP_FriendMain.BP_FriendMain_C.SetOnlineStateSelectBoxVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActivateNicknameInputBox(); // Function BP_FriendMain.BP_FriendMain_C.ActivateNicknameInputBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendListUpdate_Event_1(struct TArray<struct FKxFriendData> DataList); // Function BP_FriendMain.BP_FriendMain_C.OnFriendListUpdate_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendAddListUpdate_Event_2(struct TArray<struct FKxFriendData> DataList); // Function BP_FriendMain.BP_FriendMain_C.OnFriendAddListUpdate_Event_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendGroupListUpdate_Event_1(); // Function BP_FriendMain.BP_FriendMain_C.OnFriendGroupListUpdate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEditNicknameRsp_Event_1(int32_t code); // Function BP_FriendMain.BP_FriendMain_C.OnEditNicknameRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNicknameInputTextSubmit(struct FString inString); // Function BP_FriendMain.BP_FriendMain_C.OnNicknameInputTextSubmit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInputActiveteEvent(bool InActivate); // Function BP_FriendMain.BP_FriendMain_C.OnInputActiveteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_FriendMain.BP_FriendMain_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnEditOnlinStateRsp_Event_1(int32_t code, enum class EKxOnlineState OnlineState); // Function BP_FriendMain.BP_FriendMain_C.OnEditOnlinStateRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAccountDataUpdate_Event_1(struct FKxAccountData FriendsData); // Function BP_FriendMain.BP_FriendMain_C.OnAccountDataUpdate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_FriendMain(int32_t EntryPoint); // Function BP_FriendMain.BP_FriendMain_C.ExecuteUbergraph_BP_FriendMain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

