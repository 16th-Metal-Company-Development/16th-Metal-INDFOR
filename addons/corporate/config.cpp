class CfgPatches
{
	class Corporate_Faction
	{
		units[]={};
		weapons[]={};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_Roleplay",
			"TKE_General_Gear",
			"ls_characters_rebels",
			"ls_characters",
			"TKE_UCN",
			"ShadowLegion_Aux_Weapons",
			"A3_Characters_F_Enoch_Headgear",
			"ls_characters_imperial"
		};
	};
};
class CfgFactionClasses
{
	class Corpo_Units
	{
		displayName="[16th] Instrop Resource Authority";
		priority=1;
		side=2;
	};
};
class CfgEditorCategories
{
	class Corpo_Assets
	{
		displayName = "[16th] Instrop Resource Authority";
		priority=1;
		side=2;
	};
	class Corpo_Assets_2
	{
		displayName = "[16th] Instrop Resource Authority";
		priority=1;
		side=2;
	};
};
class CfgEditorSubcategories
{
	class Corpo_Men
	{
		displayName="Men (IRA)";
	};
};
