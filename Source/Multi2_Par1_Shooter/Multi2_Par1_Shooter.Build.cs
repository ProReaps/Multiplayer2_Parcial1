// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Multi2_Par1_Shooter : ModuleRules
{
	public Multi2_Par1_Shooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
