// BlueprintGeneratedClass LGUI_SwitchActor.LGUI_SwitchActor_C
// Size: 0xe4 (Inherited: 0xc0)
struct ULGUI_SwitchActor_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct AUIBaseActor*> SwicthActorArray; // 0xc8(0x10)
	bool OnlyPassOnce; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t ShowLGUIPanelIndex; // 0xdc(0x04)
	int32_t Change; // 0xe0(0x04)

	void K3_SetActiveLGUI_Togge(struct AUIBaseActor* Target); // Function LGUI_SwitchActor.LGUI_SwitchActor_C.K3_SetActiveLGUI_Togge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K3_SetActiveLGUIIndex(int32_t Index); // Function LGUI_SwitchActor.LGUI_SwitchActor_C.K3_SetActiveLGUIIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K3_SetActiveLGUI(struct AUIBaseActor* Target); // Function LGUI_SwitchActor.LGUI_SwitchActor_C.K3_SetActiveLGUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnableBP(); // Function LGUI_SwitchActor.LGUI_SwitchActor_C.OnEnableBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function LGUI_SwitchActor.LGUI_SwitchActor_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_LGUI_SwitchActor(int32_t EntryPoint); // Function LGUI_SwitchActor.LGUI_SwitchActor_C.ExecuteUbergraph_LGUI_SwitchActor // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

