// BlueprintGeneratedClass BP_OneFriendReply.BP_OneFriendReply_C
// Size: 0x1c0 (Inherited: 0x151)
struct UBP_OneFriendReply_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FKxFriendData ApplyInfo; // 0x160(0x48)
	struct UUITexture* NewFriendReplayHeadIconFrame; // 0x1a8(0x08)
	struct UUITexture* NewFriendReplayHeadIcon; // 0x1b0(0x08)
	struct UUIText* NewReplyNickname; // 0x1b8(0x08)

	void OnReplyFriendAddApply(bool Agree); // Function BP_OneFriendReply.BP_OneFriendReply_C.OnReplyFriendAddApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateReplyInfo(); // Function BP_OneFriendReply.BP_OneFriendReply_C.UpdateReplyInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneFriendReply.BP_OneFriendReply_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneFriendReply(int32_t EntryPoint); // Function BP_OneFriendReply.BP_OneFriendReply_C.ExecuteUbergraph_BP_OneFriendReply // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

