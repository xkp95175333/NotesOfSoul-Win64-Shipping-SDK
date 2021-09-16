// BlueprintGeneratedClass BP_PracticeCharacter.BP_PracticeCharacter_C
// Size: 0x2bd9 (Inherited: 0x2b10)
struct ABP_PracticeCharacter_C : ANOS_PracticeCharacterHuman {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b10(0x08)
	float Timeline_0_NewTrack_0_AC2060B042DE8C003178949FA26676FC; // 0x2b18(0x04)
	enum class ETimelineDirection Timeline_0__Direction_AC2060B042DE8C003178949FA26676FC; // 0x2b1c(0x01)
	char pad_2B1D[0x3]; // 0x2b1d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2b20(0x08)
	float OriginalCapsuleHalfHeight; // 0x2b28(0x04)
	struct FRotator MeshOriginalRelativeRotation; // 0x2b2c(0x0c)
	struct FVector MeshOriginalRelativeLocation; // 0x2b38(0x0c)
	enum class ALS_MovementState MovementState; // 0x2b44(0x01)
	enum class ALS_MovementState PreviousMovementState; // 0x2b45(0x01)
	char pad_2B46[0x2]; // 0x2b46(0x02)
	struct FVector TargetRagDollLocation; // 0x2b48(0x0c)
	enum class ALS_OverlayState overlaystate; // 0x2b54(0x01)
	char pad_2B55[0x3]; // 0x2b55(0x03)
	struct UAnimMontage* Get up Back Default; // 0x2b58(0x08)
	struct UAnimMontage* GetUp Front Default; // 0x2b60(0x08)
	bool RagdollFaceup; // 0x2b68(0x01)
	bool CanShiHunByAttacked; // 0x2b69(0x01)
	bool CanShiHun; // 0x2b6a(0x01)
	char pad_2B6B[0x1]; // 0x2b6b(0x01)
	struct FVector OriginalLocation; // 0x2b6c(0x0c)
	struct FRotator OriginalControlRotation; // 0x2b78(0x0c)
	struct FRotator TargetRotation; // 0x2b84(0x0c)
	struct FRotator OriginalRotation; // 0x2b90(0x0c)
	bool IsMan; // 0x2b9c(0x01)
	enum class ALS_MovementAction MoveAction; // 0x2b9d(0x01)
	enum class Als_AimState Aimstate; // 0x2b9e(0x01)
	enum class ALS_RotationMode Rotation mode; // 0x2b9f(0x01)
	enum class ALS_Stance Actual; // 0x2ba0(0x01)
	enum class ALS_Gait Gait; // 0x2ba1(0x01)
	enum class ALS_OverlayState LocalOverLayState; // 0x2ba2(0x01)
	struct FAls_HumanOverlapState OverlapState; // 0x2ba3(0x02)
	enum class ALS_State InjuredState; // 0x2ba5(0x01)
	enum class Als_AimState LocalAimState; // 0x2ba6(0x01)
	enum class ALS_RotationMode LocalRotationMode; // 0x2ba7(0x01)
	struct TArray<struct USkeletalMeshComponent*> DefalutsMeshes; // 0x2ba8(0x10)
	struct TArray<struct UMaterialInterface*> SkeletalMeshMaterials; // 0x2bb8(0x10)
	struct TArray<struct FName> MeshMaterialNames; // 0x2bc8(0x10)
	bool IsManInTheNovice; // 0x2bd8(0x01)

	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.BPI_Get_CurrentStates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.BPI_Get_EssentialValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Ragdoll End(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.Ragdoll End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Get Up Animation(bool Rogdoll Faceuo, struct UAnimMontage* upmontage); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.Get Up Animation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Ragdoll Start(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.Ragdoll Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Movement State Changed(enum class ALS_MovementState NewMovementState); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.On Movement State Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Character Movement Mode Changed(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewParaNewCustomModem); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.On Character Movement Mode Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__FinishedFunc(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_1CEB9C874C442A07A6175AA38565FF0C(struct FName NotifyName); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.OnNotifyEnd_1CEB9C874C442A07A6175AA38565FF0C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_1CEB9C874C442A07A6175AA38565FF0C(struct FName NotifyName); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.OnNotifyBegin_1CEB9C874C442A07A6175AA38565FF0C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_1CEB9C874C442A07A6175AA38565FF0C(struct FName NotifyName); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.OnInterrupted_1CEB9C874C442A07A6175AA38565FF0C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_1CEB9C874C442A07A6175AA38565FF0C(struct FName NotifyName); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.OnBlendOut_1CEB9C874C442A07A6175AA38565FF0C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_1CEB9C874C442A07A6175AA38565FF0C(struct FName NotifyName); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.OnCompleted_1CEB9C874C442A07A6175AA38565FF0C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Pull_Multicast(bool Collapse); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.Pull_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnJumped(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RogdollMul(bool issimulate, bool ismontage); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.RogdollMul // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RolldollS(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.RolldollS // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RolldollEnd(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.RolldollEnd // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SendMeshLocation(struct FVector meshlocation); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.SendMeshLocation // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Client_ActiveDeadGA(struct AActor* Instigator, struct UObject* GhostShiHunMontage); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.Client_ActiveDeadGA // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClientActiveBeenCureGA(struct UObject* Optional Object); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.ClientActiveBeenCureGA // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MultiInteractTurn(struct AActor* Target); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.MultiInteractTurn // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ServerInteractTurn(struct AActor* Target); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.ServerInteractTurn // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDead(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.OnDead // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowCrawlFX(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.ShowCrawlFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SaveDefaultMaterial(); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.SaveDefaultMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetStateToDamage(enum class EHealthState NewState); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.SetStateToDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PracticeCharacter(int32_t EntryPoint); // Function BP_PracticeCharacter.BP_PracticeCharacter_C.ExecuteUbergraph_BP_PracticeCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

