// BlueprintGeneratedClass BP_XingTian.BP_XingTian_C
// Size: 0x1b38 (Inherited: 0x1b00)
struct ABP_XingTian_C : ANOS_PlayerGhost {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b00(0x08)
	struct USkeletalMeshComponent* SK_Shield; // 0x1b08(0x08)
	struct USkeletalMeshComponent* SK_Axe; // 0x1b10(0x08)
	enum class ALS_Stance Actual; // 0x1b18(0x01)
	enum class ALS_MovementState MovementState; // 0x1b19(0x01)
	enum class ALS_RotationMode Rotation mode; // 0x1b1a(0x01)
	enum class ALS_Gait Gait; // 0x1b1b(0x01)
	enum class ALS_OverlayState overlaystate; // 0x1b1c(0x01)
	enum class ALS_State InjuredState; // 0x1b1d(0x01)
	enum class Als_AimState Aimstate; // 0x1b1e(0x01)
	char pad_1B1F[0x1]; // 0x1b1f(0x01)
	struct FVector PreviousVelocity; // 0x1b20(0x0c)
	float PreviousAimYaw; // 0x1b2c(0x04)
	int32_t AnimInt; // 0x1b30(0x04)
	enum class ECameraType Camerastate; // 0x1b34(0x01)
	enum class ECameraOverlapType Camera Overlap Type; // 0x1b35(0x01)
	bool bAutoMove; // 0x1b36(0x01)
	bool bInSkill1Charge; // 0x1b37(0x01)

	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function BP_XingTian.BP_XingTian_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_XingTian.BP_XingTian_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_XingTian.BP_XingTian_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_XingTian.BP_XingTian_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function BP_XingTian.BP_XingTian_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_XingTian.BP_XingTian_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_XingTian.BP_XingTian_C.BPI_Get_EssentialValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInSkill1Charge(bool bInCharge); // Function BP_XingTian.BP_XingTian_C.SetInSkill1Charge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bInSkill1Charge(); // Function BP_XingTian.BP_XingTian_C.OnRep_bInSkill1Charge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool CanBeControlled(bool bInitiativeControl, struct ANOS_PlayerBase* InsitigatorPlayer, struct AActor* CauserActor, struct FGameplayTagContainer TagContainer); // Function BP_XingTian.BP_XingTian_C.CanBeControlled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnLoaded_78E636D84D3E477CDEBA61BA775B19BD(struct UObject* Loaded); // Function BP_XingTian.BP_XingTian_C.OnLoaded_78E636D84D3E477CDEBA61BA775B19BD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_879ACABD4DBE172125670B9EA0293E4E(struct UObject* Loaded); // Function BP_XingTian.BP_XingTian_C.OnLoaded_879ACABD4DBE172125670B9EA0293E4E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function BP_XingTian.BP_XingTian_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_XingTian.BP_XingTian_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_XingTian.BP_XingTian_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_XingTian.BP_XingTian_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_XingTian.BP_XingTian_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_XingTian.BP_XingTian_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_XingTian.BP_XingTian_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XingTian.BP_XingTian_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XingTian.BP_XingTian_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_XingTian.BP_XingTian_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetStealth(bool bEnable, bool TrueHide); // Function BP_XingTian.BP_XingTian_C.SetStealth // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XingTian(int32_t EntryPoint); // Function BP_XingTian.BP_XingTian_C.ExecuteUbergraph_BP_XingTian // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

