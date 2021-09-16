// BlueprintGeneratedClass BP_OneChatFriend.BP_OneChatFriend_C
// Size: 0x1e0 (Inherited: 0x151)
struct UBP_OneChatFriend_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FKxFriendData FriendData; // 0x160(0x48)
	struct UUITexture* NewMessageTipBG; // 0x1a8(0x08)
	struct UUITexture* NewMessageTipDot; // 0x1b0(0x08)
	struct UUITexture* OneChatFriendHeadIconFrame; // 0x1b8(0x08)
	struct UUITexture* OneChatFriendHeadIcon; // 0x1c0(0x08)
	struct UUIText* OneChatFriendNickname; // 0x1c8(0x08)
	struct UBP_ChatMain_C* BP_ChatMain; // 0x1d0(0x08)
	struct UUIItem* OneChatFriend_Root; // 0x1d8(0x08)

	void DeleteChatFriend(); // Function BP_OneChatFriend.BP_OneChatFriend_C.DeleteChatFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnReciveMessage(); // Function BP_OneChatFriend.BP_OneChatFriend_C.OnReciveMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClick(); // Function BP_OneChatFriend.BP_OneChatFriend_C.OnClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateChatFriend(); // Function BP_OneChatFriend.BP_OneChatFriend_C.UpdateChatFriend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneChatFriend.BP_OneChatFriend_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneChatFriend(int32_t EntryPoint); // Function BP_OneChatFriend.BP_OneChatFriend_C.ExecuteUbergraph_BP_OneChatFriend // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

