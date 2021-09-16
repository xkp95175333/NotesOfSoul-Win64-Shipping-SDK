// BlueprintGeneratedClass GA_XJ_HumanBeHugBeTeammateInteractCncelHug.GA_XJ_HumanBeHugBeTeammateInteractCncelHug_C
// Size: 0x4d0 (Inherited: 0x490)
struct UGA_XJ_HumanBeHugBeTeammateInteractCncelHug_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* ReleaseSavedHuman; // 0x498(0x08)
	struct UWBP_InteractProgressUI_C* SaveProgressUI; // 0x4a0(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_InteractCancel; // 0x4a8(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_BeAttack; // 0x4b0(0x08)
	struct UAbilityTask_WaitInputRelease* Task_RightRelease; // 0x4b8(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* Task_Collapse; // 0x4c0(0x08)
	struct FActiveGameplayEffectHandle InteractingGE; // 0x4c8(0x08)

	void Added_1614DB4A41474B8E6FCCE8989C6AF4FE(); // Function GA_XJ_HumanBeHugBeTeammateInteractCncelHug.GA_XJ_HumanBeHugBeTeammateInteractCncelHug_C.Added_1614DB4A41474B8E6FCCE8989C6AF4FE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_66F5A23C421091829A2A2BAC33FD3985(float TimeHeld); // Function GA_XJ_HumanBeHugBeTeammateInteractCncelHug.GA_XJ_HumanBeHugBeTeammateInteractCncelHug_C.OnRelease_66F5A23C421091829A2A2BAC33FD3985 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_F32FC51A4E88A2F7AC651786268066A5(struct FGameplayEventData Payload); // Function GA_XJ_HumanBeHugBeTeammateInteractCncelHug.GA_XJ_HumanBeHugBeTeammateInteractCncelHug_C.EventReceived_F32FC51A4E88A2F7AC651786268066A5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_4FC8DD124C2F88CB733C4DB9D2785C63(struct FGameplayEventData Payload); // Function GA_XJ_HumanBeHugBeTeammateInteractCncelHug.GA_XJ_HumanBeHugBeTeammateInteractCncelHug_C.EventReceived_4FC8DD124C2F88CB733C4DB9D2785C63 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XJ_HumanBeHugBeTeammateInteractCncelHug.GA_XJ_HumanBeHugBeTeammateInteractCncelHug_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_HumanBeHugBeTeammateInteractCncelHug.GA_XJ_HumanBeHugBeTeammateInteractCncelHug_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_HumanBeHugBeTeammateInteractCncelHug(int32_t EntryPoint); // Function GA_XJ_HumanBeHugBeTeammateInteractCncelHug.GA_XJ_HumanBeHugBeTeammateInteractCncelHug_C.ExecuteUbergraph_GA_XJ_HumanBeHugBeTeammateInteractCncelHug // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

