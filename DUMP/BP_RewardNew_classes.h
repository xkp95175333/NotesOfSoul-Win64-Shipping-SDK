// BlueprintGeneratedClass BP_RewardNew.BP_RewardNew_C
// Size: 0x198 (Inherited: 0x151)
struct UBP_RewardNew_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUIContainerActor* RewardListCon; // 0x160(0x08)
	struct TArray<struct UBP_OneRewardInform_C*> ListCom; // 0x168(0x10)
	struct AUITextActor* ConfimText; // 0x178(0x08)
	struct FColor Black; // 0x180(0x04)
	struct FColor White; // 0x184(0x04)
	struct AUISpriteActor* CofimBG; // 0x188(0x08)
	struct FColor Hui_0_66_1; // 0x190(0x04)
	struct FColor Hui1; // 0x194(0x04)

	void FindItemInfo(struct TArray<struct FItemData> Array, struct TArray<struct FS_RewardItemInfo> NewLocalVar_22); // Function BP_RewardNew.BP_RewardNew_C.FindItemInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowReward(struct TArray<struct FItemData> IDArray); // Function BP_RewardNew.BP_RewardNew_C.ShowReward // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddRewardItem(struct FString Name, struct FString Num, struct UTexture* Image, struct UTexture* newTexture); // Function BP_RewardNew.BP_RewardNew_C.AddRewardItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Quit(); // Function BP_RewardNew.BP_RewardNew_C.Quit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress(bool IsPrees); // Function BP_RewardNew.BP_RewardNew_C.OnPress // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Enter(); // Function BP_RewardNew.BP_RewardNew_C.Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function BP_RewardNew.BP_RewardNew_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RewardNew(int32_t EntryPoint); // Function BP_RewardNew.BP_RewardNew_C.ExecuteUbergraph_BP_RewardNew // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

