// BlueprintGeneratedClass GA_CureHuman.GA_CureHuman_C
// Size: 0x500 (Inherited: 0x490)
struct UGA_CureHuman_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* BeenCureHuman; // 0x498(0x08)
	struct FActiveGameplayEffectHandle GEInteractHandle; // 0x4a0(0x08)
	float ReduceCure; // 0x4a8(0x04)
	bool BeenCureHumanLoseSoul3ButBeXXJHug; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct UKxInventoryObject* NeedReActiveItem; // 0x4b0(0x08)
	bool NeedOpenFlashLight; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UAbilityTask_WaitInputRelease* PressReleaseTask; // 0x4c0(0x08)
	int32_t CureType; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct TArray<struct FActiveGameplayEffectHandle> InteractHandle; // 0x4d0(0x10)
	struct UAbilityTask_WaitGameplayTagAdded* InterruptTask; // 0x4e0(0x08)
	bool NeedRemoveTagGE; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct UAbilityTask_WaitDelay* TurnTask; // 0x4f0(0x08)
	bool Interrupt; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float Treatment; // 0x4fc(0x04)

	float CalculateCureValue(); // Function GA_CureHuman.GA_CureHuman_C.CalculateCureValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void DeactivateActiveItems(); // Function GA_CureHuman.GA_CureHuman_C.DeactivateActiveItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddHumansTags(); // Function GA_CureHuman.GA_CureHuman_C.AddHumansTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanCure(bool Can); // Function GA_CureHuman.GA_CureHuman_C.CanCure // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void AddPlayerCureAmount(struct ABP_PlayerHumanBase_C* Human, float CureAmount); // Function GA_CureHuman.GA_CureHuman_C.AddPlayerCureAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HasKuiSiGuiShu(); // Function GA_CureHuman.GA_CureHuman_C.HasKuiSiGuiShu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndTasks(); // Function GA_CureHuman.GA_CureHuman_C.EndTasks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CureTip(float TipIndex); // Function GA_CureHuman.GA_CureHuman_C.CureTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckNature(int32_t ResultIndex); // Function GA_CureHuman.GA_CureHuman_C.CheckNature // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnRelease_70AA6CCB4FAABBFA0C48B58479F9BE6E(float TimeHeld); // Function GA_CureHuman.GA_CureHuman_C.OnRelease_70AA6CCB4FAABBFA0C48B58479F9BE6E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_A780865145B919A225F730AFF73C88E9(); // Function GA_CureHuman.GA_CureHuman_C.OnSync_A780865145B919A225F730AFF73C88E9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_1E8F3A304C45400CD55B7BBF73D2E719(); // Function GA_CureHuman.GA_CureHuman_C.OnSync_1E8F3A304C45400CD55B7BBF73D2E719 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_903240CD4DF046524F7CDCAABF4EC9AD(); // Function GA_CureHuman.GA_CureHuman_C.OnFinish_903240CD4DF046524F7CDCAABF4EC9AD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_EB38061748759E8BEF891C82354C35F5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_CureHuman.GA_CureHuman_C.EventReceived_EB38061748759E8BEF891C82354C35F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_EB38061748759E8BEF891C82354C35F5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_CureHuman.GA_CureHuman_C.OnCancelled_EB38061748759E8BEF891C82354C35F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_EB38061748759E8BEF891C82354C35F5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_CureHuman.GA_CureHuman_C.OnInterrupted_EB38061748759E8BEF891C82354C35F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_EB38061748759E8BEF891C82354C35F5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_CureHuman.GA_CureHuman_C.OnBlendOut_EB38061748759E8BEF891C82354C35F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_EB38061748759E8BEF891C82354C35F5(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_CureHuman.GA_CureHuman_C.OnCompleted_EB38061748759E8BEF891C82354C35F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_4EB941354AF3945E1F0D88B10409C6A4(); // Function GA_CureHuman.GA_CureHuman_C.Added_4EB941354AF3945E1F0D88B10409C6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_CureHuman.GA_CureHuman_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CureHuman.GA_CureHuman_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MonitInterrupt(); // Function GA_CureHuman.GA_CureHuman_C.MonitInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartCure(); // Function GA_CureHuman.GA_CureHuman_C.StartCure // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CureComplete(); // Function GA_CureHuman.GA_CureHuman_C.CureComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_CureHuman(int32_t EntryPoint); // Function GA_CureHuman.GA_CureHuman_C.ExecuteUbergraph_GA_CureHuman // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

