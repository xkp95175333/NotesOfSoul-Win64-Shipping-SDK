// Enum LGUI.ELGUIPointerInputType
enum class ELGUIPointerInputType : uint8 {
	Pointer,
	Navigation,
	ELGUIPointerInputType_MAX,
};

// Enum LGUI.ESceneComponentRayDirection
enum class ESceneComponentRayDirection : uint8 {
	PositiveX,
	NagtiveX,
	PositiveY,
	NagtiveY,
	PositiveZ,
	NagtiveZ,
	ESceneComponentRayDirection_MAX,
};

// Enum LGUI.EUIRaycastSortType
enum class EUIRaycastSortType : uint8 {
	DependOnUIDepth,
	DependOnDistance,
	EUIRaycastSortType_MAX,
};

// Enum LGUI.EMouseButtonType
enum class EMouseButtonType : uint8 {
	Left,
	Middle,
	Right,
	UserDefined1,
	UserDefined2,
	UserDefined3,
	UserDefined4,
	UserDefined5,
	UserDefined6,
	UserDefined7,
	UserDefined8,
	EMouseButtonType_MAX,
};

// Enum LGUI.EPointerEventType
enum class EPointerEventType : uint8 {
	Click,
	Enter,
	Exit,
	Down,
	Up,
	BeginDrag,
	Drag,
	EndDrag,
	Scroll,
	DragEnter_DEPRECATED,
	DragExit_DEPRECATED,
	DragDrop,
	Select,
	Deselect,
	Navigate,
	EPointerEventType_MAX,
};

// Enum LGUI.ELGUIEventFireType
enum class ELGUIEventFireType : uint8 {
	TargetActorAndAllItsComponents,
	OnlyTargetComponent,
	OnlyTargetActor,
	ELGUIEventFireType_MAX,
};

// Enum LGUI.ELGUICanvasOverrideParameters
enum class ELGUICanvasOverrideParameters : uint8 {
	DefaltMaterials,
	PixelPerfect,
	DynamicPixelsPerUnit,
	ClipType,
	AdditionalShaderChannels,
	ELGUICanvasOverrideParameters_MAX,
};

// Enum LGUI.ELGUICanvasAdditionalChannelType
enum class ELGUICanvasAdditionalChannelType : uint8 {
	Normal,
	Tangent,
	UV1,
	UV2,
	UV3,
	ELGUICanvasAdditionalChannelType_MAX,
};

// Enum LGUI.ELGUICanvasClipType
enum class ELGUICanvasClipType : uint8 {
	None,
	Rect,
	Texture,
	ELGUICanvasClipType_MAX,
};

// Enum LGUI.ELGUIRenderMode
enum class ELGUIRenderMode : uint8 {
	ScreenSpaceOverlay,
	WorldSpace,
	RenderTarget,
	ELGUIRenderMode_MAX,
};

// Enum LGUI.LGUIScreenMatchMode
enum class LGUIScreenMatchMode : uint8 {
	MatchWidthOrHeight,
	Expand,
	Shrink,
	LGUIScreenMatchMode_MAX,
};

// Enum LGUI.LGUIScaleMode
enum class LGUIScaleMode : uint8 {
	ConstantPixelSize,
	ScaleWithScreenSize,
	LGUIScaleMode_MAX,
};

// Enum LGUI.LGUIDrawableEventParameterType
enum class LGUIDrawableEventParameterType : uint8 {
	None,
	Empty,
	Bool,
	Float,
	Double,
	Int8,
	UInt8,
	Int16,
	UInt16,
	Int32,
	UInt32,
	Int64,
	UInt64,
	Vector2,
	Vector3,
	Vector4,
	Color,
	LinearColor,
	Quaternion,
	String,
	Name,
	Object,
	Actor,
	PointerEvent,
	Class,
	Rotator,
	LGUIDrawableEventParameterType_MAX,
};

