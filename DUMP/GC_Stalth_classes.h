// BlueprintGeneratedClass GC_Stalth.GC_Stalth_C
// Size: 0x2a8 (Inherited: 0x280)
struct AGC_Stalth_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Niagara; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct UNiagaraComponent* Effectone; // 0x298(0x08)
	struct UNiagaraComponent* effecttwo; // 0x2a0(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Stalth.GC_Stalth_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Stalth(int32_t EntryPoint); // Function GC_Stalth.GC_Stalth_C.ExecuteUbergraph_GC_Stalth // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

