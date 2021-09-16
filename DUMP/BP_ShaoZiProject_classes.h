// BlueprintGeneratedClass BP_ShaoZiProject.BP_ShaoZiProject_C
// Size: 0x25c (Inherited: 0x220)
struct ABP_ShaoZiProject_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNiagaraComponent* E; // 0x228(0x08)
	struct UCapsuleComponent* Capsule; // 0x230(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x238(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x240(0x08)
	struct FVector Velocity; // 0x248(0x0c)
	struct FActiveGameplayEffectHandle Handle; // 0x254(0x08)

	void UserConstructionScript(); // Function BP_ShaoZiProject.BP_ShaoZiProject_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_ShaoZiProject.BP_ShaoZiProject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_ShaoZiProject.BP_ShaoZiProject_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_ShaoZiProject.BP_ShaoZiProject_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ShaoZiProject.BP_ShaoZiProject_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ShaoZiProject(int32_t EntryPoint); // Function BP_ShaoZiProject.BP_ShaoZiProject_C.ExecuteUbergraph_BP_ShaoZiProject // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

