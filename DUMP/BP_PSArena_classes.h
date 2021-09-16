// BlueprintGeneratedClass BP_PSArena.BP_PSArena_C
// Size: 0x508 (Inherited: 0x4f0)
struct ABP_PSArena_C : ANOS_PSArena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4f8(0x08)
	int32_t AttackTimes; // 0x500(0x04)
	float GameCurrency; // 0x504(0x04)

	void AddAttackTimes(); // Function BP_PSArena.BP_PSArena_C.AddAttackTimes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PSArena.BP_PSArena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PSArena(int32_t EntryPoint); // Function BP_PSArena.BP_PSArena_C.ExecuteUbergraph_BP_PSArena // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

