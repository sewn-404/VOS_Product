using UnrealBuildTool;

public class DMDeveloper : ModuleRules {
    public DMDeveloper(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DMUtility",
            "Engine",
            "InputCore",
            "SlateCore",
        });
    }
}
