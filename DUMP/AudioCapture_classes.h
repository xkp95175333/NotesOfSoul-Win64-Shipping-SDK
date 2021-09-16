// Class AudioCapture.AudioCapture
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioCapture : UAudioGenerator {
	char pad_A8[0x8]; // 0xa8(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x17f6190
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x17f6170
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x17f6140
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17f60a0
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17f6070
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x780 (Inherited: 0x6c0)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6c0(0x04)
	char pad_6C4[0xbc]; // 0x6c4(0xbc)
};

