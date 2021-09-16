// BlueprintGeneratedClass GC_XingTian_Skill1.GC_XingTian_Skill1_C
// Size: 0x2d8 (Inherited: 0x280)
struct AGC_XingTian_Skill1_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Audio; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct TArray<struct UNiagaraComponent*> AllParticleSystems; // 0x298(0x10)
	struct TArray<struct UNiagaraSystem*> AllNiagara; // 0x2a8(0x10)
	struct TArray<struct FVector> NiagaraLocations; // 0x2b8(0x10)
	struct ABP_XingTian_C* XingTian; // 0x2c8(0x08)
	struct UNiagaraComponent* NiagaraSystem_Shield; // 0x2d0(0x08)

	void SetSoundActive(bool bActive); // Function GC_XingTian_Skill1.GC_XingTian_Skill1_C.SetSoundActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetParticlesActive(bool bActive); // Function GC_XingTian_Skill1.GC_XingTian_Skill1_C.SetParticlesActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateParticles(); // Function GC_XingTian_Skill1.GC_XingTian_Skill1_C.CreateParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_XingTian_Skill1.GC_XingTian_Skill1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XingTian_Skill1.GC_XingTian_Skill1_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XingTian_Skill1(int32_t EntryPoint); // Function GC_XingTian_Skill1.GC_XingTian_Skill1_C.ExecuteUbergraph_GC_XingTian_Skill1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

