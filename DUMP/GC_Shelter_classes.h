// BlueprintGeneratedClass GC_Shelter.GC_Shelter_C
// Size: 0x298 (Inherited: 0x280)
struct AGC_Shelter_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ABP_PlayerHumanBase_C* Character; // 0x290(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Shelter.GC_Shelter_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Shelter(int32_t EntryPoint); // Function GC_Shelter.GC_Shelter_C.ExecuteUbergraph_GC_Shelter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

