// BlueprintGeneratedClass GA_Element.GA_Element_C
// Size: 0x4f1 (Inherited: 0x490)
struct UGA_Element_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UKxInteractBoxComponent* TargetInteractBoxCom; // 0x498(0x08)
	struct FActiveGameplayEffectHandle GEInteractingHandle; // 0x4a0(0x08)
	struct ABP_ElementBox_C* ElementBox; // 0x4a8(0x08)
	bool bCompleted; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UAudioComponent* Audio; // 0x4b8(0x08)
	bool NeedRotate; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct ATongYongRongQi_C* RongQi; // 0x4c8(0x08)
	struct USoundBase* LoopSoundObject; // 0x4d0(0x08)
	struct UKxInventoryObject* NeedReActiveItem; // 0x4d8(0x08)
	bool NeedOpenFlashLight; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UAbilityTask_WaitGameplayTagAdded* InterruptTask; // 0x4e8(0x08)
	bool Interrupt; // 0x4f0(0x01)

	void AddTags(); // Function GA_Element.GA_Element_C.AddTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeactiveActiveItems(); // Function GA_Element.GA_Element_C.DeactiveActiveItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GuiShuKuiShi(); // Function GA_Element.GA_Element_C.GuiShuKuiShi // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetElementBoxCostTime(float Time); // Function GA_Element.GA_Element_C.GetElementBoxCostTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnRelease_5B91C6D947551B4F3D8ECD84FA616B0A(float TimeHeld); // Function GA_Element.GA_Element_C.OnRelease_5B91C6D947551B4F3D8ECD84FA616B0A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_8C0E8F1748112CD4080D8F8256F4E639(); // Function GA_Element.GA_Element_C.OnFinish_8C0E8F1748112CD4080D8F8256F4E639 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_342B58044890BE8E014320AAC6DA6946(); // Function GA_Element.GA_Element_C.OnSync_342B58044890BE8E014320AAC6DA6946 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_142157894E462145E8C1ADAD3352F49C(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Element.GA_Element_C.EventReceived_142157894E462145E8C1ADAD3352F49C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_142157894E462145E8C1ADAD3352F49C(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Element.GA_Element_C.OnCancelled_142157894E462145E8C1ADAD3352F49C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_142157894E462145E8C1ADAD3352F49C(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Element.GA_Element_C.OnInterrupted_142157894E462145E8C1ADAD3352F49C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_142157894E462145E8C1ADAD3352F49C(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Element.GA_Element_C.OnBlendOut_142157894E462145E8C1ADAD3352F49C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_142157894E462145E8C1ADAD3352F49C(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Element.GA_Element_C.OnCompleted_142157894E462145E8C1ADAD3352F49C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_4151055D4D9435558B4A48A6F548FC6E(); // Function GA_Element.GA_Element_C.Added_4151055D4D9435558B4A48A6F548FC6E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Element.GA_Element_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CreateRongqi(struct AActor* Actor, struct USkeletalMeshComponent* SMC, float Rate); // Function GA_Element.GA_Element_C.CreateRongqi // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DestroyActor(); // Function GA_Element.GA_Element_C.DestroyActor // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LocalStartSpelling(float CostTime); // Function GA_Element.GA_Element_C.LocalStartSpelling // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LocalCreateRongQi(float Rate); // Function GA_Element.GA_Element_C.LocalCreateRongQi // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LocalDestroyRongqi(); // Function GA_Element.GA_Element_C.LocalDestroyRongqi // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LocalInterrupted(); // Function GA_Element.GA_Element_C.LocalInterrupted // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ElementBoxSelfBehavior(); // Function GA_Element.GA_Element_C.ElementBoxSelfBehavior // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartCollect(); // Function GA_Element.GA_Element_C.StartCollect // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MonitInterrupt(); // Function GA_Element.GA_Element_C.MonitInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Element.GA_Element_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void CollectComplete(); // Function GA_Element.GA_Element_C.CollectComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Element(int32_t EntryPoint); // Function GA_Element.GA_Element_C.ExecuteUbergraph_GA_Element // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

