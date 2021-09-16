// BlueprintGeneratedClass GA_XiaoJiangPassive.GA_XiaoJiangPassive_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_XiaoJiangPassive_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitBeNorAttack; // 0x498(0x08)

	void EventReceived_4297E463429EB070523E28A6168D54C9(struct FGameplayEventData Payload); // Function GA_XiaoJiangPassive.GA_XiaoJiangPassive_C.EventReceived_4297E463429EB070523E28A6168D54C9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoJiangPassive.GA_XiaoJiangPassive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoJiangPassive.GA_XiaoJiangPassive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoJiangPassive(int32_t EntryPoint); // Function GA_XiaoJiangPassive.GA_XiaoJiangPassive_C.ExecuteUbergraph_GA_XiaoJiangPassive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

