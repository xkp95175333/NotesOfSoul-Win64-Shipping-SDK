// BlueprintGeneratedClass GC_XingTian_Skill2.GC_XingTian_Skill2_C
// Size: 0x2f0 (Inherited: 0x280)
struct AGC_XingTian_Skill2_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UDecalComponent* Decal; // 0x288(0x08)
	struct UAudioComponent* Audio; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct TArray<struct UNiagaraComponent*> AllParticleSystems; // 0x2a0(0x10)
	struct TArray<struct UNiagaraSystem*> AllNiagara; // 0x2b0(0x10)
	struct ABP_XingTian_C* XingTian; // 0x2c0(0x08)
	struct UNiagaraComponent* NiagaraSystem_Shield; // 0x2c8(0x08)
	struct FVector NiagaraLocations; // 0x2d0(0x0c)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct TArray<struct FRotator> NiagaraRatations; // 0x2e0(0x10)

	void SetSoundActive(bool bActive); // Function GC_XingTian_Skill2.GC_XingTian_Skill2_C.SetSoundActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetParticlesActive(bool bActive); // Function GC_XingTian_Skill2.GC_XingTian_Skill2_C.SetParticlesActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateParticles(); // Function GC_XingTian_Skill2.GC_XingTian_Skill2_C.CreateParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_XingTian_Skill2.GC_XingTian_Skill2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XingTian_Skill2.GC_XingTian_Skill2_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XingTian_Skill2(int32_t EntryPoint); // Function GC_XingTian_Skill2.GC_XingTian_Skill2_C.ExecuteUbergraph_GC_XingTian_Skill2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

