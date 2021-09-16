// BlueprintGeneratedClass BP_RewardList.BP_RewardList_C
// Size: 0x1a0 (Inherited: 0x151)
struct UBP_RewardList_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* ButtonTest; // 0x160(0x08)
	struct UUIText* MissionConfimText; // 0x168(0x08)
	struct UUIText* MissionInformText; // 0x170(0x08)
	struct TArray<struct UBP_OneRewardInform_C*> MissiOne_Inform; // 0x178(0x10)
	struct AUIContainerActor* RewarList; // 0x188(0x08)
	bool IsOnActive; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct AUIContainerActor* RootContainerActor; // 0x198(0x08)

	void ActiveRewardLGUI(bool IsShow, struct FString ItemInform, struct FString ItemNum, struct UTexture* ItemTexture, struct UTexture* LevelTexture); // Function BP_RewardList.BP_RewardList_C.ActiveRewardLGUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowRewardList(bool A); // Function BP_RewardList.BP_RewardList_C.ShowRewardList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CleanAll(); // Function BP_RewardList.BP_RewardList_C.CleanAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddOneReward(struct FString ItemInform, struct FString ItemNum, struct UTexture* ItemTexture, struct UTexture* LevelTexture); // Function BP_RewardList.BP_RewardList_C.AddOneReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_RewardList.BP_RewardList_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RewardList(int32_t EntryPoint); // Function BP_RewardList.BP_RewardList_C.ExecuteUbergraph_BP_RewardList // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

