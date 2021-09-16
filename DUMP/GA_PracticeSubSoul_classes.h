// BlueprintGeneratedClass GA_PracticeSubSoul.GA_PracticeSubSoul_C
// Size: 0x548 (Inherited: 0x490)
struct UGA_PracticeSubSoul_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct TMap<struct FString, struct UAnimMontage*> SpecilAnimList; // 0x498(0x50)
	struct UObject* CurPlayer; // 0x4e8(0x08)
	struct FActiveGameplayEffectHandle InteractingGEHandle; // 0x4f0(0x08)
	struct UAnimMontage* CurPlayingAnim; // 0x4f8(0x08)
	struct FGameplayEffectSpecHandle GESpecHandle_Limit; // 0x500(0x10)
	struct FGameplayTagContainer InstigatorTags; // 0x510(0x20)
	struct TArray<float> TempAdditionalPositions; // 0x530(0x10)
	struct UKxInventoryObject* NeedReActiveItem; // 0x540(0x08)

	void GetMontageSection(struct FName SectionName); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.GetMontageSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void LosePo(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.LosePo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Between(float Value, float Min, float Max, bool bBetween); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.Between // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryGetAnimByRotation(struct UObject* Object, float AnimType, struct UAnimMontage* Anim); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.TryGetAnimByRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_DA2460E347D087C11359AAAC2A479A90(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.OnCancelled_DA2460E347D087C11359AAAC2A479A90 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_DA2460E347D087C11359AAAC2A479A90(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.OnInterrupted_DA2460E347D087C11359AAAC2A479A90 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_DA2460E347D087C11359AAAC2A479A90(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.OnBlendOut_DA2460E347D087C11359AAAC2A479A90 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_DA2460E347D087C11359AAAC2A479A90(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.OnCompleted_DA2460E347D087C11359AAAC2A479A90 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_1476B8D549AE3451BEAE15AE75BA4306(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.OnCancelled_1476B8D549AE3451BEAE15AE75BA4306 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_1476B8D549AE3451BEAE15AE75BA4306(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.OnInterrupted_1476B8D549AE3451BEAE15AE75BA4306 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_1476B8D549AE3451BEAE15AE75BA4306(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.OnBlendOut_1476B8D549AE3451BEAE15AE75BA4306 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_1476B8D549AE3451BEAE15AE75BA4306(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.OnCompleted_1476B8D549AE3451BEAE15AE75BA4306 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CatchByGhostOnRightPos(float AnimType); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.CatchByGhostOnRightPos // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetActorRotationBC(struct FRotator Rot, struct AActor* Actor, bool bBackAnim); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.SetActorRotationBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClientActiveTianYue(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.ClientActiveTianYue // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TempSetPosition(float Index); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.TempSetPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TempSetRotation(struct APlayerController* PlayerController, struct AActor* Avatar, struct FVector Direction); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.TempSetRotation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TriggerEndAbility(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.TriggerEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CanCrawl(); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.CanCrawl // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CrawlBC(struct ABP_PracticeCharacter_C* Player); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.CrawlBC // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RunOnOwner(struct UAnimMontage* Anim); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.RunOnOwner // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_PracticeSubSoul(int32_t EntryPoint); // Function GA_PracticeSubSoul.GA_PracticeSubSoul_C.ExecuteUbergraph_GA_PracticeSubSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

