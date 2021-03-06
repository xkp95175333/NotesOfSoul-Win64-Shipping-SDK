// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8 {
	Undefined,
	Generic,
	RelativeLocation,
	RelativeRotation,
	RelativeScale3D,
	Visibility,
	Material,
	Color,
	Option,
	EPropertyValueCategory_MAX,
};

// ScriptStruct VariantManagerContent.FunctionCaller
// Size: 0x08 (Inherited: 0x00)
struct FFunctionCaller {
	struct FName FunctionName; // 0x00(0x08)
};

// ScriptStruct VariantManagerContent.CapturedPropSegment
// Size: 0x28 (Inherited: 0x00)
struct FCapturedPropSegment {
	struct FString PropertyName; // 0x00(0x10)
	int32_t PropertyIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString componentName; // 0x18(0x10)
};

// ScriptStruct VariantManagerContent.VariantDependency
// Size: 0x58 (Inherited: 0x00)
struct FVariantDependency {
	struct TSoftObjectPtr<struct UVariantSet> VariantSet; // 0x00(0x28)
	struct TSoftObjectPtr<struct UVariant> Variant; // 0x28(0x28)
	bool bEnabled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

