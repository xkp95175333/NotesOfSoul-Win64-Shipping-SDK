// BlueprintGeneratedClass GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C
// Size: 0x51c (Inherited: 0x490)
struct UGA_XiaoLi_Skill3_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoLi_C* xiaoli; // 0x498(0x08)
	struct TArray<struct AActor*> IgnoreActors; // 0x4a0(0x10)
	struct TArray<struct AActor*> TriggerBoxes; // 0x4b0(0x10)
	struct UAbilityTask_WaitGameplayTagAdded* TaskDisable; // 0x4c0(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* TaskStealth; // 0x4c8(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* TaskCrouch; // 0x4d0(0x08)
	struct UNOS_InputPress* TaskLMB; // 0x4d8(0x08)
	struct UAbilityTask_WaitInputPress* TaskInput; // 0x4e0(0x08)
	struct FActiveGameplayEffectHandle HandleStateGE; // 0x4e8(0x08)
	struct FActiveGameplayEffectHandle HandleMovementGE; // 0x4f0(0x08)
	int32_t AbilityLevel; // 0x4f8(0x04)
	float SoulCost; // 0x4fc(0x04)
	float ProjectileRadius; // 0x500(0x04)
	float MaxTolerableSlope; // 0x504(0x04)
	float LaunchVelocityLength; // 0x508(0x04)
	float CDTime; // 0x50c(0x04)
	float Ultimate_BoxX; // 0x510(0x04)
	float Ultimate_BoxY; // 0x514(0x04)
	float Ultimate_Angle; // 0x518(0x04)

	void SetSkillUIVFX(int32_t Index, bool IsShow); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.SetSkillUIVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearTriggerBoxes(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.ClearTriggerBoxes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteSkillCost(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.ExecuteSkillCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetIgnoreActors(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.GetIgnoreActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckCanTeleportNoCost(struct FVector Location, bool IsTeleportNoCost); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.CheckCanTeleportNoCost // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetProperties(struct TArray<float> Properties, struct TArray<float> Ultimate); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.GetProperties // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_E2AA7C194C290A61C10325BB366AE9D7(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.Added_E2AA7C194C290A61C10325BB366AE9D7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_B7040A6F47B494228D2860B20B22BB50(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.Added_B7040A6F47B494228D2860B20B22BB50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_97B5A28248E2855110E11996A7CD6D51(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.Added_97B5A28248E2855110E11996A7CD6D51 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_619094E743A3912B4D74E3BC3951B996(float TimeWaited); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnPress_619094E743A3912B4D74E3BC3951B996 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_67C607184BC9B37E88F7139E855DDCD8(float TimeWaited); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnPress_67C607184BC9B37E88F7139E855DDCD8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cancelled_1FBB6237488B7A6F577A0F98F25B316C(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.Cancelled_1FBB6237488B7A6F577A0F98F25B316C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ValidData_1FBB6237488B7A6F577A0F98F25B316C(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.ValidData_1FBB6237488B7A6F577A0F98F25B316C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_EB89F1F543921712A7A0598209026AC9(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnSync_EB89F1F543921712A7A0598209026AC9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_D86C39B949A549F55C79A4878251A2A9(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnSync_D86C39B949A549F55C79A4878251A2A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_B511C4C4450EB6D6CBE680886AF11EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.EventReceived_B511C4C4450EB6D6CBE680886AF11EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_B511C4C4450EB6D6CBE680886AF11EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnCancelled_B511C4C4450EB6D6CBE680886AF11EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_B511C4C4450EB6D6CBE680886AF11EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnInterrupted_B511C4C4450EB6D6CBE680886AF11EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_B511C4C4450EB6D6CBE680886AF11EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnBlendOut_B511C4C4450EB6D6CBE680886AF11EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_B511C4C4450EB6D6CBE680886AF11EB1(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnCompleted_B511C4C4450EB6D6CBE680886AF11EB1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_D73102564F2EE184695233A20C90F2B9(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnSync_D73102564F2EE184695233A20C90F2B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_2A3C7C484DD54E15EFA813BF0C7834F4(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.OnSync_2A3C7C484DD54E15EFA813BF0C7834F4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DidNotSpawn_83B068B5408033A8C476DA9AB53847A2(struct AActor* SpawnedActor); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.DidNotSpawn_83B068B5408033A8C476DA9AB53847A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Success_83B068B5408033A8C476DA9AB53847A2(struct AActor* SpawnedActor); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.Success_83B068B5408033A8C476DA9AB53847A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoLi_Skill3(int32_t EntryPoint); // Function GA_XiaoLi_Skill3.GA_XiaoLi_Skill3_C.ExecuteUbergraph_GA_XiaoLi_Skill3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

