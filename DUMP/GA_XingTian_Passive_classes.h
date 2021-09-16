// BlueprintGeneratedClass GA_XingTian_Passive.GA_XingTian_Passive_C
// Size: 0x4d0 (Inherited: 0x490)
struct UGA_XingTian_Passive_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float SpeedReduce; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct ABP_XingTian_C* XingTian; // 0x4a0(0x08)
	struct TArray<struct UAbilityTask*> WaitTasks; // 0x4a8(0x10)
	struct UAnimMontage* Montage; // 0x4b8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_Passive; // 0x4c0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_Immunity; // 0x4c8(0x08)

	void ClearWaitTasks(); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.ClearWaitTasks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_450BB10844AC12859E4A759770FD42AF(float TimeHeld); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.OnRelease_450BB10844AC12859E4A759770FD42AF // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_6AA026C1419678BB72B88992B90AF6DE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.EventReceived_6AA026C1419678BB72B88992B90AF6DE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_6AA026C1419678BB72B88992B90AF6DE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.OnCancelled_6AA026C1419678BB72B88992B90AF6DE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_6AA026C1419678BB72B88992B90AF6DE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.OnInterrupted_6AA026C1419678BB72B88992B90AF6DE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_6AA026C1419678BB72B88992B90AF6DE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.OnBlendOut_6AA026C1419678BB72B88992B90AF6DE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_6AA026C1419678BB72B88992B90AF6DE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.OnCompleted_6AA026C1419678BB72B88992B90AF6DE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CheckEndAbility(); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.CheckEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NormalEndAbility(); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.NormalEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XingTian_Passive(int32_t EntryPoint); // Function GA_XingTian_Passive.GA_XingTian_Passive_C.ExecuteUbergraph_GA_XingTian_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

