// BlueprintGeneratedClass BP_ElementBox.BP_ElementBox_C
// Size: 0x388 (Inherited: 0x2e0)
struct ABP_ElementBox_C : ANOS_ElementBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UBillboardComponent* Billboard; // 0x2e8(0x08)
	struct UNiagaraComponent* Sign; // 0x2f0(0x08)
	struct USphereComponent* Sphere; // 0x2f8(0x08)
	struct UWidgetComponent* Widget; // 0x300(0x08)
	struct UNiagaraComponent* NS_GS_SK; // 0x308(0x08)
	struct UNiagaraComponent* SuiPianWu_FX; // 0x310(0x08)
	struct UNiagaraComponent* Boom_FX; // 0x318(0x08)
	struct UStaticMeshComponent* Outline; // 0x320(0x08)
	struct FVector CurPos; // 0x328(0x0c)
	char pad_334[0x4]; // 0x334(0x04)
	struct UStaticMesh* CurMesh; // 0x338(0x08)
	float CurTime; // 0x340(0x04)
	bool bInterrupted; // 0x344(0x01)
	bool bStarted; // 0x345(0x01)
	char pad_346[0x2]; // 0x346(0x02)
	float NeedCostTime; // 0x348(0x04)
	float TempTime; // 0x34c(0x04)
	float TempTickScale; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UAudioComponent* LoopSound; // 0x358(0x08)
	struct FVector Org_Pos; // 0x360(0x0c)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct AActor* CurPlayer; // 0x370(0x08)
	bool bFinished; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct AActor* MarkedPoint; // 0x380(0x08)

	void OnRep_MarkedPoint(); // Function BP_ElementBox.BP_ElementBox_C.OnRep_MarkedPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bFinished(); // Function BP_ElementBox.BP_ElementBox_C.OnRep_bFinished // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndSpelling(); // Function BP_ElementBox.BP_ElementBox_C.EndSpelling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InterrputedSpelling(); // Function BP_ElementBox.BP_ElementBox_C.InterrputedSpelling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartSpelling(struct FVector pos, struct FVector Forward, struct FVector RightWard, float NeedCostTime, struct AActor* Actor); // Function BP_ElementBox.BP_ElementBox_C.StartSpelling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_ElementBox.BP_ElementBox_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartSpellingBC(struct FVector pos, struct FVector Forward, struct FVector RightWard, float NeedCostTime, struct AActor* Actor); // Function BP_ElementBox.BP_ElementBox_C.StartSpellingBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InterruptedSpellingBC(float Value); // Function BP_ElementBox.BP_ElementBox_C.InterruptedSpellingBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndSpellingBC(enum class ENOSElementSlotType Value); // Function BP_ElementBox.BP_ElementBox_C.EndSpellingBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartTimer(); // Function BP_ElementBox.BP_ElementBox_C.StartTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InterruptedTimer(); // Function BP_ElementBox.BP_ElementBox_C.InterruptedTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FadeEvent(); // Function BP_ElementBox.BP_ElementBox_C.FadeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NiagaraFogBC(float Value); // Function BP_ElementBox.BP_ElementBox_C.NiagaraFogBC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ElementBox.BP_ElementBox_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_ElementBox.BP_ElementBox_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ShowWidget(bool bShow, struct AActor* Player); // Function BP_ElementBox.BP_ElementBox_C.ShowWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeBillboardPos(); // Function BP_ElementBox.BP_ElementBox_C.ChangeBillboardPos // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenBoxEvent_Event_1(enum class ENOSElementSlotType Type); // Function BP_ElementBox.BP_ElementBox_C.OpenBoxEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BindEvent(); // Function BP_ElementBox.BP_ElementBox_C.BindEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OninteractSucEvent_Event_1(bool bOnSucessed); // Function BP_ElementBox.BP_ElementBox_C.OninteractSucEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearMarkedBP_BC(); // Function BP_ElementBox.BP_ElementBox_C.ClearMarkedBP_BC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_ElementBox.BP_ElementBox_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ElementBox(int32_t EntryPoint); // Function BP_ElementBox.BP_ElementBox_C.ExecuteUbergraph_BP_ElementBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

