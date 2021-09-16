// BlueprintGeneratedClass GA_XiaoLi_Territory.GA_XiaoLi_Territory_C
// Size: 0x4cc (Inherited: 0x490)
struct UGA_XiaoLi_Territory_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoLi_C* xiaoli; // 0x498(0x08)
	bool NearElementSlot; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UWBP_InteractProgressUI_C* ProgressUMG; // 0x4a8(0x08)
	int32_t AbilityLevel; // 0x4b0(0x04)
	float Territory_SizeX; // 0x4b4(0x04)
	float Territory_SizeY; // 0x4b8(0x04)
	float Territory_HumanSpeedScale; // 0x4bc(0x04)
	float Territory_Duration; // 0x4c0(0x04)
	float Territory_CDTime; // 0x4c4(0x04)
	int32_t Territory_Ultimate_MaxBloodyPoolNum; // 0x4c8(0x04)

	void Get Bloody Pool Debuff GE(struct FGameplayEffectSpecHandle GE Spec Handle); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.Get Bloody Pool Debuff GE // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Territory Debuff GE_Ultimate(struct FGameplayEffectSpecHandle GE Spec Handle); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.Get Territory Debuff GE_Ultimate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Territory Debuff GE(struct FGameplayEffectSpecHandle GE Spec Handle); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.Get Territory Debuff GE // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Bloody Poo lProperties(struct TArray<float> Properties); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.Get Bloody Poo lProperties // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Territory Properties(struct TArray<float> Properties, struct TArray<float> Ultimate); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.Get Territory Properties // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DidNotSpawn_ECF5079F4EA9A6B89ADC819DE702A1D3(struct AActor* SpawnedActor); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.DidNotSpawn_ECF5079F4EA9A6B89ADC819DE702A1D3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Success_ECF5079F4EA9A6B89ADC819DE702A1D3(struct AActor* SpawnedActor); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.Success_ECF5079F4EA9A6B89ADC819DE702A1D3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DidNotSpawn_F4F7ECDC420C578D510DD18B948E7261(struct AActor* SpawnedActor); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.DidNotSpawn_F4F7ECDC420C578D510DD18B948E7261 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Success_F4F7ECDC420C578D510DD18B948E7261(struct AActor* SpawnedActor); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.Success_F4F7ECDC420C578D510DD18B948E7261 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_ACCCDD4749A44BC0350B73A2379C9EDD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.EventReceived_ACCCDD4749A44BC0350B73A2379C9EDD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_ACCCDD4749A44BC0350B73A2379C9EDD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.OnCancelled_ACCCDD4749A44BC0350B73A2379C9EDD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_ACCCDD4749A44BC0350B73A2379C9EDD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.OnInterrupted_ACCCDD4749A44BC0350B73A2379C9EDD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_ACCCDD4749A44BC0350B73A2379C9EDD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.OnBlendOut_ACCCDD4749A44BC0350B73A2379C9EDD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_ACCCDD4749A44BC0350B73A2379C9EDD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.OnCompleted_ACCCDD4749A44BC0350B73A2379C9EDD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cancelled_AADA20CE4D4A27F3839F8C9D0C9B921C(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.Cancelled_AADA20CE4D4A27F3839F8C9D0C9B921C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ValidData_AADA20CE4D4A27F3839F8C9D0C9B921C(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.ValidData_AADA20CE4D4A27F3839F8C9D0C9B921C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_3E6DF6F34045F01DEBE76D970D4E5BEE(float TimeHeld); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.OnRelease_3E6DF6F34045F01DEBE76D970D4E5BEE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_4B030F4641F9E3D313E8A494E0971B66(); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.OnSync_4B030F4641F9E3D313E8A494E0971B66 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoLi_Territory(int32_t EntryPoint); // Function GA_XiaoLi_Territory.GA_XiaoLi_Territory_C.ExecuteUbergraph_GA_XiaoLi_Territory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

