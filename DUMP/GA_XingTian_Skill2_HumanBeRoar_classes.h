// BlueprintGeneratedClass GA_XingTian_Skill2_HumanBeRoar.GA_XingTian_Skill2_HumanBeRoar_C
// Size: 0x4cd (Inherited: 0x490)
struct UGA_XingTian_Skill2_HumanBeRoar_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x498(0x08)
	struct ANOS_PlayerGhost* XingTian; // 0x4a0(0x08)
	int32_t LevelIndex; // 0x4a8(0x04)
	float SpeedReduce; // 0x4ac(0x04)
	float Duration; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UAnimMontage* Montage_HumanBeRoar; // 0x4b8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4c0(0x08)
	float FreezeMoveDuration; // 0x4c8(0x04)
	bool bAbilityActivated; // 0x4cc(0x01)

	void InitAbility(struct AActor* Instigator, float Magnitude, bool bSuccess); // Function GA_XingTian_Skill2_HumanBeRoar.GA_XingTian_Skill2_HumanBeRoar_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XingTian_Skill2_HumanBeRoar.GA_XingTian_Skill2_HumanBeRoar_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XingTian_Skill2_HumanBeRoar.GA_XingTian_Skill2_HumanBeRoar_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReduceSpeed(); // Function GA_XingTian_Skill2_HumanBeRoar.GA_XingTian_Skill2_HumanBeRoar_C.ReduceSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XingTian_Skill2_HumanBeRoar(int32_t EntryPoint); // Function GA_XingTian_Skill2_HumanBeRoar.GA_XingTian_Skill2_HumanBeRoar_C.ExecuteUbergraph_GA_XingTian_Skill2_HumanBeRoar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

