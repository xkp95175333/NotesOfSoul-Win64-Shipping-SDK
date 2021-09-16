// BlueprintGeneratedClass GA_KuiShiEffect.GA_KuiShiEffect_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_KuiShiEffect_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* Human; // 0x498(0x08)
	struct TArray<struct ANOS_PlayerHuman*> Targets; // 0x4a0(0x10)
	struct UGE_Outline_C* GEOutLine; // 0x4b0(0x08)
	struct ANOS_PlayerGhost* GhostActor; // 0x4b8(0x08)

	void Check State(); // Function GA_KuiShiEffect.GA_KuiShiEffect_C.Check State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_KuiShiEffect.GA_KuiShiEffect_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_KuiShiEffect.GA_KuiShiEffect_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_KuiShiEffect(int32_t EntryPoint); // Function GA_KuiShiEffect.GA_KuiShiEffect_C.ExecuteUbergraph_GA_KuiShiEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

