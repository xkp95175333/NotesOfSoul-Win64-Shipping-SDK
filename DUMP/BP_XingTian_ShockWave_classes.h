// BlueprintGeneratedClass BP_XingTian_ShockWave.BP_XingTian_ShockWave_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_XingTian_ShockWave_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNiagaraComponent* Niagara; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct ABP_XingTian_C* XingTian; // 0x238(0x08)
	float MaxRadius; // 0x240(0x04)
	float Speed; // 0x244(0x04)
	float Radius; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TArray<struct ABP_PlayerHumanBase_C*> HumansHitted; // 0x250(0x10)
	float WaveWidth; // 0x260(0x04)
	float WaveSizeZ; // 0x264(0x04)
	float CheckInterval; // 0x268(0x04)
	float GEDuration; // 0x26c(0x04)
	float SpeedReduceOneHit; // 0x270(0x04)
	float Damage; // 0x274(0x04)

	void CheckHumans(); // Function BP_XingTian_ShockWave.BP_XingTian_ShockWave_C.CheckHumans // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XingTian_ShockWave.BP_XingTian_ShockWave_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XingTian_ShockWave.BP_XingTian_ShockWave_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XingTian_ShockWave(int32_t EntryPoint); // Function BP_XingTian_ShockWave.BP_XingTian_ShockWave_C.ExecuteUbergraph_BP_XingTian_ShockWave // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

