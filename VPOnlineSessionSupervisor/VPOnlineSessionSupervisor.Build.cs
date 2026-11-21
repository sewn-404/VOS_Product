using UnrealBuildTool;

public class VPOnlineSessionSupervisor : ModuleRules {
    public VPOnlineSessionSupervisor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
