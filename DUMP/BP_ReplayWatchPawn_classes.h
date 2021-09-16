// BlueprintGeneratedClass BP_ReplayWatchPawn.BP_ReplayWatchPawn_C
// Size: 0x2f8 (Inherited: 0x2b0)
struct ABP_ReplayWatchPawn_C : ANOS_ReplayWatchPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UCameraComponent* Camera; // 0x2b8(0x08)
	struct USpringArmComponent* SpringArm; // 0x2c0(0x08)
	struct UWBP_ReplayView_C* ReplayCntrolBoard; // 0x2c8(0x08)
	struct ANOS_PlayerBase* Target Pawn; // 0x2d0(0x08)
	bool bIsBeginLerp; // 0x2d8(0x01)
	bool bViewOnGhost; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct UWBP_GhostMainUI_C* GhostMain; // 0x2e0(0x08)
	struct UWBP_MainUI_C* HumanMain; // 0x2e8(0x08)
	float Interp Speed; // 0x2f0(0x04)
	float LerpLocationSpeed; // 0x2f4(0x04)

	void AttachToPawn(); // Function BP_ReplayWatchPawn.BP_ReplayWatchPawn_C.AttachToPawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UnPossessTarget(); // Function BP_ReplayWatchPawn.BP_ReplayWatchPawn_C.UnPossessTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPossessTargetRePlayPawn(struct ANOS_PlayerBase* TargetPawn); // Function BP_ReplayWatchPawn.BP_ReplayWatchPawn_C.OnPossessTargetRePlayPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Escape_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_ReplayWatchPawn.BP_ReplayWatchPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_R_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_ReplayWatchPawn.BP_ReplayWatchPawn_C.InpActEvt_R_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_ReplayWatchPawn.BP_ReplayWatchPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_ReplayWatchPawn.BP_ReplayWatchPawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ReplayWatchPawn(int32_t EntryPoint); // Function BP_ReplayWatchPawn.BP_ReplayWatchPawn_C.ExecuteUbergraph_BP_ReplayWatchPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

