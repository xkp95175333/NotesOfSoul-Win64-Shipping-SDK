// BlueprintGeneratedClass GC_ZhaoChaiFu.GC_ZhaoChaiFu_C
// Size: 0x2a0 (Inherited: 0x280)
struct AGC_ZhaoChaiFu_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Audio; // 0x288(0x08)
	struct UNiagaraComponent* Niagara; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_ZhaoChaiFu.GC_ZhaoChaiFu_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_ZhaoChaiFu(int32_t EntryPoint); // Function GC_ZhaoChaiFu.GC_ZhaoChaiFu_C.ExecuteUbergraph_GC_ZhaoChaiFu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

