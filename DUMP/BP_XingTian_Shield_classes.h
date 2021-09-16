// BlueprintGeneratedClass BP_XingTian_Shield.BP_XingTian_Shield_C
// Size: 0x598 (Inherited: 0x4c0)
struct ABP_XingTian_Shield_C : ACharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UNiagaraComponent* Niagara_Move_3_R; // 0x4c8(0x08)
	struct UNiagaraComponent* Niagara_Move_3_L; // 0x4d0(0x08)
	struct UNiagaraComponent* Niagara_Move_5; // 0x4d8(0x08)
	struct UNiagaraComponent* Niagara_Move_2_R; // 0x4e0(0x08)
	struct UNiagaraComponent* Niagara_Move_2_L; // 0x4e8(0x08)
	struct UNiagaraComponent* Niagara_Move_1_R; // 0x4f0(0x08)
	struct UNiagaraComponent* Niagara_Move_1_L; // 0x4f8(0x08)
	struct UNiagaraComponent* Niagara_Begin; // 0x500(0x08)
	struct UBoxComponent* Collision_Climb; // 0x508(0x08)
	struct UBoxComponent* Collision_Damage; // 0x510(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x518(0x08)
	float Timeline_0_Radius_C068A2D74D3104B31B8AE885CB3AB6B0; // 0x520(0x04)
	enum class ETimelineDirection Timeline_0__Direction_C068A2D74D3104B31B8AE885CB3AB6B0; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	struct UTimelineComponent* Timeline_1; // 0x528(0x08)
	float Timeline_Appear_Radius_1854D60A44ABCC9FB81F3BACB5B5526F; // 0x530(0x04)
	enum class ETimelineDirection Timeline_Appear__Direction_1854D60A44ABCC9FB81F3BACB5B5526F; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	struct UTimelineComponent* Timeline_Appear; // 0x538(0x08)
	float Damage; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct ABP_XingTian_C* XingTian; // 0x548(0x08)
	float LifeTime; // 0x550(0x04)
	int32_t LevelIndex; // 0x554(0x04)
	struct UAITask_MoveTo* Task_Move; // 0x558(0x08)
	struct UNiagaraSystem* Niagara_Explode; // 0x560(0x08)
	bool bFirstLand; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UMaterialInstanceDynamic* DMI_Shield; // 0x570(0x08)
	bool bMoving; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct ABP_PlayerHumanBase_C* Human; // 0x580(0x08)
	struct TArray<struct ABP_PlayerHumanBase_C*> Explode Humans; // 0x588(0x10)

	void GetExplodeHumans(struct TArray<struct ABP_PlayerHumanBase_C*> ExplodeHumans); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.GetExplodeHumans // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CheckMove(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.CheckMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bMoving(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.OnRep_bMoving // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMoveNiagaraActive(bool bActive); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.SetMoveNiagaraActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DestroyWarningActor(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.DestroyWarningActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnShockWave(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.SpawnShockWave // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__FinishedFunc(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_Appear__FinishedFunc(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.Timeline_Appear__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_Appear__UpdateFunc(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.Timeline_Appear__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnMoveFinished_7748C82E478FCD8227CA448A21E7FCB7(enum class EPathFollowingResult Result, struct AAIController* AIController); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.OnMoveFinished_7748C82E478FCD8227CA448A21E7FCB7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRequestFailed_7748C82E478FCD8227CA448A21E7FCB7(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.OnRequestFailed_7748C82E478FCD8227CA448A21E7FCB7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void StartMove(float Speed); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.StartMove // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StopMove(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.StopMove // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Explode(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.Explode // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DestroyShield(); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.DestroyShield // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMovementChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.OnMovementChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XingTian_Shield(int32_t EntryPoint); // Function BP_XingTian_Shield.BP_XingTian_Shield_C.ExecuteUbergraph_BP_XingTian_Shield // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

