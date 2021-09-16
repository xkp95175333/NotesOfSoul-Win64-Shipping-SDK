// BlueprintGeneratedClass GA_ShaoziSkill02.GA_ShaoziSkill02_C
// Size: 0x4b5 (Inherited: 0x490)
struct UGA_ShaoziSkill02_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerBase* OwnerPawn; // 0x498(0x08)
	struct ANOS_PlayerHuman* FindHumanPawn; // 0x4a0(0x08)
	struct FVector Location; // 0x4a8(0x0c)
	bool IsNotFind; // 0x4b4(0x01)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void RandomFindHumanPosition(struct ANOS_PlayerHuman* FindHumanPawn); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.RandomFindHumanPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_F37D13C64664C29FA9BFDD97FDE9A09A(); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.OnSync_F37D13C64664C29FA9BFDD97FDE9A09A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_03C9B56D48314F3EB0F0C5826F27AC8F(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.EventReceived_03C9B56D48314F3EB0F0C5826F27AC8F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_03C9B56D48314F3EB0F0C5826F27AC8F(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.OnCancelled_03C9B56D48314F3EB0F0C5826F27AC8F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_03C9B56D48314F3EB0F0C5826F27AC8F(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.OnInterrupted_03C9B56D48314F3EB0F0C5826F27AC8F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_03C9B56D48314F3EB0F0C5826F27AC8F(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.OnBlendOut_03C9B56D48314F3EB0F0C5826F27AC8F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_03C9B56D48314F3EB0F0C5826F27AC8F(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.OnCompleted_03C9B56D48314F3EB0F0C5826F27AC8F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ShaoziSkill02(int32_t EntryPoint); // Function GA_ShaoziSkill02.GA_ShaoziSkill02_C.ExecuteUbergraph_GA_ShaoziSkill02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

