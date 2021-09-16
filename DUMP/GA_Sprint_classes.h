// BlueprintGeneratedClass GA_Sprint.GA_Sprint_C
// Size: 0x4c9 (Inherited: 0x490)
struct UGA_Sprint_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float FallingStartTime; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct TArray<struct UAbilityTask*> SprintTasks; // 0x4a0(0x10)
	struct TArray<struct AActor*> TraceIgnoreActors; // 0x4b0(0x10)
	struct FActiveGameplayEffectHandle GE_Sprint; // 0x4c0(0x08)
	bool bWait; // 0x4c8(0x01)

	bool CheckCostForUI(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Sprint.GA_Sprint_C.CheckCostForUI // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void SetTraceIgnoreActors(); // Function GA_Sprint.GA_Sprint_C.SetTraceIgnoreActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetOwnerDirection(float Direction); // Function GA_Sprint.GA_Sprint_C.GetOwnerDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetOwnerMovement(struct UNOS_MovementComponent* Movement); // Function GA_Sprint.GA_Sprint_C.GetOwnerMovement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetSprintCost(float PowerExpend); // Function GA_Sprint.GA_Sprint_C.GetSprintCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Added_FCD4F72A4AE1E3772B61299CD737F1E8(); // Function GA_Sprint.GA_Sprint_C.Added_FCD4F72A4AE1E3772B61299CD737F1E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnVelocityLess_C2EA79234D7BCAAFAFE264A220D66453(); // Function GA_Sprint.GA_Sprint_C.OnVelocityLess_C2EA79234D7BCAAFAFE264A220D66453 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_F6DDEE854CB63419EE838AAAFC3AF72A(float TimeHeld); // Function GA_Sprint.GA_Sprint_C.OnRelease_F6DDEE854CB63419EE838AAAFC3AF72A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_233AA9EA4A6D435853E5D28261D18E60(); // Function GA_Sprint.GA_Sprint_C.OnFinish_233AA9EA4A6D435853E5D28261D18E60 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChange_314B69324DC14A44EE78869172FC11D5(bool bMatchesComparison, float CurrentRatio); // Function GA_Sprint.GA_Sprint_C.OnChange_314B69324DC14A44EE78869172FC11D5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Sprint(int32_t EntryPoint); // Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

