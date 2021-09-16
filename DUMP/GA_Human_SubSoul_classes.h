// BlueprintGeneratedClass GA_Human_SubSoul.GA_Human_SubSoul_C
// Size: 0x4dc (Inherited: 0x490)
struct UGA_Human_SubSoul_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* OwnerHuman; // 0x498(0x08)
	struct ANOS_PlayerGhost* AttackerGhost; // 0x4a0(0x08)
	struct UAnimMontage* GhostMontage; // 0x4a8(0x08)
	struct UAnimMontage* HumanMontage; // 0x4b0(0x08)
	bool bHumanLoseSoul; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UKxInventoryObject* NeedReActiveItem; // 0x4c0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4c8(0x08)
	bool bGhostGainSoul; // 0x4d0(0x01)
	bool bHumanDisableControl; // 0x4d1(0x01)
	char pad_4D2[0x2]; // 0x4d2(0x02)
	struct FActiveGameplayEffectHandle GEHandle_HumanSubSoul; // 0x4d4(0x08)

	void GetMontageSection(struct FName Section); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.GetMontageSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SendEvent_BeAttackEnd(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.SendEvent_BeAttackEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActiveItem(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.ActiveItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeactiveItem(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.DeactiveItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GhostSubSoul(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.GhostSubSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanRotation(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.SetHumanRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostRotation(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.SetGhostRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HumanLoseSoul(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.HumanLoseSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(struct AActor* GhostActor, struct UObject* GhostMontageObj, struct UObject* HumanMontageObj, struct FGameplayTagContainer TargetTags, float HumanAngle, bool bSuccess); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOutAndDestinationReached_E523A1D94AA09A954EB3099AF5B13703(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.OnTimedOutAndDestinationReached_E523A1D94AA09A954EB3099AF5B13703 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOut_E523A1D94AA09A954EB3099AF5B13703(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.OnTimedOut_E523A1D94AA09A954EB3099AF5B13703 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_EBC2CB154E94284BABD2D187F5EDECA1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.EventReceived_EBC2CB154E94284BABD2D187F5EDECA1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_EBC2CB154E94284BABD2D187F5EDECA1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.OnCancelled_EBC2CB154E94284BABD2D187F5EDECA1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_EBC2CB154E94284BABD2D187F5EDECA1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.OnInterrupted_EBC2CB154E94284BABD2D187F5EDECA1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_EBC2CB154E94284BABD2D187F5EDECA1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.OnBlendOut_EBC2CB154E94284BABD2D187F5EDECA1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_EBC2CB154E94284BABD2D187F5EDECA1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.OnCompleted_EBC2CB154E94284BABD2D187F5EDECA1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BeginSubSoulAnim(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.BeginSubSoulAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanLocation(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.SetHumanLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayHumanAnim(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.PlayHumanAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPlayerRotation_Multicast(struct AController* Controller, struct ACharacter* Character, struct FRotator Rotation); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.SetPlayerRotation_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayHighEnergyAnim(); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.PlayHighEnergyAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Human_SubSoul(int32_t EntryPoint); // Function GA_Human_SubSoul.GA_Human_SubSoul_C.ExecuteUbergraph_GA_Human_SubSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

