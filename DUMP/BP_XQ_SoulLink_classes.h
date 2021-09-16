// BlueprintGeneratedClass BP_XQ_SoulLink.BP_XQ_SoulLink_C
// Size: 0x368 (Inherited: 0x2e8)
struct ABP_XQ_SoulLink_C : ANOS_XQ_SoulLink {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UStaticMeshComponent* Cube; // 0x2f0(0x08)
	struct UDecalComponent* Decal; // 0x2f8(0x08)
	struct UNiagaraComponent* Range; // 0x300(0x08)
	struct UNiagaraComponent* NS_SkillA; // 0x308(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x310(0x08)
	enum class ESKillAction SkillAction; // 0x318(0x01)
	bool Is Open Fly Damage Check; // 0x319(0x01)
	char pad_31A[0x6]; // 0x31a(0x06)
	struct TArray<struct ANOS_PlayerHuman*> CheckedHumanpawn; // 0x320(0x10)
	bool bIsDestory; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	struct FVector BeginLocation; // 0x334(0x0c)
	bool UpdateRangeEnd; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct AActor* FreezeActor; // 0x348(0x08)
	enum class ESKillState MasterSkillState; // 0x350(0x01)
	bool EnableHitEvent; // 0x351(0x01)
	bool EnableOverlapEvent; // 0x352(0x01)
	bool IsOpenCollision; // 0x353(0x01)
	char pad_354[0x4]; // 0x354(0x04)
	struct FMulticastInlineDelegate OnMaxDistanceDestory; // 0x358(0x10)

	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActiveRangeFreeze(struct AActor* targetActor); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.ActiveRangeFreeze // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplyEffectToHumanIfHuman(struct UObject* Object); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.ApplyEffectToHumanIfHuman // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateInteractBoxLength(float Length); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.UpdateInteractBoxLength // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void fire(struct FVector LunchVelocity); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.fire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(enum class ESKillAction SkillType, enum class ESKillState MasterSkillState, struct FVector LunchVelocity); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Skill02LinkAction(struct UObject* Object); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.Skill02LinkAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CommonHitAction(struct FHitResult HitResult); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.CommonHitAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BeginScan(float DegreeIndex); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.BeginScan // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SphereCom_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.BndEvt__SphereCom_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.OnInteractSuc // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XQ_SoulLink(int32_t EntryPoint); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.ExecuteUbergraph_BP_XQ_SoulLink // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnMaxDistanceDestory__DelegateSignature(); // Function BP_XQ_SoulLink.BP_XQ_SoulLink_C.OnMaxDistanceDestory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