// Enum LGUI.ELGUINavigationDirection
enum class ELGUINavigationDirection : uint8 {
	None,
	Left,
	Right,
	Up,
	Down,
	Next,
	Prev,
	ELGUINavigationDirection_MAX,
};

// Enum LGUI.ELGUIScreenSpaceUIAntiAliasing
enum class ELGUIScreenSpaceUIAntiAliasing : uint8 {
	Hidden,
	Disabled,
	SampleCount_2x,
	SampleCount_4x,
	SampleCount_8x,
	ELGUIScreenSpaceUIAntiAliasing_MAX,
};

// Enum LGUI.ELGUIAtlasPackingType
enum class ELGUIAtlasPackingType : uint8 {
	Dynamic,
	Static,
	ELGUIAtlasPackingType_MAX,
};

// Enum LGUI.ELGUIAtlasTextureSizeType
enum class ELGUIAtlasTextureSizeType : uint8 {
	SIZE_256x256,
	SIZE_512x512,
	SIZE_1024x1024,
	SIZE_2048x2048,
	SIZE_4096x4096,
	SIZE_8192x8192,
	SIZE_MAX,
};

// Enum LGUI.ELGUIWorldSpaceInteractionSource
enum class ELGUIWorldSpaceInteractionSource : uint8 {
	World,
	Mouse,
	CenterScreen,
	ELGUIWorldSpaceInteractionSource_MAX,
};

// Enum LGUI.EUI2DLineRenderer_EndType
enum class EUI2DLineRenderer_EndType : uint8 {
	None,
	Cap,
	ConnectStartAndEnd,
	EUI2DLineRenderer_MAX,
};

// Enum LGUI.EUIRenderableType
enum class EUIRenderableType : uint8 {
	None,
	UIGeometryRenderable,
	UIPostProcessRenderable,
	EUIRenderableType_MAX,
};

// Enum LGUI.EComboBoxPosition
enum class EComboBoxPosition : uint8 {
	Top,
	Middle,
	Bottom,
	EComboBoxPosition_MAX,
};

// Enum LGUI.EUIDropdownHorizontalPosition
enum class EUIDropdownHorizontalPosition : uint8 {
	Left,
	Center,
	Right,
	Automatic,
	EUIDropdownHorizontalPosition_MAX,
};

// Enum LGUI.EUIDropdownVerticalPosition
enum class EUIDropdownVerticalPosition : uint8 {
	Bottom,
	Middle,
	Top,
	Automatic,
	EUIDropdownVerticalPosition_MAX,
};

// Enum LGUI.EUIEffectGradientColorDirection
enum class EUIEffectGradientColorDirection : uint8 {
	BottomToTop,
	TopToBottom,
	LeftToRight,
	RightToLeft,
	FourCornor,
	EUIEffectGradientColorDirection_MAX,
};

// Enum LGUI.EFlyoutMenuHorizontalAlignment
enum class EFlyoutMenuHorizontalAlignment : uint8 {
	Left,
	Center,
	Right,
	EFlyoutMenuHorizontalAlignment_MAX,
};

// Enum LGUI.EFlyoutMenuVerticalPosition
enum class EFlyoutMenuVerticalPosition : uint8 {
	Top,
	Bottom,
	EFlyoutMenuVerticalPosition_MAX,
};

// Enum LGUI.UIItemType
enum class UIItemType : uint8 {
	None,
	UIItem,
	UIRenderable,
	UIItemType_MAX,
};

// Enum LGUI.EUILayoutChangePositionAnimationType
enum class EUILayoutChangePositionAnimationType : uint8 {
	Immediately,
	EaseAnimation,
	EUILayoutChangePositionAnimationType_MAX,
};

// Enum LGUI.ELGUILayoutAlignmentType
enum class ELGUILayoutAlignmentType : uint8 {
	UpperLeft,
	UpperCenter,
	UpperRight,
	MiddleLeft,
	MiddleCenter,
	MiddleRight,
	LowerLeft,
	LowerCenter,
	LowerRight,
	ELGUILayoutAlignmentType_MAX,
};

