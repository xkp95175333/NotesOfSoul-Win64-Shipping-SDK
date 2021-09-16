// BlueprintGeneratedClass GA_Ghost_SubSoul.GA_Ghost_SubSoul_C
// Size: 0x4d0 (Inherited: 0x490)
struct UGA_Ghost_SubSoul_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerGhost* OwnerGhost; // 0x498(0x08)
	struct ANOS_PlayerHuman* Human; // 0x4a0(0x08)
	struct UAnimMontage* GhostMontage; // 0x4a8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4b0(0x08)
	bool bPlayAnimInAir; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UGA_Ghost_NormalAttack_New_C* GA_GhostAttack; // 0x4c0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_ChaDaoSpeed; // 0x4c8(0x08)

	void GhostGainSoul(); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.GhostGainSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(struct AActor* HumanActor, struct UObject* GhostMontageObj, bool bSuccess); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_6B2CC4C147274A4C790730B8F3D7FC08(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.EventReceived_6B2CC4C147274A4C790730B8F3D7FC08 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_6B2CC4C147274A4C790730B8F3D7FC08(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.OnCancelled_6B2CC4C147274A4C790730B8F3D7FC08 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_6B2CC4C147274A4C790730B8F3D7FC08(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.OnInterrupted_6B2CC4C147274A4C790730B8F3D7FC08 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_6B2CC4C147274A4C790730B8F3D7FC08(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.OnBlendOut_6B2CC4C147274A4C790730B8F3D7FC08 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_6B2CC4C147274A4C790730B8F3D7FC08(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.OnCompleted_6B2CC4C147274A4C790730B8F3D7FC08 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void PlayGhostAnim(); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.PlayGhostAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Ghost_SubSoul(int32_t EntryPoint); // Function GA_Ghost_SubSoul.GA_Ghost_SubSoul_C.ExecuteUbergraph_GA_Ghost_SubSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

