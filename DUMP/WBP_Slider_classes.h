// WidgetBlueprintGeneratedClass WBP_Slider.WBP_Slider_C
// Size: 0x2ad (Inherited: 0x260)
struct UWBP_Slider_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_47; // 0x268(0x08)
	struct UProgressBar* ProgressBar_75; // 0x270(0x08)
	struct USlider* Slider_30; // 0x278(0x08)
	struct UTextBlock* TextBlock_34; // 0x280(0x08)
	struct UTextBlock* TextBlock_83; // 0x288(0x08)
	struct FText SliderName; // 0x290(0x18)
	float MaxValue; // 0x2a8(0x04)
	bool IsSoundSlider; // 0x2ac(0x01)

	float GetSliderValue(); // Function WBP_Slider.WBP_Slider_C.GetSliderValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetSliderValue(float InValue); // Function WBP_Slider.WBP_Slider_C.SetSliderValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FText GetText_1(); // Function WBP_Slider.WBP_Slider_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_Slider.WBP_Slider_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Slider(int32_t EntryPoint); // Function WBP_Slider.WBP_Slider_C.ExecuteUbergraph_WBP_Slider // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