// Enum LGUI.ELayoutElementType
enum class ELayoutElementType : uint8 {
	AutoSize,
	IgnoreLayout,
	ConstantSize,
	RatioSize,
	ELayoutElementType_MAX,
};

// Enum LGUI.UIPolygonUVType
enum class UIPolygonUVType : uint8 {
	SpriteRect,
	HeightCenter,
	StretchSpriteHeight,
	UIPolygonUVType_MAX,
};

// Enum LGUI.UIScrollbarDirectionType
enum class UIScrollbarDirectionType : uint8 {
	LeftToRight,
	RightToLeft,
	BottomToTop,
	TopToBottom,
	UIScrollbarDirectionType_MAX,
};

// Enum LGUI.EScrollViewScrollbarVisibility
enum class EScrollViewScrollbarVisibility : uint8 {
	Permanent,
	AutoHide,
	AutoHideAndExpandViewport,
	EScrollViewScrollbarVisibility_MAX,
};

// Enum LGUI.EUISelectableNavigationMode
enum class EUISelectableNavigationMode : uint8 {
	None,
	Auto,
	Explicit,
	EUISelectableNavigationMode_MAX,
};

// Enum LGUI.EUISelectableSelectionState
enum class EUISelectableSelectionState : uint8 {
	Normal,
	Highlighted,
	Pressed,
	Disabled,
	EUISelectableSelectionState_MAX,
};

// Enum LGUI.UISelectableTransitionType
enum class UISelectableTransitionType : uint8 {
	None,
	ColorTint,
	SpriteSwap,
	TransitionComponent,
	UISelectableTransitionType_MAX,
};

// Enum LGUI.EUISizeControlByAspectRatioMode
enum class EUISizeControlByAspectRatioMode : uint8 {
	None,
	WidthControlHeight,
	HeightControlWidth,
	FitInParent,
	EnvelopeParent,
	EUISizeControlByAspectRatioMode_MAX,
};

// Enum LGUI.UISliderDirectionType
enum class UISliderDirectionType : uint8 {
	LeftToRight,
	RightToLeft,
	BottomToTop,
	TopToBottom,
	UISliderDirectionType_MAX,
};

// Enum LGUI.UISpriteFillOriginType_Radial360
enum class UISpriteFillOriginType_Radial360 : uint8 {
	Bottom,
	Right,
	Top,
	Left,
	UISpriteFillOriginType_MAX,
};

// Enum LGUI.UISpriteFillOriginType_Radial180
enum class UISpriteFillOriginType_Radial180 : uint8 {
	Bottom,
	Left,
	Top,
	Right,
	UISpriteFillOriginType_MAX,
};

// Enum LGUI.UISpriteFillOriginType_Radial90
enum class UISpriteFillOriginType_Radial90 : uint8 {
	BottomLeft,
	TopLeft,
	TopRight,
	BottomRight,
	UISpriteFillOriginType_MAX,
};

// Enum LGUI.UISpriteFillMethod
enum class UISpriteFillMethod : uint8 {
	Horizontal,
	Vertical,
	Radial90,
	Radial180,
	Radial360,
	UISpriteFillMethod_MAX,
};

// Enum LGUI.UISpriteType
enum class UISpriteType : uint8 {
	Normal,
	Sliced,
	SlicedFrame,
	Tiled,
	Filled,
	UISpriteType_MAX,
};

// Enum LGUI.UIStaticMeshVertexColorType
enum class UIStaticMeshVertexColorType : uint8 {
	MultiplyWithUIColor,
	ReplaceByUIColor,
	NotAffectByUIColor,
	UIStaticMeshVertexColorType_MAX,
};

// Enum LGUI.UITextOverflowType
enum class UITextOverflowType : uint8 {
	HorizontalOverflow,
	VerticalOverflow,
	ClampContent,
	UITextOverflowType_MAX,
};

// Enum LGUI.UITextFontStyle
enum class UITextFontStyle : uint8 {
	None,
	Bold,
	Italic,
	BoldAndItalic,
	UITextFontStyle_MAX,
};

