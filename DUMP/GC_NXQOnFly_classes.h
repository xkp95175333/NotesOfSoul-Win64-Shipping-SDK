// BlueprintGeneratedClass GC_NXQOnFly.GC_NXQOnFly_C
// Size: 0x298 (Inherited: 0x280)
struct AGC_NXQOnFly_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* NS_Trail_Hit_CeShi; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_NXQOnFly.GC_NXQOnFly_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_NXQOnFly(int32_t EntryPoint); // Function GC_NXQOnFly.GC_NXQOnFly_C.ExecuteUbergraph_GC_NXQOnFly // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

