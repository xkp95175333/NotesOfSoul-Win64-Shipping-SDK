// BlueprintGeneratedClass GC_Sprint.GC_Sprint_C
// Size: 0x2b8 (Inherited: 0x280)
struct AGC_Sprint_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float SprintTimeline_Value_44AD47BA4CD5EB07E0298C82349329A1; // 0x290(0x04)
	enum class ETimelineDirection SprintTimeline__Direction_44AD47BA4CD5EB07E0298C82349329A1; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* SprintTimeline; // 0x298(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x2a0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* MaterialInst; // 0x2b0(0x08)

	void SprintTimeline__FinishedFunc(); // Function GC_Sprint.GC_Sprint_C.SprintTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void SprintTimeline__UpdateFunc(); // Function GC_Sprint.GC_Sprint_C.SprintTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Sprint.GC_Sprint_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Sprint(int32_t EntryPoint); // Function GC_Sprint.GC_Sprint_C.ExecuteUbergraph_GC_Sprint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

