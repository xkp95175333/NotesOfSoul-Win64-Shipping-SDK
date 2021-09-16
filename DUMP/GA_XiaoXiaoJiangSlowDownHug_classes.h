// BlueprintGeneratedClass GA_XiaoXiaoJiangSlowDownHug.GA_XiaoXiaoJiangSlowDownHug_C
// Size: 0x4b8 (Inherited: 0x490)
struct UGA_XiaoXiaoJiangSlowDownHug_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FGameplayEffectSpecHandle SpecHandle_SlowDown; // 0x498(0x10)
	float Config_SlowDownTime; // 0x4a8(0x04)
	float Config_MaxSlowDownCoefficient; // 0x4ac(0x04)
	float MaxSlowDownBaseSpeedValue; // 0x4b0(0x04)
	float Duration; // 0x4b4(0x04)

	void OnFinish_CE5E498247A7D31EECB71B94C1D5072F(); // Function GA_XiaoXiaoJiangSlowDownHug.GA_XiaoXiaoJiangSlowDownHug_C.OnFinish_CE5E498247A7D31EECB71B94C1D5072F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_Init(); // Function GA_XiaoXiaoJiangSlowDownHug.GA_XiaoXiaoJiangSlowDownHug_C.CE_Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoXiaoJiangSlowDownHug.GA_XiaoXiaoJiangSlowDownHug_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoXiaoJiangSlowDownHug(int32_t EntryPoint); // Function GA_XiaoXiaoJiangSlowDownHug.GA_XiaoXiaoJiangSlowDownHug_C.ExecuteUbergraph_GA_XiaoXiaoJiangSlowDownHug // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

