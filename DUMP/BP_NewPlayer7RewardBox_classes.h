// BlueprintGeneratedClass BP_NewPlayer7RewardBox.BP_NewPlayer7RewardBox_C
// Size: 0x1c0 (Inherited: 0x151)
struct UBP_NewPlayer7RewardBox_C : UBP_BasePanel_C {
	char pad_151[0x3]; // 0x151(0x03)
	int32_t Day; // 0x154(0x04)
	struct AUISpriteActor* ItemBG; // 0x158(0x08)
	int32_t StateIndex; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct AUISpriteActor* ItemSp; // 0x168(0x08)
	struct AUISpriteActor* ItemLevel; // 0x170(0x08)
	struct AUISpriteActor* Button; // 0x178(0x08)
	struct AUISpriteActor* StateSprite; // 0x180(0x08)
	struct FMulticastInlineDelegate GetReward; // 0x188(0x10)
	struct AUITextActor* ItemName; // 0x198(0x08)
	struct AUITextActor* ItemName02; // 0x1a0(0x08)
	struct TArray<struct FS_SevenDayRewardConfig> RewardID; // 0x1a8(0x10)
	struct AUITextureActor* LiuState; // 0x1b8(0x08)

	void CallGetReward(); // Function BP_NewPlayer7RewardBox.BP_NewPlayer7RewardBox_C.CallGetReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateState(int32_t StateIndex); // Function BP_NewPlayer7RewardBox.BP_NewPlayer7RewardBox_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetReward__DelegateSignature(int32_t ID); // Function BP_NewPlayer7RewardBox.BP_NewPlayer7RewardBox_C.GetReward__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

