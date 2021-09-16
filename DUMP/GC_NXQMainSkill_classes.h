// BlueprintGeneratedClass GC_NXQMainSkill.GC_NXQMainSkill_C
// Size: 0x2a0 (Inherited: 0x280)
struct AGC_NXQMainSkill_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* SE_NXQ_SkillR_02; // 0x288(0x08)
	struct UNiagaraComponent* NS_DL_Smoke; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_NXQMainSkill.GC_NXQMainSkill_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_NXQMainSkill(int32_t EntryPoint); // Function GC_NXQMainSkill.GC_NXQMainSkill_C.ExecuteUbergraph_GC_NXQMainSkill // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

