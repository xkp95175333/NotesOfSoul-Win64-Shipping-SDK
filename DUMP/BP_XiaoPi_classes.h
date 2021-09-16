// BlueprintGeneratedClass BP_XiaoPi.BP_XiaoPi_C
// Size: 0x1c78 (Inherited: 0x1b70)
struct ABP_XiaoPi_C : ANOS_XiaoPi {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b70(0x08)
	struct FVector PreviousVelocity; // 0x1b78(0x0c)
	float PreviousAimYaw; // 0x1b84(0x04)
	enum class ALS_MovementState MovementState; // 0x1b88(0x01)
	enum class ALS_MovementState PreviousMovementState; // 0x1b89(0x01)
	struct FAls_HumanOverlapState OverlapState; // 0x1b8a(0x02)
	char pad_1B8C[0x4]; // 0x1b8c(0x04)
	struct ANOS_Flashlight* Flashlight; // 0x1b90(0x08)
	struct FVector MoveDirection; // 0x1b98(0x0c)
	struct FGameplayAbilitySpecHandle TransferSKill1GASpec; // 0x1ba4(0x04)
	int32_t TransferCount; // 0x1ba8(0x04)
	char pad_1BAC[0x4]; // 0x1bac(0x04)
	struct FTransform TargetTransform; // 0x1bb0(0x30)
	enum class ALS_OverlayState overlaystate; // 0x1be0(0x01)
	bool IsMan; // 0x1be1(0x01)
	enum class ALS_RotationMode Rotation mode; // 0x1be2(0x01)
	enum class Als_AimState Aimstate; // 0x1be3(0x01)
	enum class ALS_Gait Gait; // 0x1be4(0x01)
	char pad_1BE5[0x3]; // 0x1be5(0x03)
	struct FVector Location; // 0x1be8(0x0c)
	struct FRotator Rotation; // 0x1bf4(0x0c)
	struct AController* TargetController; // 0x1c00(0x08)
	bool bIsLocallyControlled; // 0x1c08(0x01)
	char pad_1C09[0x3]; // 0x1c09(0x03)
	int32_t AnimInt; // 0x1c0c(0x04)
	struct AActor* CameraActor; // 0x1c10(0x08)
	float OldCapsuleHalfHeight; // 0x1c18(0x04)
	struct FVector OldMeshLocation; // 0x1c1c(0x0c)
	bool In Voice Room; // 0x1c28(0x01)
	bool Right Shoulder; // 0x1c29(0x01)
	char pad_1C2A[0x6]; // 0x1c2a(0x06)
	struct FText Skill1TipText; // 0x1c30(0x18)
	float Skill2_MaxAcceleration; // 0x1c48(0x04)
	float Skill2_RotationRate; // 0x1c4c(0x04)
	int32_t Skill2_MoveStatus; // 0x1c50(0x04)
	char pad_1C54[0x4]; // 0x1c54(0x04)
	struct FS_XiaoPi_Transfer XiaoPiTransferData; // 0x1c58(0x18)
	int32_t XiaoPiTransferState; // 0x1c70(0x04)
	float OldCapsuleRadius; // 0x1c74(0x04)

	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function BP_XiaoPi.BP_XiaoPi_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Get_EssentialValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_XiaoPiTransferData(); // Function BP_XiaoPi.BP_XiaoPi_C.OnRep_XiaoPiTransferData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsCapsuleInCollision(bool InCollision); // Function BP_XiaoPi.BP_XiaoPi_C.IsCapsuleInCollision // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetTransToGhostTransform(struct ANOS_PlayerHuman* Human, struct FTransform Transform); // Function BP_XiaoPi.BP_XiaoPi_C.GetTransToGhostTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void HumanGrantAbility(struct ABP_PlayerHumanBase_C* Human); // Function BP_XiaoPi.BP_XiaoPi_C.HumanGrantAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSkill2MoveStatus(int32_t Skill2_MoveStatus); // Function BP_XiaoPi.BP_XiaoPi_C.SetSkill2MoveStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_Skill2_MoveStatus(); // Function BP_XiaoPi.BP_XiaoPi_C.OnRep_Skill2_MoveStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowTipText(bool bShowTip); // Function BP_XiaoPi.BP_XiaoPi_C.ShowTipText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ModifyCapsule(bool bActiveSkill, float NewHalfHeightPercent); // Function BP_XiaoPi.BP_XiaoPi_C.ModifyCapsule // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemakeUIState(struct ANOS_PlayerHuman* PlayerHuman); // Function BP_XiaoPi.BP_XiaoPi_C.RemakeUIState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCameraTransform_ToHuman(struct FTransform Transform); // Function BP_XiaoPi.BP_XiaoPi_C.GetCameraTransform_ToHuman // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetControlledHumanData(struct ABP_PlayerHumanBase_C* PlayerHuman, bool bShow); // Function BP_XiaoPi.BP_XiaoPi_C.SetControlledHumanData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeHUD(bool ToGhost); // Function BP_XiaoPi.BP_XiaoPi_C.ChangeHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReplicatedSoulInfo(); // Function BP_XiaoPi.BP_XiaoPi_C.ReplicatedSoulInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetMoveDirection(struct FVector Direction); // Function BP_XiaoPi.BP_XiaoPi_C.GetMoveDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMovementStateChanged(enum class ALS_MovementState NewMovementState); // Function BP_XiaoPi.BP_XiaoPi_C.OnMovementStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCharacterMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_XiaoPi.BP_XiaoPi_C.OnCharacterMovementModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_P_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_XiaoPi.BP_XiaoPi_C.InpActEvt_P_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function BP_XiaoPi.BP_XiaoPi_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XiaoPi.BP_XiaoPi_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MoveForward(float Value); // Function BP_XiaoPi.BP_XiaoPi_C.MoveForward // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void MoveRight(float Value); // Function BP_XiaoPi.BP_XiaoPi_C.MoveRight // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_XiaoPi.BP_XiaoPi_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_XiaoPi.BP_XiaoPi_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XiaoPi.BP_XiaoPi_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeHUD_Multicast(bool ToGhost); // Function BP_XiaoPi.BP_XiaoPi_C.ChangeHUD_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSwitchCamera(struct FTransform CameraInitTransform); // Function BP_XiaoPi.BP_XiaoPi_C.InitSwitchCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchCamera_ToHuman(struct ABP_PlayerHumanBase_C* Human); // Function BP_XiaoPi.BP_XiaoPi_C.SwitchCamera_ToHuman // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchCamera_ToGhost(); // Function BP_XiaoPi.BP_XiaoPi_C.SwitchCamera_ToGhost // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveAutonomousRole(); // Function BP_XiaoPi.BP_XiaoPi_C.ReceiveAutonomousRole // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetAllControledHumanAnim(int32_t AnimInt); // Function BP_XiaoPi.BP_XiaoPi_C.SetAllControledHumanAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_XiaoPi.BP_XiaoPi_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Skill3_OnLand(); // Function BP_XiaoPi.BP_XiaoPi_C.Skill3_OnLand // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Skill3_Multicast(bool Active); // Function BP_XiaoPi.BP_XiaoPi_C.Skill3_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferBackToGhost(); // Function BP_XiaoPi.BP_XiaoPi_C.TransferBackToGhost // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferToHuman(); // Function BP_XiaoPi.BP_XiaoPi_C.TransferToHuman // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferToHuman_Multicast(struct ANOS_PlayerHuman* TransferHuman, struct ANOS_PlayerHuman* LastHuman); // Function BP_XiaoPi.BP_XiaoPi_C.TransferToHuman_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferBackToGhost_Multicast(struct ANOS_PlayerHuman* TransferHuman); // Function BP_XiaoPi.BP_XiaoPi_C.TransferBackToGhost_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferToHuman_Client(struct ABP_PlayerHumanBase_C* TransferHuman, struct ABP_PlayerHumanBase_C* LastHuman, bool bSetLocation); // Function BP_XiaoPi.BP_XiaoPi_C.TransferToHuman_Client // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferToGhost_Client(struct ABP_PlayerHumanBase_C* TransferHuman, bool bSetLocation); // Function BP_XiaoPi.BP_XiaoPi_C.TransferToGhost_Client // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferToGhost_Delay(struct ANOS_PlayerHuman* TransferHuman, float delayTime); // Function BP_XiaoPi.BP_XiaoPi_C.TransferToGhost_Delay // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransferToHuman_Delay(struct ANOS_PlayerHuman* TransferHuman, struct ANOS_PlayerHuman* LastHuman, float delayTime); // Function BP_XiaoPi.BP_XiaoPi_C.TransferToHuman_Delay // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PrintInfo_Server(); // Function BP_XiaoPi.BP_XiaoPi_C.PrintInfo_Server // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PrintInfo_Multicast(); // Function BP_XiaoPi.BP_XiaoPi_C.PrintInfo_Multicast // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DebugMulti(struct FString str); // Function BP_XiaoPi.BP_XiaoPi_C.DebugMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExitVoiceRoom(); // Function BP_XiaoPi.BP_XiaoPi_C.ExitVoiceRoom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinVoiceRoom(); // Function BP_XiaoPi.BP_XiaoPi_C.JoinVoiceRoom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterRoom(int32_t Result, struct FString ErrorInfo); // Function BP_XiaoPi.BP_XiaoPi_C.OnEnterRoom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoPi(int32_t EntryPoint); // Function BP_XiaoPi.BP_XiaoPi_C.ExecuteUbergraph_BP_XiaoPi // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

