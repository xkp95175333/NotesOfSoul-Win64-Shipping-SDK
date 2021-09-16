// BlueprintGeneratedClass GA_XJ_Skill1.GA_XJ_Skill1_C
// Size: 0x51c (Inherited: 0x490)
struct UGA_XJ_Skill1_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Config_ShowDuration; // 0x498(0x04)
	float Config_ShowAngle; // 0x49c(0x04)
	float Config_SweepShadowRadius; // 0x4a0(0x04)
	int32_t InitedConfig; // 0x4a4(0x04)
	struct ABP_XiaoJiang_C* BP_ XiaoJiang; // 0x4a8(0x08)
	float Config_SkillCD; // 0x4b0(0x04)
	float Config_1Upgrade_SpeedIncreasePercentage; // 0x4b4(0x04)
	float Config_1Upgrade_SpeedIncreaseDuration; // 0x4b8(0x04)
	float Config_3Upgrade_KeepSweepDuration; // 0x4bc(0x04)
	struct FTransform ReleaseSkillOldLocation; // 0x4c0(0x30)
	struct FTimerHandle TrailLoopHandle; // 0x4f0(0x08)
	struct FTimerHandle HumanShadowLoopHandle; // 0x4f8(0x08)
	struct FGameplayEffectContextHandle Handle_GEContext; // 0x500(0x18)
	float Config_SweepTrailRadius; // 0x518(0x04)

	void OnFinish_4FD7D0634BC28732493856A6CAC7E23A(); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.OnFinish_4FD7D0634BC28732493856A6CAC7E23A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_241F03F14561B229E9D3F0ACD9A6B885(); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.OnCancelled_241F03F14561B229E9D3F0ACD9A6B885 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_241F03F14561B229E9D3F0ACD9A6B885(); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.OnInterrupted_241F03F14561B229E9D3F0ACD9A6B885 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_241F03F14561B229E9D3F0ACD9A6B885(); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.OnBlendOut_241F03F14561B229E9D3F0ACD9A6B885 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_241F03F14561B229E9D3F0ACD9A6B885(); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.OnCompleted_241F03F14561B229E9D3F0ACD9A6B885 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CE_ShowTrail(); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.CE_ShowTrail // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_Skill1(int32_t EntryPoint); // Function GA_XJ_Skill1.GA_XJ_Skill1_C.ExecuteUbergraph_GA_XJ_Skill1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

