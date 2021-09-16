// BlueprintGeneratedClass BP_Advertisement.BP_Advertisement_C
// Size: 0xe8 (Inherited: 0xc0)
struct UBP_Advertisement_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AUIBaseActor* DisplayActor; // 0xc8(0x08)
	struct TArray<struct UTexture2D*> Advertisement; // 0xd0(0x10)
	float Time; // 0xe0(0x04)
	int32_t AdvertisementIndex; // 0xe4(0x04)

	void ToShow(); // Function BP_Advertisement.BP_Advertisement_C.ToShow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ToHide(); // Function BP_Advertisement.BP_Advertisement_C.ToHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Advertisement.BP_Advertisement_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchPic(); // Function BP_Advertisement.BP_Advertisement_C.SwitchPic // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Advertisement(int32_t EntryPoint); // Function BP_Advertisement.BP_Advertisement_C.ExecuteUbergraph_BP_Advertisement // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