// Enum LGUI.UITextParagraphVerticalAlign
enum class UITextParagraphVerticalAlign : uint8 {
	Top,
	Middle,
	Bottom,
	UITextParagraphVerticalAlign_MAX,
};

// Enum LGUI.UITextParagraphHorizontalAlign
enum class UITextParagraphHorizontalAlign : uint8 {
	Left,
	Center,
	Right,
	UITextParagraphHorizontalAlign_MAX,
};

// Enum LGUI.ELGUITextInputType
enum class ELGUITextInputType : uint8 {
	Standard,
	IntegerNumber,
	DecimalNumber,
	Password,
	ELGUITextInputType_MAX,
};

// Enum LGUI.UITextureType
enum class UITextureType : uint8 {
	Normal,
	Sliced,
	SlicedFrame,
	Tiled,
	Filled,
	UITextureType_MAX,
};

// Enum LGUI.UIToggleTransitionType
enum class UIToggleTransitionType : uint8 {
	None,
	Fade,
	ColorTint,
	TransitionComponent,
	UIToggleTransitionType_MAX,
};

// Enum LGUI.UIAnchorVerticalAlign
enum class UIAnchorVerticalAlign : uint8 {
	None,
	Top,
	Middle,
	Bottom,
	Stretch,
	UIAnchorVerticalAlign_MAX,
};

// Enum LGUI.UIAnchorHorizontalAlign
enum class UIAnchorHorizontalAlign : uint8 {
	None,
	Left,
	Center,
	Right,
	Stretch,
	UIAnchorHorizontalAlign_MAX,
};

// ScriptStruct LGUI.LGUIAtlasData
// Size: 0x70 (Inherited: 0x00)
struct FLGUIAtlasData {
	struct TArray<struct TWeakObjectPtr<struct UUISpriteBase>> renderSpriteArray; // 0x00(0x10)
	struct UTexture2D* atlasTexture; // 0x10(0x08)
	char pad_18[0x30]; // 0x18(0x30)
	struct TArray<struct TWeakObjectPtr<struct ULGUISpriteData>> spriteDataArray; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
};

// ScriptStruct LGUI.LGUIComponentReference
// Size: 0x20 (Inherited: 0x00)
struct FLGUIComponentReference {
	struct TWeakObjectPtr<struct AActor> targetActor; // 0x00(0x08)
	struct UActorComponent* targetComponentClass; // 0x08(0x08)
	struct FName targetComonentName; // 0x10(0x08)
	struct TWeakObjectPtr<struct UActorComponent> componentInstance; // 0x18(0x08)
};

