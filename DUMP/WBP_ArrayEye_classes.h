// WidgetBlueprintGeneratedClass WBP_ArrayEye.WBP_ArrayEye_C
// Size: 0x344 (Inherited: 0x260)
struct UWBP_ArrayEye_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* GradualChangeAnimation; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct UOverlay* Overlay_BaGua; // 0x278(0x08)
	struct UOverlay* Overlay_Fire; // 0x280(0x08)
	struct UOverlay* Overlay_Gold; // 0x288(0x08)
	struct UOverlay* Overlay_Terra; // 0x290(0x08)
	struct UOverlay* Overlay_Water; // 0x298(0x08)
	struct UOverlay* Overlay_Wood; // 0x2a0(0x08)
	struct FTimerHandle Timer; // 0x2a8(0x08)
	struct TArray<struct ABP_ElementSlot_C*> ElementSlotArr; // 0x2b0(0x10)
	int32_t Num; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UWBP_ArrayEyeElment_C* Current; // 0x2c8(0x08)
	struct UImage* Lock; // 0x2d0(0x08)
	struct TMap<int32_t, struct FWidgetTransform> FragmentLoca; // 0x2d8(0x50)
	struct UWBP_ArrayEyeElment_C* Cur WBP Array Eye Elment; // 0x328(0x08)
	struct TArray<struct UWidget*> CurAllArrayEye; // 0x330(0x10)
	int32_t CurNumber; // 0x340(0x04)

	bool IsGhost(); // Function WBP_ArrayEye.WBP_ArrayEye_C.IsGhost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetLocal(int32_t Number, struct UImage* Image, struct UWBP_CD_C* AsWBPCD); // Function WBP_ArrayEye.WBP_ArrayEye_C.GetLocal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetLocaChilad(int32_t IndexParent, int32_t IndexChild, struct UWBP_ArrayEyeElment_C* AsWBP Array Eye Elment); // Function WBP_ArrayEye.WBP_ArrayEye_C.GetLocaChilad // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ArrayEye.WBP_ArrayEye_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetDebrisNumber(enum class ENOSElementSlotType ESlotType, int32_t AInteractSucNum); // Function WBP_ArrayEye.WBP_ArrayEye_C.SetDebrisNumber // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Beging(struct FEventRelevantData EventRelevantData); // Function WBP_ArrayEye.WBP_ArrayEye_C.Beging // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void End(struct FEventRelevantData EventRelevantData); // Function WBP_ArrayEye.WBP_ArrayEye_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BaGuabind(struct FEventRelevantData EventRelevantData); // Function WBP_ArrayEye.WBP_ArrayEye_C.BaGuabind // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBaGua(enum class ENOSElementSlotType ESlotType, int32_t AInteractSucNum); // Function WBP_ArrayEye.WBP_ArrayEye_C.UpdateBaGua // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void VFX(struct FEventRelevantData EventRelevantData); // Function WBP_ArrayEye.WBP_ArrayEye_C.VFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGameModeFragmentLoca(enum class EKxGameType GameType); // Function WBP_ArrayEye.WBP_ArrayEye_C.SetGameModeFragmentLoca // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Check(); // Function WBP_ArrayEye.WBP_ArrayEye_C.Check // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ArrayEye(int32_t EntryPoint); // Function WBP_ArrayEye.WBP_ArrayEye_C.ExecuteUbergraph_WBP_ArrayEye // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

