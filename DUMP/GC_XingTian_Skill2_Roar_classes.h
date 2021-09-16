// BlueprintGeneratedClass GC_XingTian_Skill2_Roar.GC_XingTian_Skill2_Roar_C
// Size: 0x2d0 (Inherited: 0x280)
struct AGC_XingTian_Skill2_Roar_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UDecalComponent* Decal; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Timeline_Removed_Opacity_2118B26B477CFBEC21A5ED9EFD1B7316; // 0x298(0x04)
	enum class ETimelineDirection Timeline_Removed__Direction_2118B26B477CFBEC21A5ED9EFD1B7316; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Timeline_Removed; // 0x2a0(0x08)
	float Timeline_Active_Opacity_3386C8054872B7DCE663C6B47B85ADEE; // 0x2a8(0x04)
	enum class ETimelineDirection Timeline_Active__Direction_3386C8054872B7DCE663C6B47B85ADEE; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Timeline_Active; // 0x2b0(0x08)
	struct ABP_XingTian_C* XingTian; // 0x2b8(0x08)
	struct UNiagaraComponent* NiagaraSystem_Shield; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* DMI_Decal; // 0x2c8(0x08)

	void Timeline_Active__FinishedFunc(); // Function GC_XingTian_Skill2_Roar.GC_XingTian_Skill2_Roar_C.Timeline_Active__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_Active__UpdateFunc(); // Function GC_XingTian_Skill2_Roar.GC_XingTian_Skill2_Roar_C.Timeline_Active__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_Removed__FinishedFunc(); // Function GC_XingTian_Skill2_Roar.GC_XingTian_Skill2_Roar_C.Timeline_Removed__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_Removed__UpdateFunc(); // Function GC_XingTian_Skill2_Roar.GC_XingTian_Skill2_Roar_C.Timeline_Removed__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_XingTian_Skill2_Roar.GC_XingTian_Skill2_Roar_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XingTian_Skill2_Roar.GC_XingTian_Skill2_Roar_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XingTian_Skill2_Roar(int32_t EntryPoint); // Function GC_XingTian_Skill2_Roar.GC_XingTian_Skill2_Roar_C.ExecuteUbergraph_GC_XingTian_Skill2_Roar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

