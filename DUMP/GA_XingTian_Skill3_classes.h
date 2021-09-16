// BlueprintGeneratedClass GA_XingTian_Skill3.GA_XingTian_Skill3_C
// Size: 0x534 (Inherited: 0x490)
struct UGA_XingTian_Skill3_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XingTian_C* XingTian; // 0x498(0x08)
	int32_t LevelIndex; // 0x4a0(0x04)
	float CDTime; // 0x4a4(0x04)
	float Damage; // 0x4a8(0x04)
	float ProjectileRadius; // 0x4ac(0x04)
	float MaxTolerableSlope; // 0x4b0(0x04)
	float MaxDistance; // 0x4b4(0x04)
	float Duration; // 0x4b8(0x04)
	float Explode_StartTime; // 0x4bc(0x04)
	float Explode_Radius; // 0x4c0(0x04)
	float SpeedReduce; // 0x4c4(0x04)
	struct UAnimMontage* Montage_Ghost; // 0x4c8(0x08)
	struct UAbilityTask_WaitTargetData* Task_ProjectilePath; // 0x4d0(0x08)
	struct UNOS_InputPress* Task_PressMLB; // 0x4d8(0x08)
	struct UAbilityTask_WaitInputPress* Task_PressCancel; // 0x4e0(0x08)
	struct UAbilityTask_WaitInputPress* Task_PressExplode; // 0x4e8(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* Task_WaitInterrupt; // 0x4f0(0x08)
	struct FVector ProjectileImpactPoint; // 0x4f8(0x0c)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x504(0x08)
	struct FActiveGameplayEffectHandle GEHandle_BeginSkill; // 0x50c(0x08)
	char pad_514[0x4]; // 0x514(0x04)
	struct ABP_XingTian_Shield_C* Shield; // 0x518(0x08)
	struct UNOS_PlayMontageAndWaitForEvent* Task_PlayMontage; // 0x520(0x08)
	struct FRotator ShieldRotation; // 0x528(0x0c)

	void SetSkillUIVFX(int32_t Index, bool IsShow); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.SetSkillUIVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveGE(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.RemoveGE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetExplodeHumans(struct TArray<struct ABP_PlayerHumanBase_C*> ExplodeHumans); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.GetExplodeHumans // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetShieldTransform(struct FVector ImpactLocation, struct FTransform Transform); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.GetShieldTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void EndTasks(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.EndTasks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cancelled_C73103FE4342971E0BBFFCA66CA27CA7(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.Cancelled_C73103FE4342971E0BBFFCA66CA27CA7 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ValidData_C73103FE4342971E0BBFFCA66CA27CA7(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.ValidData_C73103FE4342971E0BBFFCA66CA27CA7 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_C6BC965142C1A6D28330AD90533433F3(float TimeWaited); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnPress_C6BC965142C1A6D28330AD90533433F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_82DDD2FB481A8D7E02A9FC8FC7184DE5(float TimeWaited); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnPress_82DDD2FB481A8D7E02A9FC8FC7184DE5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_644AF2C74467E2C80EE10E99F6D6C1D9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.EventReceived_644AF2C74467E2C80EE10E99F6D6C1D9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_644AF2C74467E2C80EE10E99F6D6C1D9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnCancelled_644AF2C74467E2C80EE10E99F6D6C1D9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_644AF2C74467E2C80EE10E99F6D6C1D9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnInterrupted_644AF2C74467E2C80EE10E99F6D6C1D9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_644AF2C74467E2C80EE10E99F6D6C1D9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnBlendOut_644AF2C74467E2C80EE10E99F6D6C1D9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_644AF2C74467E2C80EE10E99F6D6C1D9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnCompleted_644AF2C74467E2C80EE10E99F6D6C1D9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_6F59BF23405F94035EBEC8A772D601F5(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnSync_6F59BF23405F94035EBEC8A772D601F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_74B25FAD4030914A796466B7DAE546CC(float TimeWaited); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnPress_74B25FAD4030914A796466B7DAE546CC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_6D5D9EC443B4F043E659C8BE0D7459FA(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.Added_6D5D9EC443B4F043E659C8BE0D7459FA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void WaitProjectile(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.WaitProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ProjectileAgain(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.ProjectileAgain // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnShield(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.SpawnShield // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WaitExplode(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.WaitExplode // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnShieldDestroyed(struct AActor* DestroyedActor); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnShieldDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMontageEnd(); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.OnMontageEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XingTian_Skill3(int32_t EntryPoint); // Function GA_XingTian_Skill3.GA_XingTian_Skill3_C.ExecuteUbergraph_GA_XingTian_Skill3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

