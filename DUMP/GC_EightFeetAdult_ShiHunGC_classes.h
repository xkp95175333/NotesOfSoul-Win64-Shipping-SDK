// BlueprintGeneratedClass GC_EightFeetAdult_ShiHunGC.GC_EightFeetAdult_ShiHunGC_C
// Size: 0x2a5 (Inherited: 0x280)
struct AGC_EightFeetAdult_ShiHunGC_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ANOS_PlayerGhost* EFA; // 0x290(0x08)
	struct UNiagaraComponent* NS; // 0x298(0x08)
	float BeforeDelay; // 0x2a0(0x04)
	bool Trickery; // 0x2a4(0x01)

	void ReceiveTick(float DeltaSeconds); // Function GC_EightFeetAdult_ShiHunGC.GC_EightFeetAdult_ShiHunGC_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_EightFeetAdult_ShiHunGC.GC_EightFeetAdult_ShiHunGC_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_EightFeetAdult_ShiHunGC(int32_t EntryPoint); // Function GC_EightFeetAdult_ShiHunGC.GC_EightFeetAdult_ShiHunGC_C.ExecuteUbergraph_GC_EightFeetAdult_ShiHunGC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

