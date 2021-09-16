// BlueprintGeneratedClass BP_SpiderBaby.BP_SpiderBaby_C
// Size: 0x57c (Inherited: 0x540)
struct ABP_SpiderBaby_C : ANOS_SpiderBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x548(0x08)
	struct FVector BoxSize; // 0x550(0x0c)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct TArray<struct AActor*> Territor; // 0x560(0x10)
	bool bXiaoZhuTerritoryStart; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	float Speed; // 0x574(0x04)
	float CheckMasterInNearbyLength; // 0x578(0x04)

	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_SpiderBaby.BP_SpiderBaby_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class EInteractType GetInteractType(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_SpiderBaby.BP_SpiderBaby_C.GetInteractType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_SpiderBaby.BP_SpiderBaby_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInSightHuman(struct UObject* ObjectValue); // Function BP_SpiderBaby.BP_SpiderBaby_C.SetInSightHuman // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetMinDicTarget(struct AActor* MinDicTarget); // Function BP_SpiderBaby.BP_SpiderBaby_C.GetMinDicTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnFail_26E18CA14FF9E24DB5D3A795AD5E3977(enum class EPathFollowingResult MovementResult); // Function BP_SpiderBaby.BP_SpiderBaby_C.OnFail_26E18CA14FF9E24DB5D3A795AD5E3977 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSuccess_26E18CA14FF9E24DB5D3A795AD5E3977(enum class EPathFollowingResult MovementResult); // Function BP_SpiderBaby.BP_SpiderBaby_C.OnSuccess_26E18CA14FF9E24DB5D3A795AD5E3977 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractFailed(struct ACharacter* InteractChar); // Function BP_SpiderBaby.BP_SpiderBaby_C.OnInteractFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function BP_SpiderBaby.BP_SpiderBaby_C.OnInteractSuc // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartInteract(struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_SpiderBaby.BP_SpiderBaby_C.OnStartInteract // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_SpiderBaby.BP_SpiderBaby_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_SpiderBaby.BP_SpiderBaby_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_SpiderBaby.BP_SpiderBaby_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void AtkTest(); // Function BP_SpiderBaby.BP_SpiderBaby_C.AtkTest // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void XiaoZhuTerritoryStart(struct FEventRelevantData EventRelevantData); // Function BP_SpiderBaby.BP_SpiderBaby_C.XiaoZhuTerritoryStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void XiaoZhuTerritoryEnd(struct FEventRelevantData EventRelevantData); // Function BP_SpiderBaby.BP_SpiderBaby_C.XiaoZhuTerritoryEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void VariationSpiderMonster(); // Function BP_SpiderBaby.BP_SpiderBaby_C.VariationSpiderMonster // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpiderEvolution(); // Function BP_SpiderBaby.BP_SpiderBaby_C.SpiderEvolution // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ServerMoveToMaster(); // Function BP_SpiderBaby.BP_SpiderBaby_C.ServerMoveToMaster // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SummonDamage(struct AActor* DamageSource, float DamageValue, bool IsLethal, struct FString DamageType, struct UObject* CustomeObj); // Function BP_SpiderBaby.BP_SpiderBaby_C.SummonDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOutline(bool IsOpen); // Function BP_SpiderBaby.BP_SpiderBaby_C.SetOutline // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SpiderBaby(int32_t EntryPoint); // Function BP_SpiderBaby.BP_SpiderBaby_C.ExecuteUbergraph_BP_SpiderBaby // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

