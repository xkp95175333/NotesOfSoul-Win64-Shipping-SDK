// BlueprintGeneratedClass GA_TrueLoveKnotEffective.GA_TrueLoveKnotEffective_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_TrueLoveKnotEffective_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Character01; // 0x498(0x08)
	struct ABP_PlayerHumanBase_C* Character02; // 0x4a0(0x08)
	float EventIndex; // 0x4a8(0x04)
	struct FActiveGameplayEffectHandle EffectHandle; // 0x4ac(0x08)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UDataTable* NewVar_1; // 0x4b8(0x08)

	void EventReceived_970752E94B6A8BA60E141DAE269AE914(struct FGameplayEventData Payload); // Function GA_TrueLoveKnotEffective.GA_TrueLoveKnotEffective_C.EventReceived_970752E94B6A8BA60E141DAE269AE914 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_52A0C744447E2A110818D499719D5242(); // Function GA_TrueLoveKnotEffective.GA_TrueLoveKnotEffective_C.OnSync_52A0C744447E2A110818D499719D5242 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_TrueLoveKnotEffective.GA_TrueLoveKnotEffective_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_TrueLoveKnotEffective.GA_TrueLoveKnotEffective_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void OnCharacterThorwItem(struct UKxInventoryObject* ThrowItem); // Function GA_TrueLoveKnotEffective.GA_TrueLoveKnotEffective_C.OnCharacterThorwItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_TrueLoveKnotEffective(int32_t EntryPoint); // Function GA_TrueLoveKnotEffective.GA_TrueLoveKnotEffective_C.ExecuteUbergraph_GA_TrueLoveKnotEffective // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

