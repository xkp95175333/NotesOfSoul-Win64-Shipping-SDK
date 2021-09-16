// BlueprintGeneratedClass GC_Skill02SmokeENd.GC_Skill02SmokeENd_C
// Size: 0x2a8 (Inherited: 0x280)
struct AGC_Skill02SmokeENd_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float Timeline_0_NewTrack_0_2B23B8374CE98A49F17D7CB86F69762D; // 0x290(0x04)
	enum class ETimelineDirection Timeline_0__Direction_2B23B8374CE98A49F17D7CB86F69762D; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline_1; // 0x298(0x08)
	struct UNiagaraComponent* NewVar_1; // 0x2a0(0x08)

	void Timeline_0__FinishedFunc(); // Function GC_Skill02SmokeENd.GC_Skill02SmokeENd_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function GC_Skill02SmokeENd.GC_Skill02SmokeENd_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_Skill02SmokeENd.GC_Skill02SmokeENd_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Skill02SmokeENd.GC_Skill02SmokeENd_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Skill02SmokeENd(int32_t EntryPoint); // Function GC_Skill02SmokeENd.GC_Skill02SmokeENd_C.ExecuteUbergraph_GC_Skill02SmokeENd // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

