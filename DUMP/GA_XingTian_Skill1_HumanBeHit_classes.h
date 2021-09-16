// BlueprintGeneratedClass GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C
// Size: 0x4f9 (Inherited: 0x490)
struct UGA_XingTian_Skill1_HumanBeHit_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* Human; // 0x498(0x08)
	struct ANOS_PlayerGhost* XingTian; // 0x4a0(0x08)
	int32_t LevelIndex; // 0x4a8(0x04)
	float Damage; // 0x4ac(0x04)
	float HumanHitFlyDistance; // 0x4b0(0x04)
	float HumanHitDamage; // 0x4b4(0x04)
	float HumanHitFlySpeed; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UAbilityTask_ApplyRootMotionMoveToForce* Task_HitFly; // 0x4c0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4c8(0x08)
	bool bCheckHumanHit; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	float Ultimate_ArmorReduce; // 0x4d4(0x04)
	float Ultimate_Duration; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UAnimMontage* Montage_HitFly; // 0x4e0(0x08)
	struct UAnimMontage* Montage_HitWall; // 0x4e8(0x08)
	struct UAbilityTask_WaitDelay* Task_MaxDelay; // 0x4f0(0x08)
	bool bAbilityActivated; // 0x4f8(0x01)

	void GetHitWallMontage(struct UAnimMontage* HitWallMontage); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.GetHitWallMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetHitFlyMontage(struct UAnimMontage* HitFlyMontage); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.GetHitFlyMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(struct AActor* Instigator, float Magnitude, bool bSuccess); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_ED2B8D3C4F98CEEE4AEEA7B090341B31(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.EventReceived_ED2B8D3C4F98CEEE4AEEA7B090341B31 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_ED2B8D3C4F98CEEE4AEEA7B090341B31(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnCancelled_ED2B8D3C4F98CEEE4AEEA7B090341B31 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_ED2B8D3C4F98CEEE4AEEA7B090341B31(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnInterrupted_ED2B8D3C4F98CEEE4AEEA7B090341B31 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_ED2B8D3C4F98CEEE4AEEA7B090341B31(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnBlendOut_ED2B8D3C4F98CEEE4AEEA7B090341B31 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_ED2B8D3C4F98CEEE4AEEA7B090341B31(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnCompleted_ED2B8D3C4F98CEEE4AEEA7B090341B31 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_A9ACCFE24171BD4D7AC4FCA50E2071E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.EventReceived_A9ACCFE24171BD4D7AC4FCA50E2071E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_A9ACCFE24171BD4D7AC4FCA50E2071E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnCancelled_A9ACCFE24171BD4D7AC4FCA50E2071E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_A9ACCFE24171BD4D7AC4FCA50E2071E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnInterrupted_A9ACCFE24171BD4D7AC4FCA50E2071E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_A9ACCFE24171BD4D7AC4FCA50E2071E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnBlendOut_A9ACCFE24171BD4D7AC4FCA50E2071E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_A9ACCFE24171BD4D7AC4FCA50E2071E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnCompleted_A9ACCFE24171BD4D7AC4FCA50E2071E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_9ADBB57745246F2FB25C1A91484877A8(); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnFinish_9ADBB57745246F2FB25C1A91484877A8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void HumanLand(); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.HumanLand // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMovementChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnMovementChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnHumanHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.OnHumanHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XingTian_Skill1_HumanBeHit(int32_t EntryPoint); // Function GA_XingTian_Skill1_HumanBeHit.GA_XingTian_Skill1_HumanBeHit_C.ExecuteUbergraph_GA_XingTian_Skill1_HumanBeHit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

