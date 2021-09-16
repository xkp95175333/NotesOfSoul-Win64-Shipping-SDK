// BlueprintGeneratedClass DestructionBase.DestructionBase_C
// Size: 0x2a6 (Inherited: 0x288)
struct ADestructionBase_C : ANOS_DestructionActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct URadialForceComponent* RadialForce; // 0x290(0x08)
	struct UBoxComponent* TipsCollision; // 0x298(0x08)
	float DestroyTime; // 0x2a0(0x04)
	bool bHideAfterDestroy; // 0x2a4(0x01)
	bool bInited; // 0x2a5(0x01)

	void AddForceInTheArea(); // Function DestructionBase.DestructionBase_C.AddForceInTheArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameStateUpdated_Event_1(enum class EKxGameStateType CurType); // Function DestructionBase.DestructionBase_C.OnGameStateUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActorTakeDamage(struct AActor* Source, float DamageValue, enum class ENOS_DamageType DamageType, float Force); // Function DestructionBase.DestructionBase_C.ActorTakeDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function DestructionBase.DestructionBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void FinishDesEvent_Event_1(); // Function DestructionBase.DestructionBase_C.FinishDesEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__TipsCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DestructionBase.DestructionBase_C.BndEvt__TipsCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__TipsCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function DestructionBase.DestructionBase_C.BndEvt__TipsCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function DestructionBase.DestructionBase_C.InitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCollisionOpen(); // Function DestructionBase.DestructionBase_C.OnCollisionOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_DestructionBase(int32_t EntryPoint); // Function DestructionBase.DestructionBase_C.ExecuteUbergraph_DestructionBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

