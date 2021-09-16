// BlueprintGeneratedClass BP_ZhenHunFuArea.BP_ZhenHunFuArea_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_ZhenHunFuArea_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNiagaraComponent* NS_ZhenHunFuNormal; // 0x228(0x08)
	struct UNiagaraComponent* NS_ZhenHunFuGetHit; // 0x230(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function BP_ZhenHunFuArea.BP_ZhenHunFuArea_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ActorTakeDamage(struct AActor* Source, float DamageValue, enum class ENOS_DamageType DamageType, float Force); // Function BP_ZhenHunFuArea.BP_ZhenHunFuArea_C.ActorTakeDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ZhenHunFuArea(int32_t EntryPoint); // Function BP_ZhenHunFuArea.BP_ZhenHunFuArea_C.ExecuteUbergraph_BP_ZhenHunFuArea // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

