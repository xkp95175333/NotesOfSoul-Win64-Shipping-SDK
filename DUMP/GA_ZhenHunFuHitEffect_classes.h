// BlueprintGeneratedClass GA_ZhenHunFuHitEffect.GA_ZhenHunFuHitEffect_C
// Size: 0x498 (Inherited: 0x490)
struct UGA_ZhenHunFuHitEffect_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ZhenHunFuHitEffect.GA_ZhenHunFuHitEffect_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_ZhenHunFuHitEffect.GA_ZhenHunFuHitEffect_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnFXAndSoundBC(struct USceneComponent* AttchCom); // Function GA_ZhenHunFuHitEffect.GA_ZhenHunFuHitEffect_C.SpawnFXAndSoundBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ZhenHunFuHitEffect(int32_t EntryPoint); // Function GA_ZhenHunFuHitEffect.GA_ZhenHunFuHitEffect_C.ExecuteUbergraph_GA_ZhenHunFuHitEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

