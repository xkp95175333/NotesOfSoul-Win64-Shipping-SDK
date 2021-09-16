// BlueprintGeneratedClass BP_MissionViewManager.BP_MissionViewManager_C
// Size: 0x269 (Inherited: 0x151)
struct UBP_MissionViewManager_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUIContainerActor* ProGreesBarActor; // 0x160(0x08)
	struct UUISliderComponent* ProGreesSliderCom; // 0x168(0x08)
	float CurrentValue; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct AUIContainerActor* MissionListView; // 0x178(0x08)
	struct AUIContainerActor* ProGreesView; // 0x180(0x08)
	struct UBP_RewardList_C* MissionRewardListCom; // 0x188(0x08)
	struct AUITextActor* ProgreesText; // 0x190(0x08)
	struct UDataTable* MissionListTable; // 0x198(0x08)
	struct TArray<struct UBP_ProgreesReward_C*> ProGreesReward; // 0x1a0(0x10)
	struct TArray<struct FS_DailyMission> MissionListInfo; // 0x1b0(0x10)
	struct TArray<struct UBP_OneMissionPanal_C*> MissiOne_Inform; // 0x1c0(0x10)
	struct TMap<int32_t, int32_t> ID_Score; // 0x1d0(0x50)
	float WaitAddScore; // 0x220(0x04)
	int32_t WaitCompleteMission; // 0x224(0x04)
	bool IsMission; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float WaitGetScore; // 0x22c(0x04)
	struct UBP_OneMissionPanal_C* WaitCompeletMission; // 0x230(0x08)
	struct UDataTable* ActivityRewardIfor; // 0x238(0x08)
	struct AUITextureActor* ProhgreesTexture; // 0x240(0x08)
	struct TArray<struct AUIContainerActor*> RewardBox; // 0x248(0x10)
	struct UBP_OneMissionPanal_C* NewVar_1; // 0x258(0x08)
	struct AUISpriteActor* YiJianLingQuButton; // 0x260(0x08)
	bool CanGetSomething; // 0x268(0x01)

	void IsCanGetSomething(bool bCanGet); // Function BP_MissionViewManager.BP_MissionViewManager_C.IsCanGetSomething // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdataState(); // Function BP_MissionViewManager.BP_MissionViewManager_C.UpdataState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetComponentIndexFormScore(float score, int32_t Index); // Function BP_MissionViewManager.BP_MissionViewManager_C.GetComponentIndexFormScore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CheckisCanGet(bool NewParam); // Function BP_MissionViewManager.BP_MissionViewManager_C.CheckisCanGet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdateActivityRewardState(); // Function BP_MissionViewManager.BP_MissionViewManager_C.UpdateActivityRewardState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateDailyMissionState(struct FDailyMissionList DailyMissionList); // Function BP_MissionViewManager.BP_MissionViewManager_C.UpdateDailyMissionState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetActivityRewardImage(int32_t B, struct TArray<struct FRewardInfo> RewardItem); // Function BP_MissionViewManager.BP_MissionViewManager_C.GetActivityRewardImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetRewardInfoFromID(struct FItemDataInfo ItemDataInfo, struct TArray<struct FS_RewardItemInfo> RewardItemInfo1); // Function BP_MissionViewManager.BP_MissionViewManager_C.GetRewardInfoFromID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetProgreestScoreText(); // Function BP_MissionViewManager.BP_MissionViewManager_C.SetProgreestScoreText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct UBP_OneMissionPanal_C* AddMissionOne(struct FS_DailyMission MissionInfor); // Function BP_MissionViewManager.BP_MissionViewManager_C.AddMissionOne // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateRewardUI(struct TArray<struct FItemData> RewardList); // Function BP_MissionViewManager.BP_MissionViewManager_C.CreateRewardUI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_MissionViewManager.BP_MissionViewManager_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MissionViewManager.BP_MissionViewManager_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_MissionViewManager.BP_MissionViewManager_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleteMission(int32_t MissionID, float AddScore); // Function BP_MissionViewManager.BP_MissionViewManager_C.OnCompleteMission // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Click(float score); // Function BP_MissionViewManager.BP_MissionViewManager_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RewardReturn(int32_t code, struct FItemDataInfo ItemList); // Function BP_MissionViewManager.BP_MissionViewManager_C.RewardReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(struct FDailyMissionList NewDailyMissionData); // Function BP_MissionViewManager.BP_MissionViewManager_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryGetAllScroeReward(); // Function BP_MissionViewManager.BP_MissionViewManager_C.TryGetAllScroeReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MissionViewManager(int32_t EntryPoint); // Function BP_MissionViewManager.BP_MissionViewManager_C.ExecuteUbergraph_BP_MissionViewManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

