// BlueprintGeneratedClass GA_Dead.GA_Dead_C
// Size: 0x4b8 (Inherited: 0x490)
struct UGA_Dead_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* Character; // 0x498(0x08)
	struct FActiveGameplayEffectHandle InteractingGEHandle; // 0x4a0(0x08)
	struct AActor* Event Instigator; // 0x4a8(0x08)
	struct UObject* GhostMontage; // 0x4b0(0x08)

	void GetHumanShiHunMontage(struct UAnimMontage* HumanMontage); // Function GA_Dead.GA_Dead_C.GetHumanShiHunMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ThrowAllItem(); // Function GA_Dead.GA_Dead_C.ThrowAllItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_8F31684840F8EAC1DA209C816966A5B0(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dead.GA_Dead_C.EventReceived_8F31684840F8EAC1DA209C816966A5B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_8F31684840F8EAC1DA209C816966A5B0(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dead.GA_Dead_C.OnCancelled_8F31684840F8EAC1DA209C816966A5B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_8F31684840F8EAC1DA209C816966A5B0(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dead.GA_Dead_C.OnInterrupted_8F31684840F8EAC1DA209C816966A5B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_8F31684840F8EAC1DA209C816966A5B0(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dead.GA_Dead_C.OnBlendOut_8F31684840F8EAC1DA209C816966A5B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_8F31684840F8EAC1DA209C816966A5B0(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Dead.GA_Dead_C.OnCompleted_8F31684840F8EAC1DA209C816966A5B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_E368E12049380AAFC3CD2F8467CC1D4A(); // Function GA_Dead.GA_Dead_C.OnFinish_E368E12049380AAFC3CD2F8467CC1D4A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOutAndDestinationReached_A8D78E8C4CD60393DEF9D5BE58BBF3D0(); // Function GA_Dead.GA_Dead_C.OnTimedOutAndDestinationReached_A8D78E8C4CD60393DEF9D5BE58BBF3D0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOut_A8D78E8C4CD60393DEF9D5BE58BBF3D0(); // Function GA_Dead.GA_Dead_C.OnTimedOut_A8D78E8C4CD60393DEF9D5BE58BBF3D0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Dead.GA_Dead_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Dead.GA_Dead_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void SetStencilValue_Mul(struct UObject* Object, int32_t Value); // Function GA_Dead.GA_Dead_C.SetStencilValue_Mul // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Dead(int32_t EntryPoint); // Function GA_Dead.GA_Dead_C.ExecuteUbergraph_GA_Dead // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

