// BlueprintGeneratedClass GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C
// Size: 0x578 (Inherited: 0x490)
struct UGA_XJ_MakeHumanBecome25Boy_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoJiang_C* SOnly_BP_XiaoJiang; // 0x498(0x08)
	struct USkeletalMesh* CharacterMesh; // 0x4a0(0x08)
	struct USkeletalMesh* ClothMesh; // 0x4a8(0x08)
	struct USkeletalMesh* HairMesh; // 0x4b0(0x08)
	struct FActiveGameplayEffectHandle GhostGE25BoyHandle; // 0x4b8(0x08)
	struct ANOS_PlayerHuman* HumanSelf; // 0x4c0(0x08)
	struct UObject* 25BoySelf; // 0x4c8(0x08)
	struct FActiveGameplayEffectHandle HumanGE25BoyHandle; // 0x4d0(0x08)
	float HumanSpringArmLength; // 0x4d8(0x04)
	struct FVector HumanSpringArmSocketOffset; // 0x4dc(0x0c)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct FTransform HumanSpringArmRelativeTransform; // 0x4f0(0x30)
	struct FTransform HumanCameraRelativeTransform; // 0x520(0x30)
	float HumanCameraFieldOfView; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UCameraComponent* HumanCamera; // 0x558(0x08)
	struct USpringArmComponent* HumanSpringArm; // 0x560(0x08)
	struct UCameraComponent* GhostCamera; // 0x568(0x08)
	struct USpringArmComponent* GhostSpringArm; // 0x570(0x08)

	void Func_SetRightSpeed(); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.Func_SetRightSpeed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_81967E7F414B62052F4B3EBB30B6AAD9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.EventReceived_81967E7F414B62052F4B3EBB30B6AAD9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_81967E7F414B62052F4B3EBB30B6AAD9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.OnCancelled_81967E7F414B62052F4B3EBB30B6AAD9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_81967E7F414B62052F4B3EBB30B6AAD9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.OnInterrupted_81967E7F414B62052F4B3EBB30B6AAD9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_81967E7F414B62052F4B3EBB30B6AAD9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.OnBlendOut_81967E7F414B62052F4B3EBB30B6AAD9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_81967E7F414B62052F4B3EBB30B6AAD9(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.OnCompleted_81967E7F414B62052F4B3EBB30B6AAD9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_MakeHumanBecome25Boy(int32_t EntryPoint); // Function GA_XJ_MakeHumanBecome25Boy.GA_XJ_MakeHumanBecome25Boy_C.ExecuteUbergraph_GA_XJ_MakeHumanBecome25Boy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

