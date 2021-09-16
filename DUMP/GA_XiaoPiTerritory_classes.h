// BlueprintGeneratedClass GA_XiaoPiTerritory.GA_XiaoPiTerritory_C
// Size: 0x4d8 (Inherited: 0x490)
struct UGA_XiaoPiTerritory_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoPi_C* xiaopi; // 0x498(0x08)
	struct AActor* TerritoryActor; // 0x4a0(0x08)
	struct UAbilityTask_WaitInputRelease* Async Task; // 0x4a8(0x08)
	float Duration; // 0x4b0(0x04)
	float CDTime; // 0x4b4(0x04)
	struct FVector TerritoryRange; // 0x4b8(0x0c)
	float DamagePerSecond; // 0x4c4(0x04)
	struct UAnimMontage* Montage_Skill; // 0x4c8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4d0(0x08)

	void MakeTargetData(struct AActor* OwnerActor, struct FVector Range, struct FGameplayAbilityTargetDataHandle TargetData); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.MakeTargetData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FGameplayEffectSpecHandle MakeTerritoryDebuffGEHandle(); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.MakeTerritoryDebuffGEHandle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void EventReceived_1DF0384E47FD93D4EFE776BB338D3B84(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.EventReceived_1DF0384E47FD93D4EFE776BB338D3B84 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_1DF0384E47FD93D4EFE776BB338D3B84(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.OnCancelled_1DF0384E47FD93D4EFE776BB338D3B84 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_1DF0384E47FD93D4EFE776BB338D3B84(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.OnInterrupted_1DF0384E47FD93D4EFE776BB338D3B84 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_1DF0384E47FD93D4EFE776BB338D3B84(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.OnBlendOut_1DF0384E47FD93D4EFE776BB338D3B84 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_1DF0384E47FD93D4EFE776BB338D3B84(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.OnCompleted_1DF0384E47FD93D4EFE776BB338D3B84 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DidNotSpawn_CF0E240B4DD0A067AC7E13B2637BBACE(struct AActor* SpawnedActor); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.DidNotSpawn_CF0E240B4DD0A067AC7E13B2637BBACE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Success_CF0E240B4DD0A067AC7E13B2637BBACE(struct AActor* SpawnedActor); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.Success_CF0E240B4DD0A067AC7E13B2637BBACE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateTerritory(); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.CreateTerritory // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoPiTerritory(int32_t EntryPoint); // Function GA_XiaoPiTerritory.GA_XiaoPiTerritory_C.ExecuteUbergraph_GA_XiaoPiTerritory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

