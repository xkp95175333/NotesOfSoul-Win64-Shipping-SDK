// BlueprintGeneratedClass BP_SpiderCocoon.BP_SpiderCocoon_C
// Size: 0x2d8 (Inherited: 0x290)
struct ABP_SpiderCocoon_C : ANOS_SpiderCocoon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UBoxComponent* Box; // 0x298(0x08)
	struct UNiagaraComponent* PoTu_Niagara; // 0x2a0(0x08)
	struct UNiagaraComponent* ZhuWang_Niagara; // 0x2a8(0x08)
	struct UDecalComponent* Decal; // 0x2b0(0x08)
	float SpawnAnim_Value_8F3C43EE472E20F143EC41871EA5B754; // 0x2b8(0x04)
	enum class ETimelineDirection SpawnAnim__Direction_8F3C43EE472E20F143EC41871EA5B754; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* SpawnAnim; // 0x2c0(0x08)
	struct ABP_ZhuSiFloor_C* ZhuSiFloor; // 0x2c8(0x08)
	struct UStaticMeshComponent* LocalDisplayMode; // 0x2d0(0x08)

	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class EInteractType GetInteractType(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.GetInteractType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSpiderBaby(); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.CheckSpiderBaby // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnAnim__FinishedFunc(); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.SpawnAnim__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void SpawnAnim__UpdateFunc(); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.SpawnAnim__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractFailed(struct ACharacter* InteractChar); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.OnInteractFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.OnInteractSuc // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartInteract(struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.OnStartInteract // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SummonDamage(struct AActor* DamageSource, float DamageValue, bool IsLethal, struct FString DamageType, struct UObject* CustomeObj); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.SummonDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SpiderCocoon(int32_t EntryPoint); // Function BP_SpiderCocoon.BP_SpiderCocoon_C.ExecuteUbergraph_BP_SpiderCocoon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

