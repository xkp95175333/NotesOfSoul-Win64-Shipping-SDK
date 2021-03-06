// BlueprintGeneratedClass BP_OneMissionPanal.BP_OneMissionPanal_C
// Size: 0x2a0 (Inherited: 0x151)
struct UBP_OneMissionPanal_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FText YiLingQu; // 0x160(0x18)
	struct FMulticastInlineDelegate OnCompleteMission; // 0x178(0x10)
	int32_t MissionID; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FText LinQu; // 0x190(0x18)
	struct FText NotComplete; // 0x1a8(0x18)
	int32_t StatIndex; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct FS_DailyMission Infor; // 0x1c8(0x50)
	int32_t CurrentConfimNum; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct AUIContainerActor* HorizontalSlider; // 0x220(0x08)
	struct UUISliderComponent* Slider; // 0x228(0x08)
	struct AUIContainerActor* RewardInfo; // 0x230(0x08)
	struct AUITextActor* ItemName; // 0x238(0x08)
	struct FColor Gray0-6; // 0x240(0x04)
	struct FColor Black0-66; // 0x244(0x04)
	struct FColor Black0-33; // 0x248(0x04)
	struct FColor Gray0-33; // 0x24c(0x04)
	struct AUITextureActor* LiuGuang; // 0x250(0x08)
	struct AUITextActor* CompleteButtonText; // 0x258(0x08)
	struct AUITextureActor* Item1texture; // 0x260(0x08)
	struct AUITextureActor* Item2Texture; // 0x268(0x08)
	struct AUITextActor* ScoreNum; // 0x270(0x08)
	struct AUITextActor* MissionConfim; // 0x278(0x08)
	struct AUITextActor* MissionInfo; // 0x280(0x08)
	struct AUITextActor* TextName; // 0x288(0x08)
	struct AUISpriteActor* ButtonBG; // 0x290(0x08)
	struct AUIContainerActor* RewardBox; // 0x298(0x08)

	void GetRewardInfor(int32_t ID, struct FText   ); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.GetRewardInfor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdateSlider(int32_t CurrentNum); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.UpdateSlider // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateState(int32_t StatIndex, int32_t CurrentConfimNum); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateMissionInform(struct FS_DailyMission MissionInfor); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.UpdateMissionInform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnConfim toCompleteMission(); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.OnConfim toCompleteMission // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateImageAndText(); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.UpdateImageAndText // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPointerEnter(int32_t Dimension 1); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.OnPointerEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPointerExit(); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.OnPointerExit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnPiontEnter(); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.OnPiontEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnpiontExuit(); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.OnpiontExuit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneMissionPanal(int32_t EntryPoint); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.ExecuteUbergraph_BP_OneMissionPanal // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnCompleteMission__DelegateSignature(int32_t MissionID, float AddScore); // Function BP_OneMissionPanal.BP_OneMissionPanal_C.OnCompleteMission__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

