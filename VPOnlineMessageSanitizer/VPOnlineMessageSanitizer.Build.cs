using UnrealBuildTool;

public class VPOnlineMessageSanitizer : ModuleRules {
    public VPOnlineMessageSanitizer(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
