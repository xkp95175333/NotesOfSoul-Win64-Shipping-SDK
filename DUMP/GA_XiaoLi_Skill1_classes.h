// BlueprintGeneratedClass GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C
// Size: 0x4d8 (Inherited: 0x490)
struct UGA_XiaoLi_Skill1_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoLi_C* xiaoli; // 0x498(0x08)
	struct UAbilityTask_WaitGameplayEffectRemoved* GEListenTask; // 0x4a0(0x08)
	struct UAbilityTask_WaitInputPress* InputTask; // 0x4a8(0x08)
	struct FActiveGameplayEffectHandle HandleGE; // 0x4b0(0x08)
	struct FActiveGameplayEffectHandle LockAtkGE; // 0x4b8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4c0(0x08)
	int32_t AbilityLevel; // 0x4c8(0x04)
	float SpeedUpScale; // 0x4cc(0x04)
	float Duration; // 0x4d0(0x04)
	float CDTime; // 0x4d4(0x04)

	void IsChaInBlock(bool bInBlock); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.IsChaInBlock // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetProperties(struct TArray<float> Properties); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.GetProperties // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_3DC2F9FA4A0530F09344EE9A1BA2FF85(float TimeWaited); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnPress_3DC2F9FA4A0530F09344EE9A1BA2FF85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_9B1909CA4246A25397CD0CBEE570FC16(); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnSync_9B1909CA4246A25397CD0CBEE570FC16 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_2EF0B0BE48A24B482722ABBB64A5D4A2(); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnFinish_2EF0B0BE48A24B482722ABBB64A5D4A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_83C8F92F41ACBFE37E81D995E9BB3833(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.EventReceived_83C8F92F41ACBFE37E81D995E9BB3833 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_83C8F92F41ACBFE37E81D995E9BB3833(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnCancelled_83C8F92F41ACBFE37E81D995E9BB3833 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_83C8F92F41ACBFE37E81D995E9BB3833(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnInterrupted_83C8F92F41ACBFE37E81D995E9BB3833 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_83C8F92F41ACBFE37E81D995E9BB3833(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnBlendOut_83C8F92F41ACBFE37E81D995E9BB3833 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_83C8F92F41ACBFE37E81D995E9BB3833(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnCompleted_83C8F92F41ACBFE37E81D995E9BB3833 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_2F82816B48B647C1B04641ACC7544535(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.EventReceived_2F82816B48B647C1B04641ACC7544535 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_2F82816B48B647C1B04641ACC7544535(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnCancelled_2F82816B48B647C1B04641ACC7544535 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_2F82816B48B647C1B04641ACC7544535(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnInterrupted_2F82816B48B647C1B04641ACC7544535 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_2F82816B48B647C1B04641ACC7544535(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnBlendOut_2F82816B48B647C1B04641ACC7544535 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_2F82816B48B647C1B04641ACC7544535(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnCompleted_2F82816B48B647C1B04641ACC7544535 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_2A870EC848A2B87CC0C7F2847B353156(); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.OnSync_2A870EC848A2B87CC0C7F2847B353156 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoLi_Skill1(int32_t EntryPoint); // Function GA_XiaoLi_Skill1.GA_XiaoLi_Skill1_C.ExecuteUbergraph_GA_XiaoLi_Skill1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

