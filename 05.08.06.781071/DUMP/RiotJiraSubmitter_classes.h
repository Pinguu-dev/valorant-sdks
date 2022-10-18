// Class RiotJiraSubmitter.RiotJiraSubmitterLibrary
// Size: 0x30 (Inherited: 0x30)
struct URiotJiraSubmitterLibrary : UBlueprintFunctionLibrary {

	void SubmitJiraIssueLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct FString& OutIssueId, struct FString Summary, struct FString Type, struct FString Description, bool bIncludeScreenshot); // Function RiotJiraSubmitter.RiotJiraSubmitterLibrary.SubmitJiraIssueLatent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2444c10
	void SubmitJiraIssue(struct UObject* WorldContextObject, struct FString Summary, struct FString Type, struct FString Description, bool bIncludeScreenshot); // Function RiotJiraSubmitter.RiotJiraSubmitterLibrary.SubmitJiraIssue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2444940
};

