// BlueprintGeneratedClass GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C
// Size: 0x4bf (Inherited: 0x490)
struct UGA_25Boy_HumanBeAttacked_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* OwnerHuman; // 0x498(0x08)
	struct ANOS_PlayerHuman* 25Boy; // 0x4a0(0x08)
	struct UKxInventoryObject* NeedReActiveItem; // 0x4a8(0x08)
	float AttackDamage; // 0x4b0(0x04)
	int32_t HumanSubSoul; // 0x4b4(0x04)
	int32_t GhostGainSoul; // 0x4b8(0x04)
	bool bPlaySubSoulAnim; // 0x4bc(0x01)
	bool bGhostBeHit; // 0x4bd(0x01)
	bool bUnStealth; // 0x4be(0x01)

	void SendEvent_BeAttacked(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.SendEvent_BeAttacked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetFinalAttackDamage(float Damage); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.GetFinalAttackDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Handle_UnStealth(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.Handle_UnStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Handle_GhostBeHit(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.Handle_GhostBeHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Handle_SubSoul(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.Handle_SubSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Handle_AttackDamage(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.Handle_AttackDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StatGhostAttackDamage(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.StatGhostAttackDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RandGetSubSoulAnim(struct TArray<struct FS_SubSoulAnim> Anims, struct FS_SubSoulAnim SubSoulAnim); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.RandGetSubSoulAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetSubSoulMontage(struct FS_SubSoulAnim SubSoulAnim); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.GetSubSoulMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CalcDamageData(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.CalcDamageData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckTranslateDamage(bool bTranslate); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.CheckTranslateDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitDamageData(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.InitDamageData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanBeAttack(bool bCanAttack); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.CanBeAttack // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(struct AActor* Inistigator, float AttackDamage, bool bSuccess); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void HandleDamageData(); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.HandleDamageData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_25Boy_HumanBeAttacked(int32_t EntryPoint); // Function GA_25Boy_HumanBeAttacked.GA_25Boy_HumanBeAttacked_C.ExecuteUbergraph_GA_25Boy_HumanBeAttacked // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

