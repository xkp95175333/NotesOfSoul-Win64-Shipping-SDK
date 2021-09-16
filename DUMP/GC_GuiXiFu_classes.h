// BlueprintGeneratedClass GC_GuiXiFu.GC_GuiXiFu_C
// Size: 0x2b8 (Inherited: 0x280)
struct AGC_GuiXiFu_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Sound; // 0x288(0x08)
	struct UNiagaraComponent* Niagara_GuiXiFu; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct FVector OriginalLocation; // 0x2a0(0x0c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct ANOS_PlayerHuman* Human; // 0x2b0(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_GuiXiFu.GC_GuiXiFu_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_GuiXiFu(int32_t EntryPoint); // Function GC_GuiXiFu.GC_GuiXiFu_C.ExecuteUbergraph_GC_GuiXiFu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

