// BlueprintGeneratedClass GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C
// Size: 0x58c (Inherited: 0x490)
struct UGA_Ghost_NormalAttack_New_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerGhost* OwnerGhost; // 0x498(0x08)
	struct UAnimMontage* Montage_Ghost_NormalAttack; // 0x4a0(0x08)
	struct UNOS_WaitBoxTarget_Channel* Task_WaitBoxTargetChannel; // 0x4a8(0x08)
	float AttackCD; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct TArray<struct AActor*> HitActors; // 0x4b8(0x10)
	struct TArray<struct AActor*> OldHitActors; // 0x4c8(0x10)
	struct FGameplayAbilityTargetDataHandle Data; // 0x4d8(0x28)
	struct TArray<struct FHitResult> HitResults; // 0x500(0x10)
	struct FRandomStream RandomStream; // 0x510(0x08)
	struct TArray<struct FS_SubSoulAnim> SubSoulAnims_Front; // 0x518(0x10)
	struct TArray<struct FS_SubSoulAnim> SubSoulAnims_Back; // 0x528(0x10)
	bool bMontagePlayed; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	float AdditionalDamage; // 0x53c(0x04)
	struct TArray<struct FHitResult> DamageResults; // 0x540(0x10)
	int32_t AttackMontageIdx; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct TArray<struct FS_SubSoulAnim> BeHitAnims; // 0x558(0x10)
	struct USoundBase* HitSound; // 0x568(0x08)
	struct UNiagaraSystem* HitEffect; // 0x570(0x08)
	struct TArray<struct FRotator> HitEffectRotations; // 0x578(0x10)
	float GhostSpeed_CaDao; // 0x588(0x04)

	void GetAttackBoxOffset(struct FVector Offset); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.GetAttackBoxOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ParentEndAbility(bool IsInterrupted); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.ParentEndAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetAttackDamage(float Damage); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.GetAttackDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackRangle(struct FVector Range); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.GetAttackRangle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CalcHitResults(struct FGameplayAbilityTargetDataHandle TargetData); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.CalcHitResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetAttackMontageSection(struct FName Section); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.GetAttackMontageSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CalcHitActors(); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.CalcHitActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetIgnoreActors(struct TArray<struct AActor*> IgnoreActors); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.GetIgnoreActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_FE1791674F94B5CB2549AC90ACAE9E56(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.EventReceived_FE1791674F94B5CB2549AC90ACAE9E56 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_FE1791674F94B5CB2549AC90ACAE9E56(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.OnCancelled_FE1791674F94B5CB2549AC90ACAE9E56 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_FE1791674F94B5CB2549AC90ACAE9E56(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.OnInterrupted_FE1791674F94B5CB2549AC90ACAE9E56 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_FE1791674F94B5CB2549AC90ACAE9E56(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.OnBlendOut_FE1791674F94B5CB2549AC90ACAE9E56 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_FE1791674F94B5CB2549AC90ACAE9E56(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.OnCompleted_FE1791674F94B5CB2549AC90ACAE9E56 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceNoTarget_1BA1A0E74AC1522AC31116847212728E(struct FGameplayAbilityTargetDataHandle Data); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.BoxTraceNoTarget_1BA1A0E74AC1522AC31116847212728E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceTarget_1BA1A0E74AC1522AC31116847212728E(struct FGameplayAbilityTargetDataHandle Data); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.BoxTraceTarget_1BA1A0E74AC1522AC31116847212728E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_AF6AB82847B0492B21CC03861750D578(); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.OnFinish_AF6AB82847B0492B21CC03861750D578 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void HandleHitActor(struct AActor* Actor, int32_t Index); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.HandleHitActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AttackTrace(); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.AttackTrace // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Ghost_NormalAttack_New(int32_t EntryPoint); // Function GA_Ghost_NormalAttack_New.GA_Ghost_NormalAttack_New_C.ExecuteUbergraph_GA_Ghost_NormalAttack_New // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

