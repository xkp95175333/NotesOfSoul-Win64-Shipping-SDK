// BlueprintGeneratedClass BP_OnListAnim.BP_OnListAnim_C
// Size: 0x144 (Inherited: 0xc0)
struct UBP_OnListAnim_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct FLGUIComponentReference OnListName; // 0xc8(0x20)
	struct FLGUIComponentReference RankingBG; // 0xe8(0x20)
	struct UUIItem* As UIItem; // 0x108(0x08)
	struct UUISprite* As UISprite; // 0x110(0x08)
	struct FLGUIComponentReference UIOnListRoot; // 0x118(0x20)
	struct UUIItem* As UIItem_Root; // 0x138(0x08)
	float Duration; // 0x140(0x04)

	void PlayAnim(struct FVector endValue, float Duration); // Function BP_OnListAnim.BP_OnListAnim_C.PlayAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP_2(float DeltaTime); // Function BP_OnListAnim.BP_OnListAnim_C.UpdateBP_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OnListAnim(int32_t EntryPoint); // Function BP_OnListAnim.BP_OnListAnim_C.ExecuteUbergraph_BP_OnListAnim // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

