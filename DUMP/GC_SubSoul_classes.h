// BlueprintGeneratedClass GC_SubSoul.GC_SubSoul_C
// Size: 0x2b8 (Inherited: 0x280)
struct AGC_SubSoul_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float Timeline_0_NewTrack_0_5B3079F54C0E5DF3660D38AA7235FF10; // 0x290(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5B3079F54C0E5DF3660D38AA7235FF10; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline_1; // 0x298(0x08)
	struct ABP_PlayerHumanBase_C* Character; // 0x2a0(0x08)
	struct UPostProcessComponent* PostProcessCom; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x2b0(0x08)

	void CreatePostProcess(); // Function GC_SubSoul.GC_SubSoul_C.CreatePostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__FinishedFunc(); // Function GC_SubSoul.GC_SubSoul_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function GC_SubSoul.GC_SubSoul_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_SubSoul.GC_SubSoul_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_SubSoul(int32_t EntryPoint); // Function GC_SubSoul.GC_SubSoul_C.ExecuteUbergraph_GC_SubSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

