// BlueprintGeneratedClass GA_TranslateDamage.GA_TranslateDamage_C
// Size: 0x4b0 (Inherited: 0x490)
struct UGA_TranslateDamage_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct AActor* DunJiaFuArea; // 0x498(0x08)
	struct AActor* TranslateTargetActor; // 0x4a0(0x08)
	struct ANOS_PlayerGhost* GhostPlayer; // 0x4a8(0x08)

	void Set Dun Jia Fu Area(struct AActor* Area, struct AActor* Actor); // Function GA_TranslateDamage.GA_TranslateDamage_C.Set Dun Jia Fu Area // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_TranslateDamage.GA_TranslateDamage_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_TranslateDamage.GA_TranslateDamage_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void TakeDamageByServer(struct ABP_DunJiaFuArea_C* DunJiaFu, struct AActor* targetActor); // Function GA_TranslateDamage.GA_TranslateDamage_C.TakeDamageByServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_TranslateDamage(int32_t EntryPoint); // Function GA_TranslateDamage.GA_TranslateDamage_C.ExecuteUbergraph_GA_TranslateDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

