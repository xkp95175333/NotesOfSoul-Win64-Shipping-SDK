// BlueprintGeneratedClass BP_OneChatMessage.BP_OneChatMessage_C
// Size: 0x1e8 (Inherited: 0x151)
struct UBP_OneChatMessage_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FKxChatMessage FriendChatInfo; // 0x160(0x40)
	struct UUIText* OneChatMessage; // 0x1a0(0x08)
	struct FLobbyChatMessage LobbyChatInfo; // 0x1a8(0x30)
	enum class EChatChannelType MessageType; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct UBP_ChatMain_C* BP_ChatMain; // 0x1e0(0x08)

	void CheckShowMessage(); // Function BP_OneChatMessage.BP_OneChatMessage_C.CheckShowMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneChatMessage.BP_OneChatMessage_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnDestroyBP(); // Function BP_OneChatMessage.BP_OneChatMessage_C.OnDestroyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneChatMessage(int32_t EntryPoint); // Function BP_OneChatMessage.BP_OneChatMessage_C.ExecuteUbergraph_BP_OneChatMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

