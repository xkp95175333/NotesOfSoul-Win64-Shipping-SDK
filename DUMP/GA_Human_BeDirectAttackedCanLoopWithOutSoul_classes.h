// BlueprintGeneratedClass GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C
// Size: 0x4fa (Inherited: 0x490)
struct UGA_Human_BeDirectAttackedCanLoopWithOutSoul_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* OwnerHuman; // 0x498(0x08)
	struct ANOS_PlayerGhost* AttackerGhost; // 0x4a0(0x08)
	float AttackDamage; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct UAnimMontage* BeHitMontage_Man; // 0x4b0(0x08)
	struct UAnimMontage* BeHitMontage_Woman; // 0x4b8(0x08)
	bool bHumanSubSoul; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	struct FActiveGameplayEffectHandle GEHandle_BeAttacked; // 0x4c4(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4cc(0x08)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct FGameplayTagContainer Instigator Tags; // 0x4d8(0x20)
	bool bPlayHitAnim; // 0x4f8(0x01)
	bool bGhostBeHit; // 0x4f9(0x01)

	void ApplyBeAttackedGE(); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.ApplyBeAttackedGE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Ghost_BeHit(); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.Ghost_BeHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Human_SubSoul(); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.Human_SubSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Human_TakeDamage(); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.Human_TakeDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SendEvent_BeAttacked(); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.SendEvent_BeAttacked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StatGhostAttackDamage(); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.StatGhostAttackDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckTranslateDamage(bool bTranslate); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.CheckTranslateDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetFinalAttackDamage(float Damage); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.GetFinalAttackDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CanBeAttack(bool bCanAttack); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.CanBeAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(struct AActor* Inistigator, struct UObject* BeHitMontageObj_Man, struct UObject* BeHitMontageObj_Woman, struct FGameplayTagContainer _InstigatorTags, float AttackDamage, bool bSuccess); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.InitAbility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_0A8EB239487CB6B8717940AA74F29C7D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.EventReceived_0A8EB239487CB6B8717940AA74F29C7D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_0A8EB239487CB6B8717940AA74F29C7D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.OnCancelled_0A8EB239487CB6B8717940AA74F29C7D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_0A8EB239487CB6B8717940AA74F29C7D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.OnInterrupted_0A8EB239487CB6B8717940AA74F29C7D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_0A8EB239487CB6B8717940AA74F29C7D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.OnBlendOut_0A8EB239487CB6B8717940AA74F29C7D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_0A8EB239487CB6B8717940AA74F29C7D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.OnCompleted_0A8EB239487CB6B8717940AA74F29C7D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleDamageData(); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.HandleDamageData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Human_PlayHitAnim(); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.Human_PlayHitAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Human_BeDirectAttackedCanLoopWithOutSoul(int32_t EntryPoint); // Function GA_Human_BeDirectAttackedCanLoopWithOutSoul.GA_Human_BeDirectAttackedCanLoopWithOutSoul_C.ExecuteUbergraph_GA_Human_BeDirectAttackedCanLoopWithOutSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

