// BlueprintGeneratedClass BP_HomeMainEventTrigger.BP_HomeMainEventTrigger_C
// Size: 0x3b8 (Inherited: 0x360)
struct UBP_HomeMainEventTrigger_C : UUIEventTriggerComponent {
	struct AUISpriteActor* icon; // 0x360(0x08)
	struct AUISpriteActor* Select; // 0x368(0x08)
	struct AUISpriteActor* Arrow; // 0x370(0x08)
	struct AUITextActor* Text; // 0x378(0x08)
	struct ULTweener* SelectAnim; // 0x380(0x08)
	struct AUITextActor* IconPanelText; // 0x388(0x08)
	struct AUITextureActor* ScaleActor; // 0x390(0x08)
	struct AUITextureActor* ActiveActor; // 0x398(0x08)
	struct AUITextureActor* ClickMaterial; // 0x3a0(0x08)
	struct AUISpriteActor* ToggleActor; // 0x3a8(0x08)
	struct ULTweener* ArrowAnim; // 0x3b0(0x08)

	void ToggleExit(); // Function BP_HomeMainEventTrigger.BP_HomeMainEventTrigger_C.ToggleExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ToggleEnter(); // Function BP_HomeMainEventTrigger.BP_HomeMainEventTrigger_C.ToggleEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MatchClick(bool IsDown); // Function BP_HomeMainEventTrigger.BP_HomeMainEventTrigger_C.MatchClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MatchTrigger(bool IsEnter); // Function BP_HomeMainEventTrigger.BP_HomeMainEventTrigger_C.MatchTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetUIActive_IconText(bool Acitve); // Function BP_HomeMainEventTrigger.BP_HomeMainEventTrigger_C.SetUIActive_IconText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetUIActive_IconAndSelect(bool Acitve); // Function BP_HomeMainEventTrigger.BP_HomeMainEventTrigger_C.SetUIActive_IconAndSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

