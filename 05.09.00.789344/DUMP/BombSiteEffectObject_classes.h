// BlueprintGeneratedClass BombSiteEffectObject.BombSiteEffectObject_C
// Size: 0x42c (Inherited: 0x400)
struct ABombSiteEffectObject_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UBillboardComponent* Billboard; // 0x408(0x08)
	float EffectDelay; // 0x410(0x04)
	struct FName ValidTagA; // 0x414(0x0c)
	struct FName ValidTagB; // 0x420(0x0c)

	void CheckValidTag(); // Function BombSiteEffectObject.BombSiteEffectObject_C.CheckValidTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void CleanupEffect(); // Function BombSiteEffectObject.BombSiteEffectObject_C.CleanupEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void CreateEffect(); // Function BombSiteEffectObject.BombSiteEffectObject_C.CreateEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function BombSiteEffectObject.BombSiteEffectObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BombSiteEffectObject(int32_t EntryPoint); // Function BombSiteEffectObject.BombSiteEffectObject_C.ExecuteUbergraph_BombSiteEffectObject // (Final|UbergraphFunction) // @ game+0x32f73d0
};

