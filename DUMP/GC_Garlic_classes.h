// BlueprintGeneratedClass GC_Garlic.GC_Garlic_C
// Size: 0x2b0 (Inherited: 0x280)
struct AGC_Garlic_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Qi; // 0x288(0x08)
	struct UAudioComponent* Eat; // 0x290(0x08)
	struct UNiagaraComponent* Niagara; // 0x298(0x08)
	struct TArray<struct UNiagaraComponent*> NewVar_1; // 0x2a0(0x10)

	void ReceiveBeginPlay(); // Function GC_Garlic.GC_Garlic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Garlic.GC_Garlic_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function GC_Garlic.GC_Garlic_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Garlic(int32_t EntryPoint); // Function GC_Garlic.GC_Garlic_C.ExecuteUbergraph_GC_Garlic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

