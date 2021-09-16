// BlueprintGeneratedClass GC_HappyWater.GC_HappyWater_C
// Size: 0x2a0 (Inherited: 0x280)
struct AGC_HappyWater_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Audio; // 0x288(0x08)
	struct UNiagaraComponent* Niagara; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_HappyWater.GC_HappyWater_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(struct UNiagaraComponent* PSystem); // Function GC_HappyWater.GC_HappyWater_C.BndEvt__Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_HappyWater.GC_HappyWater_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function GC_HappyWater.GC_HappyWater_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_HappyWater(int32_t EntryPoint); // Function GC_HappyWater.GC_HappyWater_C.ExecuteUbergraph_GC_HappyWater // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

