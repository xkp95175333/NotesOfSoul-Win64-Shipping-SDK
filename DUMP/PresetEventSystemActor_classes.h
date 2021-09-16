// BlueprintGeneratedClass PresetEventSystemActor.PresetEventSystemActor_C
// Size: 0x260 (Inherited: 0x228)
struct APresetEventSystemActor_C : ALGUIEventSystemActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct ULGUI_TouchInputModule* LGUI_TouchInputModule; // 0x230(0x08)
	struct ULGUI_StandaloneInputModule* LGUI_StandaloneInputModule; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct ULGUI_PointerInputModule* ValidInputModule; // 0x248(0x08)
	struct FMulticastInlineDelegate MouseLeftPressedEvent; // 0x250(0x10)

	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_16(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_16 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_14(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_14 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_13(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_13 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpTchEvt_Moved(enum class ETouchIndex FingerIndex, struct FVector Location); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpTchEvt_Moved // (BlueprintEvent) // @ game+0x1ec38f0
	void InpTchEvt_Released(enum class ETouchIndex FingerIndex, struct FVector Location); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpTchEvt_Released // (BlueprintEvent) // @ game+0x1ec38f0
	void InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, struct FVector Location); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpTchEvt_Pressed // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_12(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_12 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_11(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_11 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_10(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_10 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_9(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_9 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_8(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_7(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_6(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_5(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function PresetEventSystemActor.PresetEventSystemActor_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function PresetEventSystemActor.PresetEventSystemActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_PresetEventSystemActor(int32_t EntryPoint); // Function PresetEventSystemActor.PresetEventSystemActor_C.ExecuteUbergraph_PresetEventSystemActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void MouseLeftPressedEvent__DelegateSignature(); // Function PresetEventSystemActor.PresetEventSystemActor_C.MouseLeftPressedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

