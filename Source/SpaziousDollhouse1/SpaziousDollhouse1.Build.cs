// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SpaziousDollhouse1 : ModuleRules
{
	public SpaziousDollhouse1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
