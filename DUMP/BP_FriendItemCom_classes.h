// BlueprintGeneratedClass BP_FriendItemCom.BP_FriendItemCom_C
// Size: 0x1e8 (Inherited: 0x151)
struct UBP_FriendItemCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* FriendItemText; // 0x160(0x08)
	struct UUISprite* FriendItemTexture; // 0x168(0x08)
	struct UUIText* FriendItemID; // 0x170(0x08)
	struct UUIText* FriendItemName; // 0x178(0x08)
	struct FKxFriendData FriendData; // 0x180(0x48)
	struct UUIToggleComponent* ItemToggle; // 0x1c8(0x08)
	bool bIsOn; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct UBP_GiveGiftCom_C* BP_ParentCom; // 0x1d8(0x08)
	struct FColor NormalColor; // 0x1e0(0x04)
	struct FColor CheckedColor; // 0x1e4(0x04)

	void SetCheckState(bool bNewValue); // Function BP_FriendItemCom.BP_FriendItemCom_C.SetCheckState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateOneFriendInfo(); // Function BP_FriendItemCom.BP_FriendItemCom_C.UpdateOneFriendInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitFriendItem(); // Function BP_FriendItemCom.BP_FriendItemCom_C.InitFriendItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_FriendItemCom.BP_FriendItemCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_FriendItemCom.BP_FriendItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickItem(bool bIsOn); // Function BP_FriendItemCom.BP_FriendItemCom_C.OnClickItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_FriendItemCom(int32_t EntryPoint); // Function BP_FriendItemCom.BP_FriendItemCom_C.ExecuteUbergraph_BP_FriendItemCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

