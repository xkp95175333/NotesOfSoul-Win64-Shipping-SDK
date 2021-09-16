// WidgetBlueprintGeneratedClass WBP_GhostSkill.WBP_GhostSkill_C
// Size: 0x380 (Inherited: 0x260)
struct UWBP_GhostSkill_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CDOK; // 0x268(0x08)
	struct UWidgetAnimation* UpDisplay; // 0x270(0x08)
	struct UBorder* Border_Elment1; // 0x278(0x08)
	struct UBorder* Border_Grade; // 0x280(0x08)
	struct UImage* DebrisF1; // 0x288(0x08)
	struct UImage* Image_62; // 0x290(0x08)
	struct UImage* Image_143; // 0x298(0x08)
	struct UImage* Image_216; // 0x2a0(0x08)
	struct UImage* Image_CD; // 0x2a8(0x08)
	struct UImage* Image_LiuGuang; // 0x2b0(0x08)
	struct UImage* Image_Ready; // 0x2b8(0x08)
	struct UImage* Image_Skill; // 0x2c0(0x08)
	struct UImage* Image_Up; // 0x2c8(0x08)
	struct UImage* Image_Up_VFX; // 0x2d0(0x08)
	struct UImage* Image_VFX; // 0x2d8(0x08)
	struct UImage* Lightning; // 0x2e0(0x08)
	struct UOverlay* Overlay_StorageFrame; // 0x2e8(0x08)
	struct UOverlay* Overlay_VFX; // 0x2f0(0x08)
	struct UTextBlock* StorageNum; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_Q; // 0x300(0x08)
	struct UTextBlock* TextF1; // 0x308(0x08)
	struct UCanvasPanel* UpPanel; // 0x310(0x08)
	struct FText Text; // 0x318(0x18)
	struct FMulticastInlineDelegate CallIntimacyMain; // 0x330(0x10)
	struct UMaterialInstanceDynamic* Material; // 0x340(0x08)
	float AllCDTime; // 0x348(0x04)
	float CurTime; // 0x34c(0x04)
	bool Accomplish; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UTexture2D* BG; // 0x358(0x08)
	struct UTexture2D* Texture2D; // 0x360(0x08)
	struct FText Key; // 0x368(0x18)

	void SetStoragePoint(int32_t Num); // Function WBP_GhostSkill.WBP_GhostSkill_C.SetStoragePoint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FText GetText_1(); // Function WBP_GhostSkill.WBP_GhostSkill_C.GetText_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void StopUpAnim(); // Function WBP_GhostSkill.WBP_GhostSkill_C.StopUpAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayUpAnim(); // Function WBP_GhostSkill.WBP_GhostSkill_C.PlayUpAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CDTime(float NewParam); // Function WBP_GhostSkill.WBP_GhostSkill_C.CDTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_GhostSkill.WBP_GhostSkill_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_GhostSkill.WBP_GhostSkill_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void GAEnd(bool IsEnd); // Function WBP_GhostSkill.WBP_GhostSkill_C.GAEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenArrow(); // Function WBP_GhostSkill.WBP_GhostSkill_C.OpenArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemakeStrat(bool Accomplish, float CDTime, float AllTime); // Function WBP_GhostSkill.WBP_GhostSkill_C.RemakeStrat // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_GhostSkill(int32_t EntryPoint); // Function WBP_GhostSkill.WBP_GhostSkill_C.ExecuteUbergraph_WBP_GhostSkill // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void CallIntimacyMain__DelegateSignature(int32_t Int_); // Function WBP_GhostSkill.WBP_GhostSkill_C.CallIntimacyMain__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

