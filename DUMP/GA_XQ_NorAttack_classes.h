// BlueprintGeneratedClass GA_XQ_NorAttack.GA_XQ_NorAttack_C
// Size: 0x598 (Inherited: 0x58c)
struct UGA_XQ_NorAttack_C : UGA_Ghost_NormalAttack_New_C {
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)

	void GetAttackBoxOffset(struct FVector Offset); // Function GA_XQ_NorAttack.GA_XQ_NorAttack_C.GetAttackBoxOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackDamage(float Damage); // Function GA_XQ_NorAttack.GA_XQ_NorAttack_C.GetAttackDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAttackMontageSection(struct FName Section); // Function GA_XQ_NorAttack.GA_XQ_NorAttack_C.GetAttackMontageSection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void HandleHitActor(struct AActor* Actor, int32_t Index); // Function GA_XQ_NorAttack.GA_XQ_NorAttack_C.HandleHitActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XQ_NorAttack(int32_t EntryPoint); // Function GA_XQ_NorAttack.GA_XQ_NorAttack_C.ExecuteUbergraph_GA_XQ_NorAttack // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

