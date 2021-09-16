// BlueprintGeneratedClass GA_TrueLoveKnot.GA_TrueLoveKnot_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_TrueLoveKnot_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FVector VectorOffset; // 0x498(0x0c)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct UNOS_WaitTraceTarget* Async Task; // 0x4a8(0x08)
	struct ABP_PlayerHumanBase_C* As BP Player Human Base; // 0x4b0(0x08)
	struct ABP_PlayerHumanBase_C* OwneActor; // 0x4b8(0x08)

	void TraceNoTarget_222D02F34BA074A539F5B489B1A5F2E4(struct FGameplayAbilityTargetDataHandle Data); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.TraceNoTarget_222D02F34BA074A539F5B489B1A5F2E4 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TraceFoundTarget_222D02F34BA074A539F5B489B1A5F2E4(struct FGameplayAbilityTargetDataHandle Data); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.TraceFoundTarget_222D02F34BA074A539F5B489B1A5F2E4 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_543EC923402185FE1534C0BA0C077D47(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.EventReceived_543EC923402185FE1534C0BA0C077D47 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_543EC923402185FE1534C0BA0C077D47(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.OnCancelled_543EC923402185FE1534C0BA0C077D47 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_543EC923402185FE1534C0BA0C077D47(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.OnInterrupted_543EC923402185FE1534C0BA0C077D47 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_543EC923402185FE1534C0BA0C077D47(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.OnBlendOut_543EC923402185FE1534C0BA0C077D47 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_543EC923402185FE1534C0BA0C077D47(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.OnCompleted_543EC923402185FE1534C0BA0C077D47 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_03CD5CD94373BCF7AF7E6EA45BFF3B78(float TimeWaited); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.OnPress_03CD5CD94373BCF7AF7E6EA45BFF3B78 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_2BB0FDD142F165EFCC77929F3E5E08B0(float TimeWaited); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.OnPress_2BB0FDD142F165EFCC77929F3E5E08B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_F95A32FA477764AE842829A21A0295A1(float TimeHeld); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.OnRelease_F95A32FA477764AE842829A21A0295A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_TrueLoveKnot(int32_t EntryPoint); // Function GA_TrueLoveKnot.GA_TrueLoveKnot_C.ExecuteUbergraph_GA_TrueLoveKnot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

