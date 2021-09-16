// BlueprintGeneratedClass GA_XJPassive_BISBS.GA_XJPassive_BISBS_C
// Size: 0x4c8 (Inherited: 0x490)
struct UGA_XJPassive_BISBS_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct TArray<struct FActiveGameplayEffectHandle> GE AHandle_Be Irradiate Targets Debuff; // 0x498(0x10)
	struct ANOS_Flashlight* Light; // 0x4a8(0x08)
	struct TArray<struct AActor*> EffectsTarget; // 0x4b0(0x10)
	bool InitedConfig; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	float Config_BeIrradiateSlowScale; // 0x4c4(0x04)

	void Cone Trace(struct FVector Start Point, struct FRotator Rotation, float Length, float Cone Scale, int32_t Scale Num); // Function GA_XJPassive_BISBS.GA_XJPassive_BISBS_C.Cone Trace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LostOldTargets_CB1CC2804414AF57503AB38C42106E33(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XJPassive_BISBS.GA_XJPassive_BISBS_C.LostOldTargets_CB1CC2804414AF57503AB38C42106E33 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FindNewTargets_CB1CC2804414AF57503AB38C42106E33(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XJPassive_BISBS.GA_XJPassive_BISBS_C.FindNewTargets_CB1CC2804414AF57503AB38C42106E33 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XJPassive_BISBS.GA_XJPassive_BISBS_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJPassive_BISBS.GA_XJPassive_BISBS_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJPassive_BISBS(int32_t EntryPoint); // Function GA_XJPassive_BISBS.GA_XJPassive_BISBS_C.ExecuteUbergraph_GA_XJPassive_BISBS // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

