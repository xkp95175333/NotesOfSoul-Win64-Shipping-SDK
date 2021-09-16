// Class LGUI.LGUIBaseRayEmitter
// Size: 0xe0 (Inherited: 0xb0)
struct ULGUIBaseRayEmitter : UActorComponent {
	float clickThreshold; // 0xb0(0x04)
	bool holdToDrag; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float holdToDragTime; // 0xb8(0x04)
	char pad_BC[0x24]; // 0xbc(0x24)

	void SetInitialValue(float InClickThreshold, bool InHoldToDrag, float InHoldToDragTime); // Function LGUI.LGUIBaseRayEmitter.SetInitialValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1018a80
	void SetClickThreshold(float Value); // Function LGUI.LGUIBaseRayEmitter.SetClickThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x1018960
	void GetInitialValue(float OutClickThreshold, bool OutHoldToDrag, float OutHoldToDragTime); // Function LGUI.LGUIBaseRayEmitter.GetInitialValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10101d0
	float GetClickThreshold(); // Function LGUI.LGUIBaseRayEmitter.GetClickThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x100fce0
};

// Class LGUI.LGUI_CenterScreenRayemitter
// Size: 0xe8 (Inherited: 0xe0)
struct ULGUI_CenterScreenRayemitter : ULGUIBaseRayEmitter {
	char pad_E0[0x8]; // 0xe0(0x08)
};

// Class LGUI.LGUI_MainViewportMouseRayEmitter
// Size: 0xe8 (Inherited: 0xe0)
struct ULGUI_MainViewportMouseRayEmitter : ULGUIBaseRayEmitter {
	char pad_E0[0x8]; // 0xe0(0x08)
};

// Class LGUI.LGUIBaseInputModule
// Size: 0xb0 (Inherited: 0xb0)
struct ULGUIBaseInputModule : UActorComponent {

	void ClearEvent(); // Function LGUI.LGUIBaseInputModule.ClearEvent // (Native|Public|BlueprintCallable) // @ game+0x100f5e0
};

// Class LGUI.LGUI_PointerInputModule
// Size: 0xe8 (Inherited: 0xb0)
struct ULGUI_PointerInputModule : ULGUIBaseInputModule {
	struct ULGUIEventSystem* eventSystem; // 0xb0(0x08)
	char pad_B8[0x30]; // 0xb8(0x30)

	void UnregisterInputChangeEvent(struct FLGUIDelegateHandleWrapper delegateHandle); // Function LGUI.LGUI_PointerInputModule.UnregisterInputChangeEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1019830
	struct FLGUIDelegateHandleWrapper RegisterInputChangeEvent(struct FDelegate pointerInputChange); // Function LGUI.LGUI_PointerInputModule.RegisterInputChangeEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10188a0
	void InputTriggerForNavigation(bool triggerPress); // Function LGUI.LGUI_PointerInputModule.InputTriggerForNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x1010a80
	void InputNavigation(enum class ELGUINavigationDirection Direction, bool pressOrRelease); // Function LGUI.LGUI_PointerInputModule.InputNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x10105c0
};

// Class LGUI.LGUI_SceneCapture2DMouseRayEmitter
// Size: 0xf8 (Inherited: 0xe0)
struct ULGUI_SceneCapture2DMouseRayEmitter : ULGUIBaseRayEmitter {
	struct ASceneCapture2D* SceneCaptureActor; // 0xe0(0x08)
	struct USceneCaptureComponent2D* sceneCaptureComp; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)

	void SetSceneCapture2DComponent(struct USceneCaptureComponent2D* InComp); // Function LGUI.LGUI_SceneCapture2DMouseRayEmitter.SetSceneCapture2DComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1018ba0
	bool ProjectWorldToViewPointForSceneCapture2D(struct USceneCaptureComponent2D* InSceneCapture2D, struct FVector InWorldPosition, struct FVector2D OutViewPoint); // Function LGUI.LGUI_SceneCapture2DMouseRayEmitter.ProjectWorldToViewPointForSceneCapture2D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1018780
	struct USceneCaptureComponent2D* GetSceneCapture2DComponent(); // Function LGUI.LGUI_SceneCapture2DMouseRayEmitter.GetSceneCapture2DComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x10103a0
	void DeprojectViewPointToWorldForSceneCapture2D(struct USceneCaptureComponent2D* InSceneCapture2D, struct FVector2D InViewPoint01, struct FVector OutRayOrigin, struct FVector OutRayDirection); // Function LGUI.LGUI_SceneCapture2DMouseRayEmitter.DeprojectViewPointToWorldForSceneCapture2D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x100fa00
};

// Class LGUI.LGUI_SceneComponentRayEmitter
// Size: 0xf8 (Inherited: 0xe0)
struct ULGUI_SceneComponentRayEmitter : ULGUIBaseRayEmitter {
	struct AActor* targetActor; // 0xe0(0x08)
	enum class ESceneComponentRayDirection RayDirectionType; // 0xe8(0x01)
	bool clickThresholdRelateToRayDistance; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct USceneComponent* CacheTargetSceneComponent; // 0xf0(0x08)

	void SetTargetSceneComponent(struct USceneComponent* InSceneComp); // Function LGUI.LGUI_SceneComponentRayEmitter.SetTargetSceneComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1018cc0
	void SetTargetActor(struct AActor* InActor); // Function LGUI.LGUI_SceneComponentRayEmitter.SetTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1018c30
	struct USceneComponent* GetTargetSceneComponent(); // Function LGUI.LGUI_SceneComponentRayEmitter.GetTargetSceneComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x10103f0
	struct AActor* GetTargetActor(); // Function LGUI.LGUI_SceneComponentRayEmitter.GetTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x10103d0
};

// Class LGUI.LGUI_ScreenSpaceUIMouseRayemitter
// Size: 0xf0 (Inherited: 0xe0)
struct ULGUI_ScreenSpaceUIMouseRayemitter : ULGUIBaseRayEmitter {
	char pad_E0[0x8]; // 0xe0(0x08)
	struct ULGUICanvas* RenderCanvas; // 0xe8(0x08)
};

// Class LGUI.LGUI_StandaloneInputModule
// Size: 0xf0 (Inherited: 0xe8)
struct ULGUI_StandaloneInputModule : ULGUI_PointerInputModule {
	bool bOverrideMousePosition; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	void InputTrigger(bool inTriggerPress, enum class EMouseButtonType inMouseButtonType); // Function LGUI.LGUI_StandaloneInputModule.InputTrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x10109b0
	void InputScroll(float inAxisValue); // Function LGUI.LGUI_StandaloneInputModule.InputScroll // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1010720
	void InputOverrideMousePosition(struct FVector2D inMousePosition); // Function LGUI.LGUI_StandaloneInputModule.InputOverrideMousePosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1010690
};

// Class LGUI.LGUI_TouchInputModule
// Size: 0xe8 (Inherited: 0xe8)
struct ULGUI_TouchInputModule : ULGUI_PointerInputModule {

	void InputTouchTrigger(bool inTouchPress, int32_t inTouchID, struct FVector inTouchPointPosition); // Function LGUI.LGUI_TouchInputModule.InputTouchTrigger // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1010890
	void InputTouchMoved(int32_t inTouchID, struct FVector inTouchPointPosition); // Function LGUI.LGUI_TouchInputModule.InputTouchMoved // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10107c0
	void InputScroll(float inAxisValue); // Function LGUI.LGUI_TouchInputModule.InputScroll // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1010720
};

// Class LGUI.LGUIBaseRaycaster
// Size: 0x230 (Inherited: 0x200)
struct ULGUIBaseRaycaster : USceneComponent {
	char pad_200[0x18]; // 0x200(0x18)
	int32_t Depth; // 0x218(0x04)
	float rayLength; // 0x21c(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x220(0x01)
	enum class ELGUIEventFireType eventFireType; // 0x221(0x01)
	char pad_222[0x6]; // 0x222(0x06)
	struct ULGUIBaseRayEmitter* rayEmitter; // 0x228(0x08)

	void DeactivateRaycaster(); // Function LGUI.LGUIBaseRaycaster.DeactivateRaycaster // (Final|Native|Public|BlueprintCallable) // @ game+0x100f920
	void ActivateRaycaster(); // Function LGUI.LGUIBaseRaycaster.ActivateRaycaster // (Final|Native|Public|BlueprintCallable) // @ game+0x100edc0
};

// Class LGUI.LGUI_UIRaycaster
// Size: 0x250 (Inherited: 0x230)
struct ULGUI_UIRaycaster : ULGUIBaseRaycaster {
	char pad_230[0x10]; // 0x230(0x10)
	enum class EUIRaycastSortType uiSortType; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	float uiSortDependOnDistanceThreshold; // 0x244(0x04)
	char pad_248[0x8]; // 0x248(0x08)
};

// Class LGUI.LGUI_WorldRaycaster
// Size: 0x240 (Inherited: 0x230)
struct ULGUI_WorldRaycaster : ULGUIBaseRaycaster {
	char pad_230[0x10]; // 0x230(0x10)
};

// Class LGUI.LGUIAtlasManager
// Size: 0x80 (Inherited: 0x28)
struct ULGUIAtlasManager : UObject {
	struct TMap<struct FName, struct FLGUIAtlasData> atlasMap; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class LGUI.LGUIBaseEventData
// Size: 0x38 (Inherited: 0x28)
struct ULGUIBaseEventData : UObject {
	struct USceneComponent* selectedComponent; // 0x28(0x08)
	enum class EPointerEventType EventType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	struct FString ToString(); // Function LGUI.LGUIBaseEventData.ToString // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10195d0
};

// Class LGUI.LGUIBehaviour
// Size: 0xc0 (Inherited: 0xb0)
struct ULGUIBehaviour : UActorComponent {
	bool enable; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct TWeakObjectPtr<struct UUIItem> RootUIComp; // 0xb4(0x08)
	char pad_BC[0x4]; // 0xbc(0x04)

	void UpdateBP(float DeltaTime); // Function LGUI.LGUIBehaviour.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function LGUI.LGUIBehaviour.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetEnable(bool Value); // Function LGUI.LGUIBehaviour.SetEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x10189f0
	void OnUIInteractionStateChangedBP(bool interactableOrNot); // Function LGUI.LGUIBehaviour.OnUIInteractionStateChangedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnUIDimensionsChangedBP(bool positionChanged, bool sizeChanged); // Function LGUI.LGUIBehaviour.OnUIDimensionsChangedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnUIChildHierarchyIndexChangedBP(struct UUIItem* Child); // Function LGUI.LGUIBehaviour.OnUIChildHierarchyIndexChangedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnUIChildDimensionsChangedBP(struct UUIItem* Child, bool positionChanged, bool sizeChanged); // Function LGUI.LGUIBehaviour.OnUIChildDimensionsChangedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnUIChildAttachmentChangedBP(struct UUIItem* Child, bool attachOrDetach); // Function LGUI.LGUIBehaviour.OnUIChildAttachmentChangedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnUIChildAcitveInHierarchyBP(struct UUIItem* Child, bool ativeOrInactive); // Function LGUI.LGUIBehaviour.OnUIChildAcitveInHierarchyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnUIAttachmentChangedBP(); // Function LGUI.LGUIBehaviour.OnUIAttachmentChangedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnUIActiveInHierarchyBP(bool activeOrInactive); // Function LGUI.LGUIBehaviour.OnUIActiveInHierarchyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnableBP(); // Function LGUI.LGUIBehaviour.OnEnableBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnDisableBP(); // Function LGUI.LGUIBehaviour.OnDisableBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnDestroyBP(); // Function LGUI.LGUIBehaviour.OnDestroyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	struct AActor* InstantiatePrefabWithTransform(struct ULGUIPrefab* OriginObject, struct USceneComponent* Parent, struct FVector Location, struct FRotator Rotation, struct FVector Scale); // Function LGUI.LGUIBehaviour.InstantiatePrefabWithTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1010cb0
	struct AActor* InstantiatePrefab(struct ULGUIPrefab* OriginObject, struct USceneComponent* Parent); // Function LGUI.LGUIBehaviour.InstantiatePrefab // (Final|Native|Public|BlueprintCallable) // @ game+0x1010be0
	struct AActor* InstantiateActor(struct AActor* OriginObject, struct USceneComponent* Parent); // Function LGUI.LGUIBehaviour.InstantiateActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1010b10
	struct USceneComponent* GetRootSceneComponent(); // Function LGUI.LGUIBehaviour.GetRootSceneComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010370
	struct UUIItem* GetRootComponent(); // Function LGUI.LGUIBehaviour.GetRootComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010340
	bool GetIsActiveAndEnable(); // Function LGUI.LGUIBehaviour.GetIsActiveAndEnable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010310
	bool GetEnable(); // Function LGUI.LGUIBehaviour.GetEnable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10101b0
	bool CheckRootUIComponent(); // Function LGUI.LGUIBehaviour.CheckRootUIComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x100f5b0
	void AwakeBP(); // Function LGUI.LGUIBehaviour.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
};

// Class LGUI.LGUIBasePanel
// Size: 0x140 (Inherited: 0xc0)
struct ULGUIBasePanel : ULGUIBehaviour {
	bool bIsInteract; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct UActorComponent*> InitFindAllUIComClass; // 0xc8(0x10)
	struct TArray<struct UActorComponent*> GetUIClass; // 0xd8(0x10)
	char pad_E8[0x58]; // 0xe8(0x58)

	void Open(); // Function LGUI.LGUIBasePanel.Open // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x10185d0
	void Hide(); // Function LGUI.LGUIBasePanel.Hide // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x10105a0
	struct UActorComponent* GetComponentByName(struct FString Name, struct UActorComponent* ComClass); // Function LGUI.LGUIBasePanel.GetComponentByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x100fd00
	void FindAllChildComType(struct UActorComponent* LGUIComClass); // Function LGUI.LGUIBasePanel.FindAllChildComType // (Final|Native|Public|BlueprintCallable) // @ game+0x100fc50
	void Destroy(); // Function LGUI.LGUIBasePanel.Destroy // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x100fb60
};

// Class LGUI.LGUIBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULGUIBPLibrary : UBlueprintFunctionLibrary {

