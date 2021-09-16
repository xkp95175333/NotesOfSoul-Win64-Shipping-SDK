// BlueprintGeneratedClass GA_XJ_Skill2.GA_XJ_Skill2_C
// Size: 0x4e0 (Inherited: 0x490)
struct UGA_XJ_Skill2_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FVector SpawnPoint; // 0x498(0x0c)
	struct FRotator SpawnRotation; // 0x4a4(0x0c)
	struct TArray<struct ABP_PartnerXiaoXiaoJiang_C*> AllXiaoXiaoJiang; // 0x4b0(0x10)
	int32_t InitedConfig; // 0x4c0(0x04)
	int32_t Config_XiaoXiaoJiangMaxNum; // 0x4c4(0x04)
	float Config_SkillCD; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct TArray<int32_t> AllInvalideXXJIndex; // 0x4d0(0x10)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void OnCancelled_909A8F364F7AA4BE72769896732365C8(); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.OnCancelled_909A8F364F7AA4BE72769896732365C8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_909A8F364F7AA4BE72769896732365C8(); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.OnInterrupted_909A8F364F7AA4BE72769896732365C8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_909A8F364F7AA4BE72769896732365C8(); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.OnBlendOut_909A8F364F7AA4BE72769896732365C8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_909A8F364F7AA4BE72769896732365C8(); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.OnCompleted_909A8F364F7AA4BE72769896732365C8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_71A546B04F1F5BD95F827CA6FC5461ED(); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.OnSync_71A546B04F1F5BD95F827CA6FC5461ED // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_Skill2(int32_t EntryPoint); // Function GA_XJ_Skill2.GA_XJ_Skill2_C.ExecuteUbergraph_GA_XJ_Skill2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

