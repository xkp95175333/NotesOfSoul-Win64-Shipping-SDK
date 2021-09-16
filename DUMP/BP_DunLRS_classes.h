// BlueprintGeneratedClass BP_DunLRS.BP_DunLRS_C
// Size: 0x2e0 (Inherited: 0x228)
struct ABP_DunLRS_C : ATriggerSphere {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UNiagaraComponent* EndFX; // 0x230(0x08)
	struct UNiagaraComponent* LieHengFX; // 0x238(0x08)
	struct UNiagaraComponent* StartFX; // 0x240(0x08)
	struct UStaticMeshComponent* DunJiaFuArea; // 0x248(0x08)
	struct ANOS_PlayerHuman* Player; // 0x250(0x08)
	struct ABP_DunJiaFuArea_C* DunJiaFuSelf; // 0x258(0x08)
	struct TMap<struct AActor*, struct FGameplayAbilitySpecHandle> GrantedActorMap; // 0x260(0x50)
	float AttackTimes; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UAnimMontage* ShockAnim; // 0x2b8(0x08)
	float Time; // 0x2c0(0x04)
	float Health; // 0x2c4(0x04)
	enum class ENOSElementSlotType ElementSlotType; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FTimerHandle DestoryTimer; // 0x2d0(0x08)
	int32_t ContainerCount; // 0x2d8(0x04)
	int32_t LimitContainerCount; // 0x2dc(0x04)

	void RemoveAbilityWithActor(struct AActor* targetActor); // Function BP_DunLRS.BP_DunLRS_C.RemoveAbilityWithActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetDunJiaFuOwner(struct ANOS_PlayerHuman* Player); // Function BP_DunLRS.BP_DunLRS_C.GetDunJiaFuOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetArea(int32_t Range); // Function BP_DunLRS.BP_DunLRS_C.SetArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_DunLRS.BP_DunLRS_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActorTakeDamage(struct AActor* Source, float DamageValue, enum class ENOS_DamageType DamageType, float Force); // Function BP_DunLRS.BP_DunLRS_C.ActorTakeDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GhostShocked(struct AActor* actorTarget); // Function BP_DunLRS.BP_DunLRS_C.GhostShocked // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Mult_SetOwner(struct ANOS_PlayerHuman* Player); // Function BP_DunLRS.BP_DunLRS_C.Mult_SetOwner // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CallDunJiaFuDestroy(); // Function BP_DunLRS.BP_DunLRS_C.CallDunJiaFuDestroy // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHP(float Health); // Function BP_DunLRS.BP_DunLRS_C.InitHP // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitShieldType(); // Function BP_DunLRS.BP_DunLRS_C.InitShieldType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_DunLRS.BP_DunLRS_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InitShield(); // Function BP_DunLRS.BP_DunLRS_C.InitShield // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Disable(float Time); // Function BP_DunLRS.BP_DunLRS_C.Disable // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GiveTransDmg(struct AActor* TargetPlayer); // Function BP_DunLRS.BP_DunLRS_C.GiveTransDmg // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CancelTransDmg(struct ANOS_PlayerBase* TargetPlayer); // Function BP_DunLRS.BP_DunLRS_C.CancelTransDmg // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(); // Function BP_DunLRS.BP_DunLRS_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_DunLRS.BP_DunLRS_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_DunLRS.BP_DunLRS_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void EnableShield(bool IsEnable); // Function BP_DunLRS.BP_DunLRS_C.EnableShield // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DunJiaFuArea_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DunLRS.BP_DunLRS_C.BndEvt__DunJiaFuArea_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DunJiaFuArea_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_DunLRS.BP_DunLRS_C.BndEvt__DunJiaFuArea_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void CheckBlockBoxState(); // Function BP_DunLRS.BP_DunLRS_C.CheckBlockBoxState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_DunLRS.BP_DunLRS_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_DunLRS.BP_DunLRS_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetEnableHumanEnter(bool IsEnable); // Function BP_DunLRS.BP_DunLRS_C.SetEnableHumanEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DunLRS(int32_t EntryPoint); // Function BP_DunLRS.BP_DunLRS_C.ExecuteUbergraph_BP_DunLRS // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

