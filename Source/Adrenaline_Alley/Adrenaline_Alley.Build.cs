// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Adrenaline_Alley : ModuleRules
{
	public Adrenaline_Alley(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
