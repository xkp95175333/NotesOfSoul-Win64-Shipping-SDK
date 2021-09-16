// BlueprintGeneratedClass GC_TrueLoveKnot.GC_TrueLoveKnot_C
// Size: 0x2b0 (Inherited: 0x280)
struct AGC_TrueLoveKnot_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Niagara; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct ABP_PlayerHumanBase_C* Character01; // 0x298(0x08)
	struct ABP_PlayerHumanBase_C* Character02; // 0x2a0(0x08)
	struct FActiveGameplayEffectHandle EffectHandle; // 0x2a8(0x08)

	void ReceiveBeginPlay(); // Function GC_TrueLoveKnot.GC_TrueLoveKnot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function GC_TrueLoveKnot.GC_TrueLoveKnot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_TrueLoveKnot.GC_TrueLoveKnot_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_TrueLoveKnot(int32_t EntryPoint); // Function GC_TrueLoveKnot.GC_TrueLoveKnot_C.ExecuteUbergraph_GC_TrueLoveKnot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

