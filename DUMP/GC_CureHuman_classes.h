// BlueprintGeneratedClass GC_CureHuman.GC_CureHuman_C
// Size: 0x2b8 (Inherited: 0x280)
struct AGC_CureHuman_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ANOS_PlayerHuman* BeenCureHuman; // 0x290(0x08)
	struct ANOS_PlayerHuman* CureInstigator; // 0x298(0x08)
	struct UNiagaraComponent* ShouNiagara; // 0x2a0(0x08)
	struct UNiagaraComponent* FaZhenNiagara; // 0x2a8(0x08)
	struct UAudioComponent* Sound; // 0x2b0(0x08)

	void SpawnNiagara(); // Function GC_CureHuman.GC_CureHuman_C.SpawnNiagara // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_CureHuman.GC_CureHuman_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_CureHuman(int32_t EntryPoint); // Function GC_CureHuman.GC_CureHuman_C.ExecuteUbergraph_GC_CureHuman // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

