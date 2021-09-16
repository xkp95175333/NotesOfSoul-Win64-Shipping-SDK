// BlueprintGeneratedClass BP_Inheritance.BP_Inheritance_C
// Size: 0x178 (Inherited: 0x151)
struct UBP_Inheritance_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t isolduser; // 0x160(0x04)
	int32_t isget; // 0x164(0x04)
	struct TArray<struct FItemData> Item Data; // 0x168(0x10)

	void UIAmin(); // Function BP_Inheritance.BP_Inheritance_C.UIAmin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveItem(); // Function BP_Inheritance.BP_Inheritance_C.ReciveItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_Inheritance.BP_Inheritance_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Inheritance.BP_Inheritance_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(int32_t isolduser, int32_t isget); // Function BP_Inheritance.BP_Inheritance_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Inheritance(int32_t EntryPoint); // Function BP_Inheritance.BP_Inheritance_C.ExecuteUbergraph_BP_Inheritance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

