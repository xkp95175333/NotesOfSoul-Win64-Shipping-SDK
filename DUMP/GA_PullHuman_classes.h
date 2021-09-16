// BlueprintGeneratedClass GA_PullHuman.GA_PullHuman_C
// Size: 0x4d9 (Inherited: 0x490)
struct UGA_PullHuman_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* BeenPullHuman; // 0x498(0x08)
	struct FActiveGameplayEffectHandle GEInteractHandle; // 0x4a0(0x08)
	struct UKxInventoryObject* NeedReActiveItem; // 0x4a8(0x08)
	bool NeedOpenFlashLight; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UAbilityTask_WaitInputRelease* ReleaseTask; // 0x4b8(0x08)
	struct TArray<struct FActiveGameplayEffectHandle> InteractHandle; // 0x4c0(0x10)
	struct UAbilityTask_WaitGameplayTagAdded* InterruptTask; // 0x4d0(0x08)
	bool Interrupt; // 0x4d8(0x01)

	void HasKuiSiGuiShu(); // Function GA_PullHuman.GA_PullHuman_C.HasKuiSiGuiShu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BePullNotice(); // Function GA_PullHuman.GA_PullHuman_C.BePullNotice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeactivateActiveItems(); // Function GA_PullHuman.GA_PullHuman_C.DeactivateActiveItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddHumanTags(); // Function GA_PullHuman.GA_PullHuman_C.AddHumanTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanPull(bool Can); // Function GA_PullHuman.GA_PullHuman_C.CanPull // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CheckSubsidiaryHuaJi(struct AActor* targetActor); // Function GA_PullHuman.GA_PullHuman_C.CheckSubsidiaryHuaJi // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_285410964C0765788647929E4CC9EB05(float TimeHeld); // Function GA_PullHuman.GA_PullHuman_C.OnRelease_285410964C0765788647929E4CC9EB05 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_DE26556C4DFB85FF4F59D28986F652F5(); // Function GA_PullHuman.GA_PullHuman_C.OnSync_DE26556C4DFB85FF4F59D28986F652F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_AA57DBF4486698296820EAB581B03E21(); // Function GA_PullHuman.GA_PullHuman_C.OnFinish_AA57DBF4486698296820EAB581B03E21 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_BF76996C4A95715380A96BAEDD4144C0(); // Function GA_PullHuman.GA_PullHuman_C.Added_BF76996C4A95715380A96BAEDD4144C0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_AC0B8A7B45F2398412C2EA92A9AC6875(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PullHuman.GA_PullHuman_C.EventReceived_AC0B8A7B45F2398412C2EA92A9AC6875 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_AC0B8A7B45F2398412C2EA92A9AC6875(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PullHuman.GA_PullHuman_C.OnCancelled_AC0B8A7B45F2398412C2EA92A9AC6875 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_AC0B8A7B45F2398412C2EA92A9AC6875(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PullHuman.GA_PullHuman_C.OnInterrupted_AC0B8A7B45F2398412C2EA92A9AC6875 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_AC0B8A7B45F2398412C2EA92A9AC6875(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PullHuman.GA_PullHuman_C.OnBlendOut_AC0B8A7B45F2398412C2EA92A9AC6875 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_AC0B8A7B45F2398412C2EA92A9AC6875(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_PullHuman.GA_PullHuman_C.OnCompleted_AC0B8A7B45F2398412C2EA92A9AC6875 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_PullHuman.GA_PullHuman_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PullHuman.GA_PullHuman_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MoniteInterrupt(); // Function GA_PullHuman.GA_PullHuman_C.MoniteInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartPull(); // Function GA_PullHuman.GA_PullHuman_C.StartPull // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PullComplete(); // Function GA_PullHuman.GA_PullHuman_C.PullComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_PullHuman(int32_t EntryPoint); // Function GA_PullHuman.GA_PullHuman_C.ExecuteUbergraph_GA_PullHuman // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

