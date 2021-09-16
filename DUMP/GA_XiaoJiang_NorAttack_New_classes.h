// BlueprintGeneratedClass GA_XiaoJiang_NorAttack_New.GA_XiaoJiang_NorAttack_New_C
// Size: 0x598 (Inherited: 0x58c)
struct UGA_XiaoJiang_NorAttack_New_C : UGA_Ghost_NormalAttack_New_C {
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)

	void GetAttackBoxOffset(struct FVector Offset); // Function GA_XiaoJiang_NorAttack_New.GA_XiaoJiang_NorAttack_New_C.GetAttackBoxOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackDamage(float Damage); // Function GA_XiaoJiang_NorAttack_New.GA_XiaoJiang_NorAttack_New_C.GetAttackDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackRangle(struct FVector Range); // Function GA_XiaoJiang_NorAttack_New.GA_XiaoJiang_NorAttack_New_C.GetAttackRangle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoJiang_NorAttack_New.GA_XiaoJiang_NorAttack_New_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoJiang_NorAttack_New(int32_t EntryPoint); // Function GA_XiaoJiang_NorAttack_New.GA_XiaoJiang_NorAttack_New_C.ExecuteUbergraph_GA_XiaoJiang_NorAttack_New // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

