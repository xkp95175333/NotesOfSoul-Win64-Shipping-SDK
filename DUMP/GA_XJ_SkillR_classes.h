// BlueprintGeneratedClass GA_XJ_SkillR.GA_XJ_SkillR_C
// Size: 0x571 (Inherited: 0x490)
struct UGA_XJ_SkillR_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Config_ArenaLength; // 0x498(0x04)
	float Config_ArenaWidth; // 0x49c(0x04)
	float RSkillLevelHeightPoint; // 0x4a0(0x04)
	float RSkillLevelLowPoint; // 0x4a4(0x04)
	struct FVector RandomBoxCenter; // 0x4a8(0x0c)
	float Config_RSkillDuration; // 0x4b4(0x04)
	int32_t CountSmallZombieSpawn; // 0x4b8(0x04)
	int32_t Config_TotalSpawnSmallZombieNum; // 0x4bc(0x04)
	struct FTimerHandle TimerHandle_Spawn; // 0x4c0(0x08)
	struct FRandomStream RandomStream; // 0x4c8(0x08)
	int32_t InitedConfig; // 0x4d0(0x04)
	float Config_HugSlowDownPercentage; // 0x4d4(0x04)
	float Config_FallingSpeed; // 0x4d8(0x04)
	float Config_HugSlowDownDuration; // 0x4dc(0x04)
	float Config_SkillCD; // 0x4e0(0x04)
	int32_t Config_BigZombiNum; // 0x4e4(0x04)
	float Config_FallDownDuration; // 0x4e8(0x04)
	float Config_BigZombiFallingInterval; // 0x4ec(0x04)
	int32_t CountBigZombieSpawn; // 0x4f0(0x04)
	struct FActiveGameplayEffectHandle GEHandle_MontageLimit; // 0x4f4(0x08)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct ANOS_XiaoJiang_TerritoryBox* TerritoryBox; // 0x500(0x08)
	struct FVector TerritoryBox-ForwardLeftPoint; // 0x508(0x0c)
	struct FVector TerritoryBox-ForwardRightPoint; // 0x514(0x0c)
	struct FVector TerritoryBox-NearLeftPoint; // 0x520(0x0c)
	struct FVector TerritoryBox-NearRightPoint; // 0x52c(0x0c)
	char pad_538[0x8]; // 0x538(0x08)
	struct FTransform ReleaseTransform; // 0x540(0x30)
	bool HaveFollowR; // 0x570(0x01)

	void GetBoxCenter(struct FVector CalcCenter); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.GetBoxCenter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Func_RandomGenerateSpawnLoc(struct FVector RandomVector); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.Func_RandomGenerateSpawnLoc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get4Point(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.Get4Point // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_0FC2F20F41D322E88F6E06B696F7F173(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.OnCancelled_0FC2F20F41D322E88F6E06B696F7F173 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_0FC2F20F41D322E88F6E06B696F7F173(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.OnInterrupted_0FC2F20F41D322E88F6E06B696F7F173 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_0FC2F20F41D322E88F6E06B696F7F173(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.OnBlendOut_0FC2F20F41D322E88F6E06B696F7F173 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_0FC2F20F41D322E88F6E06B696F7F173(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.OnCompleted_0FC2F20F41D322E88F6E06B696F7F173 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_9C9487E3483918D581C62990C46BF1B6(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.OnSync_9C9487E3483918D581C62990C46BF1B6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_Init(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.CE_Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void LoopSpawn(); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.LoopSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_SkillR(int32_t EntryPoint); // Function GA_XJ_SkillR.GA_XJ_SkillR_C.ExecuteUbergraph_GA_XJ_SkillR // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

