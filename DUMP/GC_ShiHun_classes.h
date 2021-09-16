// BlueprintGeneratedClass GC_ShiHun.GC_ShiHun_C
// Size: 0x2e0 (Inherited: 0x280)
struct AGC_ShiHun_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float Timeline_0_Value_649970144D4193A0B61BC78DC7BF1D25; // 0x290(0x04)
	enum class ETimelineDirection Timeline_0__Direction_649970144D4193A0B61BC78DC7BF1D25; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline_1; // 0x298(0x08)
	struct ANOS_PlayerHuman* Human; // 0x2a0(0x08)
	struct ANOS_PlayerGhost* Ghost; // 0x2a8(0x08)
	struct FVector HumanOriginalLocation; // 0x2b0(0x0c)
	struct FRotator GhostRotation; // 0x2bc(0x0c)
	struct FRotator HumanTargetRotation; // 0x2c8(0x0c)
	struct FRotator HumanOriginalRotation; // 0x2d4(0x0c)

	void Timeline_0__FinishedFunc(); // Function GC_ShiHun.GC_ShiHun_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function GC_ShiHun.GC_ShiHun_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_ShiHun.GC_ShiHun_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_ShiHun(int32_t EntryPoint); // Function GC_ShiHun.GC_ShiHun_C.ExecuteUbergraph_GC_ShiHun // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

