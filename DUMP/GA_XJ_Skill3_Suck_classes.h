// BlueprintGeneratedClass GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C
// Size: 0x4d8 (Inherited: 0x490)
struct UGA_XJ_Skill3_Suck_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Config_SuckDuration; // 0x498(0x04)
	int32_t InitedConfig; // 0x49c(0x04)
	float Config_DamageBase; // 0x4a0(0x04)
	float Config_EachFloorBodyPoisionExtraDamage; // 0x4a4(0x04)
	float SuckTotalDamage; // 0x4a8(0x04)
	float Config_BodyPoisionExtraDamage; // 0x4ac(0x04)
	struct ANOS_PlayerHuman* SuckHuman; // 0x4b0(0x08)
	struct FTimerHandle TakeDamageTimer; // 0x4b8(0x08)
	bool GetDebuff; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UObject* SuckActor; // 0x4c8(0x08)
	struct UAbilityTask_WaitDelay* Task_SuckDuration; // 0x4d0(0x08)

	void LosePo(); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.LosePo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_B432C66548CDFD3DE6573BAD0A9388E2(); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.OnCancelled_B432C66548CDFD3DE6573BAD0A9388E2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_B432C66548CDFD3DE6573BAD0A9388E2(); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.OnInterrupted_B432C66548CDFD3DE6573BAD0A9388E2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_B432C66548CDFD3DE6573BAD0A9388E2(); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.OnBlendOut_B432C66548CDFD3DE6573BAD0A9388E2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_B432C66548CDFD3DE6573BAD0A9388E2(); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.OnCompleted_B432C66548CDFD3DE6573BAD0A9388E2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_18CCA28447A87419DE0741A96D4164C2(); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.OnFinish_18CCA28447A87419DE0741A96D4164C2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_D8CA6A654655C8561057FC9BB73C24FB(); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.Added_D8CA6A654655C8561057FC9BB73C24FB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void Damage(); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.Damage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TriggerDamageEvent(float InputPin); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.TriggerDamageEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_Skill3_Suck(int32_t EntryPoint); // Function GA_XJ_Skill3_Suck.GA_XJ_Skill3_Suck_C.ExecuteUbergraph_GA_XJ_Skill3_Suck // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

