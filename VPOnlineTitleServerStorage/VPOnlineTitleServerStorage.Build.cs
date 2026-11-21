using UnrealBuildTool;

public class VPOnlineTitleServerStorage : ModuleRules {
    public VPOnlineTitleServerStorage(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
