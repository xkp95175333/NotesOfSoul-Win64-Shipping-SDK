// BlueprintGeneratedClass GetRewardItem_Script.GetRewardItem_Script_C
// Size: 0x130 (Inherited: 0xc0)
struct UGetRewardItem_Script_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AUITextureActor* Img; // 0xc8(0x08)
	struct AUITextActor* Name; // 0xd0(0x08)
	struct TMap<enum class EClothQualityType, struct UTexture2D*> QualityMap; // 0xd8(0x50)
	struct AUISpriteActor* QulityImg; // 0x128(0x08)

	void OnLeaveFunc(); // Function GetRewardItem_Script.GetRewardItem_Script_C.OnLeaveFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterFunc(); // Function GetRewardItem_Script.GetRewardItem_Script_C.OnEnterFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(struct UTexture2D* Img, struct FString Name, enum class EClothQualityType Quality); // Function GetRewardItem_Script.GetRewardItem_Script_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GetRewardItem_Script(int32_t EntryPoint); // Function GetRewardItem_Script.GetRewardItem_Script_C.ExecuteUbergraph_GetRewardItem_Script // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

