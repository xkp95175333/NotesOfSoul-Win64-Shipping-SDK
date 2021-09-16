// BlueprintGeneratedClass GA_ElementSlot.GA_ElementSlot_C
// Size: 0x4e9 (Inherited: 0x490)
struct UGA_ElementSlot_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Character; // 0x498(0x08)
	int32_t InteractIndex; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct UKxInventoryObject* SameTypeElement; // 0x4a8(0x08)
	struct ABP_ElementSlot_C* ElementSlot; // 0x4b0(0x08)
	struct FActiveGameplayEffectHandle GEInteractHandle; // 0x4b8(0x08)
	bool bCompleted; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UAudioComponent* DuTiaoSound; // 0x4c8(0x08)
	struct UKxInventoryObject* NeedReActiveItem; // 0x4d0(0x08)
	bool NeedOpenFlashLight; // 0x4d8(0x01)
	bool NeedSetElementSlotInteracting; // 0x4d9(0x01)
	bool bPullOutElement; // 0x4da(0x01)
	char pad_4DB[0x5]; // 0x4db(0x05)
	struct UAbilityTask_WaitGameplayTagAdded* InterruptTask; // 0x4e0(0x08)
	bool Interrupt; // 0x4e8(0x01)

	void SealOrPullOutElementSlot(); // Function GA_ElementSlot.GA_ElementSlot_C.SealOrPullOutElementSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeactiveActiveItems(); // Function GA_ElementSlot.GA_ElementSlot_C.DeactiveActiveItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanSealOrPullOut(bool Can); // Function GA_ElementSlot.GA_ElementSlot_C.CanSealOrPullOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void AddTags(); // Function GA_ElementSlot.GA_ElementSlot_C.AddTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GuiShuKuiShi(); // Function GA_ElementSlot.GA_ElementSlot_C.GuiShuKuiShi // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool CurActiveItemIsSameTypeElement(); // Function GA_ElementSlot.GA_ElementSlot_C.CurActiveItemIsSameTypeElement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ElementSlotTip(float TipIndex); // Function GA_ElementSlot.GA_ElementSlot_C.ElementSlotTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetNeedCostTims(float Time); // Function GA_ElementSlot.GA_ElementSlot_C.GetNeedCostTims // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CanSealElementSlot(bool Can); // Function GA_ElementSlot.GA_ElementSlot_C.CanSealElementSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnRelease_20B0D3ED478D6CC699674B90BEB70EA7(float TimeHeld); // Function GA_ElementSlot.GA_ElementSlot_C.OnRelease_20B0D3ED478D6CC699674B90BEB70EA7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_1FB093654F6672F717D3AE841DB66FD5(); // Function GA_ElementSlot.GA_ElementSlot_C.OnFinish_1FB093654F6672F717D3AE841DB66FD5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_974ED24946FF4B30D9FBD89DA7FFF941(); // Function GA_ElementSlot.GA_ElementSlot_C.OnSync_974ED24946FF4B30D9FBD89DA7FFF941 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_2DBD7BFA4807E4E0BB1CB6AAFFF7BF12(); // Function GA_ElementSlot.GA_ElementSlot_C.OnSync_2DBD7BFA4807E4E0BB1CB6AAFFF7BF12 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_90EB66054323D26ECB8444974AE45B4E(); // Function GA_ElementSlot.GA_ElementSlot_C.OnSync_90EB66054323D26ECB8444974AE45B4E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_14762CAD441959748E8F7DA003BDD954(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ElementSlot.GA_ElementSlot_C.EventReceived_14762CAD441959748E8F7DA003BDD954 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_14762CAD441959748E8F7DA003BDD954(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ElementSlot.GA_ElementSlot_C.OnCancelled_14762CAD441959748E8F7DA003BDD954 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_14762CAD441959748E8F7DA003BDD954(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ElementSlot.GA_ElementSlot_C.OnInterrupted_14762CAD441959748E8F7DA003BDD954 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_14762CAD441959748E8F7DA003BDD954(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ElementSlot.GA_ElementSlot_C.OnBlendOut_14762CAD441959748E8F7DA003BDD954 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_14762CAD441959748E8F7DA003BDD954(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ElementSlot.GA_ElementSlot_C.OnCompleted_14762CAD441959748E8F7DA003BDD954 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_EF00A2A7478661760F0653894A466516(); // Function GA_ElementSlot.GA_ElementSlot_C.Added_EF00A2A7478661760F0653894A466516 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_31FCF4354E59F60839586FBC3D66715C(); // Function GA_ElementSlot.GA_ElementSlot_C.Added_31FCF4354E59F60839586FBC3D66715C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_ElementSlot.GA_ElementSlot_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ElementSlot.GA_ElementSlot_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void LocalStopZhenYanSuiPian(); // Function GA_ElementSlot.GA_ElementSlot_C.LocalStopZhenYanSuiPian // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LocalStartZhenYanSuiPian(float Rate); // Function GA_ElementSlot.GA_ElementSlot_C.LocalStartZhenYanSuiPian // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIEvent(float [2]); // Function GA_ElementSlot.GA_ElementSlot_C.UIEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LocalInterruptedSpell(); // Function GA_ElementSlot.GA_ElementSlot_C.LocalInterruptedSpell // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ZhenYanOwnBehavior(); // Function GA_ElementSlot.GA_ElementSlot_C.ZhenYanOwnBehavior // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PullOutElement(); // Function GA_ElementSlot.GA_ElementSlot_C.PullOutElement // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MonitInterrupt(); // Function GA_ElementSlot.GA_ElementSlot_C.MonitInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartSeal(); // Function GA_ElementSlot.GA_ElementSlot_C.StartSeal // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SealComplete(); // Function GA_ElementSlot.GA_ElementSlot_C.SealComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ElementSlot(int32_t EntryPoint); // Function GA_ElementSlot.GA_ElementSlot_C.ExecuteUbergraph_GA_ElementSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

