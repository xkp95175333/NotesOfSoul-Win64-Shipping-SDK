// BlueprintGeneratedClass GC_XingTian_Territory.GC_XingTian_Territory_C
// Size: 0x2a8 (Inherited: 0x280)
struct AGC_XingTian_Territory_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Niagara; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct ABP_XingTian_C* XingTian; // 0x298(0x08)
	struct UNiagaraComponent* NiagaraSystem_Shield; // 0x2a0(0x08)

	void SetParticlesActive(bool bActive); // Function GC_XingTian_Territory.GC_XingTian_Territory_C.SetParticlesActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_XingTian_Territory.GC_XingTian_Territory_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XingTian_Territory.GC_XingTian_Territory_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XingTian_Territory(int32_t EntryPoint); // Function GC_XingTian_Territory.GC_XingTian_Territory_C.ExecuteUbergraph_GC_XingTian_Territory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

