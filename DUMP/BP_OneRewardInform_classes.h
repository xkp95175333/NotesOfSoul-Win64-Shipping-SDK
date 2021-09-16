// BlueprintGeneratedClass BP_OneRewardInform.BP_OneRewardInform_C
// Size: 0x170 (Inherited: 0x151)
struct UBP_OneRewardInform_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct AUITextActor* ItemInform; // 0x158(0x08)
	struct AUITextureActor* ItemTexture; // 0x160(0x08)
	struct AUITextureActor* LevelTexture; // 0x168(0x08)

	void UpdateInform(struct FString ItemInform, struct FString ItemNum, struct UTexture* ItemTexture, struct UTexture* LevelTexture); // Function BP_OneRewardInform.BP_OneRewardInform_C.UpdateInform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

