// BlueprintGeneratedClass GC_YuJiNorAttackHit.GC_YuJiNorAttackHit_C
// Size: 0x2e0 (Inherited: 0x280)
struct AGC_YuJiNorAttackHit_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* OnHit; // 0x288(0x08)
	struct TMap<int32_t, struct FRotator> HitDirMap; // 0x290(0x50)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_YuJiNorAttackHit.GC_YuJiNorAttackHit_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function GC_YuJiNorAttackHit.GC_YuJiNorAttackHit_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_YuJiNorAttackHit(int32_t EntryPoint); // Function GC_YuJiNorAttackHit.GC_YuJiNorAttackHit_C.ExecuteUbergraph_GC_YuJiNorAttackHit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

