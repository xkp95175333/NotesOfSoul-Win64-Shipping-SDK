// BlueprintGeneratedClass GA_XingTian_Skill1.GA_XingTian_Skill1_C
// Size: 0x549 (Inherited: 0x490)
struct UGA_XingTian_Skill1_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XingTian_C* XingTian; // 0x498(0x08)
	float CDTime; // 0x4a0(0x04)
	float ChargeSpeed; // 0x4a4(0x04)
	float ChargeDistance; // 0x4a8(0x04)
	struct FVector AttackRange; // 0x4ac(0x0c)
	float GhostHitDizzyTime; // 0x4b8(0x04)
	int32_t LevelIndex; // 0x4bc(0x04)
	struct UAnimMontage* Montage_GhostCharge; // 0x4c0(0x08)
	struct UAnimMontage* Montage_GhostDizzy; // 0x4c8(0x08)
	struct TArray<struct UAbilityTask*> allTasks; // 0x4d0(0x10)
	struct UNOS_PlayMontageAndWaitForEvent* Task_GhostChargeMontage; // 0x4e0(0x08)
	struct UNOS_PlayMontageAndWaitForEvent* Task_GhostEndChargeMontage; // 0x4e8(0x08)
	struct UAbilityTask_WaitInputPress* Task_WaitCancelCharge; // 0x4f0(0x08)
	struct UNOS_WaitBoxTarget* Task_CheckAttack; // 0x4f8(0x08)
	struct ABP_PlayerHumanBase_C* HumanHitted; // 0x500(0x08)
	struct FActiveGameplayEffectHandle GEHandle_GhostCharge; // 0x508(0x08)
	struct FActiveGameplayEffectHandle GEHandle_GhostHitWall; // 0x510(0x08)
	struct UAbilityTask_WaitDelay* Task_WaitEndCharge; // 0x518(0x08)
	struct FActiveGameplayEffectHandle GEHandle_Turn1; // 0x520(0x08)
	struct FActiveGameplayEffectHandle GEHandle_Turn2; // 0x528(0x08)
	bool bHumanHitted; // 0x530(0x01)
	bool bHasCharged; // 0x531(0x01)
	char pad_532[0x6]; // 0x532(0x06)
	struct ANOS_Door* Door; // 0x538(0x08)
	struct ANOS_DoorBase* NewDoor; // 0x540(0x08)
	bool bCheckAttackEnd; // 0x548(0x01)

	void IsCapsuleInCollision(bool InCollision); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.IsCapsuleInCollision // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CanAttackHuman(struct ABP_PlayerHumanBase_C* Human, bool bCanAttack); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.CanAttackHuman // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackIgnoreActors(struct TArray<struct AActor*> Actors); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.GetAttackIgnoreActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ClearAllTasks(); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.ClearAllTasks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_4AB9A3714A9F6019515F43AA95FB8EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.EventReceived_4AB9A3714A9F6019515F43AA95FB8EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_4AB9A3714A9F6019515F43AA95FB8EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnCancelled_4AB9A3714A9F6019515F43AA95FB8EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_4AB9A3714A9F6019515F43AA95FB8EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnInterrupted_4AB9A3714A9F6019515F43AA95FB8EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_4AB9A3714A9F6019515F43AA95FB8EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnBlendOut_4AB9A3714A9F6019515F43AA95FB8EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_4AB9A3714A9F6019515F43AA95FB8EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnCompleted_4AB9A3714A9F6019515F43AA95FB8EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_A21202B84427B9C61B23AAB1B3811154(float TimeWaited); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnPress_A21202B84427B9C61B23AAB1B3811154 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceNoTarget_85AE28424DF50F4452A6CAB4CF5F0C59(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.BoxTraceNoTarget_85AE28424DF50F4452A6CAB4CF5F0C59 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceTarget_85AE28424DF50F4452A6CAB4CF5F0C59(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.BoxTraceTarget_85AE28424DF50F4452A6CAB4CF5F0C59 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_69A37B484352E4B24A3932A6824DA1BC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.EventReceived_69A37B484352E4B24A3932A6824DA1BC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_69A37B484352E4B24A3932A6824DA1BC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnCancelled_69A37B484352E4B24A3932A6824DA1BC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_69A37B484352E4B24A3932A6824DA1BC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnInterrupted_69A37B484352E4B24A3932A6824DA1BC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_69A37B484352E4B24A3932A6824DA1BC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnBlendOut_69A37B484352E4B24A3932A6824DA1BC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_69A37B484352E4B24A3932A6824DA1BC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnCompleted_69A37B484352E4B24A3932A6824DA1BC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_46DBFB5A445F0314A9D8DA9F52D9BC7E(); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnFinish_46DBFB5A445F0314A9D8DA9F52D9BC7E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void GhostCharge(); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.GhostCharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GhostEndCharge(); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.GhostEndCharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckAttack(); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.CheckAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckGhostHitWall(); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.CheckGhostHitWall // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGhostHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.OnGhostHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GhostHitHuman(); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.GhostHitHuman // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XingTian_Skill1(int32_t EntryPoint); // Function GA_XingTian_Skill1.GA_XingTian_Skill1_C.ExecuteUbergraph_GA_XingTian_Skill1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

