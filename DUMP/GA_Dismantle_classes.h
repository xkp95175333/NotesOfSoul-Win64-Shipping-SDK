// BlueprintGeneratedClass GA_Dismantle.GA_Dismantle_C
// Size: 0x4d8 (Inherited: 0x490)
struct UGA_Dismantle_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UKxInteractBoxComponent* InteractBox; // 0x498(0x08)
	struct AActor* InteractActor; // 0x4a0(0x08)
	float InteractTime; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct UWBP_InteractProgressUI_C* ProgressBar; // 0x4b0(0x08)
	struct ANOS_PlayerBase* PlayerBase; // 0x4b8(0x08)
	float AnimRate; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct UNiagaraComponent* TouWei; // 0x4c8(0x08)
	struct UAudioComponent* Sound; // 0x4d0(0x08)

	void ClearNS(); // Function GA_Dismantle.GA_Dismantle_C.ClearNS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DismantleTarget(); // Function GA_Dismantle.GA_Dismantle_C.DismantleTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveProgressBarUI(); // Function GA_Dismantle.GA_Dismantle_C.RemoveProgressBarUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetDismantleTime(struct AActor* DismantleActor, float Time); // Function GA_Dismantle.GA_Dismantle_C.GetDismantleTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnRelease_0F2045874B1547A036094AABFE69091A(float TimeHeld); // Function GA_Dismantle.GA_Dismantle_C.OnRelease_0F2045874B1547A036094AABFE69091A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_F13C1D534DA11556F616FBA9399F46C1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dismantle.GA_Dismantle_C.EventReceived_F13C1D534DA11556F616FBA9399F46C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_F13C1D534DA11556F616FBA9399F46C1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dismantle.GA_Dismantle_C.OnCancelled_F13C1D534DA11556F616FBA9399F46C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_F13C1D534DA11556F616FBA9399F46C1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dismantle.GA_Dismantle_C.OnInterrupted_F13C1D534DA11556F616FBA9399F46C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_F13C1D534DA11556F616FBA9399F46C1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dismantle.GA_Dismantle_C.OnBlendOut_F13C1D534DA11556F616FBA9399F46C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_F13C1D534DA11556F616FBA9399F46C1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dismantle.GA_Dismantle_C.OnCompleted_F13C1D534DA11556F616FBA9399F46C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Dismantle.GA_Dismantle_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Dismantle.GA_Dismantle_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Dismantle(int32_t EntryPoint); // Function GA_Dismantle.GA_Dismantle_C.ExecuteUbergraph_GA_Dismantle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

