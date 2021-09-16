// WidgetBlueprintGeneratedClass WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C
// Size: 0x2e0 (Inherited: 0x260)
struct UWBP_MarkingPointPaddingSystem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x268(0x08)
	struct UImage* Image_236; // 0x270(0x08)
	struct UCanvasPanel* InsideBoard; // 0x278(0x08)
	struct UWrapBox* LeftList; // 0x280(0x08)
	struct UWrapBox* LowerList; // 0x288(0x08)
	struct UWrapBox* RightList; // 0x290(0x08)
	struct UWrapBox* UpperList; // 0x298(0x08)
	struct TArray<struct UWBP_MarkingPointPaddingDir_C*> PaddingDirList; // 0x2a0(0x10)
	struct TArray<struct ABP_MarkingPoint_C*> AllMarkingPoint; // 0x2b0(0x10)
	struct TArray<struct ABP_MarkingPoint_C*> NeedToCreateList; // 0x2c0(0x10)
	struct TArray<struct ABP_MarkingPoint_C*> Out Actors; // 0x2d0(0x10)

	void IsValueBeTween(float Value, float Min, float Max, bool IsBetween); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.IsValueBeTween // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Add Child on Cur List(struct UWrapBox* List, struct UWBP_MarkingPointPaddingDir_C* Dir); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.Add Child on Cur List // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIntoCurDirList(int32_t Dir, struct UWBP_MarkingPointPaddingDir_C* DirPoint); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.SetIntoCurDirList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCurDirFromAngle(int32_t Angle, bool bFind, bool bUpper, int32_t Dir); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.GetCurDirFromAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetScreenAngle(struct ABP_MarkingPoint_C* CurMarkingPoint, struct UWBP_MarkingPointPaddingDir_C* CurMarkingWidget, int32_t Angle, bool bCanFind, bool bUpper); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.GetScreenAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RefreshAndInitData(struct TArray<struct ABP_MarkingPoint_C*> List); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.RefreshAndInitData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void TickEvent(); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.TickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_MarkingPointPaddingSystem(int32_t EntryPoint); // Function WBP_MarkingPointPaddingSystem.WBP_MarkingPointPaddingSystem_C.ExecuteUbergraph_WBP_MarkingPointPaddingSystem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

