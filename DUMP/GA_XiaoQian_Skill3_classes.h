// BlueprintGeneratedClass GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C
// Size: 0x4e9 (Inherited: 0x490)
struct UGA_XiaoQian_Skill3_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_NieXiaoQian_C* Xiao Qian; // 0x498(0x08)
	float ScaingHight; // 0x4a0(0x04)
	bool IsOnScaing; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	struct ABP_AimedDecal_C* DecalActor; // 0x4a8(0x08)
	struct FVector TargetLocation; // 0x4b0(0x0c)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct TArray<struct AActor*> Target; // 0x4c0(0x10)
	int32_t FireNum; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct UNOS_WaitBoxTarget* Async Task; // 0x4d8(0x08)
	struct UNOS_WaitTraceByObjectTypes* Async Task_1; // 0x4e0(0x08)
	bool IsCanCancel; // 0x4e8(0x01)

	void HumanLoseSoul(struct ANOS_PlayerHuman* Target, int32_t RemoveNum); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.HumanLoseSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateActorRotation(); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.UpdateActorRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool IsInDemageRange(bool Index, struct ANOS_PlayerHuman* InputPin); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.IsInDemageRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	bool CanEffect(struct ANOS_PlayerBase* Character); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.CanEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CanDamage(struct FVector Start, struct FVector Start02, struct ACharacter* self2, bool NewParam); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.CanDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnTraceNoImpact_08F472B140CE538156DD66A987CC71C3(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnTraceNoImpact_08F472B140CE538156DD66A987CC71C3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceImpact_08F472B140CE538156DD66A987CC71C3(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnTraceImpact_08F472B140CE538156DD66A987CC71C3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_53E6684A44D4ACC48ADA308BC2BE8F85(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.EventReceived_53E6684A44D4ACC48ADA308BC2BE8F85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_53E6684A44D4ACC48ADA308BC2BE8F85(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnCancelled_53E6684A44D4ACC48ADA308BC2BE8F85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_53E6684A44D4ACC48ADA308BC2BE8F85(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnInterrupted_53E6684A44D4ACC48ADA308BC2BE8F85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_53E6684A44D4ACC48ADA308BC2BE8F85(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnBlendOut_53E6684A44D4ACC48ADA308BC2BE8F85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_53E6684A44D4ACC48ADA308BC2BE8F85(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnCompleted_53E6684A44D4ACC48ADA308BC2BE8F85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_8AEE249649A614A5FD8B039D53ACEB77(float TimeWaited); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnPress_8AEE249649A614A5FD8B039D53ACEB77 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_E7541EC843982AC88481FA84CE2AFF2E(float TimeWaited); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnPress_E7541EC843982AC88481FA84CE2AFF2E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_6538701B4CA3F0A916994D95FB784585(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.EventReceived_6538701B4CA3F0A916994D95FB784585 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_6538701B4CA3F0A916994D95FB784585(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnCancelled_6538701B4CA3F0A916994D95FB784585 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_6538701B4CA3F0A916994D95FB784585(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnInterrupted_6538701B4CA3F0A916994D95FB784585 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_6538701B4CA3F0A916994D95FB784585(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnBlendOut_6538701B4CA3F0A916994D95FB784585 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_6538701B4CA3F0A916994D95FB784585(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnCompleted_6538701B4CA3F0A916994D95FB784585 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_D28B860A4AB7B6EC9566419080DB533B(); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnSync_D28B860A4AB7B6EC9566419080DB533B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_2ACC0048403F20EBC38B8EAA3AAE002F(float TimeWaited); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.OnPress_2ACC0048403F20EBC38B8EAA3AAE002F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReadyTootherOnHold(); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.ReadyTootherOnHold // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoQian_Skill3(int32_t EntryPoint); // Function GA_XiaoQian_Skill3.GA_XiaoQian_Skill3_C.ExecuteUbergraph_GA_XiaoQian_Skill3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

