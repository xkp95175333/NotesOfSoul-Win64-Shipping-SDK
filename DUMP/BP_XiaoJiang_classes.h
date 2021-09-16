// BlueprintGeneratedClass BP_XiaoJiang.BP_XiaoJiang_C
// Size: 0x1d90 (Inherited: 0x1cf0)
struct ABP_XiaoJiang_C : ANOS_XiaoJiang {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1cf0(0x08)
	float Tl_Skill1Post_Vale_B37B509F4E3EC9551A491DA606960D0E; // 0x1cf8(0x04)
	enum class ETimelineDirection Tl_Skill1Post__Direction_B37B509F4E3EC9551A491DA606960D0E; // 0x1cfc(0x01)
	char pad_1CFD[0x3]; // 0x1cfd(0x03)
	struct UTimelineComponent* Tl_Skill1Post; // 0x1d00(0x08)
	float Tl_LerpSkill3CameraLocationToDefault_Value_EEDC8C8841673C3E262C32A2C1D2A32C; // 0x1d08(0x04)
	enum class ETimelineDirection Tl_LerpSkill3CameraLocationToDefault__Direction_EEDC8C8841673C3E262C32A2C1D2A32C; // 0x1d0c(0x01)
	char pad_1D0D[0x3]; // 0x1d0d(0x03)
	struct UTimelineComponent* Tl_LerpSkill3CameraLocationToDefault; // 0x1d10(0x08)
	float Tl_LerpSkill3CameraLocation_Value_FB0229FC4CC2A7277DCC00A14E5C1CA2; // 0x1d18(0x04)
	enum class ETimelineDirection Tl_LerpSkill3CameraLocation__Direction_FB0229FC4CC2A7277DCC00A14E5C1CA2; // 0x1d1c(0x01)
	char pad_1D1D[0x3]; // 0x1d1d(0x03)
	struct UTimelineComponent* Tl_LerpSkill3CameraLocation; // 0x1d20(0x08)
	struct TArray<struct FName> RHugSocketPoints; // 0x1d28(0x10)
	struct TArray<struct FName> Tmp_RHugSocketPoints; // 0x1d38(0x10)
	struct UPostProcessComponent* Skill1PComp; // 0x1d48(0x08)
	struct UMaterialInstanceDynamic* MI_Skill1Post; // 0x1d50(0x08)
	struct UPostProcessComponent* Skill3PComp; // 0x1d58(0x08)
	struct UWBP_SettingMain_C* EscapeWidget; // 0x1d60(0x08)
	struct FGameplayEffectContextHandle tMP; // 0x1d68(0x18)
	bool RightShoulder; // 0x1d80(0x01)
	char pad_1D81[0x7]; // 0x1d81(0x07)
	struct UUserWidget* Cameraui; // 0x1d88(0x08)

	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function BP_XiaoJiang.BP_XiaoJiang_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Get_EssentialValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Func_RHugSocketPoint(struct FName SocketPoint); // Function BP_XiaoJiang.BP_XiaoJiang_C.Func_RHugSocketPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Tl_Skill1Post__FinishedFunc(); // Function BP_XiaoJiang.BP_XiaoJiang_C.Tl_Skill1Post__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_Skill1Post__UpdateFunc(); // Function BP_XiaoJiang.BP_XiaoJiang_C.Tl_Skill1Post__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_LerpSkill3CameraLocationToDefault__FinishedFunc(); // Function BP_XiaoJiang.BP_XiaoJiang_C.Tl_LerpSkill3CameraLocationToDefault__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_LerpSkill3CameraLocationToDefault__UpdateFunc(); // Function BP_XiaoJiang.BP_XiaoJiang_C.Tl_LerpSkill3CameraLocationToDefault__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_LerpSkill3CameraLocation__FinishedFunc(); // Function BP_XiaoJiang.BP_XiaoJiang_C.Tl_LerpSkill3CameraLocation__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_LerpSkill3CameraLocation__UpdateFunc(); // Function BP_XiaoJiang.BP_XiaoJiang_C.Tl_LerpSkill3CameraLocation__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void CE_Skill1Post(bool StopPost); // Function BP_XiaoJiang.BP_XiaoJiang_C.CE_Skill1Post // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_XiaoJiang.BP_XiaoJiang_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_PlayRCenterSound(struct FVector CenterPoint); // Function BP_XiaoJiang.BP_XiaoJiang_C.Multi_PlayRCenterSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Client_ChangeSkill3UI(); // Function BP_XiaoJiang.BP_XiaoJiang_C.Client_ChangeSkill3UI // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Client_ShowT(bool bShow); // Function BP_XiaoJiang.BP_XiaoJiang_C.Client_ShowT // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_SS(); // Function BP_XiaoJiang.BP_XiaoJiang_C.CE_SS // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XiaoJiang.BP_XiaoJiang_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Server_AddPoint(); // Function BP_XiaoJiang.BP_XiaoJiang_C.Server_AddPoint // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_Skill3_SetDataToWalk(bool IsServer); // Function BP_XiaoJiang.BP_XiaoJiang_C.Multi_Skill3_SetDataToWalk // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_Skill3_SetDataToFly(float MaxAcceleration, bool IsServer); // Function BP_XiaoJiang.BP_XiaoJiang_C.Multi_Skill3_SetDataToFly // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Client_SetHumanInvisibleToMe(struct AActor* Human, bool Invisible); // Function BP_XiaoJiang.BP_XiaoJiang_C.Client_SetHumanInvisibleToMe // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_XiaoJiang.BP_XiaoJiang_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function BP_XiaoJiang.BP_XiaoJiang_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoJiang(int32_t EntryPoint); // Function BP_XiaoJiang.BP_XiaoJiang_C.ExecuteUbergraph_BP_XiaoJiang // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

