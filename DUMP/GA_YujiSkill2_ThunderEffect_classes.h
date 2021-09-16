// BlueprintGeneratedClass GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_YujiSkill2_ThunderEffect_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float ThunderDMG; // 0x498(0x04)
	float DurationTime; // 0x49c(0x04)

	void Init Data(int32_t Level); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.Init Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetProperty(struct FString Name, int32_t Level, float OutValue); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.GetProperty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_C19409EA4AA361FDB63D1CB3868B6657(); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.Added_C19409EA4AA361FDB63D1CB3868B6657 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_C619D8A54FA202154D929BBC31FB058F(); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.Added_C619D8A54FA202154D929BBC31FB058F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_25DE6E9549FCD07D9CE31284C0750559(); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.Added_25DE6E9549FCD07D9CE31284C0750559 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveGA(); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.RemoveGA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_YujiSkill2_ThunderEffect(int32_t EntryPoint); // Function GA_YujiSkill2_ThunderEffect.GA_YujiSkill2_ThunderEffect_C.ExecuteUbergraph_GA_YujiSkill2_ThunderEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

