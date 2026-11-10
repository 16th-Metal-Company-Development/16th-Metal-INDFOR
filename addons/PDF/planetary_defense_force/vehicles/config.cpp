class CfgPatches
{
	class PlanetaryDefenseForce_Vehicles
	{
		units[]=
		{
			"IRA_SkiffTank",
			"IRA_Z98",
			"IRA_Nomad"
		};
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
class CfgVehicles
{
    class IRA_SkiffTank: SFA_Karagga_F {
        author = "CC-1748 ""Hazmat""";
        scope = 2;
        scopeCurator = 2;
        displayName = "Karagga Skiff Tank";
        side = 2;
        faction = "PlanetaryDefenseForce_Units";
        crew = "PlanetaryDefenseForce_Engineer";
        typicalCargo[] = {"PlanetaryDefenseForce_Engineer"};
        hiddenSelectionsTextures[] = {"sfa_main\sfa_vehicles_n\hutts\karagga\data\karagga_hull_co.paa", "sfa_main\sfa_vehicles_n\hutts\karagga\data\karagga_weapons_co.paa"};
        textureList[] = {};
    };
    class IRA_Z98: ls_vehicle_z98 {
        author = "CC-1748 ""Hazmat""";
        scope = 2;
        scopeCurator = 2;
        displayName = "Z-98 Interceptor";
        side = 2;
        faction = "PlanetaryDefenseForce_Units";
        crew = "PlanetaryDefenseForce_Pilot";
        typicalCargo[] = {"PlanetaryDefenseForce_Pilot"};
        hiddenSelectionsTextures[] = {"ls\core\addons\vehicles_z98\data\hull_grey_co.paa", "ls\core\addons\vehicles_z98\data\cockpit_co.paa"};
        textureList[] = {"Grey", 1};
    };
    class IRA_Nomad: FCF_Nomad {
        author = "CC-1748 ""Hazmat""";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rebel Ranger";
        side = 2;
        faction = "PlanetaryDefenseForce_Units";
        crew = "PlanetaryDefenseForce_Rifleman";
        typicalCargo[] = {"PlanetaryDefenseForce_Rifleman"};
        hiddenSelectionsTextures[] = {"tke_kuiper_engagements\tke_wheeled\data\textures\tke_nomadrangerfrontblack_co.paa", "tke_kuiper_engagements\tke_wheeled\data\textures\tke_nomadrangerbackblack_co.paa", "tke_kuiper_engagements\tke_wheeled\data\textures\tke_nomadrangerint_co.paa"};
        textureList[] = {"Black", 1};
        animationList[] = {"hide_cover", 0, "hide_cover_hard", 1, "hide_cover_cabin", 1, "hide_tailgate", 1, "hide_fender", 0, "hide_rollcage", 0, "hide_bags1", 0, "hide_bags2", 0, "hide_bags3", 0, "hide_bags4", 0, "hide_bags5", 0};
    };
};