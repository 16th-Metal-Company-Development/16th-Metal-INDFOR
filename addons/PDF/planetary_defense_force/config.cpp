class CfgPatches
{
	class PlanetaryDefenseForce_Faction
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
	class PlanetaryDefenseForce_Units
	{
		displayName="[16th] Planetary Defense Force";
		priority=1;
		side=2;
	};
};
class CfgEditorCategories
{
	class PlanetaryDefenseForce_Assets
	{
		displayName = "[16th] Planetary Defense Force";
		priority=1;
		side=2;
	};
	class PlanetaryDefenseForce_Assets_2
	{
		displayName = "[16th] Planetary Defense Force";
		priority=1;
		side=2;
	};
};
class CfgEditorSubcategories
{
	class PlanetaryDefenseForce_Men
	{
		displayName="Men (PDF)";
	};
};
