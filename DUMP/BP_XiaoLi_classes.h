// BlueprintGeneratedClass BP_XiaoLi.BP_XiaoLi_C
// Size: 0x1bfa (Inherited: 0x1b50)
struct ABP_XiaoLi_C : ANOS_XiaoLi {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b50(0x08)
	float StealthTimeline_Value_622DF87A47609F0926ABCE8A7A818FB9; // 0x1b58(0x04)
	enum class ETimelineDirection StealthTimeline__Direction_622DF87A47609F0926ABCE8A7A818FB9; // 0x1b5c(0x01)
	char pad_1B5D[0x3]; // 0x1b5d(0x03)
	struct UTimelineComponent* StealthTimeline; // 0x1b60(0x08)
	struct FVector CurrentLocation; // 0x1b68(0x0c)
	char pad_1B74[0x4]; // 0x1b74(0x04)
	struct TArray<struct UMaterialInterface*> BodyMaterials; // 0x1b78(0x10)
	struct TArray<struct UMaterialInterface*> ClothMaterials; // 0x1b88(0x10)
	struct TArray<struct UMaterialInterface*> HairMaterials; // 0x1b98(0x10)
	struct TMap<int32_t, struct FName> BodyStealthMaterials; // 0x1ba8(0x50)
	bool Right Shoulder; // 0x1bf8(0x01)
	bool RightShoulder; // 0x1bf9(0x01)

	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Get_EssentialValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function BP_XiaoLi.BP_XiaoLi_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchSkill1Materials(bool Stealth); // Function BP_XiaoLi.BP_XiaoLi_C.SwitchSkill1Materials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StealthTimeline__FinishedFunc(); // Function BP_XiaoLi.BP_XiaoLi_C.StealthTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void StealthTimeline__UpdateFunc(); // Function BP_XiaoLi.BP_XiaoLi_C.StealthTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_XiaoLi.BP_XiaoLi_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function BP_XiaoLi.BP_XiaoLi_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XiaoLi.BP_XiaoLi_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Execute Skill3 Flicker(struct FVector TargetLocation); // Function BP_XiaoLi.BP_XiaoLi_C.Execute Skill3 Flicker // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Skill1Crouch(bool enable); // Function BP_XiaoLi.BP_XiaoLi_C.Skill1Crouch // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multicast_SwitchSkill1Material(bool Stealth); // Function BP_XiaoLi.BP_XiaoLi_C.Multicast_SwitchSkill1Material // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Server_SwitchSkill1Material(bool Stealth); // Function BP_XiaoLi.BP_XiaoLi_C.Server_SwitchSkill1Material // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BlockChanleBC(); // Function BP_XiaoLi.BP_XiaoLi_C.BlockChanleBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_XiaoLi.BP_XiaoLi_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetStealth(bool bEnable, bool TrueHide); // Function BP_XiaoLi.BP_XiaoLi_C.SetStealth // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetisUseAlsCamera(); // Function BP_XiaoLi.BP_XiaoLi_C.SetisUseAlsCamera // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void TryActivateSkill2TeleportAbility(); // Function BP_XiaoLi.BP_XiaoLi_C.TryActivateSkill2TeleportAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoLi(int32_t EntryPoint); // Function BP_XiaoLi.BP_XiaoLi_C.ExecuteUbergraph_BP_XiaoLi // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

