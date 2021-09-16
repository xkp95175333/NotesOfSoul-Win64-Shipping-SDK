// BlueprintGeneratedClass TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C
// Size: 0x278 (Inherited: 0x220)
struct ATreasureBoxSequenceMgr_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct ALevelSequenceActor* OneShotSequenceAnim; // 0x230(0x08)
	struct ALevelSequenceActor* TenShotSequenceAnim_1; // 0x238(0x08)
	float CurSequenceTotalTime; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UAudioComponent* CurSound2D; // 0x248(0x08)
	struct TArray<struct ASkeletalMeshActor*> TempMesh; // 0x250(0x10)
	int32_t TreasureBoxNum; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct FTimerHandle TenHandle; // 0x268(0x08)
	struct FTimerHandle OneHandle; // 0x270(0x08)

	void Set Treasure Box by ID(struct FName ID); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.Set Treasure Box by ID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Get Cur Sequence Time(float OutValue); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.Get Cur Sequence Time // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void StopOnEndSequence(bool bOneShot); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.StopOnEndSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseTreasureBoxSequence(); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.CloseTreasureBoxSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayTreasureBoxAnimTenShot(struct FName ID); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.PlayTreasureBoxAnimTenShot // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayTreasureBoxAnimOneShot(struct FName ID); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.PlayTreasureBoxAnimOneShot // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TenEvent(); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.TenEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OneEvent(); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.OneEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_TreasureBoxSequenceMgr(int32_t EntryPoint); // Function TreasureBoxSequenceMgr.TreasureBoxSequenceMgr_C.ExecuteUbergraph_TreasureBoxSequenceMgr // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

