// Class CinematicCamera.CameraRig_Crane
// Size: 0x400 (Inherited: 0x3d0)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x3d0(0x04)
	float CraneYaw; // 0x3d4(0x04)
	float CraneArmLength; // 0x3d8(0x04)
	bool bLockMountPitch; // 0x3dc(0x01)
	bool bLockMountYaw; // 0x3dd(0x01)
	char pad_3DE[0x2]; // 0x3de(0x02)
	struct USceneComponent* TransformComponent; // 0x3e0(0x08)
	struct USceneComponent* CraneYawControl; // 0x3e8(0x08)
	struct USceneComponent* CranePitchControl; // 0x3f0(0x08)
	struct USceneComponent* CraneCameraMount; // 0x3f8(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x3f0 (Inherited: 0x3d0)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x3d0(0x04)
	bool bLockOrientationToRail; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	struct USceneComponent* TransformComponent; // 0x3d8(0x08)
	struct USplineComponent* RailSplineComponent; // 0x3e0(0x08)
	struct USceneComponent* RailCameraMount; // 0x3e8(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4787580
};

// Class CinematicCamera.CineCameraActor
// Size: 0xa70 (Inherited: 0xa00)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0xa00(0x58)
	char pad_A58[0x18]; // 0xa58(0x18)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4787150
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xa10 (Inherited: 0x910)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x910(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x91c(0x0c)
	struct FCameraLensSettings LensSettings; // 0x928(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x940(0x60)
	float CurrentFocalLength; // 0x9a0(0x04)
	float CurrentAperture; // 0x9a4(0x04)
	float CurrentFocusDistance; // 0x9a8(0x04)
	char pad_9AC[0xc]; // 0x9ac(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x9b8(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x9c8(0x10)
	struct FString DefaultFilmbackPresetName; // 0x9d8(0x10)
	struct FString DefaultFilmbackPreset; // 0x9e8(0x10)
	struct FString DefaultLensPresetName; // 0x9f8(0x10)
	float DefaultLensFocalLength; // 0xa08(0x04)
	float DefaultLensFStop; // 0xa0c(0x04)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x4787700
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x4787650
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x47875d0
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47875a0
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4787490
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4787400
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47873d0
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47872e0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4787250
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4787170
};

