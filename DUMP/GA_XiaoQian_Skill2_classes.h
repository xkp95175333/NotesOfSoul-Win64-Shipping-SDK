// BlueprintGeneratedClass GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C
// Size: 0x4b9 (Inherited: 0x490)
struct UGA_XiaoQian_Skill2_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_NieXiaoQian_C* Xiao Qian; // 0x498(0x08)
	struct ABP_AimedDecal_C* DecalActor; // 0x4a0(0x08)
	struct FTimerHandle LoopTimer; // 0x4a8(0x08)
	struct FActiveGameplayEffectHandle FreezeRotationHandle; // 0x4b0(0x08)
	bool IsCommdFire; // 0x4b8(0x01)

	void EventReceived_B88D88AB40A0067FE98E9FAE204EBD53(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.EventReceived_B88D88AB40A0067FE98E9FAE204EBD53 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_B88D88AB40A0067FE98E9FAE204EBD53(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnCancelled_B88D88AB40A0067FE98E9FAE204EBD53 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_B88D88AB40A0067FE98E9FAE204EBD53(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnInterrupted_B88D88AB40A0067FE98E9FAE204EBD53 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_B88D88AB40A0067FE98E9FAE204EBD53(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnBlendOut_B88D88AB40A0067FE98E9FAE204EBD53 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_B88D88AB40A0067FE98E9FAE204EBD53(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnCompleted_B88D88AB40A0067FE98E9FAE204EBD53 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_973591994046C7C82E288EB03B03CE70(float TimeWaited); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnPress_973591994046C7C82E288EB03B03CE70 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_FB8A981E425822F46F5B56BF67F6D321(float TimeHeld); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnRelease_FB8A981E425822F46F5B56BF67F6D321 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_D3B80AC845B35177759771BA0A8C8B73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.EventReceived_D3B80AC845B35177759771BA0A8C8B73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_D3B80AC845B35177759771BA0A8C8B73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnCancelled_D3B80AC845B35177759771BA0A8C8B73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_D3B80AC845B35177759771BA0A8C8B73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnInterrupted_D3B80AC845B35177759771BA0A8C8B73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_D3B80AC845B35177759771BA0A8C8B73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnBlendOut_D3B80AC845B35177759771BA0A8C8B73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_D3B80AC845B35177759771BA0A8C8B73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnCompleted_D3B80AC845B35177759771BA0A8C8B73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceNoImpact_683BCA2A4965C50843C7A88E5185B7C4(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnTraceNoImpact_683BCA2A4965C50843C7A88E5185B7C4 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceImpact_683BCA2A4965C50843C7A88E5185B7C4(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnTraceImpact_683BCA2A4965C50843C7A88E5185B7C4 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_63CC65E34004605B5A8B2BA797BA4D11(float TimeHeld); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnRelease_63CC65E34004605B5A8B2BA797BA4D11 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_A139D5DD482E9C82A0AAF283607DD5D2(float TimeWaited); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnPress_A139D5DD482E9C82A0AAF283607DD5D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_4A1B36BC48CFCF66383505A12D9A43C2(float TimeHeld); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.OnRelease_4A1B36BC48CFCF66383505A12D9A43C2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoQian_Skill2(int32_t EntryPoint); // Function GA_XiaoQian_Skill2.GA_XiaoQian_Skill2_C.ExecuteUbergraph_GA_XiaoQian_Skill2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

