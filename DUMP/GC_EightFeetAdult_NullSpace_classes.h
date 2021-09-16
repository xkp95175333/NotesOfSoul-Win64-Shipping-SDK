// BlueprintGeneratedClass GC_EightFeetAdult_NullSpace.GC_EightFeetAdult_NullSpace_C
// Size: 0x2c0 (Inherited: 0x280)
struct AGC_EightFeetAdult_NullSpace_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UPostProcessComponent* PostProcess; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Tl_GoGoGo_Value_5F9EB7474DA9888C1646C4841F4CD864; // 0x298(0x04)
	enum class ETimelineDirection Tl_GoGoGo__Direction_5F9EB7474DA9888C1646C4841F4CD864; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Tl_GoGoGo; // 0x2a0(0x08)
	int32_t RLevel; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UMaterialInstanceDynamic* PPI_NullSpace; // 0x2b0(0x08)
	struct UAudioComponent* HumanBoBoBo; // 0x2b8(0x08)

	void ClearPP(); // Function GC_EightFeetAdult_NullSpace.GC_EightFeetAdult_NullSpace_C.ClearPP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tl_GoGoGo__FinishedFunc(); // Function GC_EightFeetAdult_NullSpace.GC_EightFeetAdult_NullSpace_C.Tl_GoGoGo__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_GoGoGo__UpdateFunc(); // Function GC_EightFeetAdult_NullSpace.GC_EightFeetAdult_NullSpace_C.Tl_GoGoGo__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_EightFeetAdult_NullSpace.GC_EightFeetAdult_NullSpace_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_EightFeetAdult_NullSpace(int32_t EntryPoint); // Function GC_EightFeetAdult_NullSpace.GC_EightFeetAdult_NullSpace_C.ExecuteUbergraph_GC_EightFeetAdult_NullSpace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

