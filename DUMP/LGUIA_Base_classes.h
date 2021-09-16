// BlueprintGeneratedClass LGUIA_Base.LGUIA_Base_C
// Size: 0xdc (Inherited: 0xc0)
struct ULGUIA_Base_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct ULTweener*> AnimArray; // 0xc8(0x10)
	float AnimEndTime; // 0xd8(0x04)

	void AnimArrayClear(); // Function LGUIA_Base.LGUIA_Base_C.AnimArrayClear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddAnim(struct ULTweener* Anim); // Function LGUIA_Base.LGUIA_Base_C.AddAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseAnim(); // Function LGUIA_Base.LGUIA_Base_C.CloseAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenAnim(); // Function LGUIA_Base.LGUIA_Base_C.OpenAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function LGUIA_Base.LGUIA_Base_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function LGUIA_Base.LGUIA_Base_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_LGUIA_Base(int32_t EntryPoint); // Function LGUIA_Base.LGUIA_Base_C.ExecuteUbergraph_LGUIA_Base // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

