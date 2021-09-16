// BlueprintGeneratedClass BP_NieXiaoQian.BP_NieXiaoQian_C
// Size: 0x1bc0 (Inherited: 0x1b20)
struct ABP_NieXiaoQian_C : ANOS_NieXiaoQian {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b20(0x08)
	struct USkeletalMeshComponent* LinkLine; // 0x1b28(0x08)
	struct USkeletalMeshComponent* LampMesh; // 0x1b30(0x08)
	struct USpringArmComponent* SpringArm; // 0x1b38(0x08)
	enum class ALS_Stance Actual; // 0x1b40(0x01)
	enum class ALS_MovementState MovementState; // 0x1b41(0x01)
	enum class ALS_RotationMode Rotation mode; // 0x1b42(0x01)
	enum class ALS_Gait Gait; // 0x1b43(0x01)
	enum class ALS_OverlayState overlaystate; // 0x1b44(0x01)
	enum class ALS_State InjuredState; // 0x1b45(0x01)
	enum class Als_AimState Aimstate; // 0x1b46(0x01)
	enum class ECameraType Camerastate; // 0x1b47(0x01)
	enum class ECameraOverlapType Camera Overlap Type; // 0x1b48(0x01)
	char pad_1B49[0x3]; // 0x1b49(0x03)
	int32_t AnimInt; // 0x1b4c(0x04)
	float PreYaw; // 0x1b50(0x04)
	char pad_1B54[0x4]; // 0x1b54(0x04)
	struct UUserWidget* Cameraui; // 0x1b58(0x08)
	enum class ALS_MovementState PreviousMovementState; // 0x1b60(0x01)
	char pad_1B61[0x7]; // 0x1b61(0x07)
	struct UDataTable* Data; // 0x1b68(0x08)
	struct TMap<int32_t, struct TSoftObjectPtr<struct UMaterialInterface>> Accessories Material Map; // 0x1b70(0x50)

	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Get_EssentialValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSkillOnUse(int32_t Index, bool IsShow); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.SetSkillOnUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCharacterMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.OnCharacterMovementModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnLinkLine_Skill03(struct FVector Spawn Transform Location, float DegreeIndex, struct FRotator Spawn Transform Rotation); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.SpawnLinkLine_Skill03 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetBackOrDropGhostLamp(enum class ESKillState StateAction, struct FVector SpawnLampLocation); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.GetBackOrDropGhostLamp // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct ABP_XQ_SoulLink_C* FireXQLink(struct FVector BeginLocation, struct FVector TargetLocation, enum class ESKillAction SkillAction, float Scale, bool IsOpenFlyDamageCheck, bool bIsDestory, struct AActor* Owner, bool OpenCollicion); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.FireXQLink // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMovementStateChanged(enum class ALS_MovementState NewMovementState); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.OnMovementStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool GetFireLinkTargetLocation(float CheckDistance, struct FVector NewParam); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.GetFireLinkTargetLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnLoaded_A5F50FCF4D4DA1C382F5AC83A45654B4(struct UObject* Loaded); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.OnLoaded_A5F50FCF4D4DA1C382F5AC83A45654B4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_A71A95814DA8BBCC596048B4B3CD9988(struct UObject* Loaded); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.OnLoaded_A71A95814DA8BBCC596048B4B3CD9988 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetisUseAlsCamera(); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.SetisUseAlsCamera // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OtherClientSpawnLink(struct FVector SpawnLocation, enum class ESKillAction SkillType, struct FVector LunchVelocity, bool bIsDestory, bool IsOpenCollision); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.OtherClientSpawnLink // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OtherClientLink_SKill03(struct FVector Spawn Transform Location, float DegreeIndex, struct FRotator Spawn Transform Rotation); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.OtherClientLink_SKill03 // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_NieXiaoQian(int32_t EntryPoint); // Function BP_NieXiaoQian.BP_NieXiaoQian_C.ExecuteUbergraph_BP_NieXiaoQian // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

