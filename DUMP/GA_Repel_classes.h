// BlueprintGeneratedClass GA_Repel.GA_Repel_C
// Size: 0x578 (Inherited: 0x490)
struct UGA_Repel_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FGameplayEventData RepelEventData; // 0x498(0xb0)
	struct FActiveGameplayEffectHandle GEHandle_RepelingFreeze; // 0x548(0x08)
	struct UAbilityTask_ApplyRootMotionMoveToForce* Task_RootMotion; // 0x550(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPurifyControl_Initiative; // 0x558(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPurifyControl_Passive; // 0x560(0x08)
	struct FGameplayEffectSpecHandle RepelingLimitGESpec; // 0x568(0x10)

	void GetBeHitMontage(struct UAnimMontage* RepelMontage); // Function GA_Repel.GA_Repel_C.GetBeHitMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_4C980F8742B00382B8379991938DB9FF(); // Function GA_Repel.GA_Repel_C.OnCancelled_4C980F8742B00382B8379991938DB9FF // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_4C980F8742B00382B8379991938DB9FF(); // Function GA_Repel.GA_Repel_C.OnInterrupted_4C980F8742B00382B8379991938DB9FF // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_4C980F8742B00382B8379991938DB9FF(); // Function GA_Repel.GA_Repel_C.OnBlendOut_4C980F8742B00382B8379991938DB9FF // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_4C980F8742B00382B8379991938DB9FF(); // Function GA_Repel.GA_Repel_C.OnCompleted_4C980F8742B00382B8379991938DB9FF // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOutAndDestinationReached_38539B554E4877B0CB17A9A151981773(); // Function GA_Repel.GA_Repel_C.OnTimedOutAndDestinationReached_38539B554E4877B0CB17A9A151981773 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOut_38539B554E4877B0CB17A9A151981773(); // Function GA_Repel.GA_Repel_C.OnTimedOut_38539B554E4877B0CB17A9A151981773 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_476C24284BCE72B8B470D28FEECC682C(struct FGameplayEventData Payload); // Function GA_Repel.GA_Repel_C.EventReceived_476C24284BCE72B8B470D28FEECC682C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_473754084B67D1ABD15C8CA5448B388C(struct FGameplayEventData Payload); // Function GA_Repel.GA_Repel_C.EventReceived_473754084B67D1ABD15C8CA5448B388C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Repel.GA_Repel_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Repel.GA_Repel_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Repel(int32_t EntryPoint); // Function GA_Repel.GA_Repel_C.ExecuteUbergraph_GA_Repel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