	struct ULTweener* WidthTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.WidthTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10198c0
	struct ULTweener* UILocalPositionTo(struct UUIItem* Target, struct FVector endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.UILocalPositionTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1019670
	struct ULTweener* StretchTopTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.StretchTopTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1019440
	struct ULTweener* StretchRightTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.StretchRightTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10192b0
	struct ULTweener* StretchLeftTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.StretchLeftTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1019120
	struct ULTweener* StretchBottomTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.StretchBottomTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1018f90
	void SetUIHierarchyIndex(struct AActor* Target, int32_t Index); // Function LGUI.LGUIBPLibrary.SetUIHierarchyIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1018ed0
	void SetUIAlpha(struct AActor* Target, float InAlpha); // Function LGUI.LGUIBPLibrary.SetUIAlpha // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1018e10
	void SetUIActive(struct AActor* Target, bool Acitve); // Function LGUI.LGUIBPLibrary.SetUIActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1018d50
	struct ULTweener* PivotTo(struct UUIItem* Target, struct FVector2D endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.PivotTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x10185f0
	struct AActor* LoadPrefabWithTransform(struct UObject* WorldContextObject, struct ULGUIPrefab* InPrefab, struct USceneComponent* InParent, struct FVector Location, struct FRotator Rotation, struct FVector Scale); // Function LGUI.LGUIBPLibrary.LoadPrefabWithTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x10183d0
	struct AActor* LoadPrefab(struct UObject* WorldContextObject, struct ULGUIPrefab* InPrefab, struct USceneComponent* InParent, bool SetRelativeTransformToIdentity); // Function LGUI.LGUIBPLibrary.LoadPrefab // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1018280
	void LGUIExecuteInputAxis(struct FKey InputKey, float Value); // Function LGUI.LGUIBPLibrary.LGUIExecuteInputAxis // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1018160
	void LGUIExecuteInputAction(struct FKey InputKey, bool pressOrRelease); // Function LGUI.LGUIBPLibrary.LGUIExecuteInputAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1018040
	void LGUIDrawableEventExecuteVector4(struct FLGUIDrawableEvent InEvent, struct FVector4 InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteVector4 // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10123c0
	void LGUIDrawableEventExecuteVector3(struct FLGUIDrawableEvent InEvent, struct FVector InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteVector3 // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1012280
	void LGUIDrawableEventExecuteVector2(struct FLGUIDrawableEvent InEvent, struct FVector2D InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteVector2 // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1012150
	void LGUIDrawableEventExecuteUInt8(struct FLGUIDrawableEvent InEvent, char InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteUInt8 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1012020
	void LGUIDrawableEventExecuteString(struct FLGUIDrawableEvent InEvent, struct FString InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1011ea0
	void LGUIDrawableEventExecuteRotator(struct FLGUIDrawableEvent InEvent, struct FRotator InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1011d60
	void LGUIDrawableEventExecuteQuaternion(struct FLGUIDrawableEvent InEvent, struct FQuat InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteQuaternion // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1011c20
	void LGUIDrawableEventExecutePointerEvent(struct FLGUIDrawableEvent InEvent, struct ULGUIPointerEventData* InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecutePointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1011b00
	void LGUIDrawableEventExecuteObject(struct FLGUIDrawableEvent InEvent, struct UObject* InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1011430
	void LGUIDrawableEventExecuteLinearColor(struct FLGUIDrawableEvent InEvent, struct FLinearColor InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteLinearColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10119c0
	void LGUIDrawableEventExecuteInt32(struct FLGUIDrawableEvent InEvent, int32_t InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteInt32 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1011890
	void LGUIDrawableEventExecuteFloat(struct FLGUIDrawableEvent InEvent, float InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1011750
	void LGUIDrawableEventExecuteEmpty(struct FLGUIDrawableEvent InEvent); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteEmpty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1011680
	void LGUIDrawableEventExecuteColor(struct FLGUIDrawableEvent InEvent, struct FColor InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1011550
	void LGUIDrawableEventExecuteClass(struct FLGUIDrawableEvent InEvent, struct UObject* InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1011430
	void LGUIDrawableEventExecuteBool(struct FLGUIDrawableEvent InEvent, bool InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1011300
	void LGUIDrawableEventExecuteActor(struct FLGUIDrawableEvent InEvent, struct AActor* InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEventExecuteActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10111e0
	void LGUIDrawableEvent_Vector4_Unregister(struct FLGUIDrawableEvent_Vector4 InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector4_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1017ef0
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Vector4_Register(struct FLGUIDrawableEvent_Vector4 InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector4_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1017d80
	void LGUIDrawableEvent_Vector4_Execute(struct FLGUIDrawableEvent_Vector4 InEvent, struct FVector4 InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector4_Execute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1017b20
	void LGUIDrawableEvent_Vector3_Unregister(struct FLGUIDrawableEvent_Vector3 InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector3_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10179d0
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Vector3_Register(struct FLGUIDrawableEvent_Vector3 InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector3_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1017860
	void LGUIDrawableEvent_Vector3_Execute(struct FLGUIDrawableEvent_Vector3 InEvent, struct FVector InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector3_Execute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1017600
	void LGUIDrawableEvent_Vector2_Unregister(struct FLGUIDrawableEvent_Vector2 InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector2_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10174b0
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Vector2_Register(struct FLGUIDrawableEvent_Vector2 InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector2_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1017340
	void LGUIDrawableEvent_Vector2_Execute(struct FLGUIDrawableEvent_Vector2 InEvent, struct FVector2D InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Vector2_Execute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10170e0
	void LGUIDrawableEvent_UInt8_Unregister(struct FLGUIDrawableEvent_UInt8 InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_UInt8_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1016f90
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_UInt8_Register(struct FLGUIDrawableEvent_UInt8 InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_UInt8_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1016e20
	void LGUIDrawableEvent_UInt8_Execute(struct FLGUIDrawableEvent_UInt8 InEvent, char InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_UInt8_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1016bc0
	void LGUIDrawableEvent_String_Unregister(struct FLGUIDrawableEvent_String InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_String_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1016a70
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_String_Register(struct FLGUIDrawableEvent_String InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_String_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1016900
	void LGUIDrawableEvent_String_Execute(struct FLGUIDrawableEvent_String InEvent, struct FString InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_String_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1016750
	void LGUIDrawableEvent_Rotator_Unregister(struct FLGUIDrawableEvent_Rotator InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Rotator_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1016600
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Rotator_Register(struct FLGUIDrawableEvent_Rotator InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Rotator_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1016490
	void LGUIDrawableEvent_Rotator_Execute(struct FLGUIDrawableEvent_Rotator InEvent, struct FRotator InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Rotator_Execute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1016230
	void LGUIDrawableEvent_Quaternion_Unregister(struct FLGUIDrawableEvent_Quaternion InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Quaternion_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10160e0
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Quaternion_Register(struct FLGUIDrawableEvent_Quaternion InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Quaternion_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1015f70
	void LGUIDrawableEvent_Quaternion_Execute(struct FLGUIDrawableEvent_Quaternion InEvent, struct FQuat InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Quaternion_Execute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1015d00
	void LGUIDrawableEvent_PointerEvent_Unregister(struct FLGUIDrawableEvent_PointerEvent InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_PointerEvent_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1015bb0
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_PointerEvent_Register(struct FLGUIDrawableEvent_PointerEvent InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_PointerEvent_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1015a40
	void LGUIDrawableEvent_PointerEvent_Execute(struct FLGUIDrawableEvent_PointerEvent InEvent, struct ULGUIPointerEventData* InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_PointerEvent_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10157e0
	void LGUIDrawableEvent_Object_Unregister(struct FLGUIDrawableEvent_Object InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Object_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1015690
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Object_Register(struct FLGUIDrawableEvent_Object InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Object_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1015520
	void LGUIDrawableEvent_Object_Execute(struct FLGUIDrawableEvent_Object InEvent, struct UObject* InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Object_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10152c0
	void LGUIDrawableEvent_LinearColor_Unregister(struct FLGUIDrawableEvent_LinearColor InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_LinearColor_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1015170
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_LinearColor_Register(struct FLGUIDrawableEvent_LinearColor InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_LinearColor_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1015000
	void LGUIDrawableEvent_LinearColor_Execute(struct FLGUIDrawableEvent_LinearColor InEvent, struct FLinearColor InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_LinearColor_Execute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1014d90
	void LGUIDrawableEvent_Int64_Unregister(struct FLGUIDrawableEvent_Int64 InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Int64_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1014c40
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Int64_Register(struct FLGUIDrawableEvent_Int64 InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Int64_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1014ad0
	void LGUIDrawableEvent_Int64_Execute(struct FLGUIDrawableEvent_Int64 InEvent, int64_t InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Int64_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1014870
	void LGUIDrawableEvent_Int32_Unregister(struct FLGUIDrawableEvent_Int32 InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Int32_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1014720
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Int32_Register(struct FLGUIDrawableEvent_Int32 InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Int32_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10145b0
	void LGUIDrawableEvent_Int32_Execute(struct FLGUIDrawableEvent_Int32 InEvent, int32_t InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Int32_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1014350
	void LGUIDrawableEvent_Float_Unregister(struct FLGUIDrawableEvent_Float InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Float_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1014200
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Float_Register(struct FLGUIDrawableEvent_Float InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Float_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1014090
	void LGUIDrawableEvent_Float_Execute(struct FLGUIDrawableEvent_Float InEvent, float InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Float_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1013e30
	void LGUIDrawableEvent_Empty_Unregister(struct FLGUIDrawableEvent_Empty InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Empty_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1013ce0
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Empty_Register(struct FLGUIDrawableEvent_Empty InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Empty_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1013b70
	void LGUIDrawableEvent_Empty_Execute(struct FLGUIDrawableEvent_Empty InEvent); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Empty_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1013980
	void LGUIDrawableEvent_Color_Unregister(struct FLGUIDrawableEvent_Color InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Color_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1013830
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Color_Register(struct FLGUIDrawableEvent_Color InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Color_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10136c0
	void LGUIDrawableEvent_Color_Execute(struct FLGUIDrawableEvent_Color InEvent, struct FColor InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Color_Execute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1013470
	void LGUIDrawableEvent_Class_Unregister(struct FLGUIDrawableEvent_Class InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Class_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1013320
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Class_Register(struct FLGUIDrawableEvent_Class InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Class_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10131b0
	void LGUIDrawableEvent_Class_Execute(struct FLGUIDrawableEvent_Class InEvent, struct UObject* InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Class_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1012f50
	void LGUIDrawableEvent_Bool_Unregister(struct FLGUIDrawableEvent_Bool InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Bool_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1012e00
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Bool_Register(struct FLGUIDrawableEvent_Bool InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Bool_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1012c90
	void LGUIDrawableEvent_Bool_Execute(struct FLGUIDrawableEvent_Bool InEvent, bool InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Bool_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1012a20
	void LGUIDrawableEvent_Actor_Unregister(struct FLGUIDrawableEvent_Actor InEvent, struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Actor_Unregister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10128d0
	struct FLGUIDelegateHandleWrapper LGUIDrawableEvent_Actor_Register(struct FLGUIDrawableEvent_Actor InEvent, struct FDelegate InDelegate); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Actor_Register // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1012760
	void LGUIDrawableEvent_Actor_Execute(struct FLGUIDrawableEvent_Actor InEvent, struct AActor* InParameter); // Function LGUI.LGUIBPLibrary.LGUIDrawableEvent_Actor_Execute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1012500
	struct UActorComponent* LGUICompRef_GetComponentClass(struct FLGUIComponentReference InLGUIComponentReference); // Function LGUI.LGUIBPLibrary.LGUICompRef_GetComponentClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1011130
	struct UActorComponent* LGUICompRef_GetComponent(struct FLGUIComponentReference InLGUIComponentReference, struct UActorComponent* InComponentType); // Function LGUI.LGUIBPLibrary.LGUICompRef_GetComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1011030
	struct AActor* LGUICompRef_GetActor(struct FLGUIComponentReference InLGUIComponentReference); // Function LGUI.LGUIBPLibrary.LGUICompRef_GetActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1010f80
	void K2_LGUICompRef_GetComponent(struct FLGUIComponentReference InLGUICompRef, struct UActorComponent* OutResult); // Function LGUI.LGUIBPLibrary.K2_LGUICompRef_GetComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1010e80
	struct ULTweener* HeightTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.HeightTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1010410
	struct TArray<struct UActorComponent*> GetComponentsInChildren(struct AActor* InActor, struct UActorComponent* ComponentClass, bool IncludeSelf); // Function LGUI.LGUIBPLibrary.GetComponentsInChildren // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1010040
	struct UActorComponent* GetComponentInParent(struct AActor* InActor, struct UActorComponent* ComponentClass, bool IncludeSelf); // Function LGUI.LGUIBPLibrary.GetComponentInParent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100ff40
	struct UActorComponent* GetComponentInChildren(struct AActor* InActor, struct UActorComponent* ComponentClass, bool IncludeSelf); // Function LGUI.LGUIBPLibrary.GetComponentInChildren // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100fe40
	struct AActor* DuplicateActor(struct AActor* Target, struct USceneComponent* Parent); // Function LGUI.LGUIBPLibrary.DuplicateActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100fb80
	void DestroyActorWithHierarchy(struct AActor* Target, bool WithHierarchy); // Function LGUI.LGUIBPLibrary.DestroyActorWithHierarchy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100f940
	void DeleteActor(struct AActor* Target, bool WithHierarchy); // Function LGUI.LGUIBPLibrary.DeleteActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100f940
	struct ULTweener* ColorTo(struct UUIItem* Target, struct FColor endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.ColorTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x100f790
	struct ULTweener* ColorFrom(struct UUIItem* Target, struct FColor startValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.ColorFrom // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x100f600
	struct ULTweener* AnchorOffsetYTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.AnchorOffsetYTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100f420
	struct ULTweener* AnchorOffsetXTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.AnchorOffsetXTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100f290
	struct ULTweener* AnchorOffsetTo(struct UUIItem* Target, struct FVector2D endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.AnchorOffsetTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x100f100
	struct ULTweener* AlphaTo(struct UUIItem* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.AlphaTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100ef70
	struct ULTweener* AlphaFrom(struct UUIItem* Target, float startValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LGUI.LGUIBPLibrary.AlphaFrom // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x100ede0
};

// Class LGUI.LGUICanvas
// Size: 0x220 (Inherited: 0xb0)
struct ULGUICanvas : UActorComponent {
	struct TArray<struct ULGUICanvas*> childrenCanvasArray; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct ULGUICanvas* TopMostCanvas; // 0xc8(0x08)
	struct ULGUICanvas* ParentCanvas; // 0xd0(0x08)
	struct UUIItem* UIItem; // 0xd8(0x08)
	char pad_E0[0x24]; // 0xe0(0x24)
	enum class ELGUIRenderMode renderMode; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UTextureRenderTarget2D* RenderTarget; // 0x108(0x08)
	bool pixelPerfect; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32_t sortOrder; // 0x114(0x04)
	enum class ELGUICanvasClipType clipType; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	struct FVector2D clipFeather; // 0x11c(0x08)
	struct FMargin clipRectOffset; // 0x124(0x10)
	char pad_134[0x4]; // 0x134(0x04)
	struct UTexture* clipTexture; // 0x138(0x08)
	bool inheritRectClip; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float dynamicPixelsPerUnit; // 0x144(0x04)
	int8_t additionalShaderChannels; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UMaterialInterface* DefaultMaterials[0x3]; // 0x150(0x18)
	int8_t OverrideParameters; // 0x168(0x01)
	char pad_169[0x57]; // 0x169(0x57)
	struct TArray<struct TWeakObjectPtr<struct UUIBaseRenderable>> UIRenderableItemList; // 0x1c0(0x10)
	char pad_1D0[0x30]; // 0x1d0(0x30)
	struct TArray<struct UMaterialInstanceDynamic*> UIMaterialList; // 0x200(0x10)
	char pad_210[0x10]; // 0x210(0x10)

	void SetSortOrderToLowestOfHierarchy(bool propagateToChildrenCanvas); // Function LGUI.LGUICanvas.SetSortOrderToLowestOfHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x101eb60
	void SetSortOrderToLowestOfAll(bool propagateToChildrenCanvas); // Function LGUI.LGUICanvas.SetSortOrderToLowestOfAll // (Final|Native|Public|BlueprintCallable) // @ game+0x101ead0
	void SetSortOrderToHighestOfHierarchy(bool propagateToChildrenCanvas); // Function LGUI.LGUICanvas.SetSortOrderToHighestOfHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x101ea40
	void SetSortOrderToHighestOfAll(bool propagateToChildrenCanvas); // Function LGUI.LGUICanvas.SetSortOrderToHighestOfAll // (Final|Native|Public|BlueprintCallable) // @ game+0x101e9b0
	void SetSortOrder(int32_t NewValue, bool propagateToChildrenCanvas); // Function LGUI.LGUICanvas.SetSortOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x101e8e0
	void SetRenderTarget(struct UTextureRenderTarget2D* Value); // Function LGUI.LGUICanvas.SetRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x101e7d0
	void SetRenderMode(enum class ELGUIRenderMode Value); // Function LGUI.LGUICanvas.SetRenderMode // (Final|Native|Public|BlueprintCallable) // @ game+0x101e750
	void SetRectClipFeather(struct FVector2D newFeather); // Function LGUI.LGUICanvas.SetRectClipFeather // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x101e650
	void SetProjectionParameters(enum class ECameraProjectionMode InProjectionType, float InFovAngle, float InNearClipPlane, float InFarClipPlane); // Function LGUI.LGUICanvas.SetProjectionParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x101e470
	void SetPixelPerfect(bool Value); // Function LGUI.LGUICanvas.SetPixelPerfect // (Final|Native|Public|BlueprintCallable) // @ game+0x101e3e0
	void SetInheriRectClip(bool newBool); // Function LGUI.LGUICanvas.SetInheriRectClip // (Final|Native|Public|BlueprintCallable) // @ game+0x101e250
	void SetDynamicPixelsPerUnit(float NewValue); // Function LGUI.LGUICanvas.SetDynamicPixelsPerUnit // (Final|Native|Public|BlueprintCallable) // @ game+0x101e0d0
	void SetClipType(enum class ELGUICanvasClipType newClipType); // Function LGUI.LGUICanvas.SetClipType // (Final|Native|Public|BlueprintCallable) // @ game+0x101e050
	void SetClipTexture(struct UTexture* newTexture); // Function LGUI.LGUICanvas.SetClipTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x101dfc0
	int32_t GetSortOrder(); // Function LGUI.LGUICanvas.GetSortOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101df80
	bool GetRequireUV3(); // Function LGUI.LGUICanvas.GetRequireUV3 // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101df30
	bool GetRequireUV2(); // Function LGUI.LGUICanvas.GetRequireUV2 // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101df00
	bool GetRequireUV1(); // Function LGUI.LGUICanvas.GetRequireUV1 // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101ded0
	bool GetRequireTangent(); // Function LGUI.LGUICanvas.GetRequireTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dea0
	bool GetRequireNormal(); // Function LGUI.LGUICanvas.GetRequireNormal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101de70
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function LGUI.LGUICanvas.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101de50
	enum class ELGUIRenderMode GetRenderMode(); // Function LGUI.LGUICanvas.GetRenderMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101de30
	bool GetPixelPerfect(); // Function LGUI.LGUICanvas.GetPixelPerfect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101ddc0
	bool GetInheritRectClip(); // Function LGUI.LGUICanvas.GetInheritRectClip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dd30
	float GetDynamicPixelsPerUnit(); // Function LGUI.LGUICanvas.GetDynamicPixelsPerUnit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dcd0
	enum class ELGUICanvasClipType GetClipType(); // Function LGUI.LGUICanvas.GetClipType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dcb0
	struct UTexture* GetClipTexture(); // Function LGUI.LGUICanvas.GetClipTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dc90
	struct FVector2D GetClipFeather(); // Function LGUI.LGUICanvas.GetClipFeather // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dc60
	struct UTextureRenderTarget2D* GetActualRenderTarget(); // Function LGUI.LGUICanvas.GetActualRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dc30
	enum class ELGUIRenderMode GetActualRenderMode(); // Function LGUI.LGUICanvas.GetActualRenderMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dc00
	bool GetActualPixelPerfect(); // Function LGUI.LGUICanvas.GetActualPixelPerfect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dbd0
	float GetActualDynamicPixelsPerUnit(); // Function LGUI.LGUICanvas.GetActualDynamicPixelsPerUnit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dba0
	enum class ELGUICanvasClipType GetActualClipType(); // Function LGUI.LGUICanvas.GetActualClipType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101db70
};

// Class LGUI.LGUICanvasScaler
// Size: 0xf0 (Inherited: 0xb0)
struct ULGUICanvasScaler : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	enum class ECameraProjectionMode ProjectionType; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float FOVAngle; // 0xbc(0x04)
	float NearClipPlane; // 0xc0(0x04)
	float FarClipPlane; // 0xc4(0x04)
	enum class LGUIScaleMode UIScaleMode; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FVector2D ReferenceResolution; // 0xcc(0x08)
	float MatchFromWidthToHeight; // 0xd4(0x04)
	enum class LGUIScreenMatchMode ScreenMatchMode; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct ULGUICanvas* Canvas; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)

	void SetUIScaleMode(enum class LGUIScaleMode Value); // Function LGUI.LGUICanvasScaler.SetUIScaleMode // (Final|Native|Public|BlueprintCallable) // @ game+0x101ebf0
	void SetScreenMatchMode(enum class LGUIScreenMatchMode Value); // Function LGUI.LGUICanvasScaler.SetScreenMatchMode // (Final|Native|Public|BlueprintCallable) // @ game+0x101e860
	void SetReferenceResolution(struct FVector2D Value); // Function LGUI.LGUICanvasScaler.SetReferenceResolution // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x101e6d0
	void SetProjectionType(enum class ECameraProjectionMode Value); // Function LGUI.LGUICanvasScaler.SetProjectionType // (Final|Native|Public|BlueprintCallable) // @ game+0x101e5d0
	void SetNearClipPlane(float Value); // Function LGUI.LGUICanvasScaler.SetNearClipPlane // (Final|Native|Public|BlueprintCallable) // @ game+0x101e360
	void SetMatchFromWidthToHeight(float Value); // Function LGUI.LGUICanvasScaler.SetMatchFromWidthToHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x101e2e0
	void SetFovAngle(float Value); // Function LGUI.LGUICanvasScaler.SetFovAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x101e1d0
	void SetFarClipPlane(float Value); // Function LGUI.LGUICanvasScaler.SetFarClipPlane // (Final|Native|Public|BlueprintCallable) // @ game+0x101e150
	enum class LGUIScaleMode GetUIScaleMode(); // Function LGUI.LGUICanvasScaler.GetUIScaleMode // (Final|Native|Public|BlueprintCallable) // @ game+0x101dfa0
	enum class LGUIScreenMatchMode GetScreenMatchMode(); // Function LGUI.LGUICanvasScaler.GetScreenMatchMode // (Final|Native|Public|BlueprintCallable) // @ game+0x101df60
	struct FVector2D GetReferenceResolution(); // Function LGUI.LGUICanvasScaler.GetReferenceResolution // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x101de00
	enum class ECameraProjectionMode GetProjectionType(); // Function LGUI.LGUICanvasScaler.GetProjectionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dde0
	float GetNearClipPlane(); // Function LGUI.LGUICanvasScaler.GetNearClipPlane // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dda0
	float GetMatchFromWidthToHeight(); // Function LGUI.LGUICanvasScaler.GetMatchFromWidthToHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x101dd80
	float GetFovAngle(); // Function LGUI.LGUICanvasScaler.GetFovAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dd10
	float GetFarClipPlane(); // Function LGUI.LGUICanvasScaler.GetFarClipPlane // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dcf0
	struct FVector2D ConvertPositionFromViewportToLGUICanvas(struct FVector2D position); // Function LGUI.LGUICanvasScaler.ConvertPositionFromViewportToLGUICanvas // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dad0
	struct FVector2D ConvertPositionFromLGUICanvasToViewport(struct FVector2D position); // Function LGUI.LGUICanvasScaler.ConvertPositionFromLGUICanvasToViewport // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x101da30
};

// Class LGUI.LGUIDataManager
// Size: 0x78 (Inherited: 0x28)
struct ULGUIDataManager : UObject {
	struct TMap<struct UTexture2D*, struct ULGUISpriteData*> Texture2DMapping; // 0x28(0x50)

	struct ULGUIDataManager* GetLGUIDataManager(); // Function LGUI.LGUIDataManager.GetLGUIDataManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x101dd50
	struct ULGUIDataManager* GetInstance(); // Function LGUI.LGUIDataManager.GetInstance // (Final|Native|Static|Public) // @ game+0x101dd50
};

// Class LGUI.LGUIEventSystem
// Size: 0x158 (Inherited: 0xb0)
struct ULGUIEventSystem : UActorComponent {
	char pad_B0[0x1]; // 0xb0(0x01)
	bool bRayEventEnable; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct TMap<int32_t, struct ULGUIPointerEventData*> pointerEventDataMap; // 0xb8(0x50)
	char pad_108[0x30]; // 0x108(0x30)
	enum class ELGUIPointerInputType defaultInputType; // 0x138(0x01)
	enum class ELGUIEventFireType eventFireTypeForNavigation; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float navigateInputInterval; // 0x13c(0x04)
	float navigateInputIntervalForFirstTime; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct USceneComponent* selectedComponent; // 0x148(0x08)
	struct USceneComponent* highlightedComponent; // 0x150(0x08)

	void UnregisterHitEvent(struct FLGUIDelegateHandleWrapper InHandle); // Function LGUI.LGUIEventSystem.UnregisterHitEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10235e0
	void UnregisterGlobalListener(struct FLGUIDelegateHandleWrapper InHandle); // Function LGUI.LGUIEventSystem.UnregisterGlobalListener // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1023550
	void SetSelectComponentWithDefault(struct USceneComponent* InSelectComp); // Function LGUI.LGUIEventSystem.SetSelectComponentWithDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1023420
	void SetSelectComponent(struct USceneComponent* InSelectComp, struct ULGUIBaseEventData* eventData, enum class ELGUIEventFireType eventFireType); // Function LGUI.LGUIEventSystem.SetSelectComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1023310
	void SetRaycastEnable(bool enable, bool ClearEvent); // Function LGUI.LGUIEventSystem.SetRaycastEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x1023240
	void SetHighlightedComponentForNavigation(struct USceneComponent* InComp); // Function LGUI.LGUIEventSystem.SetHighlightedComponentForNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x1023120
	struct FLGUIDelegateHandleWrapper RegisterHitEvent(struct FDelegate InDelegate); // Function LGUI.LGUIEventSystem.RegisterHitEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1022e10
	struct FLGUIDelegateHandleWrapper RegisterGlobalListener(struct FDelegate InDelegate); // Function LGUI.LGUIEventSystem.RegisterGlobalListener // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1022d50
	bool IsNavigationActive(); // Function LGUI.LGUIEventSystem.IsNavigationActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xef7790
	void InputTrigger(bool inTriggerPress, enum class EMouseButtonType inMouseButtonType); // Function LGUI.LGUIEventSystem.InputTrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x1022a40
	void InputScroll(float inAxisValue); // Function LGUI.LGUIEventSystem.InputScroll // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10229d0
	void InputNavigationUp(); // Function LGUI.LGUIEventSystem.InputNavigationUp // (Final|Native|Public|BlueprintCallable) // @ game+0x10229b0
	void InputNavigationRight(); // Function LGUI.LGUIEventSystem.InputNavigationRight // (Final|Native|Public|BlueprintCallable) // @ game+0x10229b0
	void InputNavigationPrev(); // Function LGUI.LGUIEventSystem.InputNavigationPrev // (Final|Native|Public|BlueprintCallable) // @ game+0x10229b0
	void InputNavigationNext(); // Function LGUI.LGUIEventSystem.InputNavigationNext // (Final|Native|Public|BlueprintCallable) // @ game+0x10229b0
	void InputNavigationLeft(); // Function LGUI.LGUIEventSystem.InputNavigationLeft // (Final|Native|Public|BlueprintCallable) // @ game+0x10229b0
	void InputNavigationEnd(); // Function LGUI.LGUIEventSystem.InputNavigationEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x10229b0
	void InputNavigationDown(); // Function LGUI.LGUIEventSystem.InputNavigationDown // (Final|Native|Public|BlueprintCallable) // @ game+0x10229b0
	void InputNavigationBegin(); // Function LGUI.LGUIEventSystem.InputNavigationBegin // (Final|Native|Public|BlueprintCallable) // @ game+0x10229b0
	struct ULGUIEventSystem* GetLGUIEventSystemInstance(struct UObject* WorldContextObject); // Function LGUI.LGUIEventSystem.GetLGUIEventSystemInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10228c0
	struct USceneComponent* GetHighlightedComponentForNavigation(); // Function LGUI.LGUIEventSystem.GetHighlightedComponentForNavigation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1022860
	struct USceneComponent* GetCurrentSelectedComponent(); // Function LGUI.LGUIEventSystem.GetCurrentSelectedComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1022800
	struct ULGUIBaseInputModule* GetCurrentInputModule(); // Function LGUI.LGUIEventSystem.GetCurrentInputModule // (Final|Native|Public|BlueprintCallable) // @ game+0x10227d0
	void ClearEvent(); // Function LGUI.LGUIEventSystem.ClearEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x10227b0
};

// Class LGUI.LGUIEventSystemActor
// Size: 0x228 (Inherited: 0x220)
struct ALGUIEventSystemActor : AActor {
	struct ULGUIEventSystem* eventSystem; // 0x220(0x08)
};

// Class LGUI.LGUIFontData
// Size: 0x170 (Inherited: 0x28)
struct ULGUIFontData : UObject {
	struct FString fontFilePath; // 0x28(0x10)
	bool useRelativeFilePath; // 0x38(0x01)
	bool useExternalFileOrEmbedInToUAsset; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float fixedVerticalOffset; // 0x3c(0x04)
	float italicAngle; // 0x40(0x04)
	float boldRatio; // 0x44(0x04)
	struct FName packingTag; // 0x48(0x08)
	struct UTexture2D* Texture; // 0x50(0x08)
	char pad_58[0x10]; // 0x58(0x10)
	struct TArray<struct TWeakObjectPtr<struct UUIText>> renderTextArray; // 0x68(0x10)
	struct TArray<char> fontBinaryArray; // 0x78(0x10)
	struct TArray<char> tempFontBinaryArray; // 0x88(0x10)
	char pad_98[0xd8]; // 0x98(0xd8)
};

// Class LGUI.LGUIImageSequencePlayer
// Size: 0xd0 (Inherited: 0xb0)
struct ULGUIImageSequencePlayer : UActorComponent {
	float FPS; // 0xb0(0x04)
	bool Loop; // 0xb4(0x01)
	bool playOnStart; // 0xb5(0x01)
	char pad_B6[0x1a]; // 0xb6(0x1a)

	void Stop(); // Function LGUI.LGUIImageSequencePlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x10234d0
	void SetLoop(bool Value); // Function LGUI.LGUIImageSequencePlayer.SetLoop // (Final|Native|Public|BlueprintCallable) // @ game+0x10231b0
	void SetFps(float Value); // Function LGUI.LGUIImageSequencePlayer.SetFps // (Final|Native|Public|BlueprintCallable) // @ game+0x10230a0
	void SeekTime(float Time); // Function LGUI.LGUIImageSequencePlayer.SeekTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1023020
	void SeekFrame(int32_t FrameNumber); // Function LGUI.LGUIImageSequencePlayer.SeekFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x1022f90
	void Play(); // Function LGUI.LGUIImageSequencePlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x1022cf0
	void Pause(); // Function LGUI.LGUIImageSequencePlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x1022cd0
	bool GetLoop(); // Function LGUI.LGUIImageSequencePlayer.GetLoop // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1022950
	bool GetIsPlaying(); // Function LGUI.LGUIImageSequencePlayer.GetIsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1022880
	float GetFps(); // Function LGUI.LGUIImageSequencePlayer.GetFps // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x100fce0
	float GetDuration(); // Function LGUI.LGUIImageSequencePlayer.GetDuration // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1022820
};

// Class LGUI.LGUIEditorManagerObject
// Size: 0x30 (Inherited: 0x28)
struct ULGUIEditorManagerObject : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class LGUI.LGUIManagerActor
// Size: 0x2b0 (Inherited: 0x220)
struct ALGUIManagerActor : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct TArray<struct UUIItem*> allUIItem; // 0x228(0x10)
	struct TArray<struct ULGUICanvas*> allCanvas; // 0x238(0x10)
	struct TArray<struct ULGUIBaseRaycaster*> raycasterArray; // 0x248(0x10)
	struct ULGUIBaseInputModule* currentInputModule; // 0x258(0x08)
	struct TArray<struct UUISelectableComponent*> allSelectableArray; // 0x260(0x10)
	struct TArray<struct TWeakObjectPtr<struct ULGUIBehaviour>> LGUIBehavioursForUpdate; // 0x270(0x10)
	char pad_280[0x8]; // 0x280(0x08)
	struct TArray<struct AActor*> AllActors_PrefabSystemProcessing; // 0x288(0x10)
	struct TArray<struct FLGUIBehaviourArrayContainer> LGUIBehaviours_PrefabSystemProcessing; // 0x298(0x10)
	char pad_2A8[0x8]; // 0x2a8(0x08)
};

// Class LGUI.LGUIManagerComponent_DuringPhysics
// Size: 0xb8 (Inherited: 0xb0)
struct ULGUIManagerComponent_DuringPhysics : UActorComponent {
	struct ALGUIManagerActor* ManagerActor; // 0xb0(0x08)
};

// Class LGUI.LGUIMeshComponent
// Size: 0x4b0 (Inherited: 0x470)
struct ULGUIMeshComponent : UMeshComponent {
	char pad_470[0x40]; // 0x470(0x40)
};

// Class LGUI.LGUIPlayTween
// Size: 0xb0 (Inherited: 0x28)
struct ULGUIPlayTween : UObject {
	enum class LTweenLoop loopType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t LoopCount; // 0x2c(0x04)
	enum class LTweenEase easeType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UCurveFloat* easeCurve; // 0x38(0x08)
	float Duration; // 0x40(0x04)
	float startDelay; // 0x44(0x04)
	struct FLGUIDrawableEvent OnStart; // 0x48(0x18)
	struct FLGUIDrawableEvent onUpdateProgress; // 0x60(0x18)
	struct FLGUIDrawableEvent OnComplete; // 0x78(0x18)
	struct ULTweener* tweener; // 0x90(0x08)
	char pad_98[0x18]; // 0x98(0x18)

	void UnregisterOnComplete(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.LGUIPlayTween.UnregisterOnComplete // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1023670
	void Stop(); // Function LGUI.LGUIPlayTween.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x10234f0
	void Start(); // Function LGUI.LGUIPlayTween.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x10234b0
	struct FLGUIDelegateHandleWrapper RegisterOnComplete(struct FDelegate InDelegate); // Function LGUI.LGUIPlayTween.RegisterOnComplete // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1022ed0
	struct ULTweener* GetTweener(); // Function LGUI.LGUIPlayTween.GetTweener // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1022990
};

// Class LGUI.LGUIPlayTween_Float
// Size: 0xd0 (Inherited: 0xb0)
struct ULGUIPlayTween_Float : ULGUIPlayTween {
	float from; // 0xb0(0x04)
	float to; // 0xb4(0x04)
	struct FLGUIDrawableEvent onUpdateValue; // 0xb8(0x18)
};

// Class LGUI.LGUIPlayTween_Color
// Size: 0xd0 (Inherited: 0xb0)
struct ULGUIPlayTween_Color : ULGUIPlayTween {
	struct FColor from; // 0xb0(0x04)
	struct FColor to; // 0xb4(0x04)
	struct FLGUIDrawableEvent onUpdateValue; // 0xb8(0x18)
};

// Class LGUI.LGUIPlayTween_Int
// Size: 0xd0 (Inherited: 0xb0)
struct ULGUIPlayTween_Int : ULGUIPlayTween {
	int32_t from; // 0xb0(0x04)
	int32_t to; // 0xb4(0x04)
	struct FLGUIDrawableEvent onUpdateValue; // 0xb8(0x18)
};

// Class LGUI.LGUIPlayTween_LinearColor
// Size: 0xe8 (Inherited: 0xb0)
struct ULGUIPlayTween_LinearColor : ULGUIPlayTween {
	struct FLinearColor from; // 0xb0(0x10)
	struct FLinearColor to; // 0xc0(0x10)
	struct FLGUIDrawableEvent onUpdateValue; // 0xd0(0x18)
};

// Class LGUI.LGUIPlayTween_Quaternion
// Size: 0xf0 (Inherited: 0xb0)
struct ULGUIPlayTween_Quaternion : ULGUIPlayTween {
	struct FQuat from; // 0xb0(0x10)
	struct FQuat to; // 0xc0(0x10)
	struct FLGUIDrawableEvent onUpdateValue; // 0xd0(0x18)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class LGUI.LGUIPlayTween_Rotator
// Size: 0xe0 (Inherited: 0xb0)
struct ULGUIPlayTween_Rotator : ULGUIPlayTween {
	struct FRotator from; // 0xb0(0x0c)
	struct FRotator to; // 0xbc(0x0c)
	struct FLGUIDrawableEvent onUpdateValue; // 0xc8(0x18)
};

// Class LGUI.LGUIPlayTween_Vector2
// Size: 0xd8 (Inherited: 0xb0)
struct ULGUIPlayTween_Vector2 : ULGUIPlayTween {
	struct FVector2D from; // 0xb0(0x08)
	struct FVector2D to; // 0xb8(0x08)
	struct FLGUIDrawableEvent onUpdateValue; // 0xc0(0x18)
};

// Class LGUI.LGUIPlayTween_Vector3
// Size: 0xe0 (Inherited: 0xb0)
struct ULGUIPlayTween_Vector3 : ULGUIPlayTween {
	struct FVector from; // 0xb0(0x0c)
	struct FVector to; // 0xbc(0x0c)
	struct FLGUIDrawableEvent onUpdateValue; // 0xc8(0x18)
};

// Class LGUI.LGUIPlayTween_Vector4
// Size: 0xf0 (Inherited: 0xb0)
struct ULGUIPlayTween_Vector4 : ULGUIPlayTween {
	struct FVector4 from; // 0xb0(0x10)
	struct FVector4 to; // 0xc0(0x10)
	struct FLGUIDrawableEvent onUpdateValue; // 0xd0(0x18)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class LGUI.LGUIPlayTweenComponent
// Size: 0xc0 (Inherited: 0xb0)
struct ULGUIPlayTweenComponent : UActorComponent {
	bool playOnStart; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct ULGUIPlayTween* playTween; // 0xb8(0x08)

	void Stop(); // Function LGUI.LGUIPlayTweenComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x1023510
	void Play(); // Function LGUI.LGUIPlayTweenComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x1022d10
	struct ULGUIPlayTween* GetPlayTween(); // Function LGUI.LGUIPlayTweenComponent.GetPlayTween // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1022970
};

// Class LGUI.LGUIPlayTweenSequenceComponent
// Size: 0xe8 (Inherited: 0xb0)
struct ULGUIPlayTweenSequenceComponent : UActorComponent {
	bool playOnStart; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct ULGUIPlayTween*> playTweenArray; // 0xb8(0x10)
	struct FLGUIDrawableEvent OnComplete; // 0xc8(0x18)
	char pad_E0[0x8]; // 0xe0(0x08)

	void Stop(); // Function LGUI.LGUIPlayTweenSequenceComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x1023530
	void Play(); // Function LGUI.LGUIPlayTweenSequenceComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x1022d30
};

// Class LGUI.LGUIPointerClickInterface
// Size: 0x28 (Inherited: 0x28)
struct ULGUIPointerClickInterface : UInterface {

	bool OnPointerClick(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerClickInterface.OnPointerClick // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022b90
};

// Class LGUI.LGUIPointerDownUpInterface
// Size: 0x28 (Inherited: 0x28)
struct ULGUIPointerDownUpInterface : UInterface {

	bool OnPointerUp(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerDownUpInterface.OnPointerUp // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022b90
	bool OnPointerDown(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerDownUpInterface.OnPointerDown // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022c30
};

// Class LGUI.LGUIPointerDragDropInterface
// Size: 0x28 (Inherited: 0x28)
struct ULGUIPointerDragDropInterface : UInterface {

	bool OnPointerDragDrop(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerDragDropInterface.OnPointerDragDrop // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022b90
};

// Class LGUI.LGUIPointerDragEnterExitInterface
// Size: 0x28 (Inherited: 0x28)
struct ULGUIPointerDragEnterExitInterface : UInterface {

	bool OnPointerDragExit(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerDragEnterExitInterface.OnPointerDragExit // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022b90
	bool OnPointerDragEnter(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerDragEnterExitInterface.OnPointerDragEnter // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022c30
};

// Class LGUI.LGUIPointerDragInterface
// Size: 0x28 (Inherited: 0x28)
struct ULGUIPointerDragInterface : UInterface {

	bool OnPointerEndDrag(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerDragInterface.OnPointerEndDrag // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022b90
	bool OnPointerDrag(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerDragInterface.OnPointerDrag // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022c30
	bool OnPointerBeginDrag(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerDragInterface.OnPointerBeginDrag // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022af0
};

// Class LGUI.LGUIPointerEnterExitInterface
// Size: 0x28 (Inherited: 0x28)
struct ULGUIPointerEnterExitInterface : UInterface {

	bool OnPointerExit(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerEnterExitInterface.OnPointerExit // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022b90
	bool OnPointerEnter(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerEnterExitInterface.OnPointerEnter // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022c30
};

// Class LGUI.LGUIPointerEventData
// Size: 0x1a0 (Inherited: 0x38)
struct ULGUIPointerEventData : ULGUIBaseEventData {
	enum class ELGUIPointerInputType inputType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t pointerID; // 0x3c(0x04)
	struct FVector pointerPosition; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct USceneComponent* currentComponent; // 0x50(0x08)
	struct USceneComponent* enterComponent; // 0x58(0x08)
	struct TArray<struct USceneComponent*> enterComponentStack; // 0x60(0x10)
	struct TArray<struct USceneComponent*> hoverComponentArray; // 0x70(0x10)
	struct FVector worldPoint; // 0x80(0x0c)
	struct FVector WorldNormal; // 0x8c(0x0c)
	struct FVector moveDelta; // 0x98(0x0c)
	struct FVector cumulativeMoveDelta; // 0xa4(0x0c)
	float scrollAxisValue; // 0xb0(0x04)
	struct FVector rayOrigin; // 0xb4(0x0c)
	struct FVector rayDirection; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct ULGUIBaseRaycaster* raycaster; // 0xd0(0x08)
	enum class EMouseButtonType mouseButtonType; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct USceneComponent* pressComponent; // 0xe0(0x08)
	struct FVector pressWorldPoint; // 0xe8(0x0c)
	struct FVector pressWorldNormal; // 0xf4(0x0c)
	float pressDistance; // 0x100(0x04)
	struct FVector pressRayOrigin; // 0x104(0x0c)
	struct FVector pressRayDirection; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FTransform pressWorldToLocalTransform; // 0x120(0x30)
	struct ULGUIBaseRaycaster* pressRaycaster; // 0x150(0x08)
	float clickTime; // 0x158(0x04)
	float pressTime; // 0x15c(0x04)
	bool isDragging; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct USceneComponent* dragComponent; // 0x168(0x08)
	struct FVector dragRayOrigin; // 0x170(0x0c)
	struct FVector dragRayDirection; // 0x17c(0x0c)
	char pad_188[0x18]; // 0x188(0x18)

	struct FVector GetWorldPointSpherical(); // Function LGUI.LGUIPointerEventData.GetWorldPointSpherical // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10267e0
	struct FVector GetWorldPointInPlane(); // Function LGUI.LGUIPointerEventData.GetWorldPointInPlane // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10267a0
	struct FVector GetLocalPointInPlane(); // Function LGUI.LGUIPointerEventData.GetLocalPointInPlane // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026100
	struct FVector GetDragRayOrigin(); // Function LGUI.LGUIPointerEventData.GetDragRayOrigin // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026040
	struct FVector GetDragRayDirection(); // Function LGUI.LGUIPointerEventData.GetDragRayDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026000
	struct FVector GetCumulativeMoveDelta(); // Function LGUI.LGUIPointerEventData.GetCumulativeMoveDelta // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1025fc0
};

// Class LGUI.LGUIPointerScrollInterface
// Size: 0x28 (Inherited: 0x28)
struct ULGUIPointerScrollInterface : UInterface {

	bool OnPointerScroll(struct ULGUIPointerEventData* eventData); // Function LGUI.LGUIPointerScrollInterface.OnPointerScroll // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022b90
};

// Class LGUI.LGUIPointerSelectDeselectInterface
// Size: 0x28 (Inherited: 0x28)
struct ULGUIPointerSelectDeselectInterface : UInterface {

	bool OnPointerSelect(struct ULGUIBaseEventData* eventData); // Function LGUI.LGUIPointerSelectDeselectInterface.OnPointerSelect // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022c30
	bool OnPointerDeselect(struct ULGUIBaseEventData* eventData); // Function LGUI.LGUIPointerSelectDeselectInterface.OnPointerDeselect // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1022b90
};

// Class LGUI.LGUIPrefab
// Size: 0x90 (Inherited: 0x28)
struct ULGUIPrefab : UObject {
	struct TArray<struct UObject*> ReferenceAssetList; // 0x28(0x10)
	struct TArray<struct FString> ReferenceStringList; // 0x38(0x10)
	struct TArray<struct FName> ReferenceNameList; // 0x48(0x10)
	struct TArray<struct FText> ReferenceTextList; // 0x58(0x10)
	struct TArray<struct UObject*> ReferenceClassList; // 0x68(0x10)
	uint16_t EngineMajorVersion; // 0x78(0x02)
	uint16_t EngineMinorVersion; // 0x7a(0x02)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<char> BinaryDataForBuild; // 0x80(0x10)
};

// Class LGUI.LGUIPrefabActor
// Size: 0x228 (Inherited: 0x220)
struct ALGUIPrefabActor : AActor {
	struct ULGUIPrefabHelperComponent* PrefabComponent; // 0x220(0x08)
};

// Class LGUI.LGUIPrefabHelperComponent
// Size: 0x200 (Inherited: 0x200)
struct ULGUIPrefabHelperComponent : USceneComponent {
};

// Class LGUI.LGUIScreenSpaceInteraction
// Size: 0x260 (Inherited: 0x250)
struct ULGUIScreenSpaceInteraction : ULGUI_UIRaycaster {
	float clickThreshold; // 0x248(0x04)
	bool holdToDrag; // 0x24c(0x01)
	float holdToDragTime; // 0x250(0x04)
	char pad_259[0x7]; // 0x259(0x07)

	void SetHoldToDragTime(float Value); // Function LGUI.LGUIScreenSpaceInteraction.SetHoldToDragTime // (Final|Native|Public|BlueprintCallable) // @ game+0x10268f0
	void SetHoldToDrag(bool Value); // Function LGUI.LGUIScreenSpaceInteraction.SetHoldToDrag // (Final|Native|Public|BlueprintCallable) // @ game+0x10269f0
	void SetClickThreshold(float Value); // Function LGUI.LGUIScreenSpaceInteraction.SetClickThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x10268f0
	float GetHoldToDragTime(); // Function LGUI.LGUIScreenSpaceInteraction.GetHoldToDragTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10260c0
	bool GetHoldToDrag(); // Function LGUI.LGUIScreenSpaceInteraction.GetHoldToDrag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026080
	float GetClickThreshold(); // Function LGUI.LGUIScreenSpaceInteraction.GetClickThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1025f80
};

// Class LGUI.LGUIScreenSpaceInteractionForNoneUI
// Size: 0x250 (Inherited: 0x240)
struct ULGUIScreenSpaceInteractionForNoneUI : ULGUI_WorldRaycaster {
	float clickThreshold; // 0x240(0x04)
	bool holdToDrag; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	float holdToDragTime; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)

	void SetHoldToDragTime(float Value); // Function LGUI.LGUIScreenSpaceInteractionForNoneUI.SetHoldToDragTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1026970
	void SetHoldToDrag(bool Value); // Function LGUI.LGUIScreenSpaceInteractionForNoneUI.SetHoldToDrag // (Final|Native|Public|BlueprintCallable) // @ game+0x1026a80
	void SetClickThreshold(float Value); // Function LGUI.LGUIScreenSpaceInteractionForNoneUI.SetClickThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x1026970
	float GetHoldToDragTime(); // Function LGUI.LGUIScreenSpaceInteractionForNoneUI.GetHoldToDragTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1025f80
	bool GetHoldToDrag(); // Function LGUI.LGUIScreenSpaceInteractionForNoneUI.GetHoldToDrag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10260a0
	float GetClickThreshold(); // Function LGUI.LGUIScreenSpaceInteractionForNoneUI.GetClickThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1025fa0
};

// Class LGUI.LGUISettings
// Size: 0x88 (Inherited: 0x28)
struct ULGUISettings : UObject {
	struct FLGUIAtlasSettings defaultAtlasSetting; // 0x28(0x08)
	struct TMap<struct FName, struct FLGUIAtlasSettings> atlasSettingForSpecificPackingTag; // 0x30(0x50)
	enum class ETraceTypeQuery defaultTraceChannel; // 0x80(0x01)
	enum class ELGUIScreenSpaceUIAntiAliasing antiAliasing; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// Class LGUI.LGUIEditorSettings
// Size: 0x28 (Inherited: 0x28)
struct ULGUIEditorSettings : UObject {
};

// Class LGUI.LGUISpriteData
// Size: 0x70 (Inherited: 0x28)
struct ULGUISpriteData : UObject {
	struct UTexture2D* SpriteTexture; // 0x28(0x08)
	struct FLGUISpriteInfo spriteInfo; // 0x30(0x2c)
	struct FName packingTag; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture2D* atlasTexture; // 0x68(0x08)

	void InitSpriteData(); // Function LGUI.LGUISpriteData.InitSpriteData // (Final|Native|Public|BlueprintCallable) // @ game+0x10268d0
	struct FLGUISpriteInfo InitAndGetSpriteInfo(); // Function LGUI.LGUISpriteData.InitAndGetSpriteInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x1026880
	struct UTexture2D* InitAndGetAtlasTexture(); // Function LGUI.LGUISpriteData.InitAndGetAtlasTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x1026850
	bool HavePackingTag(); // Function LGUI.LGUISpriteData.HavePackingTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026820
	void GetSpriteUV(float UV0X, float UV0Y, float UV3X, float UV3Y); // Function LGUI.LGUISpriteData.GetSpriteUV // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026600
	struct UTexture2D* GetSpriteTexture(); // Function LGUI.LGUISpriteData.GetSpriteTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10265e0
	void GetSpriteSize(int32_t Width, int32_t Height); // Function LGUI.LGUISpriteData.GetSpriteSize // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026500
	struct FLGUISpriteInfo GetSpriteInfo(); // Function LGUI.LGUISpriteData.GetSpriteInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10264b0
	void GetSpriteBorderUV(float borderUV0X, float borderUV0Y, float borderUV3X, float borderUV3Y); // Function LGUI.LGUISpriteData.GetSpriteBorderUV // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026310
	void GetSpriteBorderSize(int32_t borderLeft, int32_t borderRight, int32_t borderTop, int32_t borderBottom); // Function LGUI.LGUISpriteData.GetSpriteBorderSize // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026170
	struct FName GetPackingTag(); // Function LGUI.LGUISpriteData.GetPackingTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026140
	struct UTexture2D* GetAtlasTexture(); // Function LGUI.LGUISpriteData.GetAtlasTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1025f50
	struct ULGUISpriteData* CreateLGUISpriteData(struct UObject* WorldContextObject, struct UTexture2D* inSpriteTexture, struct FVector2D inHorizontalBorder, struct FVector2D inVerticalBorder, struct FName inPackingTag); // Function LGUI.LGUISpriteData.CreateLGUISpriteData // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1025dc0
};

// Class LGUI.LGUIWorldSpaceInteraction
// Size: 0x260 (Inherited: 0x250)
struct ULGUIWorldSpaceInteraction : ULGUI_UIRaycaster {
	float clickThreshold; // 0x248(0x04)
	bool holdToDrag; // 0x24c(0x01)
	float holdToDragTime; // 0x250(0x04)
	enum class ELGUIWorldSpaceInteractionSource interactionSource; // 0x254(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)

	void SetInteractionSource(enum class ELGUIWorldSpaceInteractionSource Value); // Function LGUI.LGUIWorldSpaceInteraction.SetInteractionSource // (Final|Native|Public|BlueprintCallable) // @ game+0x1026b10
	void SetHoldToDragTime(float Value); // Function LGUI.LGUIWorldSpaceInteraction.SetHoldToDragTime // (Final|Native|Public|BlueprintCallable) // @ game+0x10268f0
	void SetHoldToDrag(bool Value); // Function LGUI.LGUIWorldSpaceInteraction.SetHoldToDrag // (Final|Native|Public|BlueprintCallable) // @ game+0x10269f0
	void SetClickThreshold(float Value); // Function LGUI.LGUIWorldSpaceInteraction.SetClickThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x10268f0
	enum class ELGUIWorldSpaceInteractionSource GetInteractionSource(); // Function LGUI.LGUIWorldSpaceInteraction.GetInteractionSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10260e0
	float GetHoldToDragTime(); // Function LGUI.LGUIWorldSpaceInteraction.GetHoldToDragTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10260c0
	bool GetHoldToDrag(); // Function LGUI.LGUIWorldSpaceInteraction.GetHoldToDrag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026080
	float GetClickThreshold(); // Function LGUI.LGUIWorldSpaceInteraction.GetClickThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1025f80
};

// Class LGUI.LGUIWorldSpaceInteractionForNoneUI
// Size: 0x250 (Inherited: 0x240)
struct ULGUIWorldSpaceInteractionForNoneUI : ULGUI_WorldRaycaster {
	float clickThreshold; // 0x240(0x04)
	bool holdToDrag; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	float holdToDragTime; // 0x248(0x04)
	enum class ELGUIWorldSpaceInteractionSource interactionSource; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)

	void SetInteractionSource(enum class ELGUIWorldSpaceInteractionSource Value); // Function LGUI.LGUIWorldSpaceInteractionForNoneUI.SetInteractionSource // (Final|Native|Public|BlueprintCallable) // @ game+0x1026b90
	void SetHoldToDragTime(float Value); // Function LGUI.LGUIWorldSpaceInteractionForNoneUI.SetHoldToDragTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1026970
	void SetHoldToDrag(bool Value); // Function LGUI.LGUIWorldSpaceInteractionForNoneUI.SetHoldToDrag // (Final|Native|Public|BlueprintCallable) // @ game+0x1026a80
	void SetClickThreshold(float Value); // Function LGUI.LGUIWorldSpaceInteractionForNoneUI.SetClickThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x1026970
	enum class ELGUIWorldSpaceInteractionSource GetInteractionSource(); // Function LGUI.LGUIWorldSpaceInteractionForNoneUI.GetInteractionSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1026080
	float GetHoldToDragTime(); // Function LGUI.LGUIWorldSpaceInteractionForNoneUI.GetHoldToDragTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1025f80
	bool GetHoldToDrag(); // Function LGUI.LGUIWorldSpaceInteractionForNoneUI.GetHoldToDrag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10260a0
	float GetClickThreshold(); // Function LGUI.LGUIWorldSpaceInteractionForNoneUI.GetClickThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1025fa0
};

// Class LGUI.NOS_UIManager
// Size: 0x100 (Inherited: 0x30)
struct UNOS_UIManager : UWorldSubsystem {
	struct TMap<struct FString, struct ULGUIBasePanel*> AllOpenUIPanel; // 0x30(0x50)
	struct TMap<struct FString, struct AUIBaseActor*> AllOpenUIPanel_NotBasePanel; // 0x80(0x50)
	struct TArray<struct AUIBaseActor*> EscUIList; // 0xd0(0x10)
	struct TArray<struct FString> CurOpenUIPanel; // 0xe0(0x10)
	struct ALGUIEventSystemActor* EventSystemActor; // 0xf0(0x08)
	struct AUIContainerActor* ScreenSpaceUIRoot; // 0xf8(0x08)

	struct FText TestLocalization(); // Function LGUI.NOS_UIManager.TestLocalization // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x102bd10
	struct ULGUIBasePanel* ShowUIPanel_Name(struct UObject* WorldContextObject, struct FString PrefabName, struct USceneComponent* AttachTo, bool IsEsc); // Function LGUI.NOS_UIManager.ShowUIPanel_Name // (Final|Native|Public|BlueprintCallable) // @ game+0x102bb60
	struct TArray<struct ULGUIBasePanel*> ShowUIPanel_Array(struct UObject* WorldContextObject, struct TMap<struct ULGUIPrefab*, struct FShowUIParameter> Prefabs); // Function LGUI.NOS_UIManager.ShowUIPanel_Array // (Final|Native|Public|BlueprintCallable) // @ game+0x102b9a0
	struct ULGUIBasePanel* ShowUIPanel(struct UObject* WorldContextObject, struct ULGUIPrefab* Prefab, struct USceneComponent* AttachTo, bool IsEsc); // Function LGUI.NOS_UIManager.ShowUIPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x102b840
	void OpenAllUIPanel(); // Function LGUI.NOS_UIManager.OpenAllUIPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x102abe0
	struct ULGUIBasePanel* LoadPrefab_Name(struct UObject* WorldContextObject, struct FString PrefabName, struct USceneComponent* AttachTo, struct AUIBaseActor* UIActor, bool IsEsc); // Function LGUI.NOS_UIManager.LoadPrefab_Name // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102a9c0
	struct ULGUIBasePanel* LoadPrefab(struct UObject* WorldContextObject, struct ULGUIPrefab* Prefab, struct USceneComponent* AttachTo, struct AUIBaseActor* UIActor, bool IsEsc); // Function LGUI.NOS_UIManager.LoadPrefab // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102a800
	void HideUIPanel_Name(struct FString PrefabName, bool isDestroy); // Function LGUI.NOS_UIManager.HideUIPanel_Name // (Final|Native|Public|BlueprintCallable) // @ game+0x102a560
	void HideUIPanel_Array(struct TMap<struct ULGUIPrefab*, bool> Prefabs); // Function LGUI.NOS_UIManager.HideUIPanel_Array // (Final|Native|Public|BlueprintCallable) // @ game+0x102a450
	void HideUIPanel(struct ULGUIPrefab* Prefab, bool isDestroy); // Function LGUI.NOS_UIManager.HideUIPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x102a380
	void HideAllUIPanel(bool isDestroy); // Function LGUI.NOS_UIManager.HideAllUIPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x102a2f0
	struct ULGUIBasePanel* GetUIPrefabCom(struct ULGUIPrefab* Prefab); // Function LGUI.NOS_UIManager.GetUIPrefabCom // (Final|Native|Public|BlueprintCallable) // @ game+0x102a1b0
	void GetUIActive(struct ULGUIPrefab* UIPrefab, bool IsCreate, bool UIActive, struct ULGUIBasePanel* Panel); // Function LGUI.NOS_UIManager.GetUIActive // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102a000
	struct USceneComponent* GetScreenSpaceUIRoot(); // Function LGUI.NOS_UIManager.GetScreenSpaceUIRoot // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1029fb0
	struct UNOS_UIManager* GetInstance(); // Function LGUI.NOS_UIManager.GetInstance // (Final|Native|Static|Public) // @ game+0x1029d80
	struct ALGUIEventSystemActor* GetEventSystemActor(); // Function LGUI.NOS_UIManager.GetEventSystemActor // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1029d30
	struct UActorComponent* CreateComponentToActor(struct UActorComponent* ComClass, struct AActor* targetActor); // Function LGUI.NOS_UIManager.CreateComponentToActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1029bb0
	void CloseEscTopUIPanel(); // Function LGUI.NOS_UIManager.CloseEscTopUIPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x10299a0
};

// Class LGUI.UIItem
// Size: 0x360 (Inherited: 0x200)
struct UUIItem : USceneComponent {
	char pad_200[0xe0]; // 0x200(0xe0)
	struct FUIWidget Widget; // 0x2e0(0x34)
	char pad_314[0x4]; // 0x314(0x04)
	struct UUIItem* cacheParentUIItem; // 0x318(0x08)
	struct TArray<struct UUIItem*> cacheUIChildren; // 0x320(0x10)
	bool inheritAlpha; // 0x330(0x01)
	char pad_331[0x2]; // 0x331(0x02)
	bool bIsUIActive; // 0x333(0x01)
	int32_t hierarchyIndex; // 0x334(0x04)
	struct FString DisplayName; // 0x338(0x10)
	bool bRaycastTarget; // 0x348(0x01)
	enum class ETraceTypeQuery TraceChannel; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	struct ULGUICanvas* RenderCanvas; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)

	void SetWidth(float newWidth); // Function LGUI.UIItem.SetWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1039260
	void SetWidget(struct FUIWidget InWidget); // Function LGUI.UIItem.SetWidget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1039190
	void SetVerticalStretch(struct FVector2D newStretch); // Function LGUI.UIItem.SetVerticalStretch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1039110
	void SetUIRelativeRotationQuat(struct FQuat NewRotation); // Function LGUI.UIItem.SetUIRelativeRotationQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1038ea0
	void SetUIRelativeRotation(struct FRotator NewRotation); // Function LGUI.UIItem.SetUIRelativeRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1038e10
	void SetUIRelativeLocationAndRotationQuat(struct FVector NewLocation, struct FQuat NewRotation); // Function LGUI.UIItem.SetUIRelativeLocationAndRotationQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1038d30
	void SetUIRelativeLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation); // Function LGUI.UIItem.SetUIRelativeLocationAndRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1038c50
	void SetUIRelativeLocation(struct FVector NewLocation); // Function LGUI.UIItem.SetUIRelativeLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1038bc0
	void SetUIParent(struct UUIItem* InParent, bool keepWorldTransform); // Function LGUI.UIItem.SetUIParent // (Final|Native|Public|BlueprintCallable) // @ game+0x1038af0
	void SetUIActive(bool Active); // Function LGUI.UIItem.SetUIActive // (Native|Public|BlueprintCallable) // @ game+0x1038a60
	void SetTraceChannel(enum class ETraceTypeQuery InTraceChannel); // Function LGUI.UIItem.SetTraceChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x10389e0
	void SetStretchTop(float newTop); // Function LGUI.UIItem.SetStretchTop // (Final|Native|Public|BlueprintCallable) // @ game+0x1038960
	void SetStretchRight(float newRight); // Function LGUI.UIItem.SetStretchRight // (Final|Native|Public|BlueprintCallable) // @ game+0x10388e0
	void SetStretchLeft(float newLeft); // Function LGUI.UIItem.SetStretchLeft // (Final|Native|Public|BlueprintCallable) // @ game+0x1038860
	void SetStretchBottom(float newBottom); // Function LGUI.UIItem.SetStretchBottom // (Final|Native|Public|BlueprintCallable) // @ game+0x10387e0
	void SetRaycastTarget(bool newBool); // Function LGUI.UIItem.SetRaycastTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x1038530
	void SetPivot(struct FVector2D Pivot); // Function LGUI.UIItem.SetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1038430
	void SetHorizontalStretch(struct FVector2D newStretch); // Function LGUI.UIItem.SetHorizontalStretch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1038210
	void SetHierarchyIndex(int32_t inInt); // Function LGUI.UIItem.SetHierarchyIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1038180
	void SetHeight(float newHeight); // Function LGUI.UIItem.SetHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1038100
	void SetDisplayName(struct FString InName); // Function LGUI.UIItem.SetDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x1037f10
	void SetDepth(int32_t Depth, bool propagateToChildren); // Function LGUI.UIItem.SetDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1037e40
	void SetColor(struct FColor Color); // Function LGUI.UIItem.SetColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1037d40
	void SetAsLastHierarchy(); // Function LGUI.UIItem.SetAsLastHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x1037d20
	void SetAsFirstHierarchy(); // Function LGUI.UIItem.SetAsFirstHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x1037d00
	void SetAnchorVAlign(enum class UIAnchorVerticalAlign align, bool keepRelativeLocation); // Function LGUI.UIItem.SetAnchorVAlign // (Final|Native|Public|BlueprintCallable) // @ game+0x1037c30
	void SetAnchorOffsetY(float newOffset); // Function LGUI.UIItem.SetAnchorOffsetY // (Final|Native|Public|BlueprintCallable) // @ game+0x1037bb0
	void SetAnchorOffsetX(float newOffset); // Function LGUI.UIItem.SetAnchorOffsetX // (Final|Native|Public|BlueprintCallable) // @ game+0x1037b30
	void SetAnchorOffset(struct FVector2D newOffset); // Function LGUI.UIItem.SetAnchorOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1037ab0
	void SetAnchorHAlign(enum class UIAnchorHorizontalAlign align, bool keepRelativeLocation); // Function LGUI.UIItem.SetAnchorHAlign // (Final|Native|Public|BlueprintCallable) // @ game+0x10379e0
	void SetAlpha(float newAlpha); // Function LGUI.UIItem.SetAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x1037960
	bool IsWorldSpaceUI(); // Function LGUI.UIItem.IsWorldSpaceUI // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037930
	bool IsUIActiveSelf(); // Function LGUI.UIItem.IsUIActiveSelf // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037910
	bool IsUIActiveInHierarchy(); // Function LGUI.UIItem.IsUIActiveInHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10378d0
	bool IsScreenSpaceOverlayUI(); // Function LGUI.UIItem.IsScreenSpaceOverlayUI // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10378a0
	bool IsRenderTargetUI(); // Function LGUI.UIItem.IsRenderTargetUI // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037870
	bool IsRaycastTarget(); // Function LGUI.UIItem.IsRaycastTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037850
	float GetWidth(); // Function LGUI.UIItem.GetWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037830
	struct FUIWidget GetWidget(); // Function LGUI.UIItem.GetWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10377e0
	enum class UIItemType GetUIItemType(); // Function LGUI.UIItem.GetUIItemType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037740
	enum class ETraceTypeQuery GetTraceChannel(); // Function LGUI.UIItem.GetTraceChannel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037720
	float GetStretchTop(); // Function LGUI.UIItem.GetStretchTop // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037700
	float GetStretchRight(); // Function LGUI.UIItem.GetStretchRight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10376e0
	float GetStretchLeft(); // Function LGUI.UIItem.GetStretchLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10376c0
	float GetStretchBottom(); // Function LGUI.UIItem.GetStretchBottom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10376a0
	struct ULGUICanvas* GetRootCanvas(); // Function LGUI.UIItem.GetRootCanvas // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10375f0
	struct ULGUICanvas* GetRenderCanvas(); // Function LGUI.UIItem.GetRenderCanvas // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10375d0
	struct FVector2D GetPivot(); // Function LGUI.UIItem.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037580
	struct UUIItem* GetParentAsUIItem(); // Function LGUI.UIItem.GetParentAsUIItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037550
	float GetLocalSpaceTop(); // Function LGUI.UIItem.GetLocalSpaceTop // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037520
	struct FVector2D GetLocalSpaceRightTopPoint(); // Function LGUI.UIItem.GetLocalSpaceRightTopPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10374e0
	float GetLocalSpaceRight(); // Function LGUI.UIItem.GetLocalSpaceRight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10374b0
	struct FVector2D GetLocalSpaceLeftBottomPoint(); // Function LGUI.UIItem.GetLocalSpaceLeftBottomPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037470
	float GetLocalSpaceLeft(); // Function LGUI.UIItem.GetLocalSpaceLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037440
	struct FVector2D GetLocalSpaceCenter(); // Function LGUI.UIItem.GetLocalSpaceCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037400
	float GetLocalSpaceBottom(); // Function LGUI.UIItem.GetLocalSpaceBottom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10373d0
	bool GetInheritAlpha(); // Function LGUI.UIItem.GetInheritAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10373b0
	int32_t GetHierarchyIndexWithAllParent(); // Function LGUI.UIItem.GetHierarchyIndexWithAllParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037330
	int32_t GetHierarchyIndex(); // Function LGUI.UIItem.GetHierarchyIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037310
	float GetHeight(); // Function LGUI.UIItem.GetHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10372f0
	struct FString GetDisplayName(); // Function LGUI.UIItem.GetDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037210
	int32_t GetDepth(); // Function LGUI.UIItem.GetDepth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10371f0
	struct FColor GetColor(); // Function LGUI.UIItem.GetColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10371b0
	struct ULGUICanvasScaler* GetCanvasScaler(); // Function LGUI.UIItem.GetCanvasScaler // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037180
	float GetCalculatedParentAlpha(); // Function LGUI.UIItem.GetCalculatedParentAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037160
	struct TArray<struct UUIItem*> GetAttachUIChildren(); // Function LGUI.UIItem.GetAttachUIChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10370d0
	struct UUIItem* GetAttachUIChild(int32_t Index); // Function LGUI.UIItem.GetAttachUIChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037030
	enum class UIAnchorVerticalAlign GetAnchorVAlign(); // Function LGUI.UIItem.GetAnchorVAlign // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037010
	float GetAnchorOffsetY(); // Function LGUI.UIItem.GetAnchorOffsetY // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036ff0
	float GetAnchorOffsetX(); // Function LGUI.UIItem.GetAnchorOffsetX // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036fd0
	struct FVector2D GetAnchorOffset(); // Function LGUI.UIItem.GetAnchorOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036fa0
	enum class UIAnchorHorizontalAlign GetAnchorHAlign(); // Function LGUI.UIItem.GetAnchorHAlign // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036f80
	float GetAlpha(); // Function LGUI.UIItem.GetAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036f40
	struct UUIItem* FindChildByDisplayName(struct FString InName); // Function LGUI.UIItem.FindChildByDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036e90
	struct TArray<struct UUIItem*> FindChildArrayByDisplayName(struct FString InName); // Function LGUI.UIItem.FindChildArrayByDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036d80
};

// Class LGUI.UIBaseRenderable
// Size: 0x370 (Inherited: 0x360)
struct UUIBaseRenderable : UUIItem {
	char pad_360[0x10]; // 0x360(0x10)

	enum class EUIRenderableType GetUIRenderableType(); // Function LGUI.UIBaseRenderable.GetUIRenderableType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102a250
};

// Class LGUI.UIRenderable
// Size: 0x470 (Inherited: 0x370)
struct UUIRenderable : UUIBaseRenderable {
	char pad_370[0xd8]; // 0x370(0xd8)
	struct UMaterialInterface* CustomUIMaterial; // 0x448(0x08)
	bool bIsSelfRender; // 0x450(0x01)
	bool bRaycastComplex; // 0x451(0x01)
	char pad_452[0x1e]; // 0x452(0x1e)

	void SetRaycastComplex(bool NewValue); // Function LGUI.UIRenderable.SetRaycastComplex // (Final|Native|Public|BlueprintCallable) // @ game+0x103dfc0
	void SetIsSelfRender(bool Value); // Function LGUI.UIRenderable.SetIsSelfRender // (Final|Native|Public|BlueprintCallable) // @ game+0x103d4f0
	void SetCustomUIMaterial(struct UMaterialInterface* inMat); // Function LGUI.UIRenderable.SetCustomUIMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x103d1c0
	bool GetRaycastComplex(); // Function LGUI.UIRenderable.GetRaycastComplex // (Final|Native|Public|BlueprintCallable) // @ game+0x103ce20
	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(); // Function LGUI.UIRenderable.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable) // @ game+0x103cb00
	bool GetIsSelfRender(); // Function LGUI.UIRenderable.GetIsSelfRender // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cac0
	struct UMaterialInterface* GetCustomUIMaterial(); // Function LGUI.UIRenderable.GetCustomUIMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ca00
};

// Class LGUI.UISpriteBase
// Size: 0x480 (Inherited: 0x470)
struct UUISpriteBase : UUIRenderable {
	struct UTexture2D* Image; // 0x468(0x08)
	struct ULGUISpriteData* Sprite; // 0x470(0x08)

	void SetSprite(struct ULGUISpriteData* newSprite, bool SetSize); // Function LGUI.UISpriteBase.SetSprite // (Final|Native|Public|BlueprintCallable) // @ game+0x1042860
	void SetSizeFromSpriteData(); // Function LGUI.UISpriteBase.SetSizeFromSpriteData // (Final|Native|Public|BlueprintCallable) // @ game+0x1042840
	void SetImage(struct UTexture2D* newImage, bool SetSize); // Function LGUI.UISpriteBase.SetImage // (Final|Native|Public|BlueprintCallable) // @ game+0x10424d0
	struct ULGUISpriteData* GetSprite(); // Function LGUI.UISpriteBase.GetSprite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041920
};

// Class LGUI.UI2DLineRendererBase
// Size: 0x490 (Inherited: 0x480)
struct UUI2DLineRendererBase : UUISpriteBase {
	float LineWidth; // 0x478(0x04)
	enum class EUI2DLineRenderer_EndType EndType; // 0x47c(0x01)
	float LineWidthOffset; // 0x480(0x04)
	char pad_489[0x7]; // 0x489(0x07)

	void SetLineWidthOffset(float NewValue); // Function LGUI.UI2DLineRendererBase.SetLineWidthOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x102b220
	void SetLineWidth(float NewValue); // Function LGUI.UI2DLineRendererBase.SetLineWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x102b1a0
	void SetEndType(enum class EUI2DLineRenderer_EndType NewValue); // Function LGUI.UI2DLineRendererBase.SetEndType // (Final|Native|Public|BlueprintCallable) // @ game+0x102b0a0
	struct ULTweener* LineWidthTo(float endValue, float Duration, float Delay, enum class LTweenEase easeType); // Function LGUI.UI2DLineRendererBase.LineWidthTo // (Final|Native|Public|BlueprintCallable) // @ game+0x102a6a0
	float GetLineWidthOffset(); // Function LGUI.UI2DLineRendererBase.GetLineWidthOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029dd0
	float GetLineWidth(); // Function LGUI.UI2DLineRendererBase.GetLineWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029db0
	enum class EUI2DLineRenderer_EndType GetEndType(); // Function LGUI.UI2DLineRendererBase.GetEndType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029d10
};

// Class LGUI.UI2DLineChildrenAsPoints
// Size: 0x4b0 (Inherited: 0x490)
struct UUI2DLineChildrenAsPoints : UUI2DLineRendererBase {
	struct TArray<struct FVector2D> CurrentPointArray; // 0x490(0x10)
	struct TArray<struct UUIItem*> SortedItemArray; // 0x4a0(0x10)
};

// Class LGUI.UIBaseActor
// Size: 0x230 (Inherited: 0x220)
struct AUIBaseActor : AActor {
	struct FString UIName; // 0x220(0x10)

	struct UUIItem* GetUIItem(); // Function LGUI.UIBaseActor.GetUIItem // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102a180
};

// Class LGUI.UI2DLineChildrenAsPointsActor
// Size: 0x238 (Inherited: 0x230)
struct AUI2DLineChildrenAsPointsActor : AUIBaseActor {
	struct UUI2DLineChildrenAsPoints* UIElement; // 0x230(0x08)
};

// Class LGUI.UI2DLineRaw
// Size: 0x4a0 (Inherited: 0x490)
struct UUI2DLineRaw : UUI2DLineRendererBase {
	struct TArray<struct FVector2D> PointArray; // 0x490(0x10)

	void SetPoints(struct TArray<struct FVector2D> InPoints); // Function LGUI.UI2DLineRaw.SetPoints // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102b500
};

// Class LGUI.UI2DLineActor
// Size: 0x238 (Inherited: 0x230)
struct AUI2DLineActor : AUIBaseActor {
	struct UUI2DLineRaw* UIElement; // 0x230(0x08)
};

// Class LGUI.UIPostProcess
// Size: 0x3c0 (Inherited: 0x370)
struct UUIPostProcess : UUIBaseRenderable {
	char pad_370[0x8]; // 0x370(0x08)
	struct UTexture2D* maskTexture; // 0x378(0x08)
	char pad_380[0x40]; // 0x380(0x40)

	void SetMaskTexture(struct UTexture2D* NewValue); // Function LGUI.UIPostProcess.SetMaskTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x103d580
	struct UTexture2D* GetMaskTexture(); // Function LGUI.UIPostProcess.GetMaskTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cae0
};

// Class LGUI.UIBackgroundBlur
// Size: 0x3e0 (Inherited: 0x3c0)
struct UUIBackgroundBlur : UUIPostProcess {
	float blurStrength; // 0x3b8(0x04)
	bool applyAlphaToBlur; // 0x3bc(0x01)
	int32_t maxDownSampleLevel; // 0x3c0(0x04)
	struct UTexture2D* strengthTexture; // 0x3c8(0x08)
	char pad_3D1[0xf]; // 0x3d1(0x0f)

	void SetStrengthTexture(struct UTexture2D* NewValue); // Function LGUI.UIBackgroundBlur.SetStrengthTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x102b5b0
	void SetMaxDownSampleLevel(int32_t NewValue); // Function LGUI.UIBackgroundBlur.SetMaxDownSampleLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x102b2a0
	void SetBlurStrength(float NewValue); // Function LGUI.UIBackgroundBlur.SetBlurStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x102b020
	void SetApplyAlphaToBlur(bool NewValue); // Function LGUI.UIBackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // @ game+0x102af00
	struct UTexture2D* GetStrengthTexture(); // Function LGUI.UIBackgroundBlur.GetStrengthTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029fe0
	int32_t GetMaxDownSampleLevel(); // Function LGUI.UIBackgroundBlur.GetMaxDownSampleLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029df0
	float GetBlurStrength(); // Function LGUI.UIBackgroundBlur.GetBlurStrength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029ca0
	bool GetApplyAlphaToBlur(); // Function LGUI.UIBackgroundBlur.GetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029c80
};

// Class LGUI.UIPostProcessBaseActor
// Size: 0x230 (Inherited: 0x230)
struct AUIPostProcessBaseActor : AUIBaseActor {
};

// Class LGUI.UIBackgroundBlurActor
// Size: 0x238 (Inherited: 0x230)
struct AUIBackgroundBlurActor : AUIPostProcessBaseActor {
	struct UUIBackgroundBlur* UIBackgroundBlur; // 0x230(0x08)
};

// Class LGUI.UIBackgroundPixelate
// Size: 0x3c0 (Inherited: 0x3c0)
struct UUIBackgroundPixelate : UUIPostProcess {
	float pixelateStrength; // 0x3b8(0x04)
	bool applyAlphaToStrength; // 0x3bc(0x01)

	void SetPixelateStrength(float NewValue); // Function LGUI.UIBackgroundPixelate.SetPixelateStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x102b480
	void SetApplyAlphaToStrength(bool NewValue); // Function LGUI.UIBackgroundPixelate.SetApplyAlphaToStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x102af90
	float GetPixelateStrength(); // Function LGUI.UIBackgroundPixelate.GetPixelateStrength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029ca0
	bool GetApplyAlphaToStrength(); // Function LGUI.UIBackgroundPixelate.GetApplyAlphaToStrength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029c80
};

// Class LGUI.UIBackgroundPixelateActor
// Size: 0x238 (Inherited: 0x230)
struct AUIBackgroundPixelateActor : AUIPostProcessBaseActor {
	struct UUIBackgroundPixelate* UIBackgroundPixelate; // 0x230(0x08)
};

// Class LGUI.UISelectableComponent
// Size: 0x220 (Inherited: 0xc0)
struct UUISelectableComponent : ULGUIBehaviour {
	char pad_C0[0x18]; // 0xc0(0x18)
	struct TWeakObjectPtr<struct AUIBaseActor> TransitionActor; // 0xd8(0x08)
	bool AllowEventBubbleUp; // 0xe0(0x01)
	enum class UISelectableTransitionType Transition; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct ULTweener* TransitionTweener; // 0xe8(0x08)
	struct FColor NormalColor; // 0xf0(0x04)
	struct FColor HighlightedColor; // 0xf4(0x04)
	struct FColor PressedColor; // 0xf8(0x04)
	struct FColor DisabledColor; // 0xfc(0x04)
	float FadeDuration; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct ULGUISpriteData* NormalSprite; // 0x108(0x08)
	struct ULGUISpriteData* HighlightedSprite; // 0x110(0x08)
	struct ULGUISpriteData* PressedSprite; // 0x118(0x08)
	struct ULGUISpriteData* DisabledSprite; // 0x120(0x08)
	char pad_128[0x4]; // 0x128(0x04)
	struct TWeakObjectPtr<struct UUISelectableTransitionComponent> TransitionComp; // 0x12c(0x08)
	enum class EUISelectableNavigationMode NavigationLeft; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct FLGUIComponentReference NavigationLeftSpecific; // 0x138(0x20)
	enum class EUISelectableNavigationMode NavigationRight; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FLGUIComponentReference NavigationRightSpecific; // 0x160(0x20)
	enum class EUISelectableNavigationMode NavigationUp; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FLGUIComponentReference NavigationUpSpecific; // 0x188(0x20)
	enum class EUISelectableNavigationMode NavigationDown; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct FLGUIComponentReference NavigationDownSpecific; // 0x1b0(0x20)
	enum class EUISelectableNavigationMode NavigationNext; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct FLGUIComponentReference NavigationNextSpecific; // 0x1d8(0x20)
	enum class EUISelectableNavigationMode NavigationPrev; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FLGUIComponentReference NavigationPrevSpecific; // 0x200(0x20)

	void SetTransitionTarget(struct AUIBaseActor* Value); // Function LGUI.UISelectableComponent.SetTransitionTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x103e2e0
	void SetSelectionState(enum class EUISelectableSelectionState NewState); // Function LGUI.UISelectableComponent.SetSelectionState // (Final|Native|Public|BlueprintCallable) // @ game+0x103e160
	void SetPressedSprite(struct ULGUISpriteData* newSprite); // Function LGUI.UISelectableComponent.SetPressedSprite // (Final|Native|Public|BlueprintCallable) // @ game+0x103de90
	void SetPressedColor(struct FColor NewColor); // Function LGUI.UISelectableComponent.SetPressedColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x103de10
	void SetNormalSprite(struct ULGUISpriteData* newSprite); // Function LGUI.UISelectableComponent.SetNormalSprite // (Final|Native|Public|BlueprintCallable) // @ game+0x103dcf0
	void SetNormalColor(struct FColor NewColor); // Function LGUI.UISelectableComponent.SetNormalColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x103dc70
	void SetNavigationUpExplicit(struct UUISelectableComponent* Value); // Function LGUI.UISelectableComponent.SetNavigationUpExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x103dbe0
	void SetNavigationUp(enum class EUISelectableNavigationMode Value); // Function LGUI.UISelectableComponent.SetNavigationUp // (Final|Native|Public|BlueprintCallable) // @ game+0x103db60
	void SetNavigationRightExplicit(struct UUISelectableComponent* Value); // Function LGUI.UISelectableComponent.SetNavigationRightExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x103dad0
	void SetNavigationRight(enum class EUISelectableNavigationMode Value); // Function LGUI.UISelectableComponent.SetNavigationRight // (Final|Native|Public|BlueprintCallable) // @ game+0x103da50
	void SetNavigationPrevExplicit(struct UUISelectableComponent* Value); // Function LGUI.UISelectableComponent.SetNavigationPrevExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x103d9c0
	void SetNavigationPrev(enum class EUISelectableNavigationMode Value); // Function LGUI.UISelectableComponent.SetNavigationPrev // (Final|Native|Public|BlueprintCallable) // @ game+0x103d940
	void SetNavigationNextExplicit(struct UUISelectableComponent* Value); // Function LGUI.UISelectableComponent.SetNavigationNextExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x103d8b0
	void SetNavigationNext(enum class EUISelectableNavigationMode Value); // Function LGUI.UISelectableComponent.SetNavigationNext // (Final|Native|Public|BlueprintCallable) // @ game+0x103d830
	void SetNavigationLeftExplicit(struct UUISelectableComponent* Value); // Function LGUI.UISelectableComponent.SetNavigationLeftExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x103d7a0
	void SetNavigationLeft(enum class EUISelectableNavigationMode Value); // Function LGUI.UISelectableComponent.SetNavigationLeft // (Final|Native|Public|BlueprintCallable) // @ game+0x103d720
	void SetNavigationDownExplicit(struct UUISelectableComponent* Value); // Function LGUI.UISelectableComponent.SetNavigationDownExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x103d690
	void SetNavigationDown(enum class EUISelectableNavigationMode Value); // Function LGUI.UISelectableComponent.SetNavigationDown // (Final|Native|Public|BlueprintCallable) // @ game+0x103d610
	void SetHighlightedSprite(struct ULGUISpriteData* newSprite); // Function LGUI.UISelectableComponent.SetHighlightedSprite // (Final|Native|Public|BlueprintCallable) // @ game+0x103d350
	void SetHighlightedColor(struct FColor NewColor); // Function LGUI.UISelectableComponent.SetHighlightedColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x103d2d0
	bool IsInteractable(); // Function LGUI.UISelectableComponent.IsInteractable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cfb0
	struct AUIBaseActor* GetTransitionTarget(); // Function LGUI.UISelectableComponent.GetTransitionTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103c9c0
	enum class EUISelectableSelectionState GetSelectionState(); // Function LGUI.UISelectableComponent.GetSelectionState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ce60
	struct ULGUISpriteData* GetPressedSprite(); // Function LGUI.UISelectableComponent.GetPressedSprite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cdd0
	struct FColor GetPressedColor(); // Function LGUI.UISelectableComponent.GetPressedColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cdb0
	struct ULGUISpriteData* GetNormalSprite(); // Function LGUI.UISelectableComponent.GetNormalSprite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101de50
	struct FColor GetNormalColor(); // Function LGUI.UISelectableComponent.GetNormalColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cd70
	struct UUISelectableComponent* GetNavigationUpExplicit(); // Function LGUI.UISelectableComponent.GetNavigationUpExplicit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cd30
	enum class EUISelectableNavigationMode GetNavigationUp(); // Function LGUI.UISelectableComponent.GetNavigationUp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cd10
	struct UUISelectableComponent* GetNavigationRightExplicit(); // Function LGUI.UISelectableComponent.GetNavigationRightExplicit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ccd0
	enum class EUISelectableNavigationMode GetNavigationRight(); // Function LGUI.UISelectableComponent.GetNavigationRight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ccb0
	struct UUISelectableComponent* GetNavigationPrevExplicit(); // Function LGUI.UISelectableComponent.GetNavigationPrevExplicit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cc70
	enum class EUISelectableNavigationMode GetNavigationPrev(); // Function LGUI.UISelectableComponent.GetNavigationPrev // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cc50
	struct UUISelectableComponent* GetNavigationNextExplicit(); // Function LGUI.UISelectableComponent.GetNavigationNextExplicit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cc10
	enum class EUISelectableNavigationMode GetNavigationNext(); // Function LGUI.UISelectableComponent.GetNavigationNext // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cbf0
	struct UUISelectableComponent* GetNavigationLeftExplicit(); // Function LGUI.UISelectableComponent.GetNavigationLeftExplicit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cbb0
	enum class EUISelectableNavigationMode GetNavigationLeft(); // Function LGUI.UISelectableComponent.GetNavigationLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cb90
	struct UUISelectableComponent* GetNavigationDownExplicit(); // Function LGUI.UISelectableComponent.GetNavigationDownExplicit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cb50
	enum class EUISelectableNavigationMode GetNavigationDown(); // Function LGUI.UISelectableComponent.GetNavigationDown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cb30
	struct ULGUISpriteData* GetHighlightedSprite(); // Function LGUI.UISelectableComponent.GetHighlightedSprite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ca20
	struct FColor GetHighlightedColor(); // Function LGUI.UISelectableComponent.GetHighlightedColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032c20
};

// Class LGUI.UIButtonComponent
// Size: 0x2e8 (Inherited: 0x220)
struct UUIButtonComponent : UUISelectableComponent {
	char pad_220[0x8]; // 0x220(0x08)
	struct FLGUIDrawableEvent OnClick; // 0x228(0x18)
	struct FLGUIDrawableEvent OnEnter; // 0x240(0x18)
	struct FLGUIDrawableEvent OnLeave; // 0x258(0x18)
	struct ULGUIPointerEventData* ClickeventData; // 0x270(0x08)
	struct ULGUIPointerEventData* OnEnterEventData; // 0x278(0x08)
	struct ULGUIPointerEventData* OnLeaveEventData; // 0x280(0x08)
	char pad_288[0x48]; // 0x288(0x48)
	bool bUseNormalSound; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct USoundBase* ClickSound; // 0x2d8(0x08)
	struct USoundBase* EnterSound; // 0x2e0(0x08)

	void UnregisterLeaveEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIButtonComponent.UnregisterLeaveEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102bee0
	void UnregisterEnterEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIButtonComponent.UnregisterEnterEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102be50
	void UnregisterClickEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIButtonComponent.UnregisterClickEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102bdc0
	struct FLGUIDelegateHandleWrapper RegisterLeaveEvent(struct FDelegate InDelegate); // Function LGUI.UIButtonComponent.RegisterLeaveEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102ad80
	struct FLGUIDelegateHandleWrapper RegisterEnterEvent(struct FDelegate InDelegate); // Function LGUI.UIButtonComponent.RegisterEnterEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102acc0
	struct FLGUIDelegateHandleWrapper RegisterClickEvent(struct FDelegate InDelegate); // Function LGUI.UIButtonComponent.RegisterClickEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102ac00
};

// Class LGUI.UIComboBox
// Size: 0xe8 (Inherited: 0xb0)
struct UUIComboBox : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct AUIBaseActor* _RootUIActor; // 0xb8(0x08)
	struct AUIBaseActor* _SrcItemActor; // 0xc0(0x08)
	char pad_C8[0x20]; // 0xc8(0x20)

	struct UUIComboBox* CreateComboBoxFromArray(struct TArray<struct FString> InItemNameArray, struct FDelegate InCallback, struct AUIBaseActor* InParentActor, int32_t InSelectedItemIndex, enum class EComboBoxPosition InPosition); // Function LGUI.UIComboBox.CreateComboBoxFromArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10299c0
};

// Class LGUI.UIComboBoxItem
// Size: 0xe0 (Inherited: 0xb0)
struct UUIComboBoxItem : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct AUIBaseActor* _RootUIActor; // 0xb8(0x08)
	struct AUITextActor* _TextActor; // 0xc0(0x08)
	struct AUISpriteActor* _HighlightSpriteActor; // 0xc8(0x08)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class LGUI.UIContainerActor
// Size: 0x238 (Inherited: 0x230)
struct AUIContainerActor : AUIBaseActor {
	struct UUIItem* UIItem; // 0x230(0x08)
};

// Class LGUI.UIDrawcallMesh
// Size: 0x4b0 (Inherited: 0x4b0)
struct UUIDrawcallMesh : ULGUIMeshComponent {
};

// Class LGUI.UIDropdownComponent
// Size: 0x2d0 (Inherited: 0x220)
struct UUIDropdownComponent : UUISelectableComponent {
	char pad_220[0x8]; // 0x220(0x08)
	struct TWeakObjectPtr<struct AUIBaseActor> ListRoot; // 0x228(0x08)
	struct TWeakObjectPtr<struct AUITextActor> CaptionText; // 0x230(0x08)
	struct TWeakObjectPtr<struct AUISpriteActor> CaptionSprite; // 0x238(0x08)
	struct FLGUIComponentReference ItemTemplate; // 0x240(0x20)
	enum class EUIDropdownVerticalPosition VerticalPosition; // 0x260(0x01)
	bool VerticalOverlap; // 0x261(0x01)
	enum class EUIDropdownHorizontalPosition HorizontalPosition; // 0x262(0x01)
	char pad_263[0x1]; // 0x263(0x01)
	int32_t Value; // 0x264(0x04)
	struct TArray<struct FUIDropdownOptionData> Options; // 0x268(0x10)
	char pad_278[0x18]; // 0x278(0x18)
	struct TArray<struct TWeakObjectPtr<struct UUIDropdownItemComponent>> CreatedItemArray; // 0x290(0x10)
	char pad_2A0[0x18]; // 0x2a0(0x18)
	struct FLGUIDrawableEvent OnSelectionChange; // 0x2b8(0x18)

	void UnregisterSelectionChangeEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIDropdownComponent.UnregisterSelectionChangeEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102be50
	void Show(); // Function LGUI.UIDropdownComponent.Show // (Final|Native|Public|BlueprintCallable) // @ game+0x102b820
	void SetVerticalPosition(enum class EUIDropdownVerticalPosition InValue); // Function LGUI.UIDropdownComponent.SetVerticalPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x102b7a0
	void SetVerticalOverlap(bool NewValue); // Function LGUI.UIDropdownComponent.SetVerticalOverlap // (Final|Native|Public|BlueprintCallable) // @ game+0x102b710
	void SetValue(int32_t NewValue, bool fireEvent); // Function LGUI.UIDropdownComponent.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x102b640
	void SetOptions(struct TArray<struct FUIDropdownOptionData> InOptions); // Function LGUI.UIDropdownComponent.SetOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102b3b0
	void SetMaxHeight(float NewValue); // Function LGUI.UIDropdownComponent.SetMaxHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x102b330
	void SetHorizontalPosition(enum class EUIDropdownHorizontalPosition InValue); // Function LGUI.UIDropdownComponent.SetHorizontalPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x102b120
	struct FLGUIDelegateHandleWrapper RegisterSelectionChangeEvent(struct FDelegate InDelegate); // Function LGUI.UIDropdownComponent.RegisterSelectionChangeEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102ae40
	void MarkRecreateList(); // Function LGUI.UIDropdownComponent.MarkRecreateList // (Final|Native|Public|BlueprintCallable) // @ game+0x102abc0
	void Hide(); // Function LGUI.UIDropdownComponent.Hide // (Final|Native|Public|BlueprintCallable) // @ game+0x102a2d0
	enum class EUIDropdownVerticalPosition GetVerticalPosition(); // Function LGUI.UIDropdownComponent.GetVerticalPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102a2b0
	bool GetVerticalOverlap(); // Function LGUI.UIDropdownComponent.GetVerticalOverlap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102a290
	int32_t GetValue(); // Function LGUI.UIDropdownComponent.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102a270
	struct TArray<struct FUIDropdownOptionData> GetOptions(); // Function LGUI.UIDropdownComponent.GetOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029ee0
	struct FUIDropdownOptionData GetOption(int32_t Index); // Function LGUI.UIDropdownComponent.GetOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029e30
	float GetMaxHeight(); // Function LGUI.UIDropdownComponent.GetMaxHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029e10
	enum class EUIDropdownHorizontalPosition GetHorizontalPosition(); // Function LGUI.UIDropdownComponent.GetHorizontalPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029d60
	struct FUIDropdownOptionData GetCurrentOption(); // Function LGUI.UIDropdownComponent.GetCurrentOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029cc0
	void AddOptions(struct TArray<struct FUIDropdownOptionData> InOptions); // Function LGUI.UIDropdownComponent.AddOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10298d0
};

// Class LGUI.UIDropdownItemComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UUIDropdownItemComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct TWeakObjectPtr<struct AUITextActor> TextActor; // 0xb8(0x08)
	struct TWeakObjectPtr<struct AUISpriteActor> SpriteActor; // 0xc0(0x08)
	struct FLGUIComponentReference Toggle; // 0xc8(0x20)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class LGUI.UIGeometryModifierBase
// Size: 0xc0 (Inherited: 0xb0)
struct UUIGeometryModifierBase : UActorComponent {
	int32_t executeOrder; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UUIRenderable* renderableUIItem; // 0xb8(0x08)
};

// Class LGUI.UIEffectGradientColor
// Size: 0xd8 (Inherited: 0xc0)
struct UUIEffectGradientColor : UUIGeometryModifierBase {
	enum class EUIEffectGradientColorDirection directionType; // 0xc0(0x01)
	bool multiplySourceAlpha; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	struct FColor color1; // 0xc4(0x04)
	struct FColor color2; // 0xc8(0x04)
	struct FColor color3; // 0xcc(0x04)
	struct FColor color4; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class LGUI.UIEffectLongShadow
// Size: 0xe0 (Inherited: 0xc0)
struct UUIEffectLongShadow : UUIGeometryModifierBase {
	struct FColor shadowColor; // 0xc0(0x04)
	struct FVector shadowSize; // 0xc4(0x0c)
	char shadowSegment; // 0xd0(0x01)
	bool useGradientColor; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	struct FColor gradientColor; // 0xd4(0x04)
	bool multiplySourceAlpha; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	void SetUseGradientColor(bool newBool); // Function LGUI.UIEffectLongShadow.SetUseGradientColor // (Final|Native|Public|BlueprintCallable) // @ game+0x102fe90
	void SetShadowSize(struct FVector newSize); // Function LGUI.UIEffectLongShadow.SetShadowSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102fe00
	void SetShadowSegment(char newSegment); // Function LGUI.UIEffectLongShadow.SetShadowSegment // (Final|Native|Public|BlueprintCallable) // @ game+0x102fd80
	void SetShadowColor(struct FColor NewColor); // Function LGUI.UIEffectLongShadow.SetShadowColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f5b0
	void SetGradientColor(struct FColor NewColor); // Function LGUI.UIEffectLongShadow.SetGradientColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f5b0
	bool GetUseGradientColor(); // Function LGUI.UIEffectLongShadow.GetUseGradientColor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f2c0
	struct FVector GetShadowSize(); // Function LGUI.UIEffectLongShadow.GetShadowSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f290
	char GetShadowSegments(); // Function LGUI.UIEffectLongShadow.GetShadowSegments // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f270
	struct FColor GetShadowColor(); // Function LGUI.UIEffectLongShadow.GetShadowColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dda0
	struct FColor GetGradientColor(); // Function LGUI.UIEffectLongShadow.GetGradientColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dd80
};

// Class LGUI.UIEffectOutline
// Size: 0xd0 (Inherited: 0xc0)
struct UUIEffectOutline : UUIGeometryModifierBase {
	struct FColor OutlineColor; // 0xc0(0x04)
	struct FVector2D OutlineSize; // 0xc4(0x08)
	bool multiplySourceAlpha; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)

	void SetOutlineSize(struct FVector2D newSize); // Function LGUI.UIEffectOutline.SetOutlineSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f8d0
	void SetOutlineColor(struct FColor NewColor); // Function LGUI.UIEffectOutline.SetOutlineColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f5b0
	struct FVector2D GetOutlineSize(); // Function LGUI.UIEffectOutline.GetOutlineSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f020
	struct FColor GetOutlineColor(); // Function LGUI.UIEffectOutline.GetOutlineColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dda0
};

// Class LGUI.UIEffectPositionAsUV
// Size: 0xc8 (Inherited: 0xc0)
struct UUIEffectPositionAsUV : UUIGeometryModifierBase {
	char uvChannel; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class LGUI.UIEffectShadow
// Size: 0xd0 (Inherited: 0xc0)
struct UUIEffectShadow : UUIGeometryModifierBase {
	struct FColor shadowColor; // 0xc0(0x04)
	bool multiplySourceAlpha; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct FVector2D ShadowOffset; // 0xc8(0x08)

	void SetShadowOffset(struct FVector2D newOffset); // Function LGUI.UIEffectShadow.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102fd00
	void SetShadowColor(struct FColor NewColor); // Function LGUI.UIEffectShadow.SetShadowColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f5b0
	struct FVector2D GetShadowOffset(); // Function LGUI.UIEffectShadow.GetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f240
	struct FColor GetShadowColor(); // Function LGUI.UIEffectShadow.GetShadowColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dda0
};

// Class LGUI.UIEffectTextAnimation_Selector
// Size: 0x30 (Inherited: 0x28)
struct UUIEffectTextAnimation_Selector : UObject {
	float Offset; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	void SetOffset(float Value); // Function LGUI.UIEffectTextAnimation_Selector.SetOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x102f850
	float GetOffset(); // Function LGUI.UIEffectTextAnimation_Selector.GetOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f000
};

// Class LGUI.UIEffectTextAnimation_Property
// Size: 0x28 (Inherited: 0x28)
struct UUIEffectTextAnimation_Property : UObject {
};

// Class LGUI.UIEffectTextAnimation
// Size: 0xf8 (Inherited: 0xc0)
struct UUIEffectTextAnimation : UUIGeometryModifierBase {
	struct UUIEffectTextAnimation_Selector* selector; // 0xc0(0x08)
	struct TArray<struct UUIEffectTextAnimation_Property*> Properties; // 0xc8(0x10)
	struct UUIText* UIText; // 0xd8(0x08)
	char pad_E0[0x18]; // 0xe0(0x18)

	void SetSelectorOffset(float Value); // Function LGUI.UIEffectTextAnimation.SetSelectorOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x102fc80
	void SetSelector(struct UUIEffectTextAnimation_Selector* Value); // Function LGUI.UIEffectTextAnimation.SetSelector // (Final|Native|Public|BlueprintCallable) // @ game+0x102fbf0
	void SetProperty(int32_t Index, struct UUIEffectTextAnimation_Property* Value); // Function LGUI.UIEffectTextAnimation.SetProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x102fa90
	void SetProperties(struct TArray<struct UUIEffectTextAnimation_Property*> Value); // Function LGUI.UIEffectTextAnimation.SetProperties // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102f9e0
	float GetSelectorOffset(); // Function LGUI.UIEffectTextAnimation.GetSelectorOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f210
	struct UUIEffectTextAnimation_Selector* GetSelector(); // Function LGUI.UIEffectTextAnimation.GetSelector // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f1f0
	struct UUIEffectTextAnimation_Property* GetProperty(int32_t Index); // Function LGUI.UIEffectTextAnimation.GetProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f150
	struct TArray<struct UUIEffectTextAnimation_Property*> GetProperties(); // Function LGUI.UIEffectTextAnimation.GetProperties // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f080
};

// Class LGUI.UIEffectTextAnimation_PropertyWithEase
// Size: 0x48 (Inherited: 0x28)
struct UUIEffectTextAnimation_PropertyWithEase : UUIEffectTextAnimation_Property {
	enum class LTweenEase easeType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UCurveFloat* easeCurve; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)

	void SetEaseType(enum class LTweenEase Value); // Function LGUI.UIEffectTextAnimation_PropertyWithEase.SetEaseType // (Final|Native|Public|BlueprintCallable) // @ game+0x102f4b0
	void SetEaseCurve(struct UCurveFloat* Value); // Function LGUI.UIEffectTextAnimation_PropertyWithEase.SetEaseCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x102f420
	enum class LTweenEase GetEaseType(); // Function LGUI.UIEffectTextAnimation_PropertyWithEase.GetEaseType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102ef20
	struct UCurveFloat* GetCurveFloat(); // Function LGUI.UIEffectTextAnimation_PropertyWithEase.GetCurveFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102ef00
};

// Class LGUI.UIEffectTextAnimation_PositionProperty
// Size: 0x58 (Inherited: 0x48)
struct UUIEffectTextAnimation_PositionProperty : UUIEffectTextAnimation_PropertyWithEase {
	struct FVector position; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)

	void SetPosition(struct FVector Value); // Function LGUI.UIEffectTextAnimation_PositionProperty.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f950
	struct FVector GetPosition(); // Function LGUI.UIEffectTextAnimation_PositionProperty.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f050
};

// Class LGUI.UIEffectTextAnimation_PositionRandomProperty
// Size: 0x68 (Inherited: 0x48)
struct UUIEffectTextAnimation_PositionRandomProperty : UUIEffectTextAnimation_PropertyWithEase {
	int32_t Seed; // 0x48(0x04)
	struct FVector Min; // 0x4c(0x0c)
	struct FVector Max; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)

	void SetSeed(int32_t Value); // Function LGUI.UIEffectTextAnimation_PositionRandomProperty.SetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x102fb60
	void SetMin(struct FVector Value); // Function LGUI.UIEffectTextAnimation_PositionRandomProperty.SetMin // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f7c0
	void SetMax(struct FVector Value); // Function LGUI.UIEffectTextAnimation_PositionRandomProperty.SetMax // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f6b0
	int32_t GetSeed(); // Function LGUI.UIEffectTextAnimation_PositionRandomProperty.GetSeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102eee0
	struct FVector GetMin(); // Function LGUI.UIEffectTextAnimation_PositionRandomProperty.GetMin // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102efd0
	struct FVector GetMax(); // Function LGUI.UIEffectTextAnimation_PositionRandomProperty.GetMax // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102ef80
};

// Class LGUI.UIEffectTextAnimation_RotationProperty
// Size: 0x58 (Inherited: 0x48)
struct UUIEffectTextAnimation_RotationProperty : UUIEffectTextAnimation_PropertyWithEase {
	struct FRotator Rotator; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)

	void SetRotator(struct FRotator Value); // Function LGUI.UIEffectTextAnimation_RotationProperty.SetRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f950
	struct FRotator GetRotator(); // Function LGUI.UIEffectTextAnimation_RotationProperty.GetRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f050
};

// Class LGUI.UIEffectTextAnimation_RotationRandomProperty
// Size: 0x68 (Inherited: 0x48)
struct UUIEffectTextAnimation_RotationRandomProperty : UUIEffectTextAnimation_PropertyWithEase {
	int32_t Seed; // 0x48(0x04)
	struct FRotator Min; // 0x4c(0x0c)
	struct FRotator Max; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)

	void SetSeed(int32_t Value); // Function LGUI.UIEffectTextAnimation_RotationRandomProperty.SetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x102fb60
	void SetMin(struct FRotator Value); // Function LGUI.UIEffectTextAnimation_RotationRandomProperty.SetMin // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f7c0
	void SetMax(struct FRotator Value); // Function LGUI.UIEffectTextAnimation_RotationRandomProperty.SetMax // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f6b0
	int32_t GetSeed(); // Function LGUI.UIEffectTextAnimation_RotationRandomProperty.GetSeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102eee0
	struct FRotator GetMin(); // Function LGUI.UIEffectTextAnimation_RotationRandomProperty.GetMin // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102efd0
	struct FRotator GetMax(); // Function LGUI.UIEffectTextAnimation_RotationRandomProperty.GetMax // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102ef80
};

// Class LGUI.UIEffectTextAnimation_ScaleProperty
// Size: 0x58 (Inherited: 0x48)
struct UUIEffectTextAnimation_ScaleProperty : UUIEffectTextAnimation_PropertyWithEase {
	struct FVector Scale; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)

	void SetScale(struct FVector Value); // Function LGUI.UIEffectTextAnimation_ScaleProperty.SetScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f950
	struct FVector GetScale(); // Function LGUI.UIEffectTextAnimation_ScaleProperty.GetScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f050
};

// Class LGUI.UIEffectTextAnimation_ScaleRandomProperty
// Size: 0x68 (Inherited: 0x48)
struct UUIEffectTextAnimation_ScaleRandomProperty : UUIEffectTextAnimation_PropertyWithEase {
	int32_t Seed; // 0x48(0x04)
	struct FVector Min; // 0x4c(0x0c)
	struct FVector Max; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)

	void SetSeed(int32_t Value); // Function LGUI.UIEffectTextAnimation_ScaleRandomProperty.SetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x102fb60
	void SetMin(struct FVector Value); // Function LGUI.UIEffectTextAnimation_ScaleRandomProperty.SetMin // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f7c0
	void SetMax(struct FVector Value); // Function LGUI.UIEffectTextAnimation_ScaleRandomProperty.SetMax // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f6b0
	int32_t GetSeed(); // Function LGUI.UIEffectTextAnimation_ScaleRandomProperty.GetSeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102eee0
	struct FVector GetMin(); // Function LGUI.UIEffectTextAnimation_ScaleRandomProperty.GetMin // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102efd0
	struct FVector GetMax(); // Function LGUI.UIEffectTextAnimation_ScaleRandomProperty.GetMax // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102ef80
};

// Class LGUI.UIEffectTextAnimation_AlphaProperty
// Size: 0x50 (Inherited: 0x48)
struct UUIEffectTextAnimation_AlphaProperty : UUIEffectTextAnimation_PropertyWithEase {
	float Alpha; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	void SetAlpha(float Value); // Function LGUI.UIEffectTextAnimation_AlphaProperty.SetAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x102f320
	float GetAlpha(); // Function LGUI.UIEffectTextAnimation_AlphaProperty.GetAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102eee0
};

// Class LGUI.UIEffectTextAnimation_ColorProperty
// Size: 0x50 (Inherited: 0x48)
struct UUIEffectTextAnimation_ColorProperty : UUIEffectTextAnimation_PropertyWithEase {
	struct FColor Color; // 0x48(0x04)
	bool useHSV; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)

	void SetUseHSV(bool Value); // Function LGUI.UIEffectTextAnimation_ColorProperty.SetUseHSV // (Final|Native|Public|BlueprintCallable) // @ game+0x102ff20
	void SetColor(struct FColor Value); // Function LGUI.UIEffectTextAnimation_ColorProperty.SetColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f3a0
	bool GetUseHSV(); // Function LGUI.UIEffectTextAnimation_ColorProperty.GetUseHSV // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f2e0
	struct FColor GetColor(); // Function LGUI.UIEffectTextAnimation_ColorProperty.GetColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102eee0
};

// Class LGUI.UIEffectTextAnimation_ColorRandomProperty
// Size: 0x58 (Inherited: 0x48)
struct UUIEffectTextAnimation_ColorRandomProperty : UUIEffectTextAnimation_PropertyWithEase {
	int32_t Seed; // 0x48(0x04)
	struct FColor Min; // 0x4c(0x04)
	struct FColor Max; // 0x50(0x04)
	bool useHSV; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)

	void SetUseHSV(bool Value); // Function LGUI.UIEffectTextAnimation_ColorRandomProperty.SetUseHSV // (Final|Native|Public|BlueprintCallable) // @ game+0x102ffb0
	void SetSeed(int32_t Value); // Function LGUI.UIEffectTextAnimation_ColorRandomProperty.SetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x102fb60
	void SetMin(struct FColor Value); // Function LGUI.UIEffectTextAnimation_ColorRandomProperty.SetMin // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f740
	void SetMax(struct FColor Value); // Function LGUI.UIEffectTextAnimation_ColorRandomProperty.SetMax // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f630
	bool GetUseHSV(); // Function LGUI.UIEffectTextAnimation_ColorRandomProperty.GetUseHSV // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f300
	int32_t GetSeed(); // Function LGUI.UIEffectTextAnimation_ColorRandomProperty.GetSeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102eee0
	struct FColor GetMin(); // Function LGUI.UIEffectTextAnimation_ColorRandomProperty.GetMin // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102efb0
	struct FColor GetMax(); // Function LGUI.UIEffectTextAnimation_ColorRandomProperty.GetMax // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102ef60
};

// Class LGUI.UIEffectTextAnimation_PropertyWithWave
// Size: 0x48 (Inherited: 0x28)
struct UUIEffectTextAnimation_PropertyWithWave : UUIEffectTextAnimation_Property {
	float Frequency; // 0x28(0x04)
	float Speed; // 0x2c(0x04)
	bool flipDirection; // 0x30(0x01)
	char pad_31[0xf]; // 0x31(0x0f)
	struct UUIText* UIText; // 0x40(0x08)

	void SetFrequency(float Value); // Function LGUI.UIEffectTextAnimation_PropertyWithWave.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x102f530
	float GetFrequency(); // Function LGUI.UIEffectTextAnimation_PropertyWithWave.GetFrequency // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102ef40
};

// Class LGUI.UIEffectTextAnimation_PositionWaveProperty
// Size: 0x58 (Inherited: 0x48)
struct UUIEffectTextAnimation_PositionWaveProperty : UUIEffectTextAnimation_PropertyWithWave {
	struct FVector position; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)

	void SetPosition(struct FVector Value); // Function LGUI.UIEffectTextAnimation_PositionWaveProperty.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f950
	struct FVector GetPosition(); // Function LGUI.UIEffectTextAnimation_PositionWaveProperty.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f050
};

// Class LGUI.UIEffectTextAnimation_RotationWaveProperty
// Size: 0x58 (Inherited: 0x48)
struct UUIEffectTextAnimation_RotationWaveProperty : UUIEffectTextAnimation_PropertyWithWave {
	struct FRotator Rotator; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)

	void SetRotator(struct FRotator Value); // Function LGUI.UIEffectTextAnimation_RotationWaveProperty.SetRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f950
	struct FRotator GetRotator(); // Function LGUI.UIEffectTextAnimation_RotationWaveProperty.GetRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f050
};

// Class LGUI.UIEffectTextAnimation_ScaleWaveProperty
// Size: 0x58 (Inherited: 0x48)
struct UUIEffectTextAnimation_ScaleWaveProperty : UUIEffectTextAnimation_PropertyWithWave {
	struct FVector Scale; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)

	void SetScale(struct FVector Value); // Function LGUI.UIEffectTextAnimation_ScaleWaveProperty.SetScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x102f950
	struct FVector GetScale(); // Function LGUI.UIEffectTextAnimation_ScaleWaveProperty.GetScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f050
};

// Class LGUI.UIEffectTextAnimation_RangeSelector
// Size: 0x40 (Inherited: 0x30)
struct UUIEffectTextAnimation_RangeSelector : UUIEffectTextAnimation_Selector {
	float Range; // 0x30(0x04)
	bool flipDirection; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float Start; // 0x38(0x04)
	float End; // 0x3c(0x04)

	void SetStart(float Value); // Function LGUI.UIEffectTextAnimation_RangeSelector.SetStart // (Final|Native|Public|BlueprintCallable) // @ game+0x1033880
	void SetRange(float Value); // Function LGUI.UIEffectTextAnimation_RangeSelector.SetRange // (Final|Native|Public|BlueprintCallable) // @ game+0x1033e90
	void SetFlipDirection(bool Value); // Function LGUI.UIEffectTextAnimation_RangeSelector.SetFlipDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x1033b30
	void SetEnd(float Value); // Function LGUI.UIEffectTextAnimation_RangeSelector.SetEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x1033900
	float GetStart(); // Function LGUI.UIEffectTextAnimation_RangeSelector.GetStart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032b00
	float GetRange(); // Function LGUI.UIEffectTextAnimation_RangeSelector.GetRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032c70
	bool GetFlipDirection(); // Function LGUI.UIEffectTextAnimation_RangeSelector.GetFlipDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032ba0
	float GetEnd(); // Function LGUI.UIEffectTextAnimation_RangeSelector.GetEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032b20
};

// Class LGUI.UIEffectTextAnimation_RandomSelector
// Size: 0x40 (Inherited: 0x30)
struct UUIEffectTextAnimation_RandomSelector : UUIEffectTextAnimation_Selector {
	int32_t Seed; // 0x30(0x04)
	float Start; // 0x34(0x04)
	float End; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	void SetStart(float Value); // Function LGUI.UIEffectTextAnimation_RandomSelector.SetStart // (Final|Native|Public|BlueprintCallable) // @ game+0x10340a0
	void SetSeed(int32_t Value); // Function LGUI.UIEffectTextAnimation_RandomSelector.SetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x1033f10
	void SetEnd(float Value); // Function LGUI.UIEffectTextAnimation_RandomSelector.SetEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x1033880
	float GetStart(); // Function LGUI.UIEffectTextAnimation_RandomSelector.GetStart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032ce0
	int32_t GetSeed(); // Function LGUI.UIEffectTextAnimation_RandomSelector.GetSeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032c70
	float GetEnd(); // Function LGUI.UIEffectTextAnimation_RandomSelector.GetEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032b00
};

// Class LGUI.UIEffectTextAnimation_RichTextTagSelector
// Size: 0x40 (Inherited: 0x30)
struct UUIEffectTextAnimation_RichTextTagSelector : UUIEffectTextAnimation_Selector {
	float Range; // 0x30(0x04)
	struct FName TagName; // 0x34(0x08)
	bool flipDirection; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	void SetTagName(struct FName Value); // Function LGUI.UIEffectTextAnimation_RichTextTagSelector.SetTagName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034120
	void SetRange(float Value); // Function LGUI.UIEffectTextAnimation_RichTextTagSelector.SetRange // (Final|Native|Public|BlueprintCallable) // @ game+0x1033e90
	void SetFlipDirection(bool Value); // Function LGUI.UIEffectTextAnimation_RichTextTagSelector.SetFlipDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x1033bc0
	struct FName GetTagName(); // Function LGUI.UIEffectTextAnimation_RichTextTagSelector.GetTagName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032d00
	float GetRange(); // Function LGUI.UIEffectTextAnimation_RichTextTagSelector.GetRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032c70
	bool GetFlipDirection(); // Function LGUI.UIEffectTextAnimation_RichTextTagSelector.GetFlipDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032bc0
};

// Class LGUI.UIEventBlockerComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UUIEventBlockerComponent : UActorComponent {
	char pad_B0[0x38]; // 0xb0(0x38)
	bool AllowEventBubbleUp; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class LGUI.UIEventTriggerComponent
// Size: 0x360 (Inherited: 0xb0)
struct UUIEventTriggerComponent : UActorComponent {
	char pad_B0[0x38]; // 0xb0(0x38)
	bool AllowEventBubbleUp; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FLGUIDrawableEvent OnPointerEnter; // 0xf0(0x18)
	struct FLGUIDrawableEvent OnPointerExit; // 0x108(0x18)
	struct FLGUIDrawableEvent OnPointerDown; // 0x120(0x18)
	struct FLGUIDrawableEvent OnPointerUp; // 0x138(0x18)
	struct FLGUIDrawableEvent OnPointerClick; // 0x150(0x18)
	struct FLGUIDrawableEvent OnPointerBeginDrag; // 0x168(0x18)
	struct FLGUIDrawableEvent OnPointerDrag; // 0x180(0x18)
	struct FLGUIDrawableEvent OnPointerEndDrag; // 0x198(0x18)
	struct FLGUIDrawableEvent OnPointerDragEnter; // 0x1b0(0x18)
	struct FLGUIDrawableEvent OnPointerDragExit; // 0x1c8(0x18)
	struct FLGUIDrawableEvent OnPointerDragDrop; // 0x1e0(0x18)
	struct FLGUIDrawableEvent OnPointerScroll; // 0x1f8(0x18)
	struct FLGUIDrawableEvent OnPointerSelect; // 0x210(0x18)
	struct FLGUIDrawableEvent OnPointerDeselect; // 0x228(0x18)
	char pad_240[0x120]; // 0x240(0x120)

	void UnregisterOnPointerUp(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerUp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102bdc0
	void UnregisterOnPointerSelect(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerSelect // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10347c0
	void UnregisterOnPointerScroll(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerScroll // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034730
	void UnregisterOnPointerExit(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerExit // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10346a0
	void UnregisterOnPointerEnter(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerEnter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034610
	void UnregisterOnPointerEndDrag(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerEndDrag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034580
	void UnregisterOnPointerDragExit(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerDragExit // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034510
	void UnregisterOnPointerDragEnter(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerDragEnter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034510
	void UnregisterOnPointerDragDrop(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerDragDrop // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034480
	void UnregisterOnPointerDrag(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerDrag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10343f0
	void UnregisterOnPointerDown(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerDown // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034360
	void UnregisterOnPointerDeselect(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerDeselect // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10342d0
	void UnregisterOnPointerClick(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerClick // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102be50
	void UnregisterOnPointerBeginDrag(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIEventTriggerComponent.UnregisterOnPointerBeginDrag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102bee0
	struct FLGUIDelegateHandleWrapper RegisterOnPointerUp(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerUp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1033630
	struct FLGUIDelegateHandleWrapper RegisterOnPointerSelect(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerSelect // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1033570
	struct FLGUIDelegateHandleWrapper RegisterOnPointerScroll(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerScroll // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10334b0
	struct FLGUIDelegateHandleWrapper RegisterOnPointerExit(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerExit // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10333f0
	struct FLGUIDelegateHandleWrapper RegisterOnPointerEnter(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerEnter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1033330
	struct FLGUIDelegateHandleWrapper RegisterOnPointerEndDrag(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerEndDrag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1033270
	struct FLGUIDelegateHandleWrapper RegisterOnPointerDragExit(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerDragExit // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10331e0
	struct FLGUIDelegateHandleWrapper RegisterOnPointerDragEnter(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerDragEnter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10331e0
	struct FLGUIDelegateHandleWrapper RegisterOnPointerDragDrop(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerDragDrop // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1033120
	struct FLGUIDelegateHandleWrapper RegisterOnPointerDrag(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerDrag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1033060
	struct FLGUIDelegateHandleWrapper RegisterOnPointerDown(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerDown // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1032fa0
	struct FLGUIDelegateHandleWrapper RegisterOnPointerDeselect(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerDeselect // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1032ee0
	struct FLGUIDelegateHandleWrapper RegisterOnPointerClick(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerClick // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1032e20
	struct FLGUIDelegateHandleWrapper RegisterOnPointerBeginDrag(struct FDelegate InDelegate); // Function LGUI.UIEventTriggerComponent.RegisterOnPointerBeginDrag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1032d60
};

// Class LGUI.UIFlyoutMenu
// Size: 0xe8 (Inherited: 0xb0)
struct UUIFlyoutMenu : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct AUIBaseActor* _RootUIActor; // 0xb8(0x08)
	struct AUIBaseActor* _SrcItemActor; // 0xc0(0x08)
	struct TArray<struct UUIFlyoutMenuItem*> _CreatedItemArray; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)

	struct UUIFlyoutMenu* CreateFlyoutMenuFromArray(struct TArray<struct FString> InItemNameArray, struct FDelegate InCallback, struct AUIBaseActor* InParentActor, int32_t InWidth, enum class EFlyoutMenuVerticalPosition InVerticalPosition, enum class EFlyoutMenuHorizontalAlignment InHorizontalAlign); // Function LGUI.UIFlyoutMenu.CreateFlyoutMenuFromArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1032800
};

// Class LGUI.UIFlyoutMenuItem
// Size: 0xe0 (Inherited: 0xb0)
struct UUIFlyoutMenuItem : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct AUIBaseActor* _RootUIActor; // 0xb8(0x08)
	struct AUITextActor* _TextActor; // 0xc0(0x08)
	struct AUISpriteActor* _HighlightSpriteActor; // 0xc8(0x08)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class LGUI.UILayoutBase
// Size: 0xd0 (Inherited: 0xc0)
struct UUILayoutBase : ULGUIBehaviour {
	char pad_C0[0x10]; // 0xc0(0x10)

	void OnRebuildLayout(); // Function LGUI.UILayoutBase.OnRebuildLayout // (Native|Public|BlueprintCallable) // @ game+0x100fb60
};

// Class LGUI.UIGridLayout
// Size: 0x118 (Inherited: 0xd0)
struct UUIGridLayout : UUILayoutBase {
	struct FMargin Padding; // 0xd0(0x10)
	struct FVector2D Spacing; // 0xe0(0x08)
	bool HorizontalOrVertical; // 0xe8(0x01)
	bool DependOnSizeOrCount; // 0xe9(0x01)
	bool ExpendChildSize; // 0xea(0x01)
	char pad_EB[0x1]; // 0xeb(0x01)
	struct FVector2D CellSize; // 0xec(0x08)
	uint32_t LineCount; // 0xf4(0x04)
	bool WidthFitToChildren; // 0xf8(0x01)
	bool HeightFitToChildren; // 0xf9(0x01)
	enum class EUILayoutChangePositionAnimationType AnimationType; // 0xfa(0x01)
	char pad_FB[0x1]; // 0xfb(0x01)
	float AnimationDuration; // 0xfc(0x04)
	struct TArray<struct ULTweener*> TweenerArray; // 0x100(0x10)
	char pad_110[0x8]; // 0x110(0x08)

	void SetWidthFitToChildren(bool Value); // Function LGUI.UIGridLayout.SetWidthFitToChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x10341b0
	void SetSpacing(struct FVector2D Value); // Function LGUI.UIGridLayout.SetSpacing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1033fa0
	void SetPadding(struct FMargin Value); // Function LGUI.UIGridLayout.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x1033e00
	void SetLineCount(int32_t Value); // Function LGUI.UIGridLayout.SetLineCount // (Final|Native|Public|BlueprintCallable) // @ game+0x1033d70
	void SetHorizontalOrVertical(bool Value); // Function LGUI.UIGridLayout.SetHorizontalOrVertical // (Final|Native|Public|BlueprintCallable) // @ game+0x1033ce0
	void SetHeightFitToChildren(bool Value); // Function LGUI.UIGridLayout.SetHeightFitToChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x1033c50
	void SetExpendChildSize(bool Value); // Function LGUI.UIGridLayout.SetExpendChildSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1033980
	void SetDependOnSizeOrCount(bool Value); // Function LGUI.UIGridLayout.SetDependOnSizeOrCount // (Final|Native|Public|BlueprintCallable) // @ game+0x10337f0
	void SetCellSize(struct FVector2D Value); // Function LGUI.UIGridLayout.SetCellSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1033770
	bool GetWidthFitToChildren(); // Function LGUI.UIGridLayout.GetWidthFitToChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x1032d20
	struct FVector2D GetSpacing(); // Function LGUI.UIGridLayout.GetSpacing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1032c90
	struct FMargin GetPadding(); // Function LGUI.UIGridLayout.GetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x1032c40
	int32_t GetLineCount(); // Function LGUI.UIGridLayout.GetLineCount // (Final|Native|Public|BlueprintCallable) // @ game+0x1032c20
	bool GetHorizontalOrVertical(); // Function LGUI.UIGridLayout.GetHorizontalOrVertical // (Final|Native|Public|BlueprintCallable) // @ game+0x1032c00
	bool GetHeightFitToChildren(); // Function LGUI.UIGridLayout.GetHeightFitToChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x1032be0
	bool GetExpendChildSize(); // Function LGUI.UIGridLayout.GetExpendChildSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1032b40
	bool GetDependOnSizeOrCount(); // Function LGUI.UIGridLayout.GetDependOnSizeOrCount // (Final|Native|Public|BlueprintCallable) // @ game+0x1032ae0
	struct FVector2D GetCellSize(); // Function LGUI.UIGridLayout.GetCellSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1032ab0
	struct FVector2D GetActuralRange(); // Function LGUI.UIGridLayout.GetActuralRange // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1032a40
};

// Class LGUI.UIHorizontalLayout
// Size: 0x118 (Inherited: 0xd0)
struct UUIHorizontalLayout : UUILayoutBase {
	struct FMargin Padding; // 0xd0(0x10)
	float Spacing; // 0xe0(0x04)
	enum class ELGUILayoutAlignmentType align; // 0xe4(0x01)
	bool ExpendChildrenWidth; // 0xe5(0x01)
	bool ExpendChildrenHeight; // 0xe6(0x01)
	bool WidthFitToChildren; // 0xe7(0x01)
	enum class EUILayoutChangePositionAnimationType AnimationType; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float AnimationDuration; // 0xec(0x04)
	struct TArray<struct ULTweener*> TweenerArray; // 0xf0(0x10)
	char pad_100[0x18]; // 0x100(0x18)

	void SetWidthFitToChildren(bool Value); // Function LGUI.UIHorizontalLayout.SetWidthFitToChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x1034240
	void SetSpacing(float Value); // Function LGUI.UIHorizontalLayout.SetSpacing // (Final|Native|Public|BlueprintCallable) // @ game+0x1034020
	void SetPadding(struct FMargin Value); // Function LGUI.UIHorizontalLayout.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x1033e00
	void SetExpendChildrenWidth(bool Value); // Function LGUI.UIHorizontalLayout.SetExpendChildrenWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1033aa0
	void SetExpendChildrenHeight(bool Value); // Function LGUI.UIHorizontalLayout.SetExpendChildrenHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1033a10
	void SetAlign(enum class ELGUILayoutAlignmentType Value); // Function LGUI.UIHorizontalLayout.SetAlign // (Final|Native|Public|BlueprintCallable) // @ game+0x10336f0
	bool GetWidthFitToChildren(); // Function LGUI.UIHorizontalLayout.GetWidthFitToChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x1032d40
	float GetSpacing(); // Function LGUI.UIHorizontalLayout.GetSpacing // (Final|Native|Public|BlueprintCallable) // @ game+0x1032cc0
	struct FMargin GetPadding(); // Function LGUI.UIHorizontalLayout.GetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x1032c40
	bool GetExpendChildrenWidth(); // Function LGUI.UIHorizontalLayout.GetExpendChildrenWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1032b80
	bool GetExpendChildrenHeight(); // Function LGUI.UIHorizontalLayout.GetExpendChildrenHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1032b60
	enum class ELGUILayoutAlignmentType GetAlign(); // Function LGUI.UIHorizontalLayout.GetAlign // (Final|Native|Public|BlueprintCallable) // @ game+0x1032a90
	float GetActuralRange(); // Function LGUI.UIHorizontalLayout.GetActuralRange // (Final|Native|Public|BlueprintCallable) // @ game+0x1032a70
};

// Class LGUI.UIInteractionGroup
// Size: 0xc0 (Inherited: 0xb0)
struct UUIInteractionGroup : UActorComponent {
	bool bInteractable; // 0xb0(0x01)
	bool bIgnoreParentGroup; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct UUIItem* CacheUIItem; // 0xb8(0x08)

	void SetInteractable(bool Value); // Function LGUI.UIInteractionGroup.SetInteractable // (Final|Native|Public|BlueprintCallable) // @ game+0x1038320
	void SetIgnoreParentGroup(bool Value); // Function LGUI.UIInteractionGroup.SetIgnoreParentGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x1038290
	bool GetInteractable(); // Function LGUI.UIInteractionGroup.GetInteractable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10101b0
	bool GetIgnoreParentGroup(); // Function LGUI.UIInteractionGroup.GetIgnoreParentGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037390
};

// Class LGUI.UIItemEditorHelperComp
// Size: 0x450 (Inherited: 0x440)
struct UUIItemEditorHelperComp : UPrimitiveComponent {
	struct UUIItem* Parent; // 0x440(0x08)
	struct UBodySetup* BodySetup; // 0x448(0x08)
};

// Class LGUI.UILayoutElement
// Size: 0xd8 (Inherited: 0xc0)
struct UUILayoutElement : ULGUIBehaviour {
	struct UUILayoutBase* ParentLayout; // 0xc0(0x08)
	enum class ELayoutElementType LayoutElementType; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float ConstantSize; // 0xcc(0x04)
	float RatioSize; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)

	void SetRatioSize(float Value); // Function LGUI.UILayoutElement.SetRatioSize // (Final|Native|Public|BlueprintCallable) // @ game+0x10384b0
	void SetLayoutType(enum class ELayoutElementType InType); // Function LGUI.UILayoutElement.SetLayoutType // (Final|Native|Public|BlueprintCallable) // @ game+0x10383b0
	void SetConstantSize(float Value); // Function LGUI.UILayoutElement.SetConstantSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1037dc0
	float GetRatioSize(); // Function LGUI.UILayoutElement.GetRatioSize // (Final|Native|Public|BlueprintCallable) // @ game+0x10375b0
	enum class ELayoutElementType GetLayoutType(); // Function LGUI.UILayoutElement.GetLayoutType // (Final|Native|Public|BlueprintCallable) // @ game+0x101dfa0
	bool GetIgnoreLayout(); // Function LGUI.UILayoutElement.GetIgnoreLayout // (Final|Native|Public|BlueprintCallable) // @ game+0x1037360
	float GetConstantSize(); // Function LGUI.UILayoutElement.GetConstantSize // (Final|Native|Public|BlueprintCallable) // @ game+0x10371d0
};

// Class LGUI.UIPolygon
// Size: 0x4a0 (Inherited: 0x480)
struct UUIPolygon : UUISpriteBase {
	bool FullCycle; // 0x478(0x01)
	float StartAngle; // 0x47c(0x04)
	float EndAngle; // 0x480(0x04)
	int32_t Sides; // 0x484(0x04)
	enum class UIPolygonUVType UVType; // 0x488(0x01)
	char pad_48E[0x2]; // 0x48e(0x02)
	struct TArray<float> VertexOffsetArray; // 0x490(0x10)

	struct ULTweener* StartAngleTo(float endValue, float Duration, float Delay, enum class LTweenEase easeType); // Function LGUI.UIPolygon.StartAngleTo // (Final|Native|Public|BlueprintCallable) // @ game+0x10392e0
	void SetVertexOffsetArray(struct TArray<float> Value); // Function LGUI.UIPolygon.SetVertexOffsetArray // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1038fb0
	void SetUVType(enum class UIPolygonUVType Value); // Function LGUI.UIPolygon.SetUVType // (Final|Native|Public|BlueprintCallable) // @ game+0x1038f30
	void SetStartAngle(float Value); // Function LGUI.UIPolygon.SetStartAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x10386e0
	void SetSides(int32_t Value); // Function LGUI.UIPolygon.SetSides // (Final|Native|Public|BlueprintCallable) // @ game+0x10385c0
	void SetEndAngle(float Value); // Function LGUI.UIPolygon.SetEndAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x1038000
	struct TArray<float> GetVertexOffsetArray(); // Function LGUI.UIPolygon.GetVertexOffsetArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037780
	enum class UIPolygonUVType GetUVType(); // Function LGUI.UIPolygon.GetUVType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037760
	float GetStartAngle(); // Function LGUI.UIPolygon.GetStartAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037660
	int32_t GetSides(); // Function LGUI.UIPolygon.GetSides // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037620
	float GetEndAngle(); // Function LGUI.UIPolygon.GetEndAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1029dd0
	struct ULTweener* EndAngleTo(float endValue, float Duration, float Delay, enum class LTweenEase easeType); // Function LGUI.UIPolygon.EndAngleTo // (Final|Native|Public|BlueprintCallable) // @ game+0x1036ac0
};

// Class LGUI.UIPolygonActor
// Size: 0x238 (Inherited: 0x230)
struct AUIPolygonActor : AUIBaseActor {
	struct UUIPolygon* UIPolygon; // 0x230(0x08)
};

// Class LGUI.UIPolygonLine
// Size: 0x4c0 (Inherited: 0x490)
struct UUIPolygonLine : UUI2DLineRendererBase {
	bool FullCycle; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float StartAngle; // 0x494(0x04)
	float EndAngle; // 0x498(0x04)
	int32_t Sides; // 0x49c(0x04)
	struct TArray<float> VertexOffsetArray; // 0x4a0(0x10)
	struct TArray<struct FVector2D> CurrentPointArray; // 0x4b0(0x10)

	struct ULTweener* StartAngleTo(float endValue, float Duration, float Delay, enum class LTweenEase easeType); // Function LGUI.UIPolygonLine.StartAngleTo // (Final|Native|Public|BlueprintCallable) // @ game+0x1039440
	void SetVertexOffsetArray(struct TArray<float> Value); // Function LGUI.UIPolygonLine.SetVertexOffsetArray // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1039060
	void SetStartAngle(float Value); // Function LGUI.UIPolygonLine.SetStartAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x1038760
	void SetSides(int32_t Value); // Function LGUI.UIPolygonLine.SetSides // (Final|Native|Public|BlueprintCallable) // @ game+0x1038650
	void SetEndAngle(float Value); // Function LGUI.UIPolygonLine.SetEndAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x1038080
	struct TArray<float> GetVertexOffsetArray(); // Function LGUI.UIPolygonLine.GetVertexOffsetArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10377b0
	float GetStartAngle(); // Function LGUI.UIPolygonLine.GetStartAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037680
	int32_t GetSides(); // Function LGUI.UIPolygonLine.GetSides // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037640
	float GetEndAngle(); // Function LGUI.UIPolygonLine.GetEndAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10372d0
	struct ULTweener* EndAngleTo(float endValue, float Duration, float Delay, enum class LTweenEase easeType); // Function LGUI.UIPolygonLine.EndAngleTo // (Final|Native|Public|BlueprintCallable) // @ game+0x1036c20
};

// Class LGUI.UIPolygonLineActor
// Size: 0x238 (Inherited: 0x230)
struct AUIPolygonLineActor : AUIBaseActor {
	struct UUIPolygonLine* UIPolygonLine; // 0x230(0x08)
};

// Class LGUI.LGUICreateGeometryHelper
// Size: 0x38 (Inherited: 0x28)
struct ULGUICreateGeometryHelper : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void AddVertexStruct(struct FLGUIGeometryVertex vertex); // Function LGUI.LGUICreateGeometryHelper.AddVertexStruct // (Final|Native|Public|BlueprintCallable) // @ game+0x103c760
	void AddVertexSimple(struct FVector position, struct FColor Color, struct FVector2D uv0); // Function LGUI.LGUICreateGeometryHelper.AddVertexSimple // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x103c650
	void AddVertexFull(struct FVector position, struct FColor Color, struct FVector2D uv0, struct FVector2D uv1, struct FVector2D uv2, struct FVector2D uv3, struct FVector Normal, struct FVector Tangent); // Function LGUI.LGUICreateGeometryHelper.AddVertexFull // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x103c3c0
	void AddTriangle(int32_t index0, int32_t index1, int32_t index2); // Function LGUI.LGUICreateGeometryHelper.AddTriangle // (Final|Native|Public|BlueprintCallable) // @ game+0x103c2b0
};

// Class LGUI.LGUIUpdateGeometryHelper
// Size: 0x48 (Inherited: 0x28)
struct ULGUIUpdateGeometryHelper : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct FLGUIGeometryVertex> cacheVertices; // 0x38(0x10)

	void EndUpdateVertices(); // Function LGUI.LGUIUpdateGeometryHelper.EndUpdateVertices // (Final|Native|Public|BlueprintCallable) // @ game+0x103c9a0
	void BeginUpdateVertices(); // Function LGUI.LGUIUpdateGeometryHelper.BeginUpdateVertices // (Final|Native|Public|BlueprintCallable) // @ game+0x103c820
};

// Class LGUI.UIRenderable_BP
// Size: 0x480 (Inherited: 0x470)
struct UUIRenderable_BP : UUIRenderable {
	struct ULGUICreateGeometryHelper* createGeometryHelper; // 0x468(0x08)
	struct ULGUIUpdateGeometryHelper* updateGeometryHelper; // 0x470(0x08)

	void OnUpdateGeometry_BP(struct ULGUIUpdateGeometryHelper* InUpdateGoemetryHelper, bool InVertexPositionChanged, bool InVertexUVChanged, bool InVertexColorChanged); // Function LGUI.UIRenderable_BP.OnUpdateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnCreateGeometry_BP(struct ULGUICreateGeometryHelper* InCreateGeometryHelper); // Function LGUI.UIRenderable_BP.OnCreateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnBeforeCreateOrUpdateGeometry_BP(); // Function LGUI.UIRenderable_BP.OnBeforeCreateOrUpdateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MarkVertexChanged_BP(); // Function LGUI.UIRenderable_BP.MarkVertexChanged_BP // (Final|Native|Public|BlueprintCallable) // @ game+0x103d000
	void MarkRebuildGeometry_BP(); // Function LGUI.UIRenderable_BP.MarkRebuildGeometry_BP // (Final|Native|Public|BlueprintCallable) // @ game+0x103cfe0
};

// Class LGUI.UIRing
// Size: 0x4b0 (Inherited: 0x490)
struct UUIRing : UUI2DLineRendererBase {
	float StartAngle; // 0x490(0x04)
	float EndAngle; // 0x494(0x04)
	int32_t Segment; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct TArray<struct FVector2D> CurrentPointArray; // 0x4a0(0x10)

	struct ULTweener* StartAngleTo(float endValue, float Duration, float Delay, enum class LTweenEase easeType); // Function LGUI.UIRing.StartAngleTo // (Final|Native|Public|BlueprintCallable) // @ game+0x103e680
	void SetStartAngle(float NewValue); // Function LGUI.UIRing.SetStartAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x103e260
	void SetSegment(int32_t NewValue); // Function LGUI.UIRing.SetSegment // (Final|Native|Public|BlueprintCallable) // @ game+0x103e0d0
	void SetEndAngle(float NewValue); // Function LGUI.UIRing.SetEndAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x103d250
	float GetStartAngle(); // Function LGUI.UIRing.GetStartAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ceb0
	int32_t GetSegment(); // Function LGUI.UIRing.GetSegment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10372d0
	float GetEndAngle(); // Function LGUI.UIRing.GetEndAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037680
	struct ULTweener* EndAngleTo(float endValue, float Duration, float Delay, enum class LTweenEase easeType); // Function LGUI.UIRing.EndAngleTo // (Final|Native|Public|BlueprintCallable) // @ game+0x103c840
};

// Class LGUI.UIRingActor
// Size: 0x238 (Inherited: 0x230)
struct AUIRingActor : AUIBaseActor {
	struct UUIRing* UIElement; // 0x230(0x08)
};

// Class LGUI.UIRoundedLayout
// Size: 0xe0 (Inherited: 0xd0)
struct UUIRoundedLayout : UUILayoutBase {
	float Radius; // 0xd0(0x04)
	float StartAngle; // 0xd4(0x04)
	float EndAngle; // 0xd8(0x04)
	bool bSetChildAngle; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
};

// Class LGUI.UIScrollbarComponent
// Size: 0x288 (Inherited: 0x220)
struct UUIScrollbarComponent : UUISelectableComponent {
	char pad_220[0x8]; // 0x220(0x08)
	float Value; // 0x228(0x04)
	float Size; // 0x22c(0x04)
	struct TWeakObjectPtr<struct AUIBaseActor> HandleActor; // 0x230(0x08)
	enum class UIScrollbarDirectionType directionType; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	struct TWeakObjectPtr<struct UUIItem> Handle; // 0x23c(0x08)
	struct TWeakObjectPtr<struct UUIItem> HandleArea; // 0x244(0x08)
	char pad_24C[0x1c]; // 0x24c(0x1c)
	struct FLGUIDrawableEvent OnValueChange; // 0x268(0x18)
	char pad_280[0x8]; // 0x280(0x08)

	void UnregisterSlideEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIScrollbarComponent.UnregisterSlideEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103e870
	void SetValueAndSize(float InValue, float InSize, bool fireEvent); // Function LGUI.UIScrollbarComponent.SetValueAndSize // (Final|Native|Public|BlueprintCallable) // @ game+0x103e450
	void SetValue(float InValue, bool fireEvent); // Function LGUI.UIScrollbarComponent.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x103e370
	void SetSize(float InSize); // Function LGUI.UIScrollbarComponent.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x103e1e0
	struct FLGUIDelegateHandleWrapper RegisterSlideEvent(struct FDelegate InDelegate); // Function LGUI.UIScrollbarComponent.RegisterSlideEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103d100
	float GetValue(); // Function LGUI.UIScrollbarComponent.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ced0
	float GetSize(); // Function LGUI.UIScrollbarComponent.GetSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ce90
};

// Class LGUI.UIScrollViewHelper
// Size: 0xc8 (Inherited: 0xc0)
struct UUIScrollViewHelper : ULGUIBehaviour {
	struct TWeakObjectPtr<struct UUIScrollViewComponent> TargetComp; // 0xc0(0x08)
};

// Class LGUI.UIScrollViewComponent
// Size: 0x168 (Inherited: 0xc0)
struct UUIScrollViewComponent : ULGUIBehaviour {
	char pad_C0[0x18]; // 0xc0(0x18)
	struct TWeakObjectPtr<struct AUIBaseActor> Content; // 0xd8(0x08)
	bool Horizontal; // 0xe0(0x01)
	bool Vertical; // 0xe1(0x01)
	bool OnlyOneDirection; // 0xe2(0x01)
	char pad_E3[0x1]; // 0xe3(0x01)
	float ScrollSensitivity; // 0xe4(0x04)
	bool CanScrollInSmallSize; // 0xe8(0x01)
	bool AllowEventBubbleUp; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct TWeakObjectPtr<struct UUIItem> ContentUIItem; // 0xec(0x08)
	struct TWeakObjectPtr<struct UUIItem> ContentParentUIItem; // 0xf4(0x08)
	char pad_FC[0x54]; // 0xfc(0x54)
	struct FLGUIDrawableEvent OnScroll; // 0x150(0x18)

	void UnregisterScrollEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIScrollViewComponent.UnregisterScrollEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103e7e0
	void SetVertical(bool Value); // Function LGUI.UIScrollViewComponent.SetVertical // (Final|Native|Public|BlueprintCallable) // @ game+0x103e570
	void SetScrollSensitivity(float Value); // Function LGUI.UIScrollViewComponent.SetScrollSensitivity // (Final|Native|Public|BlueprintCallable) // @ game+0x103e050
	struct FVector2D SetProgress(struct FVector2D InSetProgress); // Function LGUI.UIScrollViewComponent.SetProgress // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x103df20
	void SetOnlyOneDirection(bool Value); // Function LGUI.UIScrollViewComponent.SetOnlyOneDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x103dd80
	void SetHorizontal(bool Value); // Function LGUI.UIScrollViewComponent.SetHorizontal // (Final|Native|Public|BlueprintCallable) // @ game+0x103d3e0
	void SetCanScrollInSmallSize(bool Value); // Function LGUI.UIScrollViewComponent.SetCanScrollInSmallSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1033ce0
	struct FLGUIDelegateHandleWrapper RegisterScrollEvent(struct FDelegate InDelegate); // Function LGUI.UIScrollViewComponent.RegisterScrollEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103d040
	void RectRangeChanged(); // Function LGUI.UIScrollViewComponent.RectRangeChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x103d020
	bool GetVertical(); // Function LGUI.UIScrollViewComponent.GetVertical // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cef0
	float GetScrollSensitivity(); // Function LGUI.UIScrollViewComponent.GetScrollSensitivity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ce40
	struct FVector2D GetProgress(); // Function LGUI.UIScrollViewComponent.GetProgress // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cdf0
	bool GetOnlyOneDirection(); // Function LGUI.UIScrollViewComponent.GetOnlyOneDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cd90
	bool GetHorizontal(); // Function LGUI.UIScrollViewComponent.GetHorizontal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ca40
	struct AUIBaseActor* GetContent(); // Function LGUI.UIScrollViewComponent.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103c9c0
	bool GetCanScrollInSmallSize(); // Function LGUI.UIScrollViewComponent.GetCanScrollInSmallSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032c00
};

// Class LGUI.UIScrollViewWithScrollbarComponent
// Size: 0x1a0 (Inherited: 0x168)
struct UUIScrollViewWithScrollbarComponent : UUIScrollViewComponent {
	struct TWeakObjectPtr<struct AUIBaseActor> Viewport; // 0x168(0x08)
	struct TWeakObjectPtr<struct AUIBaseActor> HorizontalScrollbar; // 0x170(0x08)
	enum class EScrollViewScrollbarVisibility HorizontalScrollbarVisibility; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	struct TWeakObjectPtr<struct AUIBaseActor> VerticalScrollbar; // 0x17c(0x08)
	enum class EScrollViewScrollbarVisibility VerticalScrollbarVisibility; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct TWeakObjectPtr<struct UUIScrollbarComponent> HorizontalScrollbarComp; // 0x188(0x08)
	struct TWeakObjectPtr<struct UUIScrollbarComponent> VerticalScrollbarComp; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)

	void SetVerticalScrollbarVisibility(enum class EScrollViewScrollbarVisibility Value); // Function LGUI.UIScrollViewWithScrollbarComponent.SetVerticalScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x103e600
	void SetHorizontalScrollbarVisibility(enum class EScrollViewScrollbarVisibility Value); // Function LGUI.UIScrollViewWithScrollbarComponent.SetHorizontalScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x103d470
	struct AUIBaseActor* GetViewport(); // Function LGUI.UIScrollViewWithScrollbarComponent.GetViewport // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cf70
	enum class EScrollViewScrollbarVisibility GetVerticalScrollbarVisibility(); // Function LGUI.UIScrollViewWithScrollbarComponent.GetVerticalScrollbarVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cf50
	struct AUIBaseActor* GetVerticalScrollbar(); // Function LGUI.UIScrollViewWithScrollbarComponent.GetVerticalScrollbar // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103cf10
	enum class EScrollViewScrollbarVisibility GetHorizontalScrollbarVisibility(); // Function LGUI.UIScrollViewWithScrollbarComponent.GetHorizontalScrollbarVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103caa0
	struct AUIBaseActor* GetHorizontalScrollbar(); // Function LGUI.UIScrollViewWithScrollbarComponent.GetHorizontalScrollbar // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ca60
};

// Class LGUI.UISelectableTransitionComponent
// Size: 0xd0 (Inherited: 0xc0)
struct UUISelectableTransitionComponent : ULGUIBehaviour {
	struct TArray<struct ULTweener*> TweenerCollection; // 0xc0(0x10)

	void StopTransition(); // Function LGUI.UISelectableTransitionComponent.StopTransition // (Native|Public|BlueprintCallable) // @ game+0x1042d60
	void OnStartCustomTransitionBP(struct FName InTransitionName, bool InImmediateSet); // Function LGUI.UISelectableTransitionComponent.OnStartCustomTransitionBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnPressedBP(bool InImmediateSet); // Function LGUI.UISelectableTransitionComponent.OnPressedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnNormalBP(bool InImmediateSet); // Function LGUI.UISelectableTransitionComponent.OnNormalBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnHighlightedBP(bool InImmediateSet); // Function LGUI.UISelectableTransitionComponent.OnHighlightedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnDisabledBP(bool InImmediateSet); // Function LGUI.UISelectableTransitionComponent.OnDisabledBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CollectTweeners(struct TSet<struct ULTweener*> InItems); // Function LGUI.UISelectableTransitionComponent.CollectTweeners // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1041650
	void CollectTweener(struct ULTweener* InItem); // Function LGUI.UISelectableTransitionComponent.CollectTweener // (Native|Public|BlueprintCallable) // @ game+0x10415c0
};

// Class LGUI.UISizeControlByAspectRatio
// Size: 0xd8 (Inherited: 0xd0)
struct UUISizeControlByAspectRatio : UUILayoutBase {
	enum class EUISizeControlByAspectRatioMode ControlMode; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float AspectRatio; // 0xd4(0x04)

	void SetControlMode(enum class EUISizeControlByAspectRatioMode Value); // Function LGUI.UISizeControlByAspectRatio.SetControlMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1041f10
	void SetAspectRatio(float Value); // Function LGUI.UISizeControlByAspectRatio.SetAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x1041e90
	enum class EUISizeControlByAspectRatioMode GetControlMode(); // Function LGUI.UISizeControlByAspectRatio.GetControlMode // (Final|Native|Public|BlueprintCallable) // @ game+0x102f270
	float GetAspectRatio(); // Function LGUI.UISizeControlByAspectRatio.GetAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x101dd80
};

// Class LGUI.UISizeControlByOtherHelper
// Size: 0xc8 (Inherited: 0xc0)
struct UUISizeControlByOtherHelper : ULGUIBehaviour {
	struct TWeakObjectPtr<struct UUISizeControlByOther> TargetComp; // 0xc0(0x08)
};

// Class LGUI.UISizeControlByOther
// Size: 0xf8 (Inherited: 0xd0)
struct UUISizeControlByOther : UUILayoutBase {
	struct TWeakObjectPtr<struct AUIBaseActor> targetActor; // 0xd0(0x08)
	bool ControlWidth; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float AdditionalWidth; // 0xdc(0x04)
	bool ControlHeight; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float AdditionalHeight; // 0xe4(0x04)
	struct TWeakObjectPtr<struct UUIItem> TargetUIItem; // 0xe8(0x08)
	struct TWeakObjectPtr<struct UUISizeControlByOtherHelper> HelperComp; // 0xf0(0x08)

	void SetControlWidth(bool Value); // Function LGUI.UISizeControlByOther.SetControlWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1041f90
	void SetControlHeight(bool Value); // Function LGUI.UISizeControlByOther.SetControlHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x103d3e0
	void SetAdditionalWidth(float Value); // Function LGUI.UISizeControlByOther.SetAdditionalWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1041cf0
	void SetAdditionalHeight(float Value); // Function LGUI.UISizeControlByOther.SetAdditionalHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1041c70
	struct AUIBaseActor* GetTargetActor(); // Function LGUI.UISizeControlByOther.GetTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1041a30
	bool GetControlWidth(); // Function LGUI.UISizeControlByOther.GetControlWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x101df60
	bool GetControlHeight(); // Function LGUI.UISizeControlByOther.GetControlHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x103ca40
	float GetAdditionalWidth(); // Function LGUI.UISizeControlByOther.GetAdditionalWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1041750
	float GetAdditionalHeight(); // Function LGUI.UISizeControlByOther.GetAdditionalHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x103ce40
};

// Class LGUI.UISliderComponent
// Size: 0x2a0 (Inherited: 0x220)
struct UUISliderComponent : UUISelectableComponent {
	char pad_220[0x8]; // 0x220(0x08)
	float Value; // 0x228(0x04)
	float MinValue; // 0x22c(0x04)
	float MaxValue; // 0x230(0x04)
	bool WholeNumbers; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct TWeakObjectPtr<struct AUIBaseActor> FillActor; // 0x238(0x08)
	struct TWeakObjectPtr<struct AUIBaseActor> HandleActor; // 0x240(0x08)
	enum class UISliderDirectionType directionType; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	struct TWeakObjectPtr<struct UUIItem> Fill; // 0x24c(0x08)
	struct TWeakObjectPtr<struct UUIItem> FillArea; // 0x254(0x08)
	struct TWeakObjectPtr<struct UUIItem> Handle; // 0x25c(0x08)
	struct TWeakObjectPtr<struct UUIItem> HandleArea; // 0x264(0x08)
	char pad_26C[0x1c]; // 0x26c(0x1c)
	struct FLGUIDrawableEvent OnValueChange; // 0x288(0x18)

	void UnregisterSlideEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UISliderComponent.UnregisterSlideEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034360
	void SetValue(float InValue, bool fireEvent); // Function LGUI.UISliderComponent.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1042b70
	struct FLGUIDelegateHandleWrapper RegisterSlideEvent(struct FDelegate InDelegate); // Function LGUI.UISliderComponent.RegisterSlideEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1041bb0
	float GetValue(); // Function LGUI.UISliderComponent.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ced0
};

// Class LGUI.UISprite
// Size: 0x490 (Inherited: 0x480)
struct UUISprite : UUISpriteBase {
	enum class UISpriteType Type; // 0x478(0x01)
	enum class UISpriteFillMethod fillMethod; // 0x479(0x01)
	char fillOrigin; // 0x47a(0x01)
	bool fillDirectionFlip; // 0x47b(0x01)
	float fillAmount; // 0x47c(0x04)
	char pad_488[0x8]; // 0x488(0x08)

	void SetSpriteType(enum class UISpriteType NewType); // Function LGUI.UISprite.SetSpriteType // (Final|Native|Public|BlueprintCallable) // @ game+0x1042a20
	void SetFillOrigin(char NewValue); // Function LGUI.UISprite.SetFillOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0x10421b0
	void SetFillMethod(enum class UISpriteFillMethod NewValue); // Function LGUI.UISprite.SetFillMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x1042130
	void SetFillDirectionFlip(bool NewValue); // Function LGUI.UISprite.SetFillDirectionFlip // (Final|Native|Public|BlueprintCallable) // @ game+0x10420a0
	void SetFillAmount(float NewValue); // Function LGUI.UISprite.SetFillAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x1042020
	enum class UISpriteType GetSpriteType(); // Function LGUI.UISprite.GetSpriteType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041a10
	char GetFillOrigin(); // Function LGUI.UISprite.GetFillOrigin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10417f0
	enum class UISpriteFillMethod GetFillMethod(); // Function LGUI.UISprite.GetFillMethod // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10417d0
	bool GetFillDirectionFlip(); // Function LGUI.UISprite.GetFillDirectionFlip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10417b0
	float GetFillAmount(); // Function LGUI.UISprite.GetFillAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037660
};

// Class LGUI.UISpriteActor
// Size: 0x238 (Inherited: 0x230)
struct AUISpriteActor : AUIBaseActor {
	struct UUISprite* UISprite; // 0x230(0x08)
};

// Class LGUI.UISpriteBase_BP
// Size: 0x490 (Inherited: 0x480)
struct UUISpriteBase_BP : UUISpriteBase {
	struct ULGUICreateGeometryHelper* createGeometryHelper; // 0x478(0x08)
	struct ULGUIUpdateGeometryHelper* updateGeometryHelper; // 0x480(0x08)

	void OnUpdateGeometry_BP(struct ULGUIUpdateGeometryHelper* InUpdateGoemetryHelper, struct ULGUISpriteData* InSpriteData, bool InVertexPositionChanged, bool InVertexUVChanged, bool InVertexColorChanged); // Function LGUI.UISpriteBase_BP.OnUpdateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnCreateGeometry_BP(struct ULGUICreateGeometryHelper* InCreateGeometryHelper, struct ULGUISpriteData* InSpriteData); // Function LGUI.UISpriteBase_BP.OnCreateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnBeforeCreateOrUpdateGeometry_BP(); // Function LGUI.UISpriteBase_BP.OnBeforeCreateOrUpdateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MarkVertexChanged_BP(); // Function LGUI.UISpriteBase_BP.MarkVertexChanged_BP // (Final|Native|Public|BlueprintCallable) // @ game+0x103d000
	void MarkRebuildGeometry_BP(); // Function LGUI.UISpriteBase_BP.MarkRebuildGeometry_BP // (Final|Native|Public|BlueprintCallable) // @ game+0x103cfe0
};

// Class LGUI.UISpriteSequencePlayer
// Size: 0xe8 (Inherited: 0xd0)
struct UUISpriteSequencePlayer : ULGUIImageSequencePlayer {
	struct TWeakObjectPtr<struct UUISpriteBase> Sprite; // 0xd0(0x08)
	struct TArray<struct ULGUISpriteData*> spriteSequence; // 0xd8(0x10)

	void SetSpriteSequence(struct TArray<struct ULGUISpriteData*> Value); // Function LGUI.UISpriteSequencePlayer.SetSpriteSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x1042930
	struct TArray<struct ULGUISpriteData*> GetSpriteSequence(); // Function LGUI.UISpriteSequencePlayer.GetSpriteSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041940
};

// Class LGUI.UISpriteSheetTexturePlayer
// Size: 0xe8 (Inherited: 0xd0)
struct UUISpriteSheetTexturePlayer : ULGUIImageSequencePlayer {
	struct TWeakObjectPtr<struct UUITexture> Texture; // 0xd0(0x08)
	int32_t widthCount; // 0xd8(0x04)
	int32_t heightCount; // 0xdc(0x04)
	char pad_E0[0x8]; // 0xe0(0x08)

	void SetWidthCount(int32_t Value); // Function LGUI.UISpriteSheetTexturePlayer.SetWidthCount // (Final|Native|Public|BlueprintCallable) // @ game+0x1042cd0
	void SetHeightCount(int32_t Value); // Function LGUI.UISpriteSheetTexturePlayer.SetHeightCount // (Final|Native|Public|BlueprintCallable) // @ game+0x1042440
	int32_t GetWidthCount(); // Function LGUI.UISpriteSheetTexturePlayer.GetWidthCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041b90
	int32_t GetHeightCount(); // Function LGUI.UISpriteSheetTexturePlayer.GetHeightCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041750
};

// Class LGUI.UIStaticMesh
// Size: 0x480 (Inherited: 0x470)
struct UUIStaticMesh : UUIRenderable {
	struct UStaticMesh* Mesh; // 0x468(0x08)
	enum class UIStaticMeshVertexColorType vertexColorType; // 0x470(0x01)
	char pad_479[0x7]; // 0x479(0x07)

	void SetVertexColorType(enum class UIStaticMeshVertexColorType Value); // Function LGUI.UIStaticMesh.SetVertexColorType // (Final|Native|Public|BlueprintCallable) // @ game+0x1042c50
	void SetMesh(struct UStaticMesh* Value); // Function LGUI.UIStaticMesh.SetMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x10425a0
	enum class UIStaticMeshVertexColorType GetVertexColorType(); // Function LGUI.UIStaticMesh.GetVertexColorType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041b70
	struct UStaticMesh* GetMesh(); // Function LGUI.UIStaticMesh.GetMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041810
};

// Class LGUI.UIStaticMeshActor
// Size: 0x238 (Inherited: 0x230)
struct AUIStaticMeshActor : AUIBaseActor {
	struct UUIStaticMesh* UIStaticMesh; // 0x230(0x08)
};

// Class LGUI.UIText
// Size: 0x4e0 (Inherited: 0x470)
struct UUIText : UUIRenderable {
	struct ULGUIFontData* Font; // 0x468(0x08)
	struct FText Text; // 0x470(0x18)
	float Size; // 0x488(0x04)
	struct FVector2D Space; // 0x48c(0x08)
	enum class UITextParagraphHorizontalAlign hAlign; // 0x494(0x01)
	enum class UITextParagraphVerticalAlign vAlign; // 0x495(0x01)
	enum class UITextOverflowType overflowType; // 0x496(0x01)
	bool adjustWidth; // 0x497(0x01)
	bool adjustHeight; // 0x498(0x01)
	enum class UITextFontStyle fontStyle; // 0x499(0x01)
	bool richText; // 0x49a(0x01)
	char pad_4A3[0x3d]; // 0x4a3(0x3d)

	void SetText(struct FText newText); // Function LGUI.UIText.SetText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1042aa0
	void SetRichText(bool newRichText); // Function LGUI.UIText.SetRichText // (Final|Native|Public|BlueprintCallable) // @ game+0x10427b0
	void SetParagraphVerticalAlignment(enum class UITextParagraphVerticalAlign newVAlign); // Function LGUI.UIText.SetParagraphVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x1042730
	void SetParagraphHorizontalAlignment(enum class UITextParagraphHorizontalAlign newHAlign); // Function LGUI.UIText.SetParagraphHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x10426b0
	void SetOverflowType(enum class UITextOverflowType newOverflowType); // Function LGUI.UIText.SetOverflowType // (Final|Native|Public|BlueprintCallable) // @ game+0x1042630
	void SetFontStyle(enum class UITextFontStyle newFontStyle); // Function LGUI.UIText.SetFontStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x10423c0
	void SetFontSpace(struct FVector2D newSpace); // Function LGUI.UIText.SetFontSpace // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1042340
	void SetFontSize(float newSize); // Function LGUI.UIText.SetFontSize // (Final|Native|Public|BlueprintCallable) // @ game+0x10422c0
	void SetFont(struct ULGUIFontData* newFont); // Function LGUI.UIText.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x1042230
	void SetAdjustWidth(bool newAdjustWidth); // Function LGUI.UIText.SetAdjustWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1041e00
	void SetAdjustHeight(bool newAdjustHeight); // Function LGUI.UIText.SetAdjustHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1041d70
	struct FText GetText(); // Function LGUI.UIText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041a70
	float GetSize(); // Function LGUI.UIText.GetSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041900
	bool GetRichText(); // Function LGUI.UIText.GetRichText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10418e0
	struct FVector2D GetRealSize(); // Function LGUI.UIText.GetRealSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x10418a0
	enum class UITextOverflowType GetOverflowType(); // Function LGUI.UIText.GetOverflowType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041880
	enum class UITextFontStyle GetFontStyle(); // Function LGUI.UIText.GetFontStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041860
	struct FVector2D GetFontSpace(); // Function LGUI.UIText.GetFontSpace // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041830
	struct ULGUIFontData* GetFont(); // Function LGUI.UIText.GetFont // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041810
	bool GetAdjustWidth(); // Function LGUI.UIText.GetAdjustWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041790
	bool GetAdjustHeight(); // Function LGUI.UIText.GetAdjustHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041770
};

// Class LGUI.UITextActor
// Size: 0x238 (Inherited: 0x230)
struct AUITextActor : AUIBaseActor {
	struct UUIText* UIText; // 0x230(0x08)
};

// Class LGUI.UITextInputComponent
// Size: 0x428 (Inherited: 0x220)
struct UUITextInputComponent : UUISelectableComponent {
	char pad_220[0x10]; // 0x220(0x10)
	struct TWeakObjectPtr<struct AUITextActor> TextActor; // 0x230(0x08)
	struct FString Text; // 0x238(0x10)
	enum class ELGUITextInputType inputType; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct FString PasswordChar; // 0x250(0x10)
	bool bAllowMultiLine; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	int32_t MaxPrintText; // 0x264(0x04)
	int32_t MaxPrintLine; // 0x268(0x04)
	struct TWeakObjectPtr<struct AUIBaseActor> PlaceHolderActor; // 0x26c(0x08)
	float CaretBlinkRate; // 0x274(0x04)
	float CaretWidth; // 0x278(0x04)
	struct FColor CaretColor; // 0x27c(0x04)
	struct FColor SelectionColor; // 0x280(0x04)
	struct FVirtualKeyboardOptions VirtualKeyboradOptions; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct TArray<struct FKey> IgnoreKeys; // 0x288(0x10)
	char pad_298[0x18]; // 0x298(0x18)
	struct FLGUIDrawableEvent OnValueChange; // 0x2b0(0x18)
	char pad_2C8[0x18]; // 0x2c8(0x18)
	struct FLGUIDrawableEvent OnSubmit; // 0x2e0(0x18)
	char pad_2F8[0x18]; // 0x2f8(0x18)
	struct FLGUIDrawableEvent OnInputActivate; // 0x310(0x18)
	char pad_328[0x60]; // 0x328(0x60)
	struct APlayerController* PlayerController; // 0x388(0x08)
	char pad_390[0x14]; // 0x390(0x14)
	struct TWeakObjectPtr<struct UUISprite> CaretObject; // 0x3a4(0x08)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct TArray<struct TWeakObjectPtr<struct UUISprite>> SelectionMaskObjectArray; // 0x3b0(0x10)
	char pad_3C0[0x68]; // 0x3c0(0x68)

	void UnregisterValueChangeEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UITextInputComponent.UnregisterValueChangeEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1046a90
	void UnregisterSubmitEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UITextInputComponent.UnregisterSubmitEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1046970
	void UnregisterInputActivateEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UITextInputComponent.UnregisterInputActivateEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10468e0
	void SyncTextInput(); // Function LGUI.UITextInputComponent.SyncTextInput // (Final|Native|Public|BlueprintCallable) // @ game+0x10468c0
	void SetText(struct FString InText, bool InFireEvent); // Function LGUI.UITextInputComponent.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x1046470
	void SetInputType(enum class ELGUITextInputType NewValue); // Function LGUI.UITextInputComponent.SetInputType // (Final|Native|Public|BlueprintCallable) // @ game+0x1046190
	void SetCaretPosition(bool InHideSelection); // Function LGUI.UITextInputComponent.SetCaretPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x1045ef0
	struct FLGUIDelegateHandleWrapper RegisterValueChangeEvent(struct FDelegate InDelegate); // Function LGUI.UITextInputComponent.RegisterValueChangeEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1045da0
	struct FLGUIDelegateHandleWrapper RegisterSubmitEvent(struct FDelegate InDelegate); // Function LGUI.UITextInputComponent.RegisterSubmitEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1045aa0
	struct FLGUIDelegateHandleWrapper RegisterInputActivateEvent(struct FDelegate InDelegate); // Function LGUI.UITextInputComponent.RegisterInputActivateEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10459e0
	struct UUIText* GetTextComponent(); // Function LGUI.UITextInputComponent.GetTextComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1045940
	struct FString GetText(); // Function LGUI.UITextInputComponent.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10458a0
	enum class ELGUITextInputType GetInputType(); // Function LGUI.UITextInputComponent.GetInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10457e0
	void DeactivateInput(bool InFireEvent); // Function LGUI.UITextInputComponent.DeactivateInput // (Final|Native|Public|BlueprintCallable) // @ game+0x10456b0
	void ActivateInput(struct ULGUIPointerEventData* eventData); // Function LGUI.UITextInputComponent.ActivateInput // (Final|Native|Public|BlueprintCallable) // @ game+0x1045600
};

// Class LGUI.UITextureBase
// Size: 0x470 (Inherited: 0x470)
struct UUITextureBase : UUIRenderable {
	struct UTexture* Texture; // 0x468(0x08)

	void SetTexture(struct UTexture* newTexture); // Function LGUI.UITextureBase.SetTexture // (Native|Public|BlueprintCallable) // @ game+0x10465b0
	void SetSizeFromTexture(); // Function LGUI.UITextureBase.SetSizeFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x10462a0
	struct UTexture* GetTexture(); // Function LGUI.UITextureBase.GetTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041810
};

// Class LGUI.UITexture
// Size: 0x4c0 (Inherited: 0x470)
struct UUITexture : UUITextureBase {
	enum class UITextureType Type; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	struct FLGUISpriteInfo spriteData; // 0x474(0x2c)
	struct FVector4 uvRect; // 0x4a0(0x10)
	enum class UISpriteFillMethod fillMethod; // 0x4b0(0x01)
	char fillOrigin; // 0x4b1(0x01)
	bool fillDirectionFlip; // 0x4b2(0x01)
	char pad_4B3[0x1]; // 0x4b3(0x01)
	float fillAmount; // 0x4b4(0x04)
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void SetUVRect(struct FVector4 newUVRect); // Function LGUI.UITexture.SetUVRect // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1046750
	void SetTextureType(enum class UITextureType NewType); // Function LGUI.UITexture.SetTextureType // (Final|Native|Public|BlueprintCallable) // @ game+0x1046640
	void SetSpriteData(struct FLGUISpriteInfo newSpriteData); // Function LGUI.UITexture.SetSpriteData // (Final|Native|Public|BlueprintCallable) // @ game+0x10462c0
	void SetFillOrigin(char NewValue); // Function LGUI.UITexture.SetFillOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0x1046110
	void SetFillMethod(enum class UISpriteFillMethod NewValue); // Function LGUI.UITexture.SetFillMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x1046090
	void SetFillDirectionFlip(bool NewValue); // Function LGUI.UITexture.SetFillDirectionFlip // (Final|Native|Public|BlueprintCallable) // @ game+0x1046000
	void SetFillAmount(float NewValue); // Function LGUI.UITexture.SetFillAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x1045f80
	struct FVector4 GetUVRect(); // Function LGUI.UITexture.GetUVRect // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10459b0
	enum class UITextureType GetTextureType(); // Function LGUI.UITexture.GetTextureType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041b70
	struct FLGUISpriteInfo GetSpriteData(); // Function LGUI.UITexture.GetSpriteData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1045830
	char GetFillOrigin(); // Function LGUI.UITexture.GetFillOrigin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10457c0
	enum class UISpriteFillMethod GetFillMethod(); // Function LGUI.UITexture.GetFillMethod // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10457a0
	bool GetFillDirectionFlip(); // Function LGUI.UITexture.GetFillDirectionFlip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1045780
	float GetFillAmount(); // Function LGUI.UITexture.GetFillAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1045760
};

// Class LGUI.UITextureActor
// Size: 0x238 (Inherited: 0x230)
struct AUITextureActor : AUIBaseActor {
	struct UUITexture* UITexture; // 0x230(0x08)
};

// Class LGUI.UITextureBase_BP
// Size: 0x480 (Inherited: 0x470)
struct UUITextureBase_BP : UUITextureBase {
	struct ULGUICreateGeometryHelper* createGeometryHelper; // 0x470(0x08)
	struct ULGUIUpdateGeometryHelper* updateGeometryHelper; // 0x478(0x08)

	void OnUpdateGeometry_BP(struct ULGUIUpdateGeometryHelper* InUpdateGoemetryHelper, bool InVertexPositionChanged, bool InVertexUVChanged, bool InVertexColorChanged); // Function LGUI.UITextureBase_BP.OnUpdateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnCreateGeometry_BP(struct ULGUICreateGeometryHelper* InCreateGeometryHelper); // Function LGUI.UITextureBase_BP.OnCreateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnBeforeCreateOrUpdateGeometry_BP(); // Function LGUI.UITextureBase_BP.OnBeforeCreateOrUpdateGeometry_BP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MarkVertexChanged_BP(); // Function LGUI.UITextureBase_BP.MarkVertexChanged_BP // (Final|Native|Public|BlueprintCallable) // @ game+0x103d000
	void MarkRebuildGeometry_BP(); // Function LGUI.UITextureBase_BP.MarkRebuildGeometry_BP // (Final|Native|Public|BlueprintCallable) // @ game+0x103cfe0
};

// Class LGUI.UITextureBox
// Size: 0x480 (Inherited: 0x470)
struct UUITextureBox : UUITextureBase {
	float Thickness; // 0x470(0x04)
	bool seperateFrontColor; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	struct FColor frontFaceColor; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
};

// Class LGUI.UITextureBoxActor
// Size: 0x238 (Inherited: 0x230)
struct AUITextureBoxActor : AUIBaseActor {
	struct UUITextureBox* UITextureBox; // 0x230(0x08)
};

// Class LGUI.UIToggleComponent
// Size: 0x2e8 (Inherited: 0x220)
struct UUIToggleComponent : UUISelectableComponent {
	char pad_220[0x8]; // 0x220(0x08)
	struct TWeakObjectPtr<struct AUIBaseActor> ToggleActor; // 0x228(0x08)
	enum class UIToggleTransitionType ToggleTransition; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	struct TWeakObjectPtr<struct UUISelectableTransitionComponent> ToggleTransitionComp; // 0x234(0x08)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct ULTweener* ToggleTransitionTweener; // 0x240(0x08)
	float OnAlpha; // 0x248(0x04)
	float OffAlpha; // 0x24c(0x04)
	struct FColor OnColor; // 0x250(0x04)
	struct FColor OffColor; // 0x254(0x04)
	float ToggleDuration; // 0x258(0x04)
	struct FName OnTransitionName; // 0x25c(0x08)
	struct FName OffTransitionName; // 0x264(0x08)
	bool IsOn; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct ULGUIPointerEventData* pointerEventData; // 0x270(0x08)
	struct TWeakObjectPtr<struct AActor> UIToggleGroupActor; // 0x278(0x08)
	struct TWeakObjectPtr<struct UUIToggleGroupComponent> GroupComp; // 0x280(0x08)
	char pad_288[0x18]; // 0x288(0x18)
	struct FLGUIDrawableEvent OnToggle; // 0x2a0(0x18)
	char pad_2B8[0x18]; // 0x2b8(0x18)
	struct FLGUIDrawableEvent OnToggleUp; // 0x2d0(0x18)

	void UnregisterToggleUpEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIToggleComponent.UnregisterToggleUpEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102bee0
	void UnregisterToggleEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIToggleComponent.UnregisterToggleEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102bdc0
	void SetValue(bool NewValue, bool fireEvent); // Function LGUI.UIToggleComponent.SetValue // (Native|Public|BlueprintCallable) // @ game+0x10467e0
	void SetToggleGroup(struct UUIToggleGroupComponent* InGroupComp); // Function LGUI.UIToggleComponent.SetToggleGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x10466c0
	void SetState(bool NewState, bool fireEvent); // Function LGUI.UIToggleComponent.SetState // (Native|Public|BlueprintCallable) // @ game+0x1046390
	struct FLGUIDelegateHandleWrapper RegisterToggleUpEvent(struct FDelegate InDelegate); // Function LGUI.UIToggleComponent.RegisterToggleUpEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1045ce0
	struct FLGUIDelegateHandleWrapper RegisterToggleEvent(struct FDelegate InDelegate); // Function LGUI.UIToggleComponent.RegisterToggleEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1045b60
	bool GetValue(); // Function LGUI.UIToggleComponent.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1045880
	struct AActor* GetToggleGroupActor(); // Function LGUI.UIToggleComponent.GetToggleGroupActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1045970
	bool GetState(); // Function LGUI.UIToggleComponent.GetState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1045880
	void DelayAwake(); // Function LGUI.UIToggleComponent.DelayAwake // (Final|Native|Public|BlueprintCallable) // @ game+0x1045740
};

// Class LGUI.UIToggleGroupComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UUIToggleGroupComponent : UActorComponent {
	struct TWeakObjectPtr<struct UUIToggleComponent> LastSelect; // 0xb0(0x08)
	bool bAllowNoneSelected; // 0xb8(0x01)
	char pad_B9[0x1f]; // 0xb9(0x1f)
	struct FLGUIDrawableEvent OnToggle; // 0xd8(0x18)

	void UnregisterToggleEvent(struct FLGUIDelegateHandleWrapper InDelegateHandle); // Function LGUI.UIToggleGroupComponent.UnregisterToggleEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1046a00
	void SetSelection(struct UUIToggleComponent* Target); // Function LGUI.UIToggleGroupComponent.SetSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x1046210
	void SetAllowNoneSelected(bool InBool); // Function LGUI.UIToggleGroupComponent.SetAllowNoneSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x1045e60
	struct FLGUIDelegateHandleWrapper RegisterToggleEvent(struct FDelegate InDelegate); // Function LGUI.UIToggleGroupComponent.RegisterToggleEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1045c20
	struct UUIToggleComponent* GetSelectedItem(); // Function LGUI.UIToggleGroupComponent.GetSelectedItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1045800
	bool GetAllowNoneSelected(); // Function LGUI.UIToggleGroupComponent.GetAllowNoneSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101dde0
	void ClearSelection(); // Function LGUI.UIToggleGroupComponent.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x1045690
};

// Class LGUI.UIVerticalLayout
// Size: 0x118 (Inherited: 0xd0)
struct UUIVerticalLayout : UUILayoutBase {
	struct FMargin Padding; // 0xd0(0x10)
	float Spacing; // 0xe0(0x04)
	enum class ELGUILayoutAlignmentType align; // 0xe4(0x01)
	bool ExpendChildrenWidth; // 0xe5(0x01)
	bool ExpendChildrenHeight; // 0xe6(0x01)
	bool HeightFitToChildren; // 0xe7(0x01)
	enum class EUILayoutChangePositionAnimationType AnimationType; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float AnimationDuration; // 0xec(0x04)
	struct TArray<struct ULTweener*> TweenerArray; // 0xf0(0x10)
	char pad_100[0x18]; // 0x100(0x18)

	void SetSpacing(float Value); // Function LGUI.UIVerticalLayout.SetSpacing // (Final|Native|Public|BlueprintCallable) // @ game+0x1034020
	void SetPadding(struct FMargin Value); // Function LGUI.UIVerticalLayout.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x1033e00
	void SetHeightFitToChildren(bool Value); // Function LGUI.UIVerticalLayout.SetHeightFitToChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x1034240
	void SetExpendChildrenWidth(bool Value); // Function LGUI.UIVerticalLayout.SetExpendChildrenWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1033aa0
	void SetExpendChildrenHeight(bool Value); // Function LGUI.UIVerticalLayout.SetExpendChildrenHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1033a10
	void SetAlign(enum class ELGUILayoutAlignmentType Value); // Function LGUI.UIVerticalLayout.SetAlign // (Final|Native|Public|BlueprintCallable) // @ game+0x10336f0
	float GetSpacing(); // Function LGUI.UIVerticalLayout.GetSpacing // (Final|Native|Public|BlueprintCallable) // @ game+0x1032cc0
	struct FMargin GetPadding(); // Function LGUI.UIVerticalLayout.GetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x1032c40
	bool GetHeightFitToChildren(); // Function LGUI.UIVerticalLayout.GetHeightFitToChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x1032d40
	bool GetExpendChildrenWidth(); // Function LGUI.UIVerticalLayout.GetExpendChildrenWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1032b80
	bool GetExpendChildrenHeight(); // Function LGUI.UIVerticalLayout.GetExpendChildrenHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1032b60
	enum class ELGUILayoutAlignmentType GetAlign(); // Function LGUI.UIVerticalLayout.GetAlign // (Final|Native|Public|BlueprintCallable) // @ game+0x1032a90
	float GetActuralRange(); // Function LGUI.UIVerticalLayout.GetActuralRange // (Final|Native|Public|BlueprintCallable) // @ game+0x1032a70
};

// Class LGUI.ViewportUITexture
// Size: 0x4c0 (Inherited: 0x4c0)
struct UViewportUITexture : UUITexture {
	struct ASceneCapture2D* SceneCaptureActor; // 0x4b8(0x08)

	bool WorldToViewPoint(struct FVector InWorldLocation, struct FVector2D OutViewPoint); // Function LGUI.ViewportUITexture.WorldToViewPoint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1046ff0
	void ViewPointToWorld(struct FVector2D InViewPoint, struct FVector OutWorldLocation, struct FVector OutWorldDirection); // Function LGUI.ViewportUITexture.ViewPointToWorld // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1046ec0
	struct USceneCaptureComponent2D* GetSceneCapture(); // Function LGUI.ViewportUITexture.GetSceneCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1046e70
};

// Class LGUI.ViewportUITextureActor
// Size: 0x238 (Inherited: 0x230)
struct AViewportUITextureActor : AUIBaseActor {
	struct UViewportUITexture* UITextureComponent; // 0x230(0x08)

	struct UViewportUITexture* GetUITexture(); // Function LGUI.ViewportUITextureActor.GetUITexture // (Final|Native|Public|BlueprintCallable) // @ game+0x1046ea0
};

