// BlueprintGeneratedClass BP_Friend.BP_Friend_C
// Size: 0x188 (Inherited: 0x151)
struct UBP_Friend_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t FriendUID; // 0x160(0x04)
	int32_t HeadID; // 0x164(0x04)
	int32_t HeadBoxID; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FText Name; // 0x170(0x18)

	void ShowFriendMain(); // Function BP_Friend.BP_Friend_C.ShowFriendMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Friend.BP_Friend_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void KickOut(); // Function BP_Friend.BP_Friend_C.KickOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Friend(int32_t EntryPoint); // Function BP_Friend.BP_Friend_C.ExecuteUbergraph_BP_Friend // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

