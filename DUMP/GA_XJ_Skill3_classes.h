// BlueprintGeneratedClass GA_XJ_Skill3.GA_XJ_Skill3_C
// Size: 0x4ec (Inherited: 0x490)
struct UGA_XJ_Skill3_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Config_MaxFlySpeed; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct ABP_XiaoJiang_C* BP_XiaoJiang; // 0x4a0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableNorAttack; // 0x4a8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_FlyModeAttack; // 0x4b0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_FlySpeed; // 0x4b8(0x08)
	int32_t InitedConfig; // 0x4c0(0x04)
	float Config_FlyAcceleration; // 0x4c4(0x04)
	float Config_FlyDuration; // 0x4c8(0x04)
	float Config_SkillCD; // 0x4cc(0x04)
	float Config_Level4EachAttackExtraAddDuration; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct UNOS_WaitDelay* Task_DelayEndGA; // 0x4d8(0x08)
	struct UWBP_InteractProgressUI_C* ProgressUI; // 0x4e0(0x08)
	float CurrentMaxFlyDuration; // 0x4e8(0x04)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void OnCancelled_00AEB9BA48FF8639BB49FB8B2921BFEC(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.OnCancelled_00AEB9BA48FF8639BB49FB8B2921BFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_00AEB9BA48FF8639BB49FB8B2921BFEC(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.OnInterrupted_00AEB9BA48FF8639BB49FB8B2921BFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_00AEB9BA48FF8639BB49FB8B2921BFEC(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.OnBlendOut_00AEB9BA48FF8639BB49FB8B2921BFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_00AEB9BA48FF8639BB49FB8B2921BFEC(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.OnCompleted_00AEB9BA48FF8639BB49FB8B2921BFEC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinishDelegate_9129BE0E4CC7ACD5A145EC8D7899547C(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.OnFinishDelegate_9129BE0E4CC7ACD5A145EC8D7899547C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTickDelegate_9129BE0E4CC7ACD5A145EC8D7899547C(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.OnTickDelegate_9129BE0E4CC7ACD5A145EC8D7899547C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinishDelegate_4639888A4B091449752AE9ABEBA31B5A(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.OnFinishDelegate_4639888A4B091449752AE9ABEBA31B5A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTickDelegate_4639888A4B091449752AE9ABEBA31B5A(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.OnTickDelegate_4639888A4B091449752AE9ABEBA31B5A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CE_ResetProgressUI(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.CE_ResetProgressUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_Open(); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.CE_Open // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_Skill3(int32_t EntryPoint); // Function GA_XJ_Skill3.GA_XJ_Skill3_C.ExecuteUbergraph_GA_XJ_Skill3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

