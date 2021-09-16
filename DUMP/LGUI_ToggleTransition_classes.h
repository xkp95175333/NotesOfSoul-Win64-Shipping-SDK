// BlueprintGeneratedClass LGUI_ToggleTransition.LGUI_ToggleTransition_C
// Size: 0x189 (Inherited: 0x17c)
struct ULGUI_ToggleTransition_C : ULGUI_ButtonTransition_C {
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	bool Is Selected; // 0x188(0x01)

	void OnNormalBP(bool InImmediateSet); // Function LGUI_ToggleTransition.LGUI_ToggleTransition_C.OnNormalBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnHighlightedBP(bool InImmediateSet); // Function LGUI_ToggleTransition.LGUI_ToggleTransition_C.OnHighlightedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnPressedBP(bool InImmediateSet); // Function LGUI_ToggleTransition.LGUI_ToggleTransition_C.OnPressedBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartCustomTransitionBP(struct FName InTransitionName, bool InImmediateSet); // Function LGUI_ToggleTransition.LGUI_ToggleTransition_C.OnStartCustomTransitionBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_LGUI_ToggleTransition(int32_t EntryPoint); // Function LGUI_ToggleTransition.LGUI_ToggleTransition_C.ExecuteUbergraph_LGUI_ToggleTransition // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

