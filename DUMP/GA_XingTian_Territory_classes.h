// BlueprintGeneratedClass GA_XingTian_Territory.GA_XingTian_Territory_C
// Size: 0x515 (Inherited: 0x490)
struct UGA_XingTian_Territory_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XingTian_C* XingTian; // 0x498(0x08)
	int32_t LevelIndex; // 0x4a0(0x04)
	float CDTime; // 0x4a4(0x04)
	float Duration; // 0x4a8(0x04)
	float WaveMaxRadius; // 0x4ac(0x04)
	float WaveSpeed; // 0x4b0(0x04)
	float HighWaveHeight; // 0x4b4(0x04)
	float LowWaveHeight; // 0x4b8(0x04)
	float SpeedReduceOneHit; // 0x4bc(0x04)
	float DebuffDuration; // 0x4c0(0x04)
	float WaveDamage; // 0x4c4(0x04)
	struct UAbilityTask_WaitDelay* Task_WaitDelay; // 0x4c8(0x08)
	struct UAbilityTask_WaitInputPress* Task_WaitPressEnd; // 0x4d0(0x08)
	struct UNOS_InputPress* Task_MLB; // 0x4d8(0x08)
	struct UNOS_InputPress* Task_MRB; // 0x4e0(0x08)
	struct UAnimMontage* Montage_Begin; // 0x4e8(0x08)
	struct UAnimMontage* Montage_SpawnWave_High; // 0x4f0(0x08)
	struct UAnimMontage* Montage_SpawnWave_Low; // 0x4f8(0x08)
	struct UAnimMontage* Montage_SpawnWave; // 0x500(0x08)
	float WaveHeight; // 0x508(0x04)
	struct FActiveGameplayEffectHandle GEHandle_SpawnWave; // 0x50c(0x08)
	bool bStartSpawnWave; // 0x514(0x01)

	void SetSkillUIVFX(int32_t Index, bool IsShow); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.SetSkillUIVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnShockWave(float Height); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.SpawnShockWave // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndTasks(); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.EndTasks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_C6241A6D449AD613EC5102B7E869B6B0(); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnFinish_C6241A6D449AD613EC5102B7E869B6B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_5F1A590A48D0C07B159D57911FA7BEE6(float TimeWaited); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnPress_5F1A590A48D0C07B159D57911FA7BEE6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_E6A59D8A49EF24BFC45E8FB76547676C(float TimeWaited); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnPress_E6A59D8A49EF24BFC45E8FB76547676C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_BCC523DA4EF2201C93E1B7ABAA6613B2(float TimeWaited); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnPress_BCC523DA4EF2201C93E1B7ABAA6613B2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_4CCC7CCE4C2733F4658519A2FA7F0244(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.EventReceived_4CCC7CCE4C2733F4658519A2FA7F0244 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_4CCC7CCE4C2733F4658519A2FA7F0244(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnCancelled_4CCC7CCE4C2733F4658519A2FA7F0244 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_4CCC7CCE4C2733F4658519A2FA7F0244(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnInterrupted_4CCC7CCE4C2733F4658519A2FA7F0244 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_4CCC7CCE4C2733F4658519A2FA7F0244(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnBlendOut_4CCC7CCE4C2733F4658519A2FA7F0244 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_4CCC7CCE4C2733F4658519A2FA7F0244(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnCompleted_4CCC7CCE4C2733F4658519A2FA7F0244 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_C97B2F15474E6994D35CACBEAAE2EE39(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.EventReceived_C97B2F15474E6994D35CACBEAAE2EE39 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_C97B2F15474E6994D35CACBEAAE2EE39(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnCancelled_C97B2F15474E6994D35CACBEAAE2EE39 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_C97B2F15474E6994D35CACBEAAE2EE39(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnInterrupted_C97B2F15474E6994D35CACBEAAE2EE39 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_C97B2F15474E6994D35CACBEAAE2EE39(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnBlendOut_C97B2F15474E6994D35CACBEAAE2EE39 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_C97B2F15474E6994D35CACBEAAE2EE39(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.OnCompleted_C97B2F15474E6994D35CACBEAAE2EE39 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void WaitMousePress(); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.WaitMousePress // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartSpawnWave(bool bHigh); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.StartSpawnWave // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XingTian_Territory(int32_t EntryPoint); // Function GA_XingTian_Territory.GA_XingTian_Territory_C.ExecuteUbergraph_GA_XingTian_Territory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

