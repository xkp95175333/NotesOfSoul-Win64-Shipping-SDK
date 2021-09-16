// BlueprintGeneratedClass GA_TakeRealDamage.GA_TakeRealDamage_C
// Size: 0x4b0 (Inherited: 0x490)
struct UGA_TakeRealDamage_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Damage; // 0x498(0x04)
	struct FGameplayTag EventTag; // 0x49c(0x08)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct AActor* DataInstigator; // 0x4a8(0x08)

	void Remove Yu Ji Skill 2(); // Function GA_TakeRealDamage.GA_TakeRealDamage_C.Remove Yu Ji Skill 2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_TakeRealDamage.GA_TakeRealDamage_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_TakeRealDamage.GA_TakeRealDamage_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TRD_AddGetDownTimes(struct AActor* Actor); // Function GA_TakeRealDamage.GA_TakeRealDamage_C.TRD_AddGetDownTimes // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddGetDownTimes(struct AActor* Actor); // Function GA_TakeRealDamage.GA_TakeRealDamage_C.AddGetDownTimes // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_TakeRealDamage(int32_t EntryPoint); // Function GA_TakeRealDamage.GA_TakeRealDamage_C.ExecuteUbergraph_GA_TakeRealDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

