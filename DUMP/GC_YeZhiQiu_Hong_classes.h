// BlueprintGeneratedClass GC_YeZhiQiu_Hong.GC_YeZhiQiu_Hong_C
// Size: 0x2b8 (Inherited: 0x280)
struct AGC_YeZhiQiu_Hong_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Audio; // 0x288(0x08)
	struct UNiagaraComponent* NS_Light_XuLi; // 0x290(0x08)
	struct UNiagaraComponent* NS_Light_Hand_L; // 0x298(0x08)
	struct UNiagaraComponent* NS_Light_Hand_R; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	struct ANOS_PlayerHuman* As NOS Player Human; // 0x2b0(0x08)

	void ReceiveParticleData(struct TArray<struct FBasicParticleData> Data, struct UNiagaraSystem* NiagaraSystem); // Function GC_YeZhiQiu_Hong.GC_YeZhiQiu_Hong_C.ReceiveParticleData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_YeZhiQiu_Hong.GC_YeZhiQiu_Hong_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_YeZhiQiu_Hong.GC_YeZhiQiu_Hong_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_YeZhiQiu_Hong(int32_t EntryPoint); // Function GC_YeZhiQiu_Hong.GC_YeZhiQiu_Hong_C.ExecuteUbergraph_GC_YeZhiQiu_Hong // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

