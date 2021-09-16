// BlueprintGeneratedClass GA_25Boy_Attack.GA_25Boy_Attack_C
// Size: 0x538 (Inherited: 0x490)
struct UGA_25Boy_Attack_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* 25Boy; // 0x498(0x08)
	struct UAnimMontage* Montage_Ghost_NormalAttack; // 0x4a0(0x08)
	struct FVector BoxOffset; // 0x4a8(0x0c)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UNOS_WaitBoxTarget_Channel* Task_WaitBoxTargetChannel; // 0x4b8(0x08)
	float AttackCD; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct AActor* HitActor; // 0x4c8(0x08)
	struct FGameplayAbilityTargetDataHandle Data; // 0x4d0(0x28)
	struct TArray<struct FHitResult> HitResults; // 0x4f8(0x10)
	struct FRandomStream RandomStream; // 0x508(0x08)
	struct TArray<struct FS_SubSoulAnim> SubSoulAnims_Front; // 0x510(0x10)
	struct TArray<struct FS_SubSoulAnim> SubSoulAnims_Back; // 0x520(0x10)
	bool bMontagePlayed; // 0x530(0x01)
	char pad_531[0x3]; // 0x531(0x03)
	float AdditionalDamage; // 0x534(0x04)

	void GetAttackDamage(float Damage); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.GetAttackDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackRangle(struct FVector Range); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.GetAttackRangle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CalcHitResults(struct FGameplayAbilityTargetDataHandle TargetData); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.CalcHitResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetAttackMontageSection(struct FName Section); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.GetAttackMontageSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CalcHitActor(); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.CalcHitActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetIgnoreActors(struct TArray<struct AActor*> IgnoreActors); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.GetIgnoreActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_10DA6CC447847E5DA68D979614B85A73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.EventReceived_10DA6CC447847E5DA68D979614B85A73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_10DA6CC447847E5DA68D979614B85A73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.OnCancelled_10DA6CC447847E5DA68D979614B85A73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_10DA6CC447847E5DA68D979614B85A73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.OnInterrupted_10DA6CC447847E5DA68D979614B85A73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_10DA6CC447847E5DA68D979614B85A73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.OnBlendOut_10DA6CC447847E5DA68D979614B85A73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_10DA6CC447847E5DA68D979614B85A73(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.OnCompleted_10DA6CC447847E5DA68D979614B85A73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_FC92E4E74EF34E982046469DA274CDC3(); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.OnSync_FC92E4E74EF34E982046469DA274CDC3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_F1285D234579DB3869225791680F8067(); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.OnSync_F1285D234579DB3869225791680F8067 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceNoTarget_A1D56C634866C258692F7396224D283C(struct FGameplayAbilityTargetDataHandle Data); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.BoxTraceNoTarget_A1D56C634866C258692F7396224D283C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceTarget_A1D56C634866C258692F7396224D283C(struct FGameplayAbilityTargetDataHandle Data); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.BoxTraceTarget_A1D56C634866C258692F7396224D283C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_8DA476364035B2BF055E64946289E6FD(); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.OnFinish_8DA476364035B2BF055E64946289E6FD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void HandleHitActor(); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.HandleHitActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AttackTrace(); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.AttackTrace // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_25Boy_Attack(int32_t EntryPoint); // Function GA_25Boy_Attack.GA_25Boy_Attack_C.ExecuteUbergraph_GA_25Boy_Attack // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

