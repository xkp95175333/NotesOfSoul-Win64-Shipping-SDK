// WidgetBlueprintGeneratedClass WBP_MarkingPointPaddingDir.WBP_MarkingPointPaddingDir_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_MarkingPointPaddingDir_C : UUserWidget {
	struct UCanvasPanel* CanvasPanel_3; // 0x260(0x08)
	struct UImage* Center; // 0x268(0x08)
	struct UImage* DownDir; // 0x270(0x08)
	struct UImage* icon; // 0x278(0x08)
	struct UImage* LeftDir; // 0x280(0x08)
	struct UImage* RightDir; // 0x288(0x08)
	struct UImage* UpperDir; // 0x290(0x08)

	void ActiveCurDir(int32_t Dir); // Function WBP_MarkingPointPaddingDir.WBP_MarkingPointPaddingDir_C.ActiveCurDir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(struct ABP_MarkingPoint_C* Data, int32_t Dir); // Function WBP_MarkingPointPaddingDir.WBP_MarkingPointPaddingDir_C.SetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

