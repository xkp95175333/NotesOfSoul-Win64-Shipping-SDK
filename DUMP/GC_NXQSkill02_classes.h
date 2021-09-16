// BlueprintGeneratedClass GC_NXQSkill02.GC_NXQSkill02_C
// Size: 0x2c0 (Inherited: 0x280)
struct AGC_NXQSkill02_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Audio; // 0x288(0x08)
	struct UNiagaraComponent* NS_SkillA; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Timeline_0_NewTrack_0_0FE3BCB342D7B523D4F7EB9DF5EEA92F; // 0x2a0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_0FE3BCB342D7B523D4F7EB9DF5EEA92F; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	struct ANOS_PlayerHuman* Target; // 0x2b0(0x08)
	struct ABP_NieXiaoQian_C* As BP Nie Xiao Qian; // 0x2b8(0x08)

	void Timeline_0__FinishedFunc(); // Function GC_NXQSkill02.GC_NXQSkill02_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function GC_NXQSkill02.GC_NXQSkill02_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function GC_NXQSkill02.GC_NXQSkill02_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_NXQSkill02.GC_NXQSkill02_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_NXQSkill02(int32_t EntryPoint); // Function GC_NXQSkill02.GC_NXQSkill02_C.ExecuteUbergraph_GC_NXQSkill02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

