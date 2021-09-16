// BlueprintGeneratedClass LGUI_ButtonTransition.LGUI_ButtonTransition_C
// Size: 0x17c (Inherited: 0xd0)
struct ULGUI_ButtonTransition_C : UUISelectableTransitionComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FLGUIComponentReference Text; // 0xd8(0x20)
	struct FLGUIComponentReference BG; // 0xf8(0x20)
	float DefaultRootPosZ; // 0x118(0x04)
	float DefaultSpritePosZ; // 0x11c(0x04)
	float DefaultTextPosZ; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UUISprite* SpriteActor; // 0x128(0x08)
	struct UUIText* TextActor; // 0x130(0x08)
	float RootPosZOffSet; // 0x138(0x04)
	float TextPosZOffSet; // 0x13c(0x04)
	float SpritePosZOffSet; // 0x140(0x04)
	float RestoreDefaultTime; // 0x144(0x04)
	struct FColor HighlightColor; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct ULGUISpriteData* Pressed Sprite; // 0x150(0x08)
	struct ULGUISpriteData* Normal Sparite; // 0x158(0x08)
	struct ULGUISpriteData* Highlighted Sprite; // 0x160(0x08)
	struct FColor NormalColor; // 0x168(0x04)
	struct FColor PressedColor; // 0x16c(0x04)
	struct FColor NormalTextColor; // 0x170(0x04)
	struct FColor HighLightTextColor; // 0x174(0x04)
	struct FColor PressedTextColor; // 0x178(0x04)

	void AwakeBP(); // Function LGUI_ButtonTransition.LGUI_ButtonTransition_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnNormalBP(bool InImmediateSet); // Function LGUI_ButtonTransition.LGUI_ButtonTransition_C.OnNormalBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnHighlightedBP(bool InImmediateSet); // Function LGUI_ButtonTransition.LGUI_ButtonTransition_C.OnHighlightedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnPressedBP(bool InImmediateSet); // Function LGUI_ButtonTransition.LGUI_ButtonTransition_C.OnPressedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_LGUI_ButtonTransition(int32_t EntryPoint); // Function LGUI_ButtonTransition.LGUI_ButtonTransition_C.ExecuteUbergraph_LGUI_ButtonTransition // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

