// BlueprintGeneratedClass BP_DoveFxTrail.BP_DoveFxTrail_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_DoveFxTrail_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNiagaraComponent* Trail; // 0x228(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x230(0x08)
	struct USphereComponent* Sphere; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float Speed; // 0x248(0x04)
	bool bFly; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct FVector Offset; // 0x250(0x0c)
	float delayTime; // 0x25c(0x04)
	float CurTime; // 0x260(0x04)

	void ReceiveBeginPlay(); // Function BP_DoveFxTrail.BP_DoveFxTrail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_DoveFxTrail.BP_DoveFxTrail_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DoveFxTrail(int32_t EntryPoint); // Function BP_DoveFxTrail.BP_DoveFxTrail_C.ExecuteUbergraph_BP_DoveFxTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

