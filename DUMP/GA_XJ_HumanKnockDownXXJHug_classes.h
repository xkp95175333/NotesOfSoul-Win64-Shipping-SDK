// BlueprintGeneratedClass GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C
// Size: 0x4d0 (Inherited: 0x490)
struct UGA_XJ_HumanKnockDownXXJHug_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* BeenSavedHuman; // 0x498(0x08)
	struct UWBP_InteractProgressUI_C* SaveProgressUI; // 0x4a0(0x08)
	struct UAbilityTask_PlayMontageAndWait* Task_PlayMontage; // 0x4a8(0x08)
	struct UAbilityTask_WaitInputRelease* Task_ERelease; // 0x4b0(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_BeAttack; // 0x4b8(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_InteractCancel; // 0x4c0(0x08)
	struct FActiveGameplayEffectHandle GEInteractHandle; // 0x4c8(0x08)

	void OnCancelled_FEEDA1F1476A7C6ED8C1A48A18B21FFE(); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.OnCancelled_FEEDA1F1476A7C6ED8C1A48A18B21FFE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_FEEDA1F1476A7C6ED8C1A48A18B21FFE(); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.OnInterrupted_FEEDA1F1476A7C6ED8C1A48A18B21FFE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_FEEDA1F1476A7C6ED8C1A48A18B21FFE(); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.OnBlendOut_FEEDA1F1476A7C6ED8C1A48A18B21FFE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_FEEDA1F1476A7C6ED8C1A48A18B21FFE(); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.OnCompleted_FEEDA1F1476A7C6ED8C1A48A18B21FFE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_141D872A4F5EEF42E6022AAAA2C7AA7C(struct FGameplayEventData Payload); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.EventReceived_141D872A4F5EEF42E6022AAAA2C7AA7C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_01BBB3E94D5831D2B64F8BABC86C4A64(struct FGameplayEventData Payload); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.EventReceived_01BBB3E94D5831D2B64F8BABC86C4A64 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_B0968FFB4423CB4BDCF2299F24DD3B3A(float TimeHeld); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.OnRelease_B0968FFB4423CB4BDCF2299F24DD3B3A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_HumanKnockDownXXJHug(int32_t EntryPoint); // Function GA_XJ_HumanKnockDownXXJHug.GA_XJ_HumanKnockDownXXJHug_C.ExecuteUbergraph_GA_XJ_HumanKnockDownXXJHug // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

