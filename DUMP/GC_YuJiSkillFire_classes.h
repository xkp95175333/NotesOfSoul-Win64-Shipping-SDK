// BlueprintGeneratedClass GC_YuJiSkillFire.GC_YuJiSkillFire_C
// Size: 0x2b4 (Inherited: 0x280)
struct AGC_YuJiSkillFire_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Tips; // 0x288(0x08)
	struct UAudioComponent* Audio; // 0x290(0x08)
	struct UNiagaraComponent* FireBoom; // 0x298(0x08)
	struct UNiagaraComponent* FireDust; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float Duration; // 0x2b0(0x04)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_YuJiSkillFire.GC_YuJiSkillFire_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function GC_YuJiSkillFire.GC_YuJiSkillFire_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_YuJiSkillFire(int32_t EntryPoint); // Function GC_YuJiSkillFire.GC_YuJiSkillFire_C.ExecuteUbergraph_GC_YuJiSkillFire // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

