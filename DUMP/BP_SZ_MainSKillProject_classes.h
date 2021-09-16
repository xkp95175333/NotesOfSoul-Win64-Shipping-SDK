// BlueprintGeneratedClass BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C
// Size: 0x2d0 (Inherited: 0x220)
struct ABP_SZ_MainSKillProject_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Sphere; // 0x228(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x230(0x08)
	struct UNiagaraComponent* NS_ShaoZi_SheChu; // 0x238(0x08)
	struct FVector Velocity; // 0x240(0x0c)
	bool IsHitFinsh; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct FVector StarLocation; // 0x250(0x0c)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TArray<struct ANOS_PlayerHuman*> As NOS Player Human; // 0x260(0x10)
	struct FVector Array Element; // 0x270(0x0c)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct ANOS_PlayerHuman*> ServerDamageActor; // 0x280(0x10)
	float Radiu; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnHit; // 0x298(0x10)
	bool IsHitDUnjia; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct TArray<int32_t> ReadyMoveIndex; // 0x2b0(0x10)
	struct TArray<struct FBasicParticleData> WaitTracePiont; // 0x2c0(0x10)

	void CheckDamageTarget(struct TArray<struct FHitResult> Array, struct TArray<struct ANOS_PlayerHuman*> NewItem, struct TArray<struct ANOS_PlayerHuman*> CanDamageActor1); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.CheckDamageTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void fire(struct FVector StarLocation, struct FVector LaunchVector); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.fire // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveParticleData(struct TArray<struct FBasicParticleData> Data, struct UNiagaraSystem* NiagaraSystem); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.ReceiveParticleData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MulticastFire(struct FVector StarLocation, struct FVector LaunchVector); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.MulticastFire // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ToGetTarget(struct TArray<struct ANOS_PlayerHuman*> Pawn); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.ToGetTarget // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SZ_MainSKillProject(int32_t EntryPoint); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.ExecuteUbergraph_BP_SZ_MainSKillProject // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnHit__DelegateSignature(struct ANOS_PlayerHuman* NewParam); // Function BP_SZ_MainSKillProject.BP_SZ_MainSKillProject_C.OnHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

