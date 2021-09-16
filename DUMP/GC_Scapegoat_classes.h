// BlueprintGeneratedClass GC_Scapegoat.GC_Scapegoat_C
// Size: 0x290 (Inherited: 0x280)
struct AGC_Scapegoat_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Scapegoat.GC_Scapegoat_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_Scapegoat.GC_Scapegoat_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Scapegoat(int32_t EntryPoint); // Function GC_Scapegoat.GC_Scapegoat_C.ExecuteUbergraph_GC_Scapegoat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

