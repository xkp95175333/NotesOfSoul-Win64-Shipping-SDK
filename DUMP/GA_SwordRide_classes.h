// BlueprintGeneratedClass GA_SwordRide.GA_SwordRide_C
// Size: 0x4a5 (Inherited: 0x490)
struct UGA_SwordRide_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float SkillPowerConsume; // 0x498(0x04)
	struct FActiveGameplayEffectHandle GE_Sprint; // 0x49c(0x08)
	bool bIsNanGong; // 0x4a4(0x01)

	void GetOwnerDirection(float Direction); // Function GA_SwordRide.GA_SwordRide_C.GetOwnerDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetOwnerMovement(struct UNOS_MovementComponent* Movement); // Function GA_SwordRide.GA_SwordRide_C.GetOwnerMovement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnChange_59BD0ACC481C763B5422BC9919FDAFD4(bool bMatchesComparison, float CurrentRatio); // Function GA_SwordRide.GA_SwordRide_C.OnChange_59BD0ACC481C763B5422BC9919FDAFD4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnVelocityLess_E774BC64423D625CAC6021A91C82290C(); // Function GA_SwordRide.GA_SwordRide_C.OnVelocityLess_E774BC64423D625CAC6021A91C82290C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_CF0BCA404BA66C67CF41BEAAEC76F1C9(float TimeHeld); // Function GA_SwordRide.GA_SwordRide_C.OnRelease_CF0BCA404BA66C67CF41BEAAEC76F1C9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_4156E3884A5F557FA2873FBFE01951E0(); // Function GA_SwordRide.GA_SwordRide_C.OnFinish_4156E3884A5F557FA2873FBFE01951E0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SwordRide.GA_SwordRide_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_SwordRide.GA_SwordRide_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_SwordRide(int32_t EntryPoint); // Function GA_SwordRide.GA_SwordRide_C.ExecuteUbergraph_GA_SwordRide // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

