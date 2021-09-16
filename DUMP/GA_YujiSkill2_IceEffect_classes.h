// BlueprintGeneratedClass GA_YujiSkill2_IceEffect.GA_YujiSkill2_IceEffect_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_YujiSkill2_IceEffect_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float ReduceSpeedScale; // 0x498(0x04)
	float DurationTime; // 0x49c(0x04)
	struct FActiveGameplayEffectHandle Handle; // 0x4a0(0x08)
	struct FGameplayEffectContextHandle GamePlayEffectContent; // 0x4a8(0x18)

	void Init Data(int32_t Level); // Function GA_YujiSkill2_IceEffect.GA_YujiSkill2_IceEffect_C.Init Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetProperty(struct FString Name, int32_t Level, float OutValue); // Function GA_YujiSkill2_IceEffect.GA_YujiSkill2_IceEffect_C.GetProperty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_F5ECCAD245CFB0F5D3739D9533AD4E1B(); // Function GA_YujiSkill2_IceEffect.GA_YujiSkill2_IceEffect_C.Added_F5ECCAD245CFB0F5D3739D9533AD4E1B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_YujiSkill2_IceEffect.GA_YujiSkill2_IceEffect_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_YujiSkill2_IceEffect.GA_YujiSkill2_IceEffect_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_YujiSkill2_IceEffect(int32_t EntryPoint); // Function GA_YujiSkill2_IceEffect.GA_YujiSkill2_IceEffect_C.ExecuteUbergraph_GA_YujiSkill2_IceEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

