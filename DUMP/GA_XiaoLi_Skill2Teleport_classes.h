// BlueprintGeneratedClass GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_XiaoLi_Skill2Teleport_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoLi_C* xiaoli; // 0x498(0x08)
	struct UAbilityTask_WaitDelay* DelayTask; // 0x4a0(0x08)
	struct UAbilityTask_WaitInputPress* InputTask; // 0x4a8(0x08)
	struct UAbilityTask_WaitTargetData* CheckTask; // 0x4b0(0x08)
	int32_t AbilityLevel; // 0x4b8(0x04)
	float TeleportCDTime; // 0x4bc(0x04)

	void CanTeleport(bool bCanTeleport); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.CanTeleport // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Get Cooldown(float Cooldown); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.Get Cooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Cancelled_D0E068D243B7E85D1DE49E9BBA3D0F8E(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.Cancelled_D0E068D243B7E85D1DE49E9BBA3D0F8E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ValidData_D0E068D243B7E85D1DE49E9BBA3D0F8E(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.ValidData_D0E068D243B7E85D1DE49E9BBA3D0F8E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_50A534BA439B5E76F3E842BE13D2E265(float TimeWaited); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.OnPress_50A534BA439B5E76F3E842BE13D2E265 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoLi_Skill2Teleport(int32_t EntryPoint); // Function GA_XiaoLi_Skill2Teleport.GA_XiaoLi_Skill2Teleport_C.ExecuteUbergraph_GA_XiaoLi_Skill2Teleport // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

