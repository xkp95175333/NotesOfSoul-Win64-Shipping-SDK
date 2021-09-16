// BlueprintGeneratedClass BP_ZhuSiFloor.BP_ZhuSiFloor_C
// Size: 0x2f8 (Inherited: 0x220)
struct ABP_ZhuSiFloor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct USceneComponent* Root; // 0x230(0x08)
	float Display_value_D68EF36C4922581B983EDE83D2D6C685; // 0x238(0x04)
	enum class ETimelineDirection Display__Direction_D68EF36C4922581B983EDE83D2D6C685; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* DisPlay; // 0x240(0x08)
	float Disappear_value_F75E2C8043F4AB0760CD178A52140478; // 0x248(0x04)
	enum class ETimelineDirection Disappear__Direction_F75E2C8043F4AB0760CD178A52140478; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct UTimelineComponent* Disappear; // 0x250(0x08)
	struct TArray<struct FVector> OutermostPos; // 0x258(0x10)
	struct TArray<struct FVector> NewOutermostPos; // 0x268(0x10)
	float SphereRadius; // 0x278(0x04)
	float Angle; // 0x27c(0x04)
	int32_t Max; // 0x280(0x04)
	float MoveInterval; // 0x284(0x04)
	int32_t Cur; // 0x288(0x04)
	float MoveOnceDic; // 0x28c(0x04)
	bool ShowDebug; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct TArray<enum class EObjectTypeQuery> TraceObjectTypes; // 0x298(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> DecalMaterial; // 0x2a8(0x10)
	float CurTime; // 0x2b8(0x04)
	float MaxTime; // 0x2bc(0x04)
	bool IsSpreadAnim; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct TArray<struct UBoxComponent*> AllCollisionPos; // 0x2c8(0x10)
	struct TArray<struct UDecalComponent*> DuDecalArray; // 0x2d8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> DuMaterialInstanceArray; // 0x2e8(0x10)

	void PlayDestoryNiagaraToFloorLocation(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.PlayDestoryNiagaraToFloorLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndCollisionCheck(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.EndCollisionCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsCanAddCollision(struct AActor* HitActor, bool IsCan); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.IsCanAddCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetBoZhuSi(struct UMaterialInstanceDynamic* DynamicMaterial); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.GetBoZhuSi // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetHouZhuSi(struct UMaterialInstanceDynamic* DynamicMaterial); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.GetHouZhuSi // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct UMaterialInstanceDynamic* ApplyMaterial(struct UMaterialInterface* Parent); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.ApplyMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckPos(struct FVector pos, bool IsPass); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.CheckPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct USceneComponent* AddDecal(struct FVector WorldLocation, struct FRotator WorldRotation, struct FVector Scale, struct UMaterialInterface* NewDecalMaterial, bool AddCollision); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.AddDecal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Move(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.Move // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Display__FinishedFunc(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.Display__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Display__UpdateFunc(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.Display__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Disappear__FinishedFunc(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.Disappear__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Disappear__UpdateFunc(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.Disappear__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PlayDisappearAnim(); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.PlayDisappearAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ZhuSiFloor(int32_t EntryPoint); // Function BP_ZhuSiFloor.BP_ZhuSiFloor_C.ExecuteUbergraph_BP_ZhuSiFloor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