// ScriptStruct LGUI.LGUIDelegateHandleWrapper
// Size: 0x08 (Inherited: 0x00)
struct FLGUIDelegateHandleWrapper {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct LGUI.LGUIDrawableEvent
// Size: 0x18 (Inherited: 0x00)
struct FLGUIDrawableEvent {
	struct TArray<struct FLGUIDrawableEventData> eventList; // 0x00(0x10)
	enum class LGUIDrawableEventParameterType supportParameterType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct LGUI.LGUIDrawableEventData
// Size: 0x78 (Inherited: 0x00)
struct FLGUIDrawableEventData {
	struct AActor* targetActor; // 0x00(0x08)
	struct UObject* ComponentClass; // 0x08(0x08)
	struct FName componentName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	enum class LGUIDrawableEventParameterType ParamType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<char> ParamBuffer; // 0x28(0x10)
	struct UObject* ReferenceObject; // 0x38(0x08)
	struct AActor* ReferenceActor; // 0x40(0x08)
	struct UObject* ReferenceClass; // 0x48(0x08)
	struct FString ReferenceString; // 0x50(0x10)
	bool UseNativeParameter; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UFunction* CacheFunction; // 0x68(0x08)
	struct UObject* CacheTarget; // 0x70(0x08)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Rotator
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Rotator : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Class
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Class : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_PointerEvent
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_PointerEvent : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Actor
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Actor : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Object
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Object : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_String
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_String : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Quaternion
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Quaternion : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_LinearColor
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_LinearColor : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Color
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Color : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Vector4
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Vector4 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Vector3
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Vector3 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Vector2
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Vector2 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_UInt64
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_UInt64 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Int64
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Int64 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_UInt32
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_UInt32 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Int32
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Int32 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_UInt16
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_UInt16 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Int16
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Int16 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_UInt8
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_UInt8 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Int8
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Int8 : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Double
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Double : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Float
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Float : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Bool
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Bool : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIDrawableEvent_Empty
// Size: 0x30 (Inherited: 0x18)
struct FLGUIDrawableEvent_Empty : FLGUIDrawableEvent {
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct LGUI.LGUIBehaviourArrayContainer
// Size: 0x10 (Inherited: 0x00)
struct FLGUIBehaviourArrayContainer {
	struct TArray<struct TWeakObjectPtr<struct ULGUIBehaviour>> LGUIBehaviourArray; // 0x00(0x10)
};

// ScriptStruct LGUI.LGUIAtlasSettings
// Size: 0x08 (Inherited: 0x00)
struct FLGUIAtlasSettings {
	enum class ELGUIAtlasTextureSizeType atlasTextureInitialSize; // 0x00(0x01)
	bool atlasTextureUseSRGB; // 0x01(0x01)
	enum class TextureFilter atlasTextureFilter; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t spaceBetweenSprites; // 0x04(0x04)
};

// ScriptStruct LGUI.LGUISpriteInfo
// Size: 0x2c (Inherited: 0x00)
struct FLGUISpriteInfo {
	uint16_t Width; // 0x00(0x02)
	uint16_t Height; // 0x02(0x02)
	uint16_t borderLeft; // 0x04(0x02)
	uint16_t borderRight; // 0x06(0x02)
	uint16_t borderTop; // 0x08(0x02)
	uint16_t borderBottom; // 0x0a(0x02)
	char pad_C[0x20]; // 0x0c(0x20)
};

// ScriptStruct LGUI.ShowUIParameter
// Size: 0x10 (Inherited: 0x00)
struct FShowUIParameter {
	struct USceneComponent* AttachTo; // 0x00(0x08)
	bool IsEsc; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct LGUI.UIDropdownOptionData
// Size: 0x18 (Inherited: 0x00)
struct FUIDropdownOptionData {
	struct FString Text; // 0x00(0x10)
	struct ULGUISpriteData* Sprite; // 0x10(0x08)
};

// ScriptStruct LGUI.LGUIGeometryVertex
// Size: 0x48 (Inherited: 0x00)
struct FLGUIGeometryVertex {
	struct FVector position; // 0x00(0x0c)
	struct FColor Color; // 0x0c(0x04)
	struct FVector2D uv0; // 0x10(0x08)
	struct FVector2D uv1; // 0x18(0x08)
	struct FVector2D uv2; // 0x20(0x08)
	struct FVector2D uv3; // 0x28(0x08)
	struct FVector Normal; // 0x30(0x0c)
	struct FVector tagent; // 0x3c(0x0c)
};

// ScriptStruct LGUI.UIWidget
// Size: 0x34 (Inherited: 0x00)
struct FUIWidget {
	int32_t Depth; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct FVector2D Pivot; // 0x08(0x08)
	enum class UIAnchorHorizontalAlign anchorHAlign; // 0x10(0x01)
	enum class UIAnchorVerticalAlign anchorVAlign; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float anchorOffsetX; // 0x14(0x04)
	float anchorOffsetY; // 0x18(0x04)
	float Width; // 0x1c(0x04)
	float Height; // 0x20(0x04)
	float stretchLeft; // 0x24(0x04)
	float stretchRight; // 0x28(0x04)
	float stretchTop; // 0x2c(0x04)
	float stretchBottom; // 0x30(0x04)
};

