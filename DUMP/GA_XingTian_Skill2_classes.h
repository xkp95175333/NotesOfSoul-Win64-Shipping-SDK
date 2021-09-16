// BlueprintGeneratedClass GA_XingTian_Skill2.GA_XingTian_Skill2_C
// Size: 0x528 (Inherited: 0x490)
struct UGA_XingTian_Skill2_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XingTian_C* XingTian; // 0x498(0x08)
	int32_t LevelIndex; // 0x4a0(0x04)
	float CDTime; // 0x4a4(0x04)
	float Duration; // 0x4a8(0x04)
	float Angle; // 0x4ac(0x04)
	float Radius; // 0x4b0(0x04)
	float HeightRange; // 0x4b4(0x04)
	float HumanSpeed; // 0x4b8(0x04)
	float ShieldSpeed; // 0x4bc(0x04)
	float Roar_Radius; // 0x4c0(0x04)
	float Roar_SpeedReduce; // 0x4c4(0x04)
	float Roar_Duration; // 0x4c8(0x04)
	float Ultimate_Roar_FreezeMoveTime; // 0x4cc(0x04)
	struct ANOS_PlayerBase* Human; // 0x4d0(0x08)
	struct UAnimMontage* Montage_Suck; // 0x4d8(0x08)
	struct UNOS_PlayMontageAndWaitForEvent* Task_PlayMontage_SuckBegin; // 0x4e0(0x08)
	struct UAbilityTask_WaitInputPress* Task_WaitPressEndSuck; // 0x4e8(0x08)
	struct UAbilityTask_WaitDelay* Task_WaitDelayEndSuck; // 0x4f0(0x08)
	struct TArray<struct ANOS_PlayerBase*> AllHumans; // 0x4f8(0x10)
	struct ABP_XingTian_Shield_C* Shield; // 0x508(0x08)
	struct FTimerHandle TimerHandle_CheckHumanSuck; // 0x510(0x08)
	struct TArray<struct ANOS_PlayerBase*> Humen; // 0x518(0x10)

	void SetSkillUIVFX(int32_t Index, bool IsShow); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.SetSkillUIVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetShield(float Radius, struct ABP_XingTian_Shield_C* Shield); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.GetShield // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetTargetPlayers(float Radius, struct TArray<struct ANOS_PlayerBase*> Humen); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.GetTargetPlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_67B457D94C4C72C52A969FB71DC95E26(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.EventReceived_67B457D94C4C72C52A969FB71DC95E26 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_67B457D94C4C72C52A969FB71DC95E26(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnCancelled_67B457D94C4C72C52A969FB71DC95E26 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_67B457D94C4C72C52A969FB71DC95E26(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnInterrupted_67B457D94C4C72C52A969FB71DC95E26 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_67B457D94C4C72C52A969FB71DC95E26(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnBlendOut_67B457D94C4C72C52A969FB71DC95E26 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_67B457D94C4C72C52A969FB71DC95E26(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnCompleted_67B457D94C4C72C52A969FB71DC95E26 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_1B2AA81E4D805129E2C53CAB92C7A8C9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.EventReceived_1B2AA81E4D805129E2C53CAB92C7A8C9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_1B2AA81E4D805129E2C53CAB92C7A8C9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnCancelled_1B2AA81E4D805129E2C53CAB92C7A8C9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_1B2AA81E4D805129E2C53CAB92C7A8C9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnInterrupted_1B2AA81E4D805129E2C53CAB92C7A8C9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_1B2AA81E4D805129E2C53CAB92C7A8C9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnBlendOut_1B2AA81E4D805129E2C53CAB92C7A8C9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_1B2AA81E4D805129E2C53CAB92C7A8C9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnCompleted_1B2AA81E4D805129E2C53CAB92C7A8C9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_18781E974B704A2A58DC9C84859CF935(float TimeWaited); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnPress_18781E974B704A2A58DC9C84859CF935 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_C17996B247FDF80247EB9EAB219E3444(); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.OnFinish_C17996B247FDF80247EB9EAB219E3444 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SuckHumans(); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.SuckHumans // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndSuck(); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.EndSuck // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Roar(); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.Roar // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndHumanBeSuck(); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.EndHumanBeSuck // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SuckShield(); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.SuckShield // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckHumanSuck(); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.CheckHumanSuck // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XingTian_Skill2(int32_t EntryPoint); // Function GA_XingTian_Skill2.GA_XingTian_Skill2_C.ExecuteUbergraph_GA_XingTian_Skill2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

