// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GDW_Tutorial1 : ModuleRules
{
	public GDW_Tutorial1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
