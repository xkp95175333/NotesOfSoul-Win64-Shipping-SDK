// BlueprintGeneratedClass GC_PullHuman.GC_PullHuman_C
// Size: 0x2c0 (Inherited: 0x280)
struct AGC_PullHuman_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ANOS_PlayerHuman* BeenPullHuman; // 0x290(0x08)
	struct ANOS_PlayerHuman* PullInstigator; // 0x298(0x08)
	struct UNiagaraComponent* ShouZhiNiagara; // 0x2a0(0x08)
	struct UAudioComponent* Sound; // 0x2a8(0x08)
	struct UNiagaraComponent* FaZhenNiagara; // 0x2b0(0x08)
	struct UNiagaraComponent* HuiXueNiagara; // 0x2b8(0x08)

	void SpawnNiagara(); // Function GC_PullHuman.GC_PullHuman_C.SpawnNiagara // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_PullHuman.GC_PullHuman_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_PullHuman(int32_t EntryPoint); // Function GC_PullHuman.GC_PullHuman_C.ExecuteUbergraph_GC_PullHuman // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

