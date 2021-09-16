// BlueprintGeneratedClass GA_PrimaryElementSlot.GA_PrimaryElementSlot_C
// Size: 0x4f1 (Inherited: 0x490)
struct UGA_PrimaryElementSlot_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Character; // 0x498(0x08)
	int32_t InteractIndex; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct UKxInventoryObject* SameTypeElement; // 0x4a8(0x08)
	struct ABP_ElementSlot_C* ElementSlot; // 0x4b0(0x08)
	struct FActiveGameplayEffectHandle GEInteractingHandle; // 0x4b8(0x08)
	bool Completed; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UAudioComponent* DuTiaoSound; // 0x4c8(0x08)
	struct FActiveGameplayEffectHandle Outline; // 0x4d0(0x08)
	bool NeedSetElementSlotInteracting; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct UAbilityTask_WaitGameplayTagAdded* InterruptTask; // 0x4e0(0x08)
	struct UAbilityTask_WaitInputRelease* ReleaseTask; // 0x4e8(0x08)
	bool Interrupt; // 0x4f0(0x01)

	void SealComplete(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.SealComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddTags(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.AddTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GuiShuKuiChi(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.GuiShuKuiChi // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ElementSlotTip(float TipIndex); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.ElementSlotTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetNeedCostTime(float Time); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.GetNeedCostTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ActiveElement(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.ActiveElement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanSealElementSlot(bool Can); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.CanSealElementSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnRelease_84B217424F11A2F69536FC8851F52B37(float TimeHeld); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.OnRelease_84B217424F11A2F69536FC8851F52B37 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_290F369E4AC1D4DB5D6709BFD578A818(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.OnFinish_290F369E4AC1D4DB5D6709BFD578A818 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_786981F54A4294AF9CEDE5A7DF7AAF3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.EventReceived_786981F54A4294AF9CEDE5A7DF7AAF3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_786981F54A4294AF9CEDE5A7DF7AAF3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.OnCancelled_786981F54A4294AF9CEDE5A7DF7AAF3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_786981F54A4294AF9CEDE5A7DF7AAF3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.OnInterrupted_786981F54A4294AF9CEDE5A7DF7AAF3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_786981F54A4294AF9CEDE5A7DF7AAF3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.OnBlendOut_786981F54A4294AF9CEDE5A7DF7AAF3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_786981F54A4294AF9CEDE5A7DF7AAF3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.OnCompleted_786981F54A4294AF9CEDE5A7DF7AAF3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_0C209AD94A2994F844DF0CB026AA9F33(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.Added_0C209AD94A2994F844DF0CB026AA9F33 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_FB3948AF4EF78E54E5EA53B794EB6722(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.OnSync_FB3948AF4EF78E54E5EA53B794EB6722 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_EBFC2A7443615EC82A6125B1EBB3348D(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.Added_EBFC2A7443615EC82A6125B1EBB3348D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void LocalStopZhenYanSuiPian(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.LocalStopZhenYanSuiPian // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LocalStartZhenYanSuiPian(float Rate); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.LocalStartZhenYanSuiPian // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FengYingDaDuanEvent(float [2]); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.FengYingDaDuanEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LocalInterruptedSpell(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.LocalInterruptedSpell // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MonitInterrupt(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.MonitInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartSeal(); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.StartSeal // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_PrimaryElementSlot(int32_t EntryPoint); // Function GA_PrimaryElementSlot.GA_PrimaryElementSlot_C.ExecuteUbergraph_GA_PrimaryElementSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

