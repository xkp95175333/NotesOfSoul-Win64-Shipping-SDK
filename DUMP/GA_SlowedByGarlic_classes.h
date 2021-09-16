// BlueprintGeneratedClass GA_SlowedByGarlic.GA_SlowedByGarlic_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_SlowedByGarlic_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle GE_GarlicSlowSpeed; // 0x498(0x08)
	struct UAbilityTask_WaitDelay* Task_WaitDelay; // 0x4a0(0x08)

	void Removed_68C1D5BE4CE3148A105F2B8266A149EE(); // Function GA_SlowedByGarlic.GA_SlowedByGarlic_C.Removed_68C1D5BE4CE3148A105F2B8266A149EE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_AF3F8F7E4A0E0ACF909131BB986F33E0(); // Function GA_SlowedByGarlic.GA_SlowedByGarlic_C.OnFinish_AF3F8F7E4A0E0ACF909131BB986F33E0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_473754084B67D1ABD15C8CA5448B388C(struct FGameplayEventData Payload); // Function GA_SlowedByGarlic.GA_SlowedByGarlic_C.EventReceived_473754084B67D1ABD15C8CA5448B388C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_SlowedByGarlic.GA_SlowedByGarlic_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SlowedByGarlic.GA_SlowedByGarlic_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_SlowedByGarlic(int32_t EntryPoint); // Function GA_SlowedByGarlic.GA_SlowedByGarlic_C.ExecuteUbergraph_GA_SlowedByGarlic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

