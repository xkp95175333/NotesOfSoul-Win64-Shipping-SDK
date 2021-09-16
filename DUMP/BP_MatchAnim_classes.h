// BlueprintGeneratedClass BP_MatchAnim.BP_MatchAnim_C
// Size: 0x108 (Inherited: 0xc0)
struct UBP_MatchAnim_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AUITextureActor* MatchPanelBG; // 0xc8(0x08)
	struct AUIBaseActor* HorizontalLayout; // 0xd0(0x08)
	struct TArray<struct AUITextureActor*> GameModeArray; // 0xd8(0x10)
	float AnimDelayTime; // 0xe8(0x04)
	float NextAnimAddTime; // 0xec(0x04)
	struct AUISpriteActor* Team; // 0xf0(0x08)
	struct TArray<struct ULTweener*> Anim; // 0xf8(0x10)

	void StopAllAnim(); // Function BP_MatchAnim.BP_MatchAnim_C.StopAllAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AnimInit(struct AUIBaseActor* Target); // Function BP_MatchAnim.BP_MatchAnim_C.AnimInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpToDownAnim(struct AUIBaseActor* Target); // Function BP_MatchAnim.BP_MatchAnim_C.UpToDownAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAnimInfo(); // Function BP_MatchAnim.BP_MatchAnim_C.SetAnimInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenAnim(); // Function BP_MatchAnim.BP_MatchAnim_C.OpenAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MatchAnim(int32_t EntryPoint); // Function BP_MatchAnim.BP_MatchAnim_C.ExecuteUbergraph_BP_MatchAnim // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

