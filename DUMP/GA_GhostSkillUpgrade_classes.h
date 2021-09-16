// BlueprintGeneratedClass GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C
// Size: 0x4ec (Inherited: 0x490)
struct UGA_GhostSkillUpgrade_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerGhost* Ghost; // 0x498(0x08)
	struct UNOS_AbilitySystemComponent* NOS_ASC; // 0x4a0(0x08)
	struct UAnimMontage* UltimateUpgradeAnimMontage; // 0x4a8(0x08)
	struct UNiagaraSystem* UltimateUpgradeNiagaraEmmiter; // 0x4b0(0x08)
	struct UNiagaraSystem* SkillUpgradeNiagaraEmmiter; // 0x4b8(0x08)
	struct FString OutputText; // 0x4c0(0x10)
	struct USoundBase* Upgrade Sound; // 0x4d0(0x08)
	int32_t SucceededAbilityLevel; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UAnimMontage* UpgradeAnimMontage; // 0x4e0(0x08)
	int32_t UltimateSkillUpgradeNum; // 0x4e8(0x04)

	void Can Upgrade Ability Ultimate(bool Is Granted); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.Can Upgrade Ability Ultimate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Upgrade Ability Cost(struct FGameplayAbilitySpecHandle AbilityHandle, struct FString SkillName, float Soul Point Cost); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.Get Upgrade Ability Cost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnFinish_179B8AD742964AFE08E2E8B620DF9048(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnFinish_179B8AD742964AFE08E2E8B620DF9048 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_179B8AD742964AFE08E2E8B66B81CE90(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnFinish_179B8AD742964AFE08E2E8B66B81CE90 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_179B8AD742964AFE08E2E8B65AE9C204(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnFinish_179B8AD742964AFE08E2E8B65AE9C204 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_179B8AD742964AFE08E2E8B68AFC36D4(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnFinish_179B8AD742964AFE08E2E8B68AFC36D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_179B8AD742964AFE08E2E8B6BB943A40(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnFinish_179B8AD742964AFE08E2E8B6BB943A40 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_179B8AD742964AFE08E2E8B65274519F(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnFinish_179B8AD742964AFE08E2E8B65274519F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_179B8AD742964AFE08E2E8B6631C5D0B(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnFinish_179B8AD742964AFE08E2E8B6631C5D0B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_E49119F04427C8EE1EF0B8BA98EE0D99(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnCancelled_E49119F04427C8EE1EF0B8BA98EE0D99 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_E49119F04427C8EE1EF0B8BA98EE0D99(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnInterrupted_E49119F04427C8EE1EF0B8BA98EE0D99 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_E49119F04427C8EE1EF0B8BA98EE0D99(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnBlendOut_E49119F04427C8EE1EF0B8BA98EE0D99 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_E49119F04427C8EE1EF0B8BA98EE0D99(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnCompleted_E49119F04427C8EE1EF0B8BA98EE0D99 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_1FEB62F94259A9ABBA77E6AF6CAC3125(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnSync_1FEB62F94259A9ABBA77E6AF6CAC3125 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_179B8AD742964AFE08E2E8B611B79CDC(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnFinish_179B8AD742964AFE08E2E8B611B79CDC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_E49119F04427C8EE1EF0B8BAE2D85FD5(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnCancelled_E49119F04427C8EE1EF0B8BAE2D85FD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_E49119F04427C8EE1EF0B8BAE2D85FD5(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnInterrupted_E49119F04427C8EE1EF0B8BAE2D85FD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_E49119F04427C8EE1EF0B8BAE2D85FD5(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnBlendOut_E49119F04427C8EE1EF0B8BAE2D85FD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_E49119F04427C8EE1EF0B8BAE2D85FD5(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnCompleted_E49119F04427C8EE1EF0B8BAE2D85FD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_1FEB62F94259A9ABBA77E6AF169A6369(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnSync_1FEB62F94259A9ABBA77E6AF169A6369 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_E49119F04427C8EE1EF0B8BA03A5A791(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnCancelled_E49119F04427C8EE1EF0B8BA03A5A791 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_E49119F04427C8EE1EF0B8BA03A5A791(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnInterrupted_E49119F04427C8EE1EF0B8BA03A5A791 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_E49119F04427C8EE1EF0B8BA03A5A791(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnBlendOut_E49119F04427C8EE1EF0B8BA03A5A791 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_E49119F04427C8EE1EF0B8BA03A5A791(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnCompleted_E49119F04427C8EE1EF0B8BA03A5A791 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_1FEB62F94259A9ABBA77E6AFF7E79B2D(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnSync_1FEB62F94259A9ABBA77E6AFF7E79B2D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_E49119F04427C8EE1EF0B8BADB2DC0DA(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnCancelled_E49119F04427C8EE1EF0B8BADB2DC0DA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_E49119F04427C8EE1EF0B8BADB2DC0DA(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnInterrupted_E49119F04427C8EE1EF0B8BADB2DC0DA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_E49119F04427C8EE1EF0B8BADB2DC0DA(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnBlendOut_E49119F04427C8EE1EF0B8BADB2DC0DA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_E49119F04427C8EE1EF0B8BADB2DC0DA(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnCompleted_E49119F04427C8EE1EF0B8BADB2DC0DA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_1FEB62F94259A9ABBA77E6AF2F6FFC66(); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.OnSync_1FEB62F94259A9ABBA77E6AF2F6FFC66 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_GhostSkillUpgrade(int32_t EntryPoint); // Function GA_GhostSkillUpgrade.GA_GhostSkillUpgrade_C.ExecuteUbergraph_GA_GhostSkillUpgrade // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

