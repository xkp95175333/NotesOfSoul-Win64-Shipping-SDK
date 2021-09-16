// BlueprintGeneratedClass GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C
// Size: 0x591 (Inherited: 0x490)
struct UGA_XiaoPi_Skill2_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UAnimMontage* GetHitMontage; // 0x498(0x08)
	bool bAttackDoor; // 0x4a0(0x01)
	bool PauseCheckDoor; // 0x4a1(0x01)
	char pad_4A2[0x6]; // 0x4a2(0x06)
	struct UAnimMontage* Montage_Skill2Begin; // 0x4a8(0x08)
	struct UAnimMontage* Montage_HumanBeHit_Man; // 0x4b0(0x08)
	struct ABP_XiaoPi_C* xiaopi; // 0x4b8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4c0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_Skill2; // 0x4c8(0x08)
	float SkillRemainTime; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct UNOS_WaitDelay* DelayTask_EndSkill; // 0x4d8(0x08)
	struct UWBP_InteractProgressUI_C* ProgressUI; // 0x4e0(0x08)
	struct UNOS_WaitBoxTarget* BoxTask_Attack; // 0x4e8(0x08)
	float AttackTimerPeriod; // 0x4f0(0x04)
	bool PauseCheckScene; // 0x4f4(0x01)
	bool PauseCheckHuman; // 0x4f5(0x01)
	char pad_4F6[0x2]; // 0x4f6(0x02)
	float Duration; // 0x4f8(0x04)
	float CDTime; // 0x4fc(0x04)
	float MoveSpeed; // 0x500(0x04)
	float HumanDamage; // 0x504(0x04)
	float AttackDoorInterval; // 0x508(0x04)
	float SceneDamagePerSecond; // 0x50c(0x04)
	float HitHumanAddDuration; // 0x510(0x04)
	int32_t AbilityLevel; // 0x514(0x04)
	struct UAnimMontage* Montage_HumanBeHit_Woman; // 0x518(0x08)
	struct UAnimMontage* Montage_Skill2End; // 0x520(0x08)
	bool bTimerPaused; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct FGameplayTagContainer PauseTimerTags; // 0x530(0x20)
	struct UNOS_WaitDelay* DelayTask_CheckTimerPause; // 0x550(0x08)
	struct UNOS_WaitBoxTarget_Channel* BoxTask_CheckAttack; // 0x558(0x08)
	bool bHumanAttacked; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct UNOS_WaitBoxTarget* Task_CheckAttack; // 0x568(0x08)
	bool bIsEnd; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct TArray<struct AActor*> ActorsHitted; // 0x578(0x10)
	struct ABP_PlayerHumanBase_C* HumanHitted; // 0x588(0x08)
	bool bHasGainSoul; // 0x590(0x01)

	void IsCapsuleInCollision(bool InCollision); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.IsCapsuleInCollision // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackRange(struct FVector Range); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.GetAttackRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CanAttackHuman(struct ABP_PlayerHumanBase_C* Human, bool bCanAttack); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.CanAttackHuman // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ResumeTimer(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.ResumeTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PauseTimer(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.PauseTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearMoveState(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.ClearMoveState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChgRemainTime(float AddTime); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.ChgRemainTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetAttackIgnoreActors(struct TArray<struct AActor*> Actors); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.GetAttackIgnoreActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CreateReduceProgressUI(float Time); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.CreateReduceProgressUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_CB80DEF04AECF395AA3A7C9ADC6C7B3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.EventReceived_CB80DEF04AECF395AA3A7C9ADC6C7B3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_CB80DEF04AECF395AA3A7C9ADC6C7B3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnCancelled_CB80DEF04AECF395AA3A7C9ADC6C7B3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_CB80DEF04AECF395AA3A7C9ADC6C7B3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnInterrupted_CB80DEF04AECF395AA3A7C9ADC6C7B3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_CB80DEF04AECF395AA3A7C9ADC6C7B3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnBlendOut_CB80DEF04AECF395AA3A7C9ADC6C7B3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_CB80DEF04AECF395AA3A7C9ADC6C7B3B(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnCompleted_CB80DEF04AECF395AA3A7C9ADC6C7B3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_3C958BD6419DE08CB282379BD154E8A0(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnSync_3C958BD6419DE08CB282379BD154E8A0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_A098EBE24AA0CDF0F1C53C8DBAF1DDDB(float TimeWaited); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnPress_A098EBE24AA0CDF0F1C53C8DBAF1DDDB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinishDelegate_9B58C8D740A5D3B666ED6EBA297568A0(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnFinishDelegate_9B58C8D740A5D3B666ED6EBA297568A0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTickDelegate_9B58C8D740A5D3B666ED6EBA297568A0(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnTickDelegate_9B58C8D740A5D3B666ED6EBA297568A0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_7E52F5AA41D0083B03E758A686C67E15(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.EventReceived_7E52F5AA41D0083B03E758A686C67E15 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_7E52F5AA41D0083B03E758A686C67E15(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnCancelled_7E52F5AA41D0083B03E758A686C67E15 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_7E52F5AA41D0083B03E758A686C67E15(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnInterrupted_7E52F5AA41D0083B03E758A686C67E15 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_7E52F5AA41D0083B03E758A686C67E15(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnBlendOut_7E52F5AA41D0083B03E758A686C67E15 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_7E52F5AA41D0083B03E758A686C67E15(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnCompleted_7E52F5AA41D0083B03E758A686C67E15 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinishDelegate_67E25CCD40FC2358C8023C9B965C2CB2(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnFinishDelegate_67E25CCD40FC2358C8023C9B965C2CB2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTickDelegate_67E25CCD40FC2358C8023C9B965C2CB2(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnTickDelegate_67E25CCD40FC2358C8023C9B965C2CB2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceNoTarget_00065499474E4C032298A9862B6411C8(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.BoxTraceNoTarget_00065499474E4C032298A9862B6411C8 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceTarget_00065499474E4C032298A9862B6411C8(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.BoxTraceTarget_00065499474E4C032298A9862B6411C8 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_BE3D7E274BB727B6C3EB72ADCB47C3C3(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.OnSync_BE3D7E274BB727B6C3EB72ADCB47C3C3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BeginMove(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.BeginMove // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetRemainTime(float RemainTime); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.SetRemainTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckAttack(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.CheckAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NormalEndAbility(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.NormalEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckTimerPause(); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.CheckTimerPause // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChgRemainTime_Client(float AddTime); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.ChgRemainTime_Client // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChgRemainTime_All(float AddTime); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.ChgRemainTime_All // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoPi_Skill2(int32_t EntryPoint); // Function GA_XiaoPi_Skill2.GA_XiaoPi_Skill2_C.ExecuteUbergraph_GA_XiaoPi_Skill2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

