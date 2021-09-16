// BlueprintGeneratedClass DoviceLevel_Mgr.DoviceLevel_Mgr_C
// Size: 0x250 (Inherited: 0x220)
struct ADoviceLevel_Mgr_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UUserWidget* CurWidget; // 0x230(0x08)
	struct UUserWidget* Class; // 0x238(0x08)
	struct TArray<struct ABP_PracticeLevelBlock_C*> LevelBlockList; // 0x240(0x10)

	void ReceiveBeginPlay(); // Function DoviceLevel_Mgr.DoviceLevel_Mgr_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveCurWidget(); // Function DoviceLevel_Mgr.DoviceLevel_Mgr_C.RemoveCurWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RefreshWidget(struct UUserWidget* WBP); // Function DoviceLevel_Mgr.DoviceLevel_Mgr_C.RefreshWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InputInterface(struct FInputStruct InputKey); // Function DoviceLevel_Mgr.DoviceLevel_Mgr_C.InputInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MissionFinish(bool bGhostWin); // Function DoviceLevel_Mgr.DoviceLevel_Mgr_C.MissionFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UsingItem(); // Function DoviceLevel_Mgr.DoviceLevel_Mgr_C.UsingItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_DoviceLevel_Mgr(int32_t EntryPoint); // Function DoviceLevel_Mgr.DoviceLevel_Mgr_C.ExecuteUbergraph_DoviceLevel_Mgr // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

