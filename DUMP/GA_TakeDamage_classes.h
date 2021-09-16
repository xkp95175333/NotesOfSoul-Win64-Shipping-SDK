// BlueprintGeneratedClass GA_TakeDamage.GA_TakeDamage_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_TakeDamage_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FGameplayTag EventDataTag; // 0x498(0x08)
	struct AActor* DataInstigator; // 0x4a0(0x08)

	void Remove Yu Ji Skill 2(); // Function GA_TakeDamage.GA_TakeDamage_C.Remove Yu Ji Skill 2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetHandle(struct FGameplayEffectSpecHandle OutHandle); // Function GA_TakeDamage.GA_TakeDamage_C.GetHandle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HasTrueLoveKnot(float Damage, bool bIs); // Function GA_TakeDamage.GA_TakeDamage_C.HasTrueLoveKnot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_TakeDamage.GA_TakeDamage_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void AddGetDownTimes(struct AActor* Actor); // Function GA_TakeDamage.GA_TakeDamage_C.AddGetDownTimes // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_TakeDamage(int32_t EntryPoint); // Function GA_TakeDamage.GA_TakeDamage_C.ExecuteUbergraph_GA_TakeDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

