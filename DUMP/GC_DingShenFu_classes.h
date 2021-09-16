// BlueprintGeneratedClass GC_DingShenFu.GC_DingShenFu_C
// Size: 0x2b8 (Inherited: 0x280)
struct AGC_DingShenFu_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* Audio; // 0x288(0x08)
	struct UNiagaraComponent* Niagara_mohu; // 0x290(0x08)
	struct UNiagaraComponent* Niagara_fazhen; // 0x298(0x08)
	struct UNiagaraComponent* Niagara_dimian; // 0x2a0(0x08)
	struct UNiagaraComponent* Niagara_shock; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)

	void ReceiveBeginPlay(); // Function GC_DingShenFu.GC_DingShenFu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_DingShenFu(int32_t EntryPoint); // Function GC_DingShenFu.GC_DingShenFu_C.ExecuteUbergraph_GC_DingShenFu // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

