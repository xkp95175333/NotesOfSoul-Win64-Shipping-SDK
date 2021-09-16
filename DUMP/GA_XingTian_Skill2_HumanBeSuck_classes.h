// BlueprintGeneratedClass GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C
// Size: 0x4c9 (Inherited: 0x490)
struct UGA_XingTian_Skill2_HumanBeSuck_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* Human; // 0x498(0x08)
	struct ANOS_PlayerGhost* XingTian; // 0x4a0(0x08)
	int32_t LevelIndex; // 0x4a8(0x04)
	float HumanSpeed; // 0x4ac(0x04)
	float Duration; // 0x4b0(0x04)
	float Radius; // 0x4b4(0x04)
	struct UAnimMontage* Montage_HumanBeHit; // 0x4b8(0x08)
	struct UAbilityTask_ApplyRootMotionRadialForce* Task_RadialForce; // 0x4c0(0x08)
	bool bAbilityActivated; // 0x4c8(0x01)

	void InitAbility(struct AActor* Instigator, float Magnitude, bool bSuccess); // Function GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_D518E5674534C371CE506B8BB3964DCE(); // Function GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C.OnFinish_D518E5674534C371CE506B8BB3964DCE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_D4FC5DAD49518B0F664CB4BCE5B1B6EB(struct FGameplayEventData Payload); // Function GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C.EventReceived_D4FC5DAD49518B0F664CB4BCE5B1B6EB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void CheckHumanAnim_Client(); // Function GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C.CheckHumanAnim_Client // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckHumanAnim_Server(struct FVector InputVector); // Function GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C.CheckHumanAnim_Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XingTian_Skill2_HumanBeSuck(int32_t EntryPoint); // Function GA_XingTian_Skill2_HumanBeSuck.GA_XingTian_Skill2_HumanBeSuck_C.ExecuteUbergraph_GA_XingTian_Skill2_HumanBeSuck // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

