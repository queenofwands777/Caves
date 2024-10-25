

using UnrealBuildTool;

public class BeccasMod : ModuleRules
{
    public BeccasMod(ReadOnlyTargetRules Target) : base(Target)
    {
        // Make sure the editor module is only built in editor mode
        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "Slate",
                    "SlateCore",
                    "UnrealEd",
                    "LevelEditor",
                    "ToolMenus"
                }
            );
        }
    }
}