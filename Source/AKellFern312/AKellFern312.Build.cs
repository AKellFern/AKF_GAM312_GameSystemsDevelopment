// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AKellFern312 : ModuleRules
{
    public AKellFern312(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(
            new string[] { "Core", "CoreUObject", "Engine", "InputCore" }
        );
    }
}
