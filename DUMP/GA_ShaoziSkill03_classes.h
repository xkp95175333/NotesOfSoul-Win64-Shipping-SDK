// BlueprintGeneratedClass GA_ShaoziSkill03.GA_ShaoziSkill03_C
// Size: 0x4a2 (Inherited: 0x490)
struct UGA_ShaoziSkill03_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle SelfEffectHandl; // 0x498(0x08)
	bool IsRead; // 0x4a0(0x01)
	bool IsFire; // 0x4a1(0x01)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	struct FVector GetLunchVector(); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.GetLunchVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetSkillIsInUse(bool IsShow, int32_t Index); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.SetSkillIsInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FRotator FindSpawnRotation(); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.FindSpawnRotation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void EventReceived_1FA2688C428A3647989AD99F064ED829(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.EventReceived_1FA2688C428A3647989AD99F064ED829 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_1FA2688C428A3647989AD99F064ED829(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnCancelled_1FA2688C428A3647989AD99F064ED829 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_1FA2688C428A3647989AD99F064ED829(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnInterrupted_1FA2688C428A3647989AD99F064ED829 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_1FA2688C428A3647989AD99F064ED829(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnBlendOut_1FA2688C428A3647989AD99F064ED829 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_1FA2688C428A3647989AD99F064ED829(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnCompleted_1FA2688C428A3647989AD99F064ED829 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_86D8BA2642E800A6430404A17352B8AC(float TimeHeld); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnRelease_86D8BA2642E800A6430404A17352B8AC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_084F20F84FD14D3759FB14AF23938DE7(float TimeHeld); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnRelease_084F20F84FD14D3759FB14AF23938DE7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_B21529A94D9FB94F85C6F794C8DCB230(); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnSync_B21529A94D9FB94F85C6F794C8DCB230 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_67FB70284EDB4493B960DFB08EF3A4F0(float TimeWaited); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnPress_67FB70284EDB4493B960DFB08EF3A4F0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_DBF9CDF14F053E6DAC9B65BE1AB03E82(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.EventReceived_DBF9CDF14F053E6DAC9B65BE1AB03E82 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_DBF9CDF14F053E6DAC9B65BE1AB03E82(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnCancelled_DBF9CDF14F053E6DAC9B65BE1AB03E82 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_DBF9CDF14F053E6DAC9B65BE1AB03E82(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnInterrupted_DBF9CDF14F053E6DAC9B65BE1AB03E82 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_DBF9CDF14F053E6DAC9B65BE1AB03E82(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnBlendOut_DBF9CDF14F053E6DAC9B65BE1AB03E82 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_DBF9CDF14F053E6DAC9B65BE1AB03E82(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnCompleted_DBF9CDF14F053E6DAC9B65BE1AB03E82 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_D68C070A4AEBF80D5C50019F1071AF37(float TimeWaited); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnPress_D68C070A4AEBF80D5C50019F1071AF37 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_9118200645588E70BC3AEDB2A41CF26F(float TimeWaited); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.OnPress_9118200645588E70BC3AEDB2A41CF26F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ShaoziSkill03(int32_t EntryPoint); // Function GA_ShaoziSkill03.GA_ShaoziSkill03_C.ExecuteUbergraph_GA_ShaoziSkill03 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

