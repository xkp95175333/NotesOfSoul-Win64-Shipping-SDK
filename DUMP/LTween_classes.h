// Class LTween.LTweenActor
// Size: 0x258 (Inherited: 0x220)
struct ALTweenActor : AActor {
	struct TArray<struct ULTweener*> tweenerList; // 0x220(0x10)
	char pad_230[0x28]; // 0x230(0x28)

	struct ALTweenActor* GetLTweenInstance(struct UObject* WorldContextObject); // Function LTween.LTweenActor.GetLTweenInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x105b950
	void EnableTick(); // Function LTween.LTweenActor.EnableTick // (Final|Native|Public|BlueprintCallable) // @ game+0x105b6e0
	void DisableTick(); // Function LTween.LTweenActor.DisableTick // (Final|Native|Public|BlueprintCallable) // @ game+0x105b6c0
	void CustomTick(float DeltaTime); // Function LTween.LTweenActor.CustomTick // (Final|Native|Public|BlueprintCallable) // @ game+0x105b3d0
};

// Class LTween.LTweenBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULTweenBPLibrary : UBlueprintFunctionLibrary {

	struct ULTweener* WorldRotatorTo_Sweep(struct USceneComponent* Target, struct FRotator endValue, bool shortestPath, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldRotatorTo_Sweep // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1061cf0
	struct ULTweener* WorldRotatorTo(struct USceneComponent* Target, struct FRotator endValue, bool shortestPath, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldRotatorTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1061b10
	struct ULTweener* WorldRotationQuaternionTo_Sweep(struct USceneComponent* Target, struct FQuat endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldRotationQuaternionTo_Sweep // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1061850
	struct ULTweener* WorldRotationQuaternionTo(struct USceneComponent* Target, struct FQuat endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldRotationQuaternionTo // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1061690
	struct ULTweener* WorldRotateEulerAngleTo_Sweep(struct USceneComponent* Target, struct FVector eulerAngle, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldRotateEulerAngleTo_Sweep // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10613e0
	struct ULTweener* WorldRotateEulerAngleTo(struct USceneComponent* Target, struct FVector eulerAngle, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldRotateEulerAngleTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1061220
	struct ULTweener* WorldPositionZTo_Sweep(struct USceneComponent* Target, float endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldPositionZTo_Sweep // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1060f80
	struct ULTweener* WorldPositionZTo(struct USceneComponent* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldPositionZTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1060df0
	struct ULTweener* WorldPositionYTo_Sweep(struct USceneComponent* Target, float endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldPositionYTo_Sweep // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1060b50
	struct ULTweener* WorldPositionYTo(struct USceneComponent* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldPositionYTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10609c0
	struct ULTweener* WorldPositionXTo_Sweep(struct USceneComponent* Target, float endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldPositionXTo_Sweep // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1060720
	struct ULTweener* WorldPositionXTo(struct USceneComponent* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldPositionXTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1060590
	struct ULTweener* WorldPositionTo_Sweep(struct USceneComponent* Target, struct FVector endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldPositionTo_Sweep // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10602e0
	struct ULTweener* WorldPositionTo(struct USceneComponent* Target, struct FVector endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.WorldPositionTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1060120
	struct ULTweener* VirtualCall(struct UObject* WorldContextObject, float Duration, float Delay, struct FDelegate Start, struct FDelegate Update, struct FDelegate complete); // Function LTween.LTweenBPLibrary.VirtualCall // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105fee0
	struct ULTweener* Vector4To(struct UObject* WorldContextObject, struct FDelegate setter, struct FVector4 startValue, struct FVector4 endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.Vector4To // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105fc90
	struct ULTweener* Vector3To(struct UObject* WorldContextObject, struct FDelegate setter, struct FVector startValue, struct FVector endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.Vector3To // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105fa40
	struct ULTweener* Vector2To(struct UObject* WorldContextObject, struct FDelegate setter, struct FVector2D startValue, struct FVector2D endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.Vector2To // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105f810
	void UnregisterUpdateEvent(struct UObject* WorldContextObject, struct FLTweenDelegateHandleWrapper delegateHandle); // Function LTween.LTweenBPLibrary.UnregisterUpdateEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x105f740
	struct ULTweener* RotatorTo(struct UObject* WorldContextObject, struct FDelegate setter, struct FRotator startValue, struct FRotator endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.RotatorTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105f120
	struct FLTweenDelegateHandleWrapper RegisterUpdateEvent(struct UObject* WorldContextObject, struct FDelegate Update); // Function LTween.LTweenBPLibrary.RegisterUpdateEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x105ef50
	struct ULTweener* QuaternionTo(struct UObject* WorldContextObject, struct FDelegate setter, struct FQuat startValue, struct FQuat endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.QuaternionTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105ed10
	struct ULTweener* MeshMaterialVectorParameterTo(struct UMeshComponent* Target, int32_t MaterialIndex, struct FName ParameterName, struct FLinearColor endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.MeshMaterialVectorParameterTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105e720
	struct ULTweener* MeshMaterialScalarParameterTo(struct UMeshComponent* Target, int32_t MaterialIndex, struct FName ParameterName, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.MeshMaterialScalarParameterTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105e510
	struct ULTweener* MaterialVectorParameterTo(struct UMaterialInstanceDynamic* Target, struct FName ParameterName, struct FLinearColor endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.MaterialVectorParameterTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105e340
	struct ULTweener* MaterialScalarParameterTo(struct UMaterialInstanceDynamic* Target, struct FName ParameterName, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.MaterialScalarParameterTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105e170
	struct ULTweener* LocalScaleTo(struct USceneComponent* Target, struct FVector endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalScaleTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105dfb0
	struct ULTweener* LocalRotatorTo_Sweep(struct USceneComponent* Target, struct FRotator endValue, bool shortestPath, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalRotatorTo_Sweep // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x105dca0
	struct ULTweener* LocalRotatorTo(struct USceneComponent* Target, struct FRotator endValue, bool shortestPath, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalRotatorTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105dac0
	struct ULTweener* LocalRotationQuaternionTo_Sweep(struct USceneComponent* Target, struct FQuat endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalRotationQuaternionTo_Sweep // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x105d800
	struct ULTweener* LocalRotationQuaternionTo(struct USceneComponent* Target, struct FQuat endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalRotationQuaternionTo // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x105d640
	struct ULTweener* LocalRotateEulerAngleTo_Sweep(struct USceneComponent* Target, struct FVector eulerAngle, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalRotateEulerAngleTo_Sweep // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x105d390
	struct ULTweener* LocalRotateEulerAngleTo(struct USceneComponent* Target, struct FVector eulerAngle, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalRotateEulerAngleTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105d1d0
	struct ULTweener* LocalPositionZTo_Sweep(struct USceneComponent* Target, float endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalPositionZTo_Sweep // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x105cf30
	struct ULTweener* LocalPositionZTo(struct USceneComponent* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalPositionZTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105cda0
	struct ULTweener* LocalPositionYTo_Sweep(struct USceneComponent* Target, float endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalPositionYTo_Sweep // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x105cb00
	struct ULTweener* LocalPositionYTo(struct USceneComponent* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalPositionYTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105c970
	struct ULTweener* LocalPositionXTo_Sweep(struct USceneComponent* Target, float endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalPositionXTo_Sweep // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x105c6d0
	struct ULTweener* LocalPositionXTo(struct USceneComponent* Target, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalPositionXTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105c540
	struct ULTweener* LocalPositionTo_Sweep(struct USceneComponent* Target, struct FVector endValue, struct FHitResult SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalPositionTo_Sweep // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x105c290
	struct ULTweener* LocalPositionTo(struct USceneComponent* Target, struct FVector endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LocalPositionTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105c0d0
	struct ULTweener* LinearColorTo(struct UObject* WorldContextObject, struct FDelegate setter, struct FLinearColor startValue, struct FLinearColor endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.LinearColorTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105be90
	void KillIfIsTweening(struct UObject* WorldContextObject, struct ULTweener* inTweener, bool callComplete); // Function LTween.LTweenBPLibrary.KillIfIsTweening // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105bd90
	bool IsTweening(struct UObject* WorldContextObject, struct ULTweener* inTweener); // Function LTween.LTweenBPLibrary.IsTweening // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105bc30
	struct ULTweener* IntTo(struct UObject* WorldContextObject, struct FDelegate setter, int32_t startValue, int32_t endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.IntTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105ba00
	struct ULTweener* FloatTo(struct UObject* WorldContextObject, struct FDelegate setter, float startValue, float endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.FloatTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105b700
	struct ULTweener* DelayFrameCall(struct UObject* WorldContextObject, int32_t frameCount, struct FDelegate delayComplete); // Function LTween.LTweenBPLibrary.DelayFrameCall // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105b590
	struct ULTweener* DelayCall(struct UObject* WorldContextObject, float delayTime, struct FDelegate delayComplete); // Function LTween.LTweenBPLibrary.DelayCall // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x105b450
	struct ULTweener* ColorTo(struct UObject* WorldContextObject, struct FDelegate setter, struct FColor startValue, struct FColor endValue, float Duration, float Delay, enum class LTweenEase Ease); // Function LTween.LTweenBPLibrary.ColorTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x105b1b0
	void ArrayKillIfIsTweening(struct UObject* WorldContextObject, struct TArray<struct ULTweener*> inTweenerArray, bool callComplete); // Function LTween.LTweenBPLibrary.ArrayKillIfIsTweening // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x105af20
};

// Class LTween.LTweener
// Size: 0xa8 (Inherited: 0x28)
struct ULTweener : UObject {
	char pad_28[0x80]; // 0x28(0x80)

	struct ULTweener* SetLoopType(enum class LTweenLoop newLoopType); // Function LTween.LTweener.SetLoopType // (Native|Public|BlueprintCallable) // @ game+0x105f6b0
	struct ULTweener* SetLoop(enum class LTweenLoop newLoopType, int32_t newLoopCount); // Function LTween.LTweener.SetLoop // (Native|Public|BlueprintCallable) // @ game+0x105f5e0
	struct ULTweener* SetEaseCurve(struct UCurveFloat* newCurve); // Function LTween.LTweener.SetEaseCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x105f540
	struct ULTweener* SetEase(enum class LTweenEase easeType); // Function LTween.LTweener.SetEase // (Final|Native|Public|BlueprintCallable) // @ game+0x105f4b0
	struct ULTweener* SetDelay(float newDelay); // Function LTween.LTweener.SetDelay // (Native|Public|BlueprintCallable) // @ game+0x105f410
	struct ULTweener* SetCurveFloat(struct UCurveFloat* newCurveFloat); // Function LTween.LTweener.SetCurveFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x105f370
	void Resume(); // Function LTween.LTweener.Resume // (Final|Native|Public|BlueprintCallable) // @ game+0x105f100
	void Pause(); // Function LTween.LTweener.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x105ecf0
	struct ULTweener* OnUpdate(struct FDelegate newUpdate); // Function LTween.LTweener.OnUpdate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x105ec30
	struct ULTweener* OnStart(struct FDelegate newStart); // Function LTween.LTweener.OnStart // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x105eb70
	struct ULTweener* OnCycleComplete(struct FDelegate newCycleComplete); // Function LTween.LTweener.OnCycleComplete // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x105ea00
	struct ULTweener* OnComplete(struct FDelegate newComplete); // Function LTween.LTweener.OnComplete // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x105e940
	void Kill(bool callComplete); // Function LTween.LTweener.Kill // (Native|Public|BlueprintCallable) // @ game+0x105bd00
	int32_t GetLoopCycleCount(); // Function LTween.LTweener.GetLoopCycleCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105b9e0
	int32_t GetLoopCount(); // Function LTween.LTweener.GetLoopCount // (Final|Native|Public|BlueprintCallable) // @ game+0x105b9e0
	void ForceComplete(); // Function LTween.LTweener.ForceComplete // (Native|Public|BlueprintCallable) // @ game+0x105b930
};

// Class LTween.LTweenerColor
// Size: 0xd8 (Inherited: 0xa8)
struct ULTweenerColor : ULTweener {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class LTween.LTweenerFloat
// Size: 0xd8 (Inherited: 0xa8)
struct ULTweenerFloat : ULTweener {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class LTween.LTweenerFrame
// Size: 0xb0 (Inherited: 0xa8)
struct ULTweenerFrame : ULTweener {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class LTween.LTweenerInteger
// Size: 0xd8 (Inherited: 0xa8)
struct ULTweenerInteger : ULTweener {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class LTween.LTweenerLinearColor
// Size: 0xf0 (Inherited: 0xa8)
struct ULTweenerLinearColor : ULTweener {
	char pad_A8[0x48]; // 0xa8(0x48)
};

// Class LTween.LTweenerMaterialScalar
// Size: 0xd8 (Inherited: 0xa8)
struct ULTweenerMaterialScalar : ULTweener {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class LTween.LTweenerMaterialVector
// Size: 0xf8 (Inherited: 0xa8)
struct ULTweenerMaterialVector : ULTweener {
	char pad_A8[0x50]; // 0xa8(0x50)
};

// Class LTween.LTweenerPosition
// Size: 0x100 (Inherited: 0xa8)
struct ULTweenerPosition : ULTweener {
	char pad_A8[0x58]; // 0xa8(0x58)
};

// Class LTween.LTweenerQuaternion
// Size: 0xf0 (Inherited: 0xa8)
struct ULTweenerQuaternion : ULTweener {
	char pad_A8[0x48]; // 0xa8(0x48)
};

// Class LTween.LTweenerRotationEuler
// Size: 0x100 (Inherited: 0xa8)
struct ULTweenerRotationEuler : ULTweener {
	char pad_A8[0x58]; // 0xa8(0x58)
};

// Class LTween.LTweenerRotationQuat
// Size: 0x110 (Inherited: 0xa8)
struct ULTweenerRotationQuat : ULTweener {
	char pad_A8[0x68]; // 0xa8(0x68)
};

// Class LTween.LTweenerRotator
// Size: 0xe8 (Inherited: 0xa8)
struct ULTweenerRotator : ULTweener {
	char pad_A8[0x40]; // 0xa8(0x40)
};

// Class LTween.LTweenerScale
// Size: 0xe8 (Inherited: 0xa8)
struct ULTweenerScale : ULTweener {
	char pad_A8[0x40]; // 0xa8(0x40)
};

// Class LTween.LTweenerVector
// Size: 0xe8 (Inherited: 0xa8)
struct ULTweenerVector : ULTweener {
	char pad_A8[0x40]; // 0xa8(0x40)
};

// Class LTween.LTweenerVector2D
// Size: 0xe0 (Inherited: 0xa8)
struct ULTweenerVector2D : ULTweener {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class LTween.LTweenerVector4
// Size: 0xf0 (Inherited: 0xa8)
struct ULTweenerVector4 : ULTweener {
	char pad_A8[0x48]; // 0xa8(0x48)
};

// Class LTween.LTweenerVirtual
// Size: 0xa8 (Inherited: 0xa8)
struct ULTweenerVirtual : ULTweener {
};

