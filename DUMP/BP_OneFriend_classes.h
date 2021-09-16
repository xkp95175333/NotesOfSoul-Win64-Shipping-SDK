// BlueprintGeneratedClass BP_OneFriend.BP_OneFriend_C
// Size: 0x210 (Inherited: 0x151)
struct UBP_OneFriend_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUITexture* HoveredBG; // 0x160(0x08)
	struct UUIButtonComponent* Root; // 0x168(0x08)
	struct FKxFriendData FriendData; // 0x170(0x48)
	struct UUITexture* FriendHeadIconFrame; // 0x1b8(0x08)
	struct UUITexture* FriendHeadIcon; // 0x1c0(0x08)
	struct UUIText* FriendNickname; // 0x1c8(0x08)
	struct UUITexture* FriendOnlineStateImage; // 0x1d0(0x08)
	struct UUIText* FriendOnlineStateText; // 0x1d8(0x08)
	struct UBP_FriendMain_C* BP_FriendMain; // 0x1e0(0x08)
	bool OpenRightMouseButtonMenu; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct UUISprite* NewMessageButton; // 0x1f0(0x08)
	struct UUIItem* OneFriendRoot; // 0x1f8(0x08)
	bool FirstClick; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UUIText* IntimacyValue; // 0x208(0x08)

	void OnClickNewMessageButton(); // Function BP_OneFriend.BP_OneFriend_C.OnClickNewMessageButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFriendInfo(); // Function BP_OneFriend.BP_OneFriend_C.UpdateFriendInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClick(); // Function BP_OneFriend.BP_OneFriend_C.OnClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnUnhovered(); // Function BP_OneFriend.BP_OneFriend_C.OnUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnHovered(); // Function BP_OneFriend.BP_OneFriend_C.OnHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneFriend.BP_OneFriend_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void DoubleClickCheck(); // Function BP_OneFriend.BP_OneFriend_C.DoubleClickCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneFriend(int32_t EntryPoint); // Function BP_OneFriend.BP_OneFriend_C.ExecuteUbergraph_BP_OneFriend // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

