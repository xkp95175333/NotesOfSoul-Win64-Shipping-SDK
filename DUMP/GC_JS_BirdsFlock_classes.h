// BlueprintGeneratedClass GC_JS_BirdsFlock.GC_JS_BirdsFlock_C
// Size: 0x299 (Inherited: 0x280)
struct AGC_JS_BirdsFlock_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct UNiagaraComponent* BirdsFlock; // 0x290(0x08)
	bool NewVar_1; // 0x298(0x01)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_JS_BirdsFlock.GC_JS_BirdsFlock_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_JS_BirdsFlock(int32_t EntryPoint); // Function GC_JS_BirdsFlock.GC_JS_BirdsFlock_C.ExecuteUbergraph_GC_JS_BirdsFlock // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

