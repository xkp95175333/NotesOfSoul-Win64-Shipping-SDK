// BlueprintGeneratedClass GA_PlayMontage.GA_PlayMontage_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_PlayMontage_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle GEInteracting; // 0x498(0x08)

	void EventReceived_2477680D4D9161E4546F1A91083AD7A7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PlayMontage.GA_PlayMontage_C.EventReceived_2477680D4D9161E4546F1A91083AD7A7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_2477680D4D9161E4546F1A91083AD7A7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PlayMontage.GA_PlayMontage_C.OnCancelled_2477680D4D9161E4546F1A91083AD7A7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_2477680D4D9161E4546F1A91083AD7A7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PlayMontage.GA_PlayMontage_C.OnInterrupted_2477680D4D9161E4546F1A91083AD7A7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_2477680D4D9161E4546F1A91083AD7A7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PlayMontage.GA_PlayMontage_C.OnBlendOut_2477680D4D9161E4546F1A91083AD7A7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_2477680D4D9161E4546F1A91083AD7A7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PlayMontage.GA_PlayMontage_C.OnCompleted_2477680D4D9161E4546F1A91083AD7A7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PlayMontage.GA_PlayMontage_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_PlayMontage.GA_PlayMontage_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_PlayMontage(int32_t EntryPoint); // Function GA_PlayMontage.GA_PlayMontage_C.ExecuteUbergraph_GA_PlayMontage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

