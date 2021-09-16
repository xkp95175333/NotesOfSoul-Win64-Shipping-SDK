// BlueprintGeneratedClass BP_XiaoPi_LitfTerritory.BP_XiaoPi_LitfTerritory_C
// Size: 0x318 (Inherited: 0x2d8)
struct ABP_XiaoPi_LitfTerritory_C : ANOS_XiaoPi_LiftTerritory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UChildActorComponent* BP_TerritoryPhysicItemFloatArea; // 0x2e0(0x08)
	struct UAudioComponent* Audio; // 0x2e8(0x08)
	struct UDecalComponent* Decal; // 0x2f0(0x08)
	struct UNiagaraComponent* Niagara; // 0x2f8(0x08)
	struct USoundBase* Sound; // 0x300(0x08)
	struct UAudioComponent* AudioComp; // 0x308(0x08)
	struct FActiveGameplayEffectHandle GEHandle_InTerritory; // 0x310(0x08)

	void ReceiveBeginPlay(); // Function BP_XiaoPi_LitfTerritory.BP_XiaoPi_LitfTerritory_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_XiaoPi_LitfTerritory.BP_XiaoPi_LitfTerritory_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__BuffTriggerBoxCom_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_XiaoPi_LitfTerritory.BP_XiaoPi_LitfTerritory_C.BndEvt__BuffTriggerBoxCom_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__BuffTriggerBoxCom_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_XiaoPi_LitfTerritory.BP_XiaoPi_LitfTerritory_C.BndEvt__BuffTriggerBoxCom_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void InitTerritoryPhysicArea(); // Function BP_XiaoPi_LitfTerritory.BP_XiaoPi_LitfTerritory_C.InitTerritoryPhysicArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoPi_LitfTerritory(int32_t EntryPoint); // Function BP_XiaoPi_LitfTerritory.BP_XiaoPi_LitfTerritory_C.ExecuteUbergraph_BP_XiaoPi_LitfTerritory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

