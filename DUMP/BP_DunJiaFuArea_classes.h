// BlueprintGeneratedClass BP_DunJiaFuArea.BP_DunJiaFuArea_C
// Size: 0x2d1 (Inherited: 0x228)
struct ABP_DunJiaFuArea_C : ATriggerSphere {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* DunJiaFuAreaTop; // 0x230(0x08)
	struct UNiagaraComponent* EndFX; // 0x238(0x08)
	struct UNiagaraComponent* LieHengFX; // 0x240(0x08)
	struct UNiagaraComponent* StartFX; // 0x248(0x08)
	struct UStaticMeshComponent* DunJiaFuArea; // 0x250(0x08)
	struct ANOS_PlayerHuman* OwnerPlayer; // 0x258(0x08)
	struct ABP_DunJiaFuArea_C* DunJiaFuSelf; // 0x260(0x08)
	struct TMap<struct AActor*, struct FGameplayAbilitySpecHandle> GrantedActorMap; // 0x268(0x50)
	float AttackTimes; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UAnimMontage* ShockAnim; // 0x2c0(0x08)
	struct ANOS_PlayerGhost* Ghost; // 0x2c8(0x08)
	bool InnerGhost; // 0x2d0(0x01)

	void RemoveAbilityWithActor(struct AActor* targetActor); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.RemoveAbilityWithActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetDunJiaFuOwner(struct ANOS_PlayerHuman* Player); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.GetDunJiaFuOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetArea(int32_t Range); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.SetArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void CancelTransDmg(struct ANOS_PlayerBase* TargetPlayer); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.CancelTransDmg // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GiveTransDmg(struct AActor* TargetPlayer, struct ANOS_PlayerHuman* OwnerPlayer); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.GiveTransDmg // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Mult_SetOwner(struct ANOS_PlayerHuman* Player); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.Mult_SetOwner // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActorTakeDamage(struct AActor* Source, float DamageValue, enum class ENOS_DamageType DamageType, float Force); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.ActorTakeDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GhostShocked(struct AActor* actorTarget); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.GhostShocked // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CallDunJiaFuDestroy(); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.CallDunJiaFuDestroy // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DunJiaFuArea(int32_t EntryPoint); // Function BP_DunJiaFuArea.BP_DunJiaFuArea_C.ExecuteUbergraph_BP_DunJiaFuArea // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

