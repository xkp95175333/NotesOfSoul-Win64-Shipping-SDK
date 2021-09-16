// WidgetBlueprintGeneratedClass WBP_CD.WBP_CD_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_CD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_135; // 0x268(0x08)
	struct UTextBlock* TextBlock_70; // 0x270(0x08)
	float CurTime; // 0x278(0x04)
	float CDTime; // 0x27c(0x04)
	bool Switch; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UImage* Lock; // 0x288(0x08)
	struct UWBP_ArrayEye_C* WBP_ArrayEye; // 0x290(0x08)
	bool ArrayEye; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FName MaterialType; // 0x29c(0x08)
	int32_t NewVar_1; // 0x2a4(0x04)
	bool IsShowText; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FString ProgressType; // 0x2b0(0x10)

	void StopTime(); // Function WBP_CD.WBP_CD_C.StopTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenTime(float CDTime, float CurTime, struct FString ProgressType); // Function WBP_CD.WBP_CD_C.OpenTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_CD.WBP_CD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_CD.WBP_CD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_CD(int32_t EntryPoint); // Function WBP_CD.WBP_CD_C.ExecuteUbergraph_WBP_CD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

