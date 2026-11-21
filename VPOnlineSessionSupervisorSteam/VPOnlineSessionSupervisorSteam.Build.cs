using UnrealBuildTool;

public class VPOnlineSessionSupervisorSteam : ModuleRules {
    public VPOnlineSessionSupervisorSteam(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
