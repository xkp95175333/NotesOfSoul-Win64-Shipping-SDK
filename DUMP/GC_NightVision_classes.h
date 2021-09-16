// BlueprintGeneratedClass GC_NightVision.GC_NightVision_C
// Size: 0x358 (Inherited: 0x280)
struct AGC_NightVision_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UPostProcessComponent* PostProcess; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct UMaterialInstanceDynamic* PPI_YeShiYi; // 0x298(0x08)
	struct FTimerHandle ShowInvisibleTimerHandle; // 0x2a0(0x08)
	struct TMap<struct ANOS_PlayerGhost*, struct UNiagaraComponent*> GhostsAndNiagara; // 0x2a8(0x50)
	struct TSoftObjectPtr<struct UNiagaraComponent> Tmp DeleteNiagara; // 0x2f8(0x28)
	int32_t T; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TSoftObjectPtr<struct USkeletalMesh> YESHIYI; // 0x328(0x28)
	struct USkeletalMeshComponent* YeShiYiComp; // 0x350(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_NightVision.GC_NightVision_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void CE_Try Set Niagara(); // Function GC_NightVision.GC_NightVision_C.CE_Try Set Niagara // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_NightVision.GC_NightVision_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_NightVision(int32_t EntryPoint); // Function GC_NightVision.GC_NightVision_C.ExecuteUbergraph_GC_NightVision // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

