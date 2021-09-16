// BlueprintGeneratedClass GC_SpeedRuneNew.GC_SpeedRuneNew_C
// Size: 0x2b0 (Inherited: 0x280)
struct AGC_SpeedRuneNew_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ANOS_PlayerBase* Character; // 0x290(0x08)
	struct UAudioComponent* Sound; // 0x298(0x08)
	struct TArray<struct UNiagaraComponent*> ParticleSystems; // 0x2a0(0x10)

	void RemoveAllParticles(); // Function GC_SpeedRuneNew.GC_SpeedRuneNew_C.RemoveAllParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddAllParticles(); // Function GC_SpeedRuneNew.GC_SpeedRuneNew_C.AddAllParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddParticle(struct FName AttachPointName); // Function GC_SpeedRuneNew.GC_SpeedRuneNew_C.AddParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function GC_SpeedRuneNew.GC_SpeedRuneNew_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_SpeedRuneNew.GC_SpeedRuneNew_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_SpeedRuneNew(int32_t EntryPoint); // Function GC_SpeedRuneNew.GC_SpeedRuneNew_C.ExecuteUbergraph_GC_SpeedRuneNew // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

