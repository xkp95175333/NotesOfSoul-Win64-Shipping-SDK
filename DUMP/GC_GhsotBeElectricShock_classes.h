// BlueprintGeneratedClass GC_GhsotBeElectricShock.GC_GhsotBeElectricShock_C
// Size: 0x298 (Inherited: 0x280)
struct AGC_GhsotBeElectricShock_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Niagara; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)

	void ReceiveBeginPlay(); // Function GC_GhsotBeElectricShock.GC_GhsotBeElectricShock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_GhsotBeElectricShock.GC_GhsotBeElectricShock_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_GhsotBeElectricShock(int32_t EntryPoint); // Function GC_GhsotBeElectricShock.GC_GhsotBeElectricShock_C.ExecuteUbergraph_GC_GhsotBeElectricShock // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

