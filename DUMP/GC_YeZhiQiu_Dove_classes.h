// BlueprintGeneratedClass GC_YeZhiQiu_Dove.GC_YeZhiQiu_Dove_C
// Size: 0x2a8 (Inherited: 0x280)
struct AGC_YeZhiQiu_Dove_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Audio; // 0x288(0x08)
	struct UNiagaraComponent* NS_SkillA_XuLi; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct ANOS_PlayerHuman* As NOS Player Human; // 0x2a0(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_YeZhiQiu_Dove.GC_YeZhiQiu_Dove_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_YeZhiQiu_Dove(int32_t EntryPoint); // Function GC_YeZhiQiu_Dove.GC_YeZhiQiu_Dove_C.ExecuteUbergraph_GC_YeZhiQiu_Dove // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

