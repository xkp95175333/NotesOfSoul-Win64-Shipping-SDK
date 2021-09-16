// BlueprintGeneratedClass GC_YuJiSkillIce.GC_YuJiSkillIce_C
// Size: 0x2b0 (Inherited: 0x280)
struct AGC_YuJiSkillIce_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Tips; // 0x288(0x08)
	struct UNiagaraComponent* Ice; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Duration; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FTimerHandle TimerHander; // 0x2a8(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_YuJiSkillIce.GC_YuJiSkillIce_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function GC_YuJiSkillIce.GC_YuJiSkillIce_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function GC_YuJiSkillIce.GC_YuJiSkillIce_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_YuJiSkillIce(int32_t EntryPoint); // Function GC_YuJiSkillIce.GC_YuJiSkillIce_C.ExecuteUbergraph_GC_YuJiSkillIce // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

