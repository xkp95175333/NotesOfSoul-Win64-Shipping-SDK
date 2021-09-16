// BlueprintGeneratedClass GA_DefendGetHit.GA_DefendGetHit_C
// Size: 0x4c8 (Inherited: 0x490)
struct UGA_DefendGetHit_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float TriggerValue; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct UNiagaraComponent* BeHitNiagara; // 0x4a0(0x08)
	struct UAbilityTask_WaitGameplayEvent* WaitDefend; // 0x4a8(0x08)
	struct UNiagaraComponent* DefendNiagara; // 0x4b0(0x08)
	struct FRotator HitRotation; // 0x4b8(0x0c)
	float LastTime; // 0x4c4(0x04)

	void OwnerBeHit(struct FEventRelevantData EventRelevantData); // Function GA_DefendGetHit.GA_DefendGetHit_C.OwnerBeHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitParamas(); // Function GA_DefendGetHit.GA_DefendGetHit_C.InitParamas // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_E180382B424E64D0A08D00BFEC3E85E7(struct FGameplayEventData Payload); // Function GA_DefendGetHit.GA_DefendGetHit_C.EventReceived_E180382B424E64D0A08D00BFEC3E85E7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_DefendGetHit.GA_DefendGetHit_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DefendGetHit.GA_DefendGetHit_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CallDamageNiagara(struct AActor* Target); // Function GA_DefendGetHit.GA_DefendGetHit_C.CallDamageNiagara // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GenerateDefendNiagara(struct AActor* Target, float A); // Function GA_DefendGetHit.GA_DefendGetHit_C.GenerateDefendNiagara // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RegenerateDefendNiagara(struct AActor* Target, struct FGameplayEventData Poyload); // Function GA_DefendGetHit.GA_DefendGetHit_C.RegenerateDefendNiagara // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CalDuration(); // Function GA_DefendGetHit.GA_DefendGetHit_C.CalDuration // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_DefendGetHit(int32_t EntryPoint); // Function GA_DefendGetHit.GA_DefendGetHit_C.ExecuteUbergraph_GA_DefendGetHit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

