// BlueprintGeneratedClass GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C
// Size: 0x4bf (Inherited: 0x490)
struct UGA_Human_BeNormalAttacked_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* OwnerHuman; // 0x498(0x08)
	struct ANOS_PlayerGhost* AttackerGhost; // 0x4a0(0x08)
	struct UKxInventoryObject* NeedReActiveItem; // 0x4a8(0x08)
	float AttackDamage; // 0x4b0(0x04)
	int32_t HumanSubSoul; // 0x4b4(0x04)
	int32_t GhostGainSoul; // 0x4b8(0x04)
	bool bPlaySubSoulAnim; // 0x4bc(0x01)
	bool bGhostBeHit; // 0x4bd(0x01)
	bool bUnStealth; // 0x4be(0x01)

	void PlayHitEffect(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.PlayHitEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayHitSound(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.PlayHitSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SendEvent_BeAttacked(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.SendEvent_BeAttacked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetFinalAttackDamage(float Damage); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.GetFinalAttackDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Handle_GhostBeHit(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.Handle_GhostBeHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Handle_SubSoul(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.Handle_SubSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Handle_AttackDamage(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.Handle_AttackDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StatGhostAttackDamage(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.StatGhostAttackDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSubSoulAnimImpl(struct TArray<struct FS_SubSoulAnim> Anims, struct FS_SubSoulAnim SubSoulAnim); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.GetSubSoulAnimImpl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetSubSoulMontage(struct UAnimMontage* GhostMontage, struct UAnimMontage* HumanMontage); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.GetSubSoulMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CalcDamageData(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.CalcDamageData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckTranslateDamage(bool bTranslate); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.CheckTranslateDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitDamageData(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.InitDamageData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanBeAttack(bool bCanAttack); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.CanBeAttack // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(struct AActor* Inistigator, float AttackDamage, bool bSuccess); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void HandleDamageData(); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.HandleDamageData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Human_BeNormalAttacked(int32_t EntryPoint); // Function GA_Human_BeNormalAttacked.GA_Human_BeNormalAttacked_C.ExecuteUbergraph_GA_Human_BeNormalAttacked // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

