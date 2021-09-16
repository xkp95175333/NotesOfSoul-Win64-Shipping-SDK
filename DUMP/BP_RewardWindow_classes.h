// BlueprintGeneratedClass BP_RewardWindow.BP_RewardWindow_C
// Size: 0x170 (Inherited: 0x151)
struct UBP_RewardWindow_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUISpriteActor* ItemSprite; // 0x160(0x08)
	struct AUITextActor* ItemName; // 0x168(0x08)

	void UpdateInfo(struct FText Name, struct ULGUISpriteData* ItemSprite); // Function BP_RewardWindow.BP_RewardWindow_C.UpdateInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseWindow(); // Function BP_RewardWindow.BP_RewardWindow_C.CloseWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RewardWindow(int32_t EntryPoint); // Function BP_RewardWindow.BP_RewardWindow_C.ExecuteUbergraph_BP_RewardWindow // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

