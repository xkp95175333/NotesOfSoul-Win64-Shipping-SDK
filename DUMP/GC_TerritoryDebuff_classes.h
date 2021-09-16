// BlueprintGeneratedClass GC_TerritoryDebuff.GC_TerritoryDebuff_C
// Size: 0x2bc (Inherited: 0x280)
struct AGC_TerritoryDebuff_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float TerritoryTimeline_Value_8A2959004275F80015B8D186EF5AC680; // 0x290(0x04)
	enum class ETimelineDirection TerritoryTimeline__Direction_8A2959004275F80015B8D186EF5AC680; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* TerritoryTimeline; // 0x298(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x2a0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* MaterialInst; // 0x2b0(0x08)
	int32_t CreateNum; // 0x2b8(0x04)

	void CreatePostProcess(); // Function GC_TerritoryDebuff.GC_TerritoryDebuff_C.CreatePostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TerritoryTimeline__FinishedFunc(); // Function GC_TerritoryDebuff.GC_TerritoryDebuff_C.TerritoryTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void TerritoryTimeline__UpdateFunc(); // Function GC_TerritoryDebuff.GC_TerritoryDebuff_C.TerritoryTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_TerritoryDebuff.GC_TerritoryDebuff_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_TerritoryDebuff(int32_t EntryPoint); // Function GC_TerritoryDebuff.GC_TerritoryDebuff_C.ExecuteUbergraph_GC_TerritoryDebuff // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

