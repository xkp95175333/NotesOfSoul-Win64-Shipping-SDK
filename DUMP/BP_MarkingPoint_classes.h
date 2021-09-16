// BlueprintGeneratedClass BP_MarkingPoint.BP_MarkingPoint_C
// Size: 0x2a0 (Inherited: 0x220)
struct ABP_MarkingPoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Widget; // 0x228(0x08)
	float DestoryTime; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct UTexture2D* Texture; // 0x238(0x08)
	struct FTimerHandle Handle; // 0x240(0x08)
	bool Type; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	SoftClassProperty BindedActorPath; // 0x250(0x28)
	int32_t ItemId; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct AActor* BindedActor; // 0x280(0x08)
	struct ANOS_PSArenaBase* PSArenaBase; // 0x288(0x08)
	bool OnDestory; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UTexture2D* TypeIcon; // 0x298(0x08)

	void SetTargetValue(); // Function BP_MarkingPoint.BP_MarkingPoint_C.SetTargetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Get Cur Type Icon(struct UTexture2D* TypeIcon); // Function BP_MarkingPoint.BP_MarkingPoint_C.Get Cur Type Icon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_OnDestory(); // Function BP_MarkingPoint.BP_MarkingPoint_C.OnRep_OnDestory // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitValue(); // Function BP_MarkingPoint.BP_MarkingPoint_C.InitValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearCurActorMarkedBP(struct AActor* CurActor); // Function BP_MarkingPoint.BP_MarkingPoint_C.ClearCurActorMarkedBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCurActorMarkedBP(struct AActor* CurActor, struct AActor* MarkedBP); // Function BP_MarkingPoint.BP_MarkingPoint_C.GetCurActorMarkedBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCurActorMarkedBP(struct AActor* CurActor, struct AActor* CreatedMarkedBP, bool bCastSucessed); // Function BP_MarkingPoint.BP_MarkingPoint_C.SetCurActorMarkedBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Try Get Item Info by Item ID(int32_t ItemId, struct FText Name, struct UTexture2D* AsTexture 2D); // Function BP_MarkingPoint.BP_MarkingPoint_C.Try Get Item Info by Item ID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanPlayerCanSee(bool CanSee); // Function BP_MarkingPoint.BP_MarkingPoint_C.CanPlayerCanSee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_MarkingPoint.BP_MarkingPoint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(SoftClassProperty Target, int32_t ItemId); // Function BP_MarkingPoint.BP_MarkingPoint_C.InitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetContent(struct UTexture2D* Texture, struct FText Type, float delayTime, struct UTexture2D* BGTexture); // Function BP_MarkingPoint.BP_MarkingPoint_C.SetContent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RefreshDis(); // Function BP_MarkingPoint.BP_MarkingPoint_C.RefreshDis // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function BP_MarkingPoint.BP_MarkingPoint_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CallDestoryOnClient(); // Function BP_MarkingPoint.BP_MarkingPoint_C.CallDestoryOnClient // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_MarkingPoint.BP_MarkingPoint_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void DestoryOnClient(); // Function BP_MarkingPoint.BP_MarkingPoint_C.DestoryOnClient // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CallOnDestoryed(); // Function BP_MarkingPoint.BP_MarkingPoint_C.CallOnDestoryed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TickDelayCheckCanWolfManCanSee(); // Function BP_MarkingPoint.BP_MarkingPoint_C.TickDelayCheckCanWolfManCanSee // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(); // Function BP_MarkingPoint.BP_MarkingPoint_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MarkingPoint(int32_t EntryPoint); // Function BP_MarkingPoint.BP_MarkingPoint_C.ExecuteUbergraph_BP_MarkingPoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

