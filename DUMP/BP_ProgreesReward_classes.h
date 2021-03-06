// BlueprintGeneratedClass BP_ProgreesReward.BP_ProgreesReward_C
// Size: 0x1c1 (Inherited: 0x151)
struct UBP_ProgreesReward_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIButtonComponent* CurrentButtonCom; // 0x160(0x08)
	float CanGetScore; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FMulticastInlineDelegate OnClick; // 0x170(0x10)
	float CurrentScore; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct AUITextureActor* ItemImage; // 0x188(0x08)
	struct AUITextureActor* ItemStateImage; // 0x190(0x08)
	struct AUITextActor* UIText; // 0x198(0x08)
	int32_t StatIndex; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct AUIContainerActor* YIlingQuState; // 0x1a8(0x08)
	struct AUIContainerActor* RewardInforBox; // 0x1b0(0x08)
	struct AUIContainerActor* RewardITexBOX; // 0x1b8(0x08)
	bool CanGet; // 0x1c0(0x01)

	void GetRewardInfor(int32_t ID, struct FText   ); // Function BP_ProgreesReward.BP_ProgreesReward_C.GetRewardInfor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetItemImage(struct TArray<struct FRewardInfo> newTexture); // Function BP_ProgreesReward.BP_ProgreesReward_C.SetItemImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ProgreesReward.BP_ProgreesReward_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ProgreesReward.BP_ProgreesReward_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_ProgreesReward.BP_ProgreesReward_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateState(int32_t StateIndex, float CurrentScore2); // Function BP_ProgreesReward.BP_ProgreesReward_C.UpdateState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RewardClicked(); // Function BP_ProgreesReward.BP_ProgreesReward_C.RewardClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterReward(); // Function BP_ProgreesReward.BP_ProgreesReward_C.OnEnterReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitReward(); // Function BP_ProgreesReward.BP_ProgreesReward_C.OnExitReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ProgreesReward(int32_t EntryPoint); // Function BP_ProgreesReward.BP_ProgreesReward_C.ExecuteUbergraph_BP_ProgreesReward // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnClick__DelegateSignature(float score); // Function BP_ProgreesReward.BP_ProgreesReward_C.OnClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

