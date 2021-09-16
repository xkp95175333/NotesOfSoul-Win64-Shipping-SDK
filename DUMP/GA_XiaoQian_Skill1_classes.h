// BlueprintGeneratedClass GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C
// Size: 0x4f8 (Inherited: 0x490)
struct UGA_XiaoQian_Skill1_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_NieXiaoQian_C* Xiao Qian; // 0x498(0x08)
	struct FVector HitLocation; // 0x4a0(0x0c)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct ABP_XQ_GhsotLamp_C* GhostLampActor; // 0x4b0(0x08)
	bool Bool IsOnFly; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	float CoolDownSecond; // 0x4bc(0x04)
	enum class ESKillState Current Skill State; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	float Skill01_ApplyRange; // 0x4c4(0x04)
	float LinkFlySpeed; // 0x4c8(0x04)
	float Skill01FlySpeed; // 0x4cc(0x04)
	bool isHit; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UNOS_PlayMontageAndWaitForEvent* MontageTask; // 0x4d8(0x08)
	bool CanHit; // 0x4e0(0x01)
	bool NewVar_1; // 0x4e1(0x01)
	char pad_4E2[0x6]; // 0x4e2(0x06)
	struct UAbilityTask_ApplyRootMotionMoveToForce* MoveTask; // 0x4e8(0x08)
	struct UAbilityTask_WaitDelay* LinkFlyWaitDely; // 0x4f0(0x08)

	void HumanLoseSoul(struct ANOS_PlayerHuman* Target, int32_t RemoveNum); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.HumanLoseSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSoul(struct FHitResult HitResult); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.GetSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Collision(bool Index); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.Collision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSkillData(bool CanActive); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.InitSkillData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplyEffectToHumanIfHuman(struct UObject* Object); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.ApplyEffectToHumanIfHuman // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector GetTraceLocation(float Distance, struct APawn* Target, struct FVector out_Location, struct TArray<struct AActor*> LgnoreActor); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.GetTraceLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void EventReceived_58D293794041AF51E35C86866AD59E36(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.EventReceived_58D293794041AF51E35C86866AD59E36 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_58D293794041AF51E35C86866AD59E36(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnCancelled_58D293794041AF51E35C86866AD59E36 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_58D293794041AF51E35C86866AD59E36(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnInterrupted_58D293794041AF51E35C86866AD59E36 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_58D293794041AF51E35C86866AD59E36(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnBlendOut_58D293794041AF51E35C86866AD59E36 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_58D293794041AF51E35C86866AD59E36(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnCompleted_58D293794041AF51E35C86866AD59E36 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_079503D842CB83BC1CFE04937029286F(float TimeWaited); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnPress_079503D842CB83BC1CFE04937029286F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_EB4F7DDD406973048C9790A736A7F33F(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnSync_EB4F7DDD406973048C9790A736A7F33F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_390237654BDE634C88EE5EBEBDD27785(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnSync_390237654BDE634C88EE5EBEBDD27785 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOutAndDestinationReached_BE66F9BB4474895DF3536985BB6B983F(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnTimedOutAndDestinationReached_BE66F9BB4474895DF3536985BB6B983F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOut_BE66F9BB4474895DF3536985BB6B983F(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnTimedOut_BE66F9BB4474895DF3536985BB6B983F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_428D83024054C9FCC96680A7513318F3(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnFinish_428D83024054C9FCC96680A7513318F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_4454A8024DEC2C9CF34DD1AB4396F06D(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnFinish_4454A8024DEC2C9CF34DD1AB4396F06D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_619D5AF94CC1AA5A1E41DE91753F1EDC(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnFinish_619D5AF94CC1AA5A1E41DE91753F1EDC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnSoulLinkHit(struct FHitResult HitResult); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.OnSoulLinkHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(struct FHitResult HitResult); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoQian_Skill1(int32_t EntryPoint); // Function GA_XiaoQian_Skill1.GA_XiaoQian_Skill1_C.ExecuteUbergraph_GA_XiaoQian_Skill1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

