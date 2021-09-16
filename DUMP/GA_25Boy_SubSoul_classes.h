// BlueprintGeneratedClass GA_25Boy_SubSoul.GA_25Boy_SubSoul_C
// Size: 0x4b9 (Inherited: 0x490)
struct UGA_25Boy_SubSoul_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* 25Boy; // 0x498(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x4a0(0x08)
	struct UAnimMontage* GhostMontage; // 0x4a8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4b0(0x08)
	bool bPlayAnimInAir; // 0x4b8(0x01)

	void InitAbility(struct AActor* HumanActor, struct UObject* GhostMontageObj, bool bSuccess); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_AD467B61498631D4332993AE4D6E96A1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.EventReceived_AD467B61498631D4332993AE4D6E96A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_AD467B61498631D4332993AE4D6E96A1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.OnCancelled_AD467B61498631D4332993AE4D6E96A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_AD467B61498631D4332993AE4D6E96A1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.OnInterrupted_AD467B61498631D4332993AE4D6E96A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_AD467B61498631D4332993AE4D6E96A1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.OnBlendOut_AD467B61498631D4332993AE4D6E96A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_AD467B61498631D4332993AE4D6E96A1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.OnCompleted_AD467B61498631D4332993AE4D6E96A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void PlayGhostAnim(); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.PlayGhostAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_25Boy_SubSoul(int32_t EntryPoint); // Function GA_25Boy_SubSoul.GA_25Boy_SubSoul_C.ExecuteUbergraph_GA_25Boy_SubSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

