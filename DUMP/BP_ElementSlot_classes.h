// BlueprintGeneratedClass BP_ElementSlot.BP_ElementSlot_C
// Size: 0x4b0 (Inherited: 0x2c0)
struct ABP_ElementSlot_C : ANOS_ElementSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UStaticMeshComponent* Cube; // 0x2c8(0x08)
	struct UBillboardComponent* Billboard; // 0x2d0(0x08)
	struct UNiagaraComponent* InitLight; // 0x2d8(0x08)
	struct UWidgetComponent* ZhengYanTypeTips; // 0x2e0(0x08)
	struct UNiagaraComponent* Boom; // 0x2e8(0x08)
	struct USkeletalMeshComponent* PrevMesh; // 0x2f0(0x08)
	struct USkeletalMeshComponent* ElementSlotMesh; // 0x2f8(0x08)
	struct UNiagaraComponent* Niagara6; // 0x300(0x08)
	struct UNiagaraComponent* Niagara5; // 0x308(0x08)
	struct UNiagaraComponent* Niagara3; // 0x310(0x08)
	struct UNiagaraComponent* Niagara2; // 0x318(0x08)
	struct UNiagaraComponent* Niagara1; // 0x320(0x08)
	struct UNiagaraComponent* Niagara; // 0x328(0x08)
	struct USceneComponent* StateThree; // 0x330(0x08)
	struct USceneComponent* StateTwo; // 0x338(0x08)
	struct USceneComponent* StateOne; // 0x340(0x08)
	struct USceneComponent* StateSwitch; // 0x348(0x08)
	struct UNiagaraComponent* LightZhu; // 0x350(0x08)
	struct UNiagaraComponent* FinalShock; // 0x358(0x08)
	struct UNiagaraComponent* Shock; // 0x360(0x08)
	struct UNiagaraComponent* Chuanshu; // 0x368(0x08)
	struct UNiagaraComponent* XiShou; // 0x370(0x08)
	struct UPointLightComponent* PointLight; // 0x378(0x08)
	struct UAudioComponent* Audio; // 0x380(0x08)
	float RotateSuiPian_NewTrack_0_531774804EE7AEF4EF4DA48D060C22EC; // 0x388(0x04)
	enum class ETimelineDirection RotateSuiPian__Direction_531774804EE7AEF4EF4DA48D060C22EC; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct UTimelineComponent* RotateSuiPian; // 0x390(0x08)
	float Timeline_2_BlendInOut_D372F0E64F951EDA337E999F95D0007E; // 0x398(0x04)
	enum class ETimelineDirection Timeline_2__Direction_D372F0E64F951EDA337E999F95D0007E; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x3a0(0x08)
	float ElementSlotMeshTimeLine_BlendInOut_B1F914354D70B25C77A6ABB769BE5E92; // 0x3a8(0x04)
	enum class ETimelineDirection ElementSlotMeshTimeLine__Direction_B1F914354D70B25C77A6ABB769BE5E92; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct UTimelineComponent* ElementSlotMeshTimeLine; // 0x3b0(0x08)
	float PreviewMeshTimeline_BlendInOut_11E9A5D24C35C061DC5F9C86D2BBDA9E; // 0x3b8(0x04)
	enum class ETimelineDirection PreviewMeshTimeline__Direction_11E9A5D24C35C061DC5F9C86D2BBDA9E; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct UTimelineComponent* PreviewMeshTimeline; // 0x3c0(0x08)
	struct FLinearColor SlotColor; // 0x3c8(0x10)
	struct UStaticMeshComponent* CurDirMesh; // 0x3d8(0x08)
	int32_t OpenTimes; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct FMulticastInlineDelegate EventOnInterup; // 0x3e8(0x10)
	struct FMulticastInlineDelegate EventOnFinsh; // 0x3f8(0x10)
	bool IsCanInteract; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct UNiagaraSystem*> XiShouFxList; // 0x410(0x10)
	struct TArray<struct UNiagaraSystem*> ChuanshuFxList; // 0x420(0x10)
	struct TArray<struct UNiagaraSystem*> ShockFxList; // 0x430(0x10)
	struct TArray<struct UNiagaraSystem*> FinalShockFxList; // 0x440(0x10)
	struct TArray<struct UNiagaraSystem*> LightZhuFxList; // 0x450(0x10)
	struct TArray<struct UNiagaraSystem*> InitLightFxList; // 0x460(0x10)
	float MuTicker; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct FTimerHandle MuTickerHandle; // 0x478(0x08)
	bool bActive; // 0x480(0x01)
	bool bActiving; // 0x481(0x01)
	char pad_482[0x6]; // 0x482(0x06)
	struct UAudioComponent* ContactSound; // 0x488(0x08)
	bool IsInCoolDown; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float BlockTime; // 0x494(0x04)
	struct FTimerHandle BlockTimer; // 0x498(0x08)
	enum class EKxGameType CurGameType; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct AActor* MarkedPoint; // 0x4a8(0x08)

	void OnRep_MarkedPoint(); // Function BP_ElementSlot.BP_ElementSlot_C.OnRep_MarkedPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanPlayerCanSee(bool CanSee); // Function BP_ElementSlot.BP_ElementSlot_C.CanPlayerCanSee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_OpenTimes(); // Function BP_ElementSlot.BP_ElementSlot_C.OnRep_OpenTimes // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IncreaseBlockTimer(); // Function BP_ElementSlot.BP_ElementSlot_C.IncreaseBlockTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void XiaoPiFocusShow(); // Function BP_ElementSlot.BP_ElementSlot_C.XiaoPiFocusShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void XiaoPiTransform(struct FEventRelevantData EventRelevantData); // Function BP_ElementSlot.BP_ElementSlot_C.XiaoPiTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnElementPullOut(struct ABP_PlayerHumanBase_C* Human); // Function BP_ElementSlot.BP_ElementSlot_C.OnElementPullOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanPullOutElement(struct ABP_PlayerHumanBase_C* Human, bool bPullOut); // Function BP_ElementSlot.BP_ElementSlot_C.CanPullOutElement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Switch Sui Pian(enum class ENOSElementSlotType Type); // Function BP_ElementSlot.BP_ElementSlot_C.Switch Sui Pian // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Switch State(int32_t CurState, bool bShow); // Function BP_ElementSlot.BP_ElementSlot_C.Switch State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void B Mu Final State(bool bFinalMuState); // Function BP_ElementSlot.BP_ElementSlot_C.B Mu Final State // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetCurFxFromFxList(struct TArray<struct UNiagaraSystem*> FxList, enum class ENOSElementSlotType Type, struct UNiagaraSystem* CurFx); // Function BP_ElementSlot.BP_ElementSlot_C.SetCurFxFromFxList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetIndexFromType(enum class ENOSElementSlotType Type, int32_t Value); // Function BP_ElementSlot.BP_ElementSlot_C.GetIndexFromType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Fx Visibility(struct UNiagaraComponent* FX, bool Bool); // Function BP_ElementSlot.BP_ElementSlot_C.Set Fx Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitFX(); // Function BP_ElementSlot.BP_ElementSlot_C.InitFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_ElementSlot.BP_ElementSlot_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCoreType(); // Function BP_ElementSlot.BP_ElementSlot_C.InitCoreType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InterruptedSpelling(float Index, bool bPullOutElement); // Function BP_ElementSlot.BP_ElementSlot_C.InterruptedSpelling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndSpelling(struct ACharacter* Player, float Index, bool bPullOutElement); // Function BP_ElementSlot.BP_ElementSlot_C.EndSpelling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartSpelling(float CostTime); // Function BP_ElementSlot.BP_ElementSlot_C.StartSpelling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCoreModle(enum class ENOSElementSlotType Type); // Function BP_ElementSlot.BP_ElementSlot_C.SetCoreModle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class EInteractType GetInteractType(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_ElementSlot.BP_ElementSlot_C.GetInteractType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_ElementSlot.BP_ElementSlot_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_ElementSlot.BP_ElementSlot_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreviewMeshTimeline__FinishedFunc(); // Function BP_ElementSlot.BP_ElementSlot_C.PreviewMeshTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void PreviewMeshTimeline__UpdateFunc(); // Function BP_ElementSlot.BP_ElementSlot_C.PreviewMeshTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ElementSlotMeshTimeLine__FinishedFunc(); // Function BP_ElementSlot.BP_ElementSlot_C.ElementSlotMeshTimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ElementSlotMeshTimeLine__UpdateFunc(); // Function BP_ElementSlot.BP_ElementSlot_C.ElementSlotMeshTimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_2__FinishedFunc(); // Function BP_ElementSlot.BP_ElementSlot_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_2__UpdateFunc(); // Function BP_ElementSlot.BP_ElementSlot_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void RotateSuiPian__FinishedFunc(); // Function BP_ElementSlot.BP_ElementSlot_C.RotateSuiPian__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void RotateSuiPian__UpdateFunc(); // Function BP_ElementSlot.BP_ElementSlot_C.RotateSuiPian__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void EndSpelliingBC(bool bMatchingMode, bool bPullOutElement); // Function BP_ElementSlot.BP_ElementSlot_C.EndSpelliingBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Ticker(); // Function BP_ElementSlot.BP_ElementSlot_C.Ticker // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InterruptedSpellingBC(); // Function BP_ElementSlot.BP_ElementSlot_C.InterruptedSpellingBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartSpellingBC(float CostTime); // Function BP_ElementSlot.BP_ElementSlot_C.StartSpellingBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBC(); // Function BP_ElementSlot.BP_ElementSlot_C.InitBC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetShowElementSlot(bool bShow); // Function BP_ElementSlot.BP_ElementSlot_C.SetShowElementSlot // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PerspectiveElementSlot(bool bShow); // Function BP_ElementSlot.BP_ElementSlot_C.PerspectiveElementSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_ElementSlot.BP_ElementSlot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void NewPrevMeshFade(float Value); // Function BP_ElementSlot.BP_ElementSlot_C.NewPrevMeshFade // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NewElementSlotMeshFade(float Value); // Function BP_ElementSlot.BP_ElementSlot_C.NewElementSlotMeshFade // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ZhengYanTipsShow(bool bShow); // Function BP_ElementSlot.BP_ElementSlot_C.ZhengYanTipsShow // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSound(struct UAudioComponent* Audio); // Function BP_ElementSlot.BP_ElementSlot_C.InitSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Muliti_RemoveCooling(); // Function BP_ElementSlot.BP_ElementSlot_C.Muliti_RemoveCooling // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Mulity_AddCooling(); // Function BP_ElementSlot.BP_ElementSlot_C.Mulity_AddCooling // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Server_AddCoolingDown(float Duration); // Function BP_ElementSlot.BP_ElementSlot_C.Server_AddCoolingDown // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FinalStateFx(); // Function BP_ElementSlot.BP_ElementSlot_C.FinalStateFx // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ServerCallEvent(); // Function BP_ElementSlot.BP_ElementSlot_C.ServerCallEvent // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInteractText(); // Function BP_ElementSlot.BP_ElementSlot_C.SetInteractText // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameStateUpdated_Event_1(enum class EKxGameStateType CurType); // Function BP_ElementSlot.BP_ElementSlot_C.OnGameStateUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameType_Event_1(enum class EKxGameType GameType); // Function BP_ElementSlot.BP_ElementSlot_C.OnGameType_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnableElementSealUpdate_Event(struct ANOS_ElementSlot* ElementSlot, bool bInteracting); // Function BP_ElementSlot.BP_ElementSlot_C.OnEnableElementSealUpdate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearMarkedBP_BC(); // Function BP_ElementSlot.BP_ElementSlot_C.ClearMarkedBP_BC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ElementSlot(int32_t EntryPoint); // Function BP_ElementSlot.BP_ElementSlot_C.ExecuteUbergraph_BP_ElementSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void EventOnFinsh__DelegateSignature(struct ABP_ElementSlot_C* ElemrntActor); // Function BP_ElementSlot.BP_ElementSlot_C.EventOnFinsh__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventOnInterup__DelegateSignature(struct ABP_ElementSlot_C* ElementActor); // Function BP_ElementSlot.BP_ElementSlot_C.EventOnInterup__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

