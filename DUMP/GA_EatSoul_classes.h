// BlueprintGeneratedClass GA_EatSoul.GA_EatSoul_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_EatSoul_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FTimerHandle CheckTimerHandl; // 0x498(0x08)
	struct FActiveGameplayEffectHandle NewVar_1; // 0x4a0(0x08)

	void HumanLoseSoul(struct ANOS_PlayerHuman* Target, int32_t RemoveNum); // Function GA_EatSoul.GA_EatSoul_C.HumanLoseSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSoul(struct UObject* Object); // Function GA_EatSoul.GA_EatSoul_C.GetSoul // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_EatSoul.GA_EatSoul_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_EatSoul.GA_EatSoul_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function GA_EatSoul.GA_EatSoul_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_EatSoul(int32_t EntryPoint); // Function GA_EatSoul.GA_EatSoul_C.ExecuteUbergraph_GA_EatSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

