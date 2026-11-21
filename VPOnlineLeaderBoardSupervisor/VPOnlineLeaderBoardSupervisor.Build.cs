using UnrealBuildTool;

public class VPOnlineLeaderBoardSupervisor : ModuleRules {
    public VPOnlineLeaderBoardSupervisor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
