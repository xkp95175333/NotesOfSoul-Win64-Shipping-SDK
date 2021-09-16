// BlueprintGeneratedClass GA_PracticeDead.GA_PracticeDead_C
// Size: 0x4b8 (Inherited: 0x490)
struct UGA_PracticeDead_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PracticeCharacter_C* Character; // 0x498(0x08)
	struct FActiveGameplayEffectHandle InteractingGEHandle; // 0x4a0(0x08)
	struct AActor* Event Instigator; // 0x4a8(0x08)
	struct UObject* GhostMontage; // 0x4b0(0x08)

	void GetHumanShiHunMontage(struct UAnimMontage* HumanMontage); // Function GA_PracticeDead.GA_PracticeDead_C.GetHumanShiHunMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ThrowAllItem(); // Function GA_PracticeDead.GA_PracticeDead_C.ThrowAllItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_71D994AA468E4F012E3BF38BA4DAEF45(); // Function GA_PracticeDead.GA_PracticeDead_C.OnCancelled_71D994AA468E4F012E3BF38BA4DAEF45 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_71D994AA468E4F012E3BF38BA4DAEF45(); // Function GA_PracticeDead.GA_PracticeDead_C.OnInterrupted_71D994AA468E4F012E3BF38BA4DAEF45 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_71D994AA468E4F012E3BF38BA4DAEF45(); // Function GA_PracticeDead.GA_PracticeDead_C.OnBlendOut_71D994AA468E4F012E3BF38BA4DAEF45 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_71D994AA468E4F012E3BF38BA4DAEF45(); // Function GA_PracticeDead.GA_PracticeDead_C.OnCompleted_71D994AA468E4F012E3BF38BA4DAEF45 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PracticeDead.GA_PracticeDead_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_PracticeDead.GA_PracticeDead_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_PracticeDead(int32_t EntryPoint); // Function GA_PracticeDead.GA_PracticeDead_C.ExecuteUbergraph_GA_PracticeDead // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

