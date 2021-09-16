// BlueprintGeneratedClass GA_YujiSkill2_FireEffect.GA_YujiSkill2_FireEffect_C
// Size: 0x4ac (Inherited: 0x490)
struct UGA_YujiSkill2_FireEffect_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	int32_t DmgTimes; // 0x498(0x04)
	int32_t MaxTimes; // 0x49c(0x04)
	struct UNiagaraComponent* FireFX; // 0x4a0(0x08)
	float FireDmg; // 0x4a8(0x04)

	void GetProperty(struct FString Name, int32_t Level, float OutValue); // Function GA_YujiSkill2_FireEffect.GA_YujiSkill2_FireEffect_C.GetProperty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init Data(int32_t Level); // Function GA_YujiSkill2_FireEffect.GA_YujiSkill2_FireEffect_C.Init Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_2223FA8948EB59964CD97D85B411D5F1(); // Function GA_YujiSkill2_FireEffect.GA_YujiSkill2_FireEffect_C.Added_2223FA8948EB59964CD97D85B411D5F1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_EACD170E4B221A5609EA97B5A3C3448D(); // Function GA_YujiSkill2_FireEffect.GA_YujiSkill2_FireEffect_C.Added_EACD170E4B221A5609EA97B5A3C3448D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_YujiSkill2_FireEffect.GA_YujiSkill2_FireEffect_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_YujiSkill2_FireEffect.GA_YujiSkill2_FireEffect_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_YujiSkill2_FireEffect(int32_t EntryPoint); // Function GA_YujiSkill2_FireEffect.GA_YujiSkill2_FireEffect_C.ExecuteUbergraph_GA_YujiSkill2_FireEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

