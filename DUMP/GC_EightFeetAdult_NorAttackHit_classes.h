// BlueprintGeneratedClass GC_EightFeetAdult_NorAttackHit.GC_EightFeetAdult_NorAttackHit_C
// Size: 0x2a0 (Inherited: 0x280)
struct AGC_EightFeetAdult_NorAttackHit_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	int32_t NorAttackMontageIndex; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct ANOS_EightFeetAdult* EFA; // 0x298(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_EightFeetAdult_NorAttackHit.GC_EightFeetAdult_NorAttackHit_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_EightFeetAdult_NorAttackHit(int32_t EntryPoint); // Function GC_EightFeetAdult_NorAttackHit.GC_EightFeetAdult_NorAttackHit_C.ExecuteUbergraph_GC_EightFeetAdult_NorAttackHit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

