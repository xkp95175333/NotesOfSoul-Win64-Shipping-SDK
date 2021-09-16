// BlueprintGeneratedClass GA_SZKillerNorAttack.GA_SZKillerNorAttack_C
// Size: 0x5e4 (Inherited: 0x58c)
struct UGA_SZKillerNorAttack_C : UGA_Ghost_NormalAttack_New_C {
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)
	struct ANOS_PlayerGhost* As BP Shao Zi Killer; // 0x598(0x08)
	struct FTimerHandle AttackTimerHandl; // 0x5a0(0x08)
	float Cur Time Held; // 0x5a8(0x04)
	struct FActiveGameplayEffectHandle SelfHandle; // 0x5ac(0x08)
	struct FActiveGameplayEffectHandle CanGetSoulGE; // 0x5b4(0x08)
	struct FActiveGameplayEffectHandle NorAttackGEHandl; // 0x5bc(0x08)
	struct FActiveGameplayEffectHandle NewVar_1; // 0x5c4(0x08)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct ANOS_PlayerBase* TargetHumanPawn; // 0x5d0(0x08)
	float AdditionDamage; // 0x5d8(0x04)
	struct FActiveGameplayEffectHandle NormalAttAddDamageHandle; // 0x5dc(0x08)

	void CanApplyEffect(struct ANOS_PlayerBase* TargetHumanPawn1, bool bIsCan); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.CanApplyEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackBoxOffset(struct FVector Offset); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.GetAttackBoxOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackDamage(float Damage); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.GetAttackDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ParentEndAbility(bool IsInterrupted); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.ParentEndAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplyEffectTo(struct ANOS_PlayerBase* Target, bool NewParam); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.ApplyEffectTo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetAttackMontageSection(struct FName Section); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.GetAttackMontageSection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void HandleHitActor(struct AActor* Actor, int32_t Index); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.HandleHitActor // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_SZKillerNorAttack(int32_t EntryPoint); // Function GA_SZKillerNorAttack.GA_SZKillerNorAttack_C.ExecuteUbergraph_GA_SZKillerNorAttack // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

