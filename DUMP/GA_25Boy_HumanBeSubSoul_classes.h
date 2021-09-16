// BlueprintGeneratedClass GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C
// Size: 0x4dc (Inherited: 0x490)
struct UGA_25Boy_HumanBeSubSoul_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* OwnerHuman; // 0x498(0x08)
	struct ANOS_PlayerHuman* 25Boy; // 0x4a0(0x08)
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

	void SendEvent_BeAttackEnd(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.SendEvent_BeAttackEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActiveItem(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.ActiveItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeactiveItem(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.DeactiveItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GhostSubSoul(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.GhostSubSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanRotation(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.SetHumanRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostRotation(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.SetGhostRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HumanLoseSoul(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.HumanLoseSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(struct AActor* GhostActor, struct UObject* GhostMontageObj, struct UObject* HumanMontageObj, struct FGameplayTagContainer TargetTags, float HumanAngle, bool bSuccess); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOutAndDestinationReached_41378CDB4CAC1FAF3BF5A5A5CF78BC25(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.OnTimedOutAndDestinationReached_41378CDB4CAC1FAF3BF5A5A5CF78BC25 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOut_41378CDB4CAC1FAF3BF5A5A5CF78BC25(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.OnTimedOut_41378CDB4CAC1FAF3BF5A5A5CF78BC25 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_22FE167C460B77F8199E168E2CB4BCD5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.EventReceived_22FE167C460B77F8199E168E2CB4BCD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_22FE167C460B77F8199E168E2CB4BCD5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.OnCancelled_22FE167C460B77F8199E168E2CB4BCD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_22FE167C460B77F8199E168E2CB4BCD5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.OnInterrupted_22FE167C460B77F8199E168E2CB4BCD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_22FE167C460B77F8199E168E2CB4BCD5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.OnBlendOut_22FE167C460B77F8199E168E2CB4BCD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_22FE167C460B77F8199E168E2CB4BCD5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.OnCompleted_22FE167C460B77F8199E168E2CB4BCD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_AB26B907476EA436D61C73915007B2A0(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.OnSync_AB26B907476EA436D61C73915007B2A0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BeginSubSoulAnim(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.BeginSubSoulAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanLocation(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.SetHumanLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayHumanAnim(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.PlayHumanAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPlayerRotation_Multicast(struct AController* Controller, struct ACharacter* Character, struct FRotator Rotation); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.SetPlayerRotation_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayHighEnergyAnim(); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.PlayHighEnergyAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_25Boy_HumanBeSubSoul(int32_t EntryPoint); // Function GA_25Boy_HumanBeSubSoul.GA_25Boy_HumanBeSubSoul_C.ExecuteUbergraph_GA_25Boy_HumanBeSubSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

