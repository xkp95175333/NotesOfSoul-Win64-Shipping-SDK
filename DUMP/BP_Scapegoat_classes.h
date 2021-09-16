// BlueprintGeneratedClass BP_Scapegoat.BP_Scapegoat_C
// Size: 0x580 (Inherited: 0x510)
struct ABP_Scapegoat_C : ANOS_Scapegoat {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UWidgetComponent* HeadWidget; // 0x518(0x08)
	enum class EMovementMode Pawn Movement Mode; // 0x520(0x01)
	enum class ALS_MovementState Movement State; // 0x521(0x01)
	enum class ALS_MovementAction Movement Action; // 0x522(0x01)
	enum class ALS_RotationMode Rotation mode; // 0x523(0x01)
	enum class ALS_Gait Actual Gait; // 0x524(0x01)
	enum class ALS_Stance Actual Stance; // 0x525(0x01)
	enum class ALS_ViewMode View Mode; // 0x526(0x01)
	enum class ALS_OverlayState Overlay State; // 0x527(0x01)
	struct FVector Velocity; // 0x528(0x0c)
	struct FVector Acceleration; // 0x534(0x0c)
	struct FVector Movement Input; // 0x540(0x0c)
	bool Is Moving; // 0x54c(0x01)
	bool Has Movement Input; // 0x54d(0x01)
	char pad_54E[0x2]; // 0x54e(0x02)
	float Speed; // 0x550(0x04)
	float Movement Input Amount; // 0x554(0x04)
	struct FRotator Aiming Rotation; // 0x558(0x0c)
	float Aim Yaw Rate; // 0x564(0x04)
	bool BeHit; // 0x568(0x01)
	bool MyMan; // 0x569(0x01)
	bool IsHuman; // 0x56a(0x01)
	char pad_56B[0x5]; // 0x56b(0x05)
	struct FMulticastInlineDelegate IsShowVoice; // 0x570(0x10)

	struct FString GetPlayerName(); // Function BP_Scapegoat.BP_Scapegoat_C.GetPlayerName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	bool GetShowVoice(); // Function BP_Scapegoat.BP_Scapegoat_C.GetShowVoice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_Scapegoat.BP_Scapegoat_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_Scapegoat.BP_Scapegoat_C.BPI_Get_EssentialValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHeadWidgetLocation(); // Function BP_Scapegoat.BP_Scapegoat_C.SetHeadWidgetLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_BeHit(); // Function BP_Scapegoat.BP_Scapegoat_C.OnRep_BeHit // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Character Movement Comp Attribute(struct AActor* Object); // Function BP_Scapegoat.BP_Scapegoat_C.Set Character Movement Comp Attribute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Is In Idle(); // Function BP_Scapegoat.BP_Scapegoat_C.Is In Idle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_Scapegoat.BP_Scapegoat_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_Scapegoat.BP_Scapegoat_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_Scapegoat.BP_Scapegoat_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_Scapegoat.BP_Scapegoat_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_Scapegoat.BP_Scapegoat_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_Scapegoat.BP_Scapegoat_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_Scapegoat.BP_Scapegoat_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_Change Scapegoat(); // Function BP_Scapegoat.BP_Scapegoat_C.Multi_Change Scapegoat // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_Set States(enum class EMovementMode Pawn Movement Mode, enum class ALS_MovementState Movement State, enum class ALS_MovementAction Movement Action, enum class ALS_RotationMode Rotation mode, enum class ALS_Gait Actual Gait, enum class ALS_Stance Actual Stance, enum class ALS_ViewMode View Mode, enum class ALS_OverlayState Overlay State); // Function BP_Scapegoat.BP_Scapegoat_C.Multi_Set States // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_Set Essential(struct FVector Velocity, struct FVector Acceleration, struct FVector Movement Input, bool Is Moving, bool Has Movement Input, float Speed, float Movement Input Amount, struct FRotator Aiming Rotation, float Aim Yaw Rate); // Function BP_Scapegoat.BP_Scapegoat_C.Multi_Set Essential // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_Scapegoat.BP_Scapegoat_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ActorTakeDamage(struct AActor* Source, float DamageValue, enum class ENOS_DamageType DamageType, float Force); // Function BP_Scapegoat.BP_Scapegoat_C.ActorTakeDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Show(); // Function BP_Scapegoat.BP_Scapegoat_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetTeam(bool InIsHuman); // Function BP_Scapegoat.BP_Scapegoat_C.SetTeam // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HidenHeadWidget(bool Hidden); // Function BP_Scapegoat.BP_Scapegoat_C.HidenHeadWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Scapegoat(int32_t EntryPoint); // Function BP_Scapegoat.BP_Scapegoat_C.ExecuteUbergraph_BP_Scapegoat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void IsShowVoice__DelegateSignature(); // Function BP_Scapegoat.BP_Scapegoat_C.IsShowVoice__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

