// BlueprintGeneratedClass GC_XiaoPi_Skill2.GC_XiaoPi_Skill2_C
// Size: 0x2b0 (Inherited: 0x280)
struct AGC_XiaoPi_Skill2_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct TArray<struct FName> ParticleBones; // 0x290(0x10)
	struct TArray<struct UNiagaraComponent*> AllParticleSystems; // 0x2a0(0x10)

	void SetParticlesActive(bool bActive); // Function GC_XiaoPi_Skill2.GC_XiaoPi_Skill2_C.SetParticlesActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateParticles(); // Function GC_XiaoPi_Skill2.GC_XiaoPi_Skill2_C.CreateParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_XiaoPi_Skill2.GC_XiaoPi_Skill2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XiaoPi_Skill2.GC_XiaoPi_Skill2_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XiaoPi_Skill2(int32_t EntryPoint); // Function GC_XiaoPi_Skill2.GC_XiaoPi_Skill2_C.ExecuteUbergraph_GC_XiaoPi_Skill2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

