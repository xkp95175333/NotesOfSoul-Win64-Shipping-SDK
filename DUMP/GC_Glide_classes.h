// BlueprintGeneratedClass GC_Glide.GC_Glide_C
// Size: 0x2a0 (Inherited: 0x280)
struct AGC_Glide_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ANOS_PlayerHuman* Human; // 0x290(0x08)
	struct UNiagaraComponent* Niagara; // 0x298(0x08)

	void CreateParticle(); // Function GC_Glide.GC_Glide_C.CreateParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetParticleActive(bool bActive); // Function GC_Glide.GC_Glide_C.SetParticleActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Glide.GC_Glide_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function GC_Glide.GC_Glide_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Glide(int32_t EntryPoint); // Function GC_Glide.GC_Glide_C.ExecuteUbergraph_GC_Glide // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

