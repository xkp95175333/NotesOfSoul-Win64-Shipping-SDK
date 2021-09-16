// BlueprintGeneratedClass DataPayLoad.DataPayLoad_C
// Size: 0x38 (Inherited: 0x28)
struct UDataPayLoad_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	bool BoolValue; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float FloatValue; // 0x34(0x04)

	void Init(bool BoolValue, float FloatValue); // Function DataPayLoad.DataPayLoad_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_DataPayLoad(int32_t EntryPoint); // Function DataPayLoad.DataPayLoad_C.ExecuteUbergraph_DataPayLoad // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

