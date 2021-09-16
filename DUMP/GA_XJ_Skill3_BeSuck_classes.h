// BlueprintGeneratedClass GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_XJ_Skill3_BeSuck_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UNOS_PlayMontageAndWaitForEvent* Task_BeSuck; // 0x498(0x08)

	void EventReceived_0A084D54408B48D6046A1392F86BCFEC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.EventReceived_0A084D54408B48D6046A1392F86BCFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_0A084D54408B48D6046A1392F86BCFEC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.OnCancelled_0A084D54408B48D6046A1392F86BCFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_0A084D54408B48D6046A1392F86BCFEC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.OnInterrupted_0A084D54408B48D6046A1392F86BCFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_0A084D54408B48D6046A1392F86BCFEC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.OnBlendOut_0A084D54408B48D6046A1392F86BCFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_0A084D54408B48D6046A1392F86BCFEC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.OnCompleted_0A084D54408B48D6046A1392F86BCFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_BBC55CA14D0E0AE76C239E82F00319E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.EventReceived_BBC55CA14D0E0AE76C239E82F00319E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_BBC55CA14D0E0AE76C239E82F00319E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.OnCancelled_BBC55CA14D0E0AE76C239E82F00319E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_BBC55CA14D0E0AE76C239E82F00319E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.OnInterrupted_BBC55CA14D0E0AE76C239E82F00319E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_BBC55CA14D0E0AE76C239E82F00319E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.OnBlendOut_BBC55CA14D0E0AE76C239E82F00319E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_BBC55CA14D0E0AE76C239E82F00319E8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.OnCompleted_BBC55CA14D0E0AE76C239E82F00319E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_Skill3_BeSuck(int32_t EntryPoint); // Function GA_XJ_Skill3_BeSuck.GA_XJ_Skill3_BeSuck_C.ExecuteUbergraph_GA_XJ_Skill3_BeSuck // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

