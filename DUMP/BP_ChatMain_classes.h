// BlueprintGeneratedClass BP_ChatMain.BP_ChatMain_C
// Size: 0x308 (Inherited: 0x151)
struct UBP_ChatMain_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* ChatInputBox; // 0x160(0x08)
	struct UUIItem* AllChannelChatBox; // 0x168(0x08)
	struct UUIItem* ChatTitle; // 0x170(0x08)
	struct TMap<int64_t, struct UBP_OneChatFriend_C*> ChatFriends; // 0x178(0x50)
	struct UUIText* AllChatChannelText; // 0x1c8(0x08)
	struct UUISprite* AllChatChannelButton; // 0x1d0(0x08)
	struct UUISprite* FriendChatChannelButton; // 0x1d8(0x08)
	struct UUIText* FriendChatChannelText; // 0x1e0(0x08)
	struct UUITexture* DownArrow; // 0x1e8(0x08)
	struct UUIItem* ChannelBox; // 0x1f0(0x08)
	struct UUIItem* AllChannelChatMessageScrollBox; // 0x1f8(0x08)
	struct UUIItem* FriendChatBox; // 0x200(0x08)
	enum class EChatChannelType LobbyChatPanel; // 0x208(0x01)
	enum class EChatChannelType CurChatPanelChannel; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct TArray<struct UBP_OneChatMessage_C*> TeamChatMessages; // 0x210(0x10)
	struct TArray<struct UBP_OneChatMessage_C*> GuildChatMessages; // 0x220(0x10)
	int32_t CurPanelIndex; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct TArray<struct UBP_OneChatMessage_C*> FriendChatMessages; // 0x238(0x10)
	struct UUISprite* CurChatFriendCloseButton; // 0x248(0x08)
	struct UUIText* CurChatFriendNickname; // 0x250(0x08)
	struct UUITexture* CurChatHeadIconFrame; // 0x258(0x08)
	struct UUITexture* CurChatHeadIcon; // 0x260(0x08)
	struct UUIItem* ChatFriendsListBox; // 0x268(0x08)
	struct UUITextInputComponent* ChatTextInput; // 0x270(0x08)
	struct UBP_FriendMain_C* BP_FriendMain; // 0x278(0x08)
	struct UUIItem* FriendChatMessageBox; // 0x280(0x08)
	struct UUIItem* ChatBox; // 0x288(0x08)
	struct UUISprite* ChatTextInputBG; // 0x290(0x08)
	bool Shrink; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UUIItem* FriendChatClip; // 0x2a0(0x08)
	struct UUIItem* AllChannelChatMessageClip; // 0x2a8(0x08)
	struct UUIItem* AllChannelChatMessageBox; // 0x2b0(0x08)
	enum class EChatChannelType CurSendMessageChannel; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UUIText* SendChannelText; // 0x2c0(0x08)
	enum class EChatChannelType LobbySendMessageChannel; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UUIBackgroundBlur* Blur; // 0x2d0(0x08)
	struct UUIItem* ChatFriendsListScrollBox; // 0x2d8(0x08)
	struct UUITexture* LobbyChatBoxBG; // 0x2e0(0x08)
	struct UUIItem* CurChatFriendPanel; // 0x2e8(0x08)
	struct UUITexture* FriendChatBG; // 0x2f0(0x08)
	struct UUISprite* VoiceSprite; // 0x2f8(0x08)
	struct UUITexture* NewMessageRedDot; // 0x300(0x08)

	void SetCurSendMessageChannel(enum class EChatChannelType CurSendMessageChannel); // Function BP_ChatMain.BP_ChatMain_C.SetCurSendMessageChannel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeChatPanel(enum class EChatChannelType ChatChannel); // Function BP_ChatMain.BP_ChatMain_C.ChangeChatPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTeamOrGuildMessages(enum class EChatChannelType ChatChannel, struct FLobbyChatMessageList LobbyChatMessageList, bool OnOpen); // Function BP_ChatMain.BP_ChatMain_C.UpdateTeamOrGuildMessages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnShrinkChatPanel(); // Function BP_ChatMain.BP_ChatMain_C.OnShrinkChatPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExpandChatPanel(); // Function BP_ChatMain.BP_ChatMain_C.OnExpandChatPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChatInputBoxUnhovered(); // Function BP_ChatMain.BP_ChatMain_C.OnChatInputBoxUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChatInputBoxHovered(); // Function BP_ChatMain.BP_ChatMain_C.OnChatInputBoxHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSwitchChatBox(int32_t PageID); // Function BP_ChatMain.BP_ChatMain_C.OnSwitchChatBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChannelButtonUnhovered(int32_t Index); // Function BP_ChatMain.BP_ChatMain_C.OnChannelButtonUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TopChatFriend(struct FKxFriendData FriendData); // Function BP_ChatMain.BP_ChatMain_C.TopChatFriend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFriendMessages(struct FKxChatMessage ChatInfo, bool OnOpen); // Function BP_ChatMain.BP_ChatMain_C.UpdateFriendMessages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDeleteCurChatFriend(); // Function BP_ChatMain.BP_ChatMain_C.OnDeleteCurChatFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickDeleteChatFriend(struct FKxFriendData FriendData); // Function BP_ChatMain.BP_ChatMain_C.OnClickDeleteChatFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddChatFriend(struct FKxFriendData FriendData, bool SetCur); // Function BP_ChatMain.BP_ChatMain_C.AddChatFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeChatFriend(struct FKxFriendData FriendData); // Function BP_ChatMain.BP_ChatMain_C.ChangeChatFriend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SendMessage(); // Function BP_ChatMain.BP_ChatMain_C.SendMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFriendChatMessageBox(); // Function BP_ChatMain.BP_ChatMain_C.UpdateFriendChatMessageBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ChatMain.BP_ChatMain_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnReciveChatMessage_Event_1(enum class EChatChannelType ChannelType, struct FLobbyChatMessageList MsgList); // Function BP_ChatMain.BP_ChatMain_C.OnReciveChatMessage_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_ChatMain.BP_ChatMain_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnReciveFiendMessage_Event_1(struct FKxChatMessage Msg); // Function BP_ChatMain.BP_ChatMain_C.OnReciveFiendMessage_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSendFriendMessageRsp_Event_1(struct FKxChatMessage Msg, int32_t code); // Function BP_ChatMain.BP_ChatMain_C.OnSendFriendMessageRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ChatMain(int32_t EntryPoint); // Function BP_ChatMain.BP_ChatMain_C.ExecuteUbergraph_BP_ChatMain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

