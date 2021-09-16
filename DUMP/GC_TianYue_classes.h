// BlueprintGeneratedClass GC_TianYue.GC_TianYue_C
// Size: 0x2e0 (Inherited: 0x280)
struct AGC_TianYue_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float Timeline_0_NewTrack_0_B43F025140E27A2FE78BA09315BD3AD8; // 0x290(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B43F025140E27A2FE78BA09315BD3AD8; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline_1; // 0x298(0x08)
	struct ANOS_PlayerHuman* Character; // 0x2a0(0x08)
	struct TArray<struct UNiagaraComponent*> JiasuNiagara; // 0x2a8(0x10)
	struct UPostProcessComponent* PostProcessCom; // 0x2b8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x2c0(0x08)
	struct FTimerHandle Timer; // 0x2c8(0x08)
	struct TArray<struct FName> AttachNames; // 0x2d0(0x10)

	void Timeline_0__FinishedFunc(); // Function GC_TianYue.GC_TianYue_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function GC_TianYue.GC_TianYue_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_TianYue.GC_TianYue_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_TianYue(int32_t EntryPoint); // Function GC_TianYue.GC_TianYue_C.ExecuteUbergraph_GC_TianYue // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

