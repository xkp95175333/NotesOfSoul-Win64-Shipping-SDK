// BlueprintGeneratedClass GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_XiaoPi_Skill1_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoPi_C* xiaopi; // 0x498(0x08)
	struct FActiveGameplayEffectHandle GEHandle_BecomeHuman; // 0x4a0(0x08)

	void ClearHumenControlled(); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.ClearHumenControlled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TriggerEvent(struct FString Param); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.TriggerEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckDestroyElement(); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.CheckDestroyElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_AC98912B4C44EAE063D7488111C50327(); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.Removed_AC98912B4C44EAE063D7488111C50327 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BecomeHuman(); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.BecomeHuman // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NormalEndAbility(); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.NormalEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCD(); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.InitCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnGiveAbility(); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.K2_OnGiveAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoPi_Skill1(int32_t EntryPoint); // Function GA_XiaoPi_Skill1.GA_XiaoPi_Skill1_C.ExecuteUbergraph_GA_XiaoPi_Skill1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

