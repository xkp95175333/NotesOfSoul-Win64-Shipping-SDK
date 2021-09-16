// BlueprintGeneratedClass GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_XiaoXiaoJiangSwoop_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	bool HugOne; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	float Config_HugDuration; // 0x49c(0x04)
	struct UAbilityTask_WaitMovementModeChange* Task_WaitModeChange; // 0x4a0(0x08)
	struct ABP_PartnerXiaoXiaoJiang_C* XIAOXIAOJIANG; // 0x4a8(0x08)
	struct UNOS_PartnerMovementComponent* XiaoXiaoJiangMovementComp; // 0x4b0(0x08)
	struct UNOS_WaitBoxTargetPlus* Task_FindTarget; // 0x4b8(0x08)

	void OnChange_553255A24C8C30C8DDE0D9AD03F00F40(enum class EMovementMode NewMovementMode); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnChange_553255A24C8C30C8DDE0D9AD03F00F40 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxOverlapedTarget_6503F99543E0B1B70E7CA8855929317B(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.BoxOverlapedTarget_6503F99543E0B1B70E7CA8855929317B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxLostTarget_6503F99543E0B1B70E7CA8855929317B(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.BoxLostTarget_6503F99543E0B1B70E7CA8855929317B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxFoundNewTarget_6503F99543E0B1B70E7CA8855929317B(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.BoxFoundNewTarget_6503F99543E0B1B70E7CA8855929317B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_37E74D5144EF9DDA4A6BD19A04241431(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnCancelled_37E74D5144EF9DDA4A6BD19A04241431 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_37E74D5144EF9DDA4A6BD19A04241431(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnInterrupted_37E74D5144EF9DDA4A6BD19A04241431 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_37E74D5144EF9DDA4A6BD19A04241431(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnBlendOut_37E74D5144EF9DDA4A6BD19A04241431 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_37E74D5144EF9DDA4A6BD19A04241431(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnCompleted_37E74D5144EF9DDA4A6BD19A04241431 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_32590F1145C8F706501489972A542B43(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnCancelled_32590F1145C8F706501489972A542B43 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_32590F1145C8F706501489972A542B43(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnInterrupted_32590F1145C8F706501489972A542B43 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_32590F1145C8F706501489972A542B43(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnBlendOut_32590F1145C8F706501489972A542B43 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_32590F1145C8F706501489972A542B43(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.OnCompleted_32590F1145C8F706501489972A542B43 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoXiaoJiangSwoop(int32_t EntryPoint); // Function GA_XiaoXiaoJiangSwoop.GA_XiaoXiaoJiangSwoop_C.ExecuteUbergraph_GA_XiaoXiaoJiangSwoop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

