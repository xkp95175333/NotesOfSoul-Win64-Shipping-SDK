// BlueprintGeneratedClass BP_OneFriendGroup.BP_OneFriendGroup_C
// Size: 0x1f0 (Inherited: 0x151)
struct UBP_OneFriendGroup_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUITexture* SpreadButton; // 0x160(0x08)
	struct UUIItem* GroupList; // 0x168(0x08)
	int32_t GroupID; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FString GroupName; // 0x178(0x10)
	struct TArray<struct FKxFriendData> FriendDatas; // 0x188(0x10)
	struct TArray<struct UBP_OneFriend_C*> Friends; // 0x198(0x10)
	struct UUITextInputComponent* GroupNameBox; // 0x1a8(0x08)
	struct UBP_FriendMain_C* BP_FriendMain; // 0x1b0(0x08)
	struct UUIButtonComponent* GroupTitleBG; // 0x1b8(0x08)
	bool Modify; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UUIItem* GroupFriendListClip; // 0x1c8(0x08)
	struct UUIItem* FriendGroup_Root; // 0x1d0(0x08)
	float ClipHeight; // 0x1d8(0x04)
	float RootHeight; // 0x1dc(0x04)
	bool Expand; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct UUIItem* FriendGroupTitle; // 0x1e8(0x08)

	void OnGroupNameSubmit(); // Function BP_OneFriendGroup.BP_OneFriendGroup_C.OnGroupNameSubmit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRightMouseButtonClick(); // Function BP_OneFriendGroup.BP_OneFriendGroup_C.OnRightMouseButtonClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFriendGroup(); // Function BP_OneFriendGroup.BP_OneFriendGroup_C.UpdateFriendGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSpreadButton(); // Function BP_OneFriendGroup.BP_OneFriendGroup_C.OnClickSpreadButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneFriendGroup.BP_OneFriendGroup_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(bool InActivate); // Function BP_OneFriendGroup.BP_OneFriendGroup_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneFriendGroup(int32_t EntryPoint); // Function BP_OneFriendGroup.BP_OneFriendGroup_C.ExecuteUbergraph_BP_OneFriendGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

