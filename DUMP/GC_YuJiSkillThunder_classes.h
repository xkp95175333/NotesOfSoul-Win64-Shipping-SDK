// BlueprintGeneratedClass GC_YuJiSkillThunder.GC_YuJiSkillThunder_C
// Size: 0x2c0 (Inherited: 0x280)
struct AGC_YuJiSkillThunder_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Audio; // 0x288(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x290(0x08)
	struct UNiagaraComponent* Begin; // 0x298(0x08)
	struct UNiagaraComponent* End; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float Duration; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct AActor* My Target; // 0x2b8(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_YuJiSkillThunder.GC_YuJiSkillThunder_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function GC_YuJiSkillThunder.GC_YuJiSkillThunder_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveOnBC(); // Function GC_YuJiSkillThunder.GC_YuJiSkillThunder_C.RemoveOnBC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_YuJiSkillThunder(int32_t EntryPoint); // Function GC_YuJiSkillThunder.GC_YuJiSkillThunder_C.ExecuteUbergraph_GC_YuJiSkillThunder // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

