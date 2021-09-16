// BlueprintGeneratedClass GA_XiaoHongTianYue.GA_XiaoHongTianYue_C
// Size: 0x4b0 (Inherited: 0x490)
struct UGA_XiaoHongTianYue_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Value; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct UNiagaraComponent* JiasuNiagara; // 0x4a0(0x08)
	struct FActiveGameplayEffectHandle Handle; // 0x4a8(0x08)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XiaoHongTianYue.GA_XiaoHongTianYue_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoHongTianYue(int32_t EntryPoint); // Function GA_XiaoHongTianYue.GA_XiaoHongTianYue_C.ExecuteUbergraph_GA_XiaoHongTianYue // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

