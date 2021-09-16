// Enum LTween.LTweenLoop
enum class LTweenLoop : uint8 {
	Once,
	Restart,
	Yoyo,
	Incremental,
	LTweenLoop_MAX,
};

// Enum LTween.LTweenEase
enum class LTweenEase : uint8 {
	Linear,
	InQuad,
	OutQuad,
	InOutQuad,
	InCubic,
	OutCubic,
	InOutCubic,
	InQuart,
	OutQuart,
	InOutQuart,
	InSine,
	OutSine,
	InOutSine,
	InExpo,
	OutExpo,
	InOutExpo,
	InCirc,
	OutCirc,
	InOutCirc,
	InElastic,
	OutElastic,
	InOutElastic,
	InBack,
	OutBack,
	InOutBack,
	InBounce,
	OutBounce,
	InOutBounce,
	CurveFloat,
	LTweenEase_MAX,
};

// ScriptStruct LTween.LTweenDelegateHandleWrapper
// Size: 0x08 (Inherited: 0x00)
struct FLTweenDelegateHandleWrapper {
	char pad_0[0x8]; // 0x00(0x08)
};

