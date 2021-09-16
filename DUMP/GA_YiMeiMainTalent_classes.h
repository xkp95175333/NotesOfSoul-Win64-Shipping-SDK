// BlueprintGeneratedClass GA_YiMeiMainTalent.GA_YiMeiMainTalent_C
// Size: 0x549 (Inherited: 0x490)
struct UGA_YiMeiMainTalent_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_YiMeiDaoZhang_C* BP_YiMeiDaoZhang; // 0x498(0x08)
	struct FName SkillKeyName; // 0x4a0(0x08)
	float energy; // 0x4a8(0x04)
	struct FActiveGameplayEffectHandle GELimitedInteraction; // 0x4ac(0x08)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UAnimMontage* GhostMontage; // 0x4b8(0x08)
	struct UNOS_PlayMontageAndWaitForEvent* Montage_FocoEnergia; // 0x4c0(0x08)
	struct UNOS_WaitBoxTarget* BoxCheckTask; // 0x4c8(0x08)
	float BoxTraceLifeTime; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct UNOS_WaitBoxTarget* Task_WaitBoxTarget; // 0x4d8(0x08)
	struct UWBP_SkillDurationProaressUI_C* UI_StorageAttackProgress; // 0x4e0(0x08)
	struct FGameplayEffectContextHandle RepelInfo; // 0x4e8(0x18)
	float Config_BaseRepelDistance; // 0x500(0x04)
	float StorageTime; // 0x504(0x04)
	float Config_MaxStorageTime; // 0x508(0x04)
	int32_t NorATKIndex; // 0x50c(0x04)
	struct UNOS_PlayMontageAndWaitForEvent* Task_NoStorge; // 0x510(0x08)
	bool HandleTargeting; // 0x518(0x01)
	char pad_519[0x3]; // 0x519(0x03)
	int32_t InitedConfig; // 0x51c(0x04)
	float Config_CD; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UAudioComponent* Sound_Storage; // 0x528(0x08)
	float Config_StorageReducePower; // 0x530(0x04)
	struct FActiveGameplayEffectHandle GEHandle_StorageReducePower; // 0x534(0x08)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct UNiagaraComponent* NS_Storage; // 0x540(0x08)
	bool StorageNSSpawned; // 0x548(0x01)

	void CheckAttackIsBlock(struct FHitResult HitRes, bool ValidAttack); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.CheckAttackIsBlock // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandlHitTarget(struct AActor* HitActor, struct FVector ImpactPoint, bool ControlSuccess); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.HandlHitTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_E143773149511A8617DCCA8B2501B961(); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnFinish_E143773149511A8617DCCA8B2501B961 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_B5D927814E0708C68F907CB09ACA55BD(float TimeHeld); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnRelease_B5D927814E0708C68F907CB09ACA55BD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_3A32078C4EFBC8BB77E7D48C769B2A7B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.EventReceived_3A32078C4EFBC8BB77E7D48C769B2A7B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_3A32078C4EFBC8BB77E7D48C769B2A7B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnCancelled_3A32078C4EFBC8BB77E7D48C769B2A7B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_3A32078C4EFBC8BB77E7D48C769B2A7B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnInterrupted_3A32078C4EFBC8BB77E7D48C769B2A7B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_3A32078C4EFBC8BB77E7D48C769B2A7B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnBlendOut_3A32078C4EFBC8BB77E7D48C769B2A7B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_3A32078C4EFBC8BB77E7D48C769B2A7B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnCompleted_3A32078C4EFBC8BB77E7D48C769B2A7B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_11E5146347CB60BA203267A9FF8E23BE(); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.Added_11E5146347CB60BA203267A9FF8E23BE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceNoTarget_5F9765DA4107B276CE4E1C8E67798388(struct FGameplayAbilityTargetDataHandle Data); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.BoxTraceNoTarget_5F9765DA4107B276CE4E1C8E67798388 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceTarget_5F9765DA4107B276CE4E1C8E67798388(struct FGameplayAbilityTargetDataHandle Data); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.BoxTraceTarget_5F9765DA4107B276CE4E1C8E67798388 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_004C19FD438A78D03BE9828B2BA2FCE7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.EventReceived_004C19FD438A78D03BE9828B2BA2FCE7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_004C19FD438A78D03BE9828B2BA2FCE7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnCancelled_004C19FD438A78D03BE9828B2BA2FCE7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_004C19FD438A78D03BE9828B2BA2FCE7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnInterrupted_004C19FD438A78D03BE9828B2BA2FCE7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_004C19FD438A78D03BE9828B2BA2FCE7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnBlendOut_004C19FD438A78D03BE9828B2BA2FCE7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_004C19FD438A78D03BE9828B2BA2FCE7(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.OnCompleted_004C19FD438A78D03BE9828B2BA2FCE7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_93CCB862416B7F81162DC5B8412865C0(struct FGameplayEventData Payload); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.EventReceived_93CCB862416B7F81162DC5B8412865C0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_22FB585A444EC769209A27B190CB7338(); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.Removed_22FB585A444EC769209A27B190CB7338 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_9EAFC37146CF30CCB437AB84CEA7F7E4(); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.Added_9EAFC37146CF30CCB437AB84CEA7F7E4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_SpawnStorageNS(struct AActor* Ava); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.Multi_SpawnStorageNS // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_DestroyStorageNS(); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.Multi_DestroyStorageNS // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_AttackCheckOnServer(); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.CE_AttackCheckOnServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_YiMeiMainTalent(int32_t EntryPoint); // Function GA_YiMeiMainTalent.GA_YiMeiMainTalent_C.ExecuteUbergraph_GA_YiMeiMainTalent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

