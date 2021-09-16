// BlueprintGeneratedClass GA_SuperNatural.GA_SuperNatural_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_SuperNatural_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_SuperNaturalStuff* SuperNaturalStuff; // 0x498(0x08)
	struct ANOS_SuperNaturalEventTriggerBox* SuperNaturalBox; // 0x4a0(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SuperNatural.GA_SuperNatural_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_SuperNatural.GA_SuperNatural_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_SuperNatural(int32_t EntryPoint); // Function GA_SuperNatural.GA_SuperNatural_C.ExecuteUbergraph_GA_SuperNatural // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

