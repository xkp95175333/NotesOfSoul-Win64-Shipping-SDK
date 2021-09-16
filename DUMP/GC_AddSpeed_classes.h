// BlueprintGeneratedClass GC_AddSpeed.GC_AddSpeed_C
// Size: 0x2a0 (Inherited: 0x280)
struct AGC_AddSpeed_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct AActor* Character; // 0x290(0x08)
	struct UAudioComponent* Sound; // 0x298(0x08)

	void ReceiveTick(float DeltaSeconds); // Function GC_AddSpeed.GC_AddSpeed_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_AddSpeed.GC_AddSpeed_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_AddSpeed(int32_t EntryPoint); // Function GC_AddSpeed.GC_AddSpeed_C.ExecuteUbergraph_GC_AddSpeed // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

