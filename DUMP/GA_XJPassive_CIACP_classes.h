// BlueprintGeneratedClass GA_XJPassive_CIACP.GA_XJPassive_CIACP_C
// Size: 0x528 (Inherited: 0x490)
struct UGA_XJPassive_CIACP_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoJiang_C* BP_ XiaoJiang; // 0x498(0x08)
	struct FActiveGameplayEffectHandle GE Handle Crouch Consume Power; // 0x4a0(0x08)
	bool InitedConfig; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	float Config_ComsumePhysicalStrength; // 0x4ac(0x04)
	bool GA_HumanIsInvisible; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UAbilityTask_WaitGameplayTagRemoved* Task_Remove_UseItem; // 0x4b8(0x08)
	struct UAbilityTask_WaitGameplayTagRemoved* Task_Remove_UseMainTalent; // 0x4c0(0x08)
	struct UAbilityTask_WaitGameplayTagRemoved* Task_Remove_XXJHuged; // 0x4c8(0x08)
	struct UAbilityTask_WaitGameplayTagRemoved* Task_Remove_LastHuman; // 0x4d0(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* Task_Add_UseMainTalent; // 0x4d8(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* Task_Add_UseItem; // 0x4e0(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* Task_Add_XXJHuged; // 0x4e8(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* Task_Add_LastHuman; // 0x4f0(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* Task_AddInteract; // 0x4f8(0x08)
	struct UAbilityTask_WaitGameplayTagRemoved* Task_RemoveInteract; // 0x500(0x08)
	struct FGameplayTagContainer IfHaveThenNoVisible; // 0x508(0x20)

	void OnTimerFinished_FA7169224E65E8002E7DB38061611130(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.OnTimerFinished_FA7169224E65E8002E7DB38061611130 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimerLoops_FA7169224E65E8002E7DB38061611130(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.OnTimerLoops_FA7169224E65E8002E7DB38061611130 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_148555464D861C11A85AC486703FE6EC(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Removed_148555464D861C11A85AC486703FE6EC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_EAB1BA0E4C51DD5809D3F191CFB8FDE5(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Added_EAB1BA0E4C51DD5809D3F191CFB8FDE5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_BEB328714FD5C6C15BB9828E36D5F56D(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Removed_BEB328714FD5C6C15BB9828E36D5F56D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_625F70D848BED54E88415987D72715BE(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Removed_625F70D848BED54E88415987D72715BE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_EBD506CB4460AF5F77B5BE89F42FDCF6(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Added_EBD506CB4460AF5F77B5BE89F42FDCF6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_AAE7BBB941663E2AC608BD8C689D984F(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Added_AAE7BBB941663E2AC608BD8C689D984F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_65400E4249E872E2E9BABEA5D1378E35(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Removed_65400E4249E872E2E9BABEA5D1378E35 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_457894A148FFB39B5569799F6EECCD4B(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Added_457894A148FFB39B5569799F6EECCD4B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_32E6D3704C5F42D627A6148F9A562969(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Removed_32E6D3704C5F42D627A6148F9A562969 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_2FA62D104DBE1377983F38A498CE7100(); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.Added_2FA62D104DBE1377983F38A498CE7100 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJPassive_CIACP(int32_t EntryPoint); // Function GA_XJPassive_CIACP.GA_XJPassive_CIACP_C.ExecuteUbergraph_GA_XJPassive_CIACP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

