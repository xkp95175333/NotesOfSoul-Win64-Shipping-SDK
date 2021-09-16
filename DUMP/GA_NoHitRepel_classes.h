// BlueprintGeneratedClass GA_NoHitRepel.GA_NoHitRepel_C
// Size: 0x578 (Inherited: 0x490)
struct UGA_NoHitRepel_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FGameplayEventData RepelEventData; // 0x498(0xb0)
	struct FActiveGameplayEffectHandle GEHandle_RepelingFreeze; // 0x548(0x08)
	struct UAbilityTask_ApplyRootMotionMoveToForce* Task_RootMotion; // 0x550(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPurifyControl_Initiative; // 0x558(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPurifyControl_Passive; // 0x560(0x08)
	struct FGameplayEffectSpecHandle RepelingLimitGESpec; // 0x568(0x10)

	void GetBeHitMontage(struct UAnimMontage* RepelMontage); // Function GA_NoHitRepel.GA_NoHitRepel_C.GetBeHitMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOutAndDestinationReached_E861D160450337B3625134BD2E5638DD(); // Function GA_NoHitRepel.GA_NoHitRepel_C.OnTimedOutAndDestinationReached_E861D160450337B3625134BD2E5638DD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOut_E861D160450337B3625134BD2E5638DD(); // Function GA_NoHitRepel.GA_NoHitRepel_C.OnTimedOut_E861D160450337B3625134BD2E5638DD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_4495EA5043C3146709AC688F161977B9(); // Function GA_NoHitRepel.GA_NoHitRepel_C.OnCancelled_4495EA5043C3146709AC688F161977B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_4495EA5043C3146709AC688F161977B9(); // Function GA_NoHitRepel.GA_NoHitRepel_C.OnInterrupted_4495EA5043C3146709AC688F161977B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_4495EA5043C3146709AC688F161977B9(); // Function GA_NoHitRepel.GA_NoHitRepel_C.OnBlendOut_4495EA5043C3146709AC688F161977B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_4495EA5043C3146709AC688F161977B9(); // Function GA_NoHitRepel.GA_NoHitRepel_C.OnCompleted_4495EA5043C3146709AC688F161977B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_6EBEC5BB4016557FA8A0379F906DA670(struct FGameplayEventData Payload); // Function GA_NoHitRepel.GA_NoHitRepel_C.EventReceived_6EBEC5BB4016557FA8A0379F906DA670 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_05459F0E46DC70656513009B8CBD965F(struct FGameplayEventData Payload); // Function GA_NoHitRepel.GA_NoHitRepel_C.EventReceived_05459F0E46DC70656513009B8CBD965F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NoHitRepel.GA_NoHitRepel_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_NoHitRepel.GA_NoHitRepel_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BeHitWithRepelling(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function GA_NoHitRepel.GA_NoHitRepel_C.BeHitWithRepelling // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_NoHitRepel(int32_t EntryPoint); // Function GA_NoHitRepel.GA_NoHitRepel_C.ExecuteUbergraph_GA_NoHitRepel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

