// BlueprintGeneratedClass BP_ShaoZiKiller.BP_ShaoZiKiller_C
// Size: 0x1c9c (Inherited: 0x1b00)
struct ABP_ShaoZiKiller_C : ANOS_ShaoZiKiller {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b00(0x08)
	struct USkeletalMeshComponent* ShaoZi; // 0x1b08(0x08)
	float Timeline_2_NewTrack_0_F04D74314383E5EAF70FCEACB677BDDD; // 0x1b10(0x04)
	enum class ETimelineDirection Timeline_2__Direction_F04D74314383E5EAF70FCEACB677BDDD; // 0x1b14(0x01)
	char pad_1B15[0x3]; // 0x1b15(0x03)
	struct UTimelineComponent* Timeline_3; // 0x1b18(0x08)
	float Timeline_0_NewTrack_0_FB886553453C5840F1A10AA26CBA94C6; // 0x1b20(0x04)
	enum class ETimelineDirection Timeline_0__Direction_FB886553453C5840F1A10AA26CBA94C6; // 0x1b24(0x01)
	char pad_1B25[0x3]; // 0x1b25(0x03)
	struct UTimelineComponent* Timeline_1; // 0x1b28(0x08)
	int32_t AnimInt; // 0x1b30(0x04)
	enum class ALS_Stance Actual; // 0x1b34(0x01)
	enum class ALS_MovementState MovementState; // 0x1b35(0x01)
	enum class ALS_RotationMode Rotation mode; // 0x1b36(0x01)
	enum class ALS_Gait Gait; // 0x1b37(0x01)
	enum class ALS_OverlayState overlaystate; // 0x1b38(0x01)
	enum class ALS_State InjuredState; // 0x1b39(0x01)
	enum class Als_AimState Aimstate; // 0x1b3a(0x01)
	enum class ECameraType Camerastate; // 0x1b3b(0x01)
	enum class ECameraOverlapType Camera Overlap Type; // 0x1b3c(0x01)
	char pad_1B3D[0x3]; // 0x1b3d(0x03)
	struct TArray<struct FName> AllChangeMaterialName; // 0x1b40(0x10)
	struct UMaterialParameterCollection* Param; // 0x1b50(0x08)
	struct FName Parameter Name; // 0x1b58(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> DefaultMeshMaterial; // 0x1b60(0x50)
	bool enable; // 0x1bb0(0x01)
	char pad_1BB1[0x7]; // 0x1bb1(0x07)
	struct TMap<struct FName, struct UMaterialInterface*> ClosthMaterial; // 0x1bb8(0x50)
	struct TArray<struct ABP_SZ_MainSKillProject_C*> MainSkillProject; // 0x1c08(0x10)
	int32_t MaxLaunchProjectNum; // 0x1c18(0x04)
	char pad_1C1C[0x4]; // 0x1c1c(0x04)
	struct ABP_MainSkillDecal_C* DecalActor; // 0x1c20(0x08)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> DynamicMaterialIns; // 0x1c28(0x50)
	bool IsStarSet; // 0x1c78(0x01)
	char pad_1C79[0x7]; // 0x1c79(0x07)
	struct UNiagaraComponent* ChuanSongLiZi; // 0x1c80(0x08)
	struct FMulticastInlineDelegate OnMainSkillHit; // 0x1c88(0x10)
	float PreviousAimYaw; // 0x1c98(0x04)

	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Get_EssentialValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BP_ShaoZiKiller_AutoGenFunc(struct ANOS_PlayerHuman* NewParam); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BP_ShaoZiKiller_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_IsStarSet(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.OnRep_IsStarSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearMainSkillProject(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.ClearMainSkillProject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnDecalACtor(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.SpawnDecalACtor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector GetLaunchVector(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.GetLaunchVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FVector GetFireStarLocation(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.GetFireStarLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void FireMainSkillProject(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.FireMainSkillProject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMaterialToDefault(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.SetMaterialToDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FName GetSkillNeedMaterial(struct FString SkillName, struct FName InName); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.GetSkillNeedMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SelfSetSmokeMaterial(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.SelfSetSmokeMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMaterialToDissolve(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.SetMaterialToDissolve // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetDefaultMaterial(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.GetDefaultMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_Enable(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.OnRep_Enable // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__FinishedFunc(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_2__FinishedFunc(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_2__UpdateFunc(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_65063F7E4C6415BED968AF92DD657D8B(struct UObject* Loaded); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.OnLoaded_65063F7E4C6415BED968AF92DD657D8B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetisUseAlsCamera(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.SetisUseAlsCamera // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BeginSeNia(); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.BeginSeNia // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetStealth(bool bEnable, bool TrueHide); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.SetStealth // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ShaoZiKiller(int32_t EntryPoint); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.ExecuteUbergraph_BP_ShaoZiKiller // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnMainSkillHit__DelegateSignature(struct ANOS_PlayerHuman* NewParam); // Function BP_ShaoZiKiller.BP_ShaoZiKiller_C.OnMainSkillHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

