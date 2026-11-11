class cfgPatches
{
	class MET_IND_PDF_Faction
	{
		units[] = { "MET_PDF_Engineer", "MET_PDF_Pilot", "MET_PDF_SL", "MET_PDF_Rifleman", "MET_PDF_AT", "MET_PDF_Grenadier", "MET_PDF_Marksman", "MET_PDF_MG" };
		weapons[] = { "MET_PDF_DLA13_Base", "MET_PDF_DLA13", "MET_PDF_DLA13_Carbine", "MET_PDF_DLA13_GL"};
		ammo[] ={ "MET_PDF_Blasterbolt", "MET_PDF_Blasterbolt_Low"};
		requiredVersion = 0.1;
		skipWhenMissingDependencies=1;
		requiredAddons[] = { "MET_VFX", "IDA_Republic" };
	};
};

class cfgFactionClasses
{
	class MET_IND_PDF
	{
		icon = "";
		displayName = "[16th] Planetary Defence Forces";
		side = 2;
		priority = 1;
	};
};

class CfgEditorSubcategories
{
	class MET_IND_PDF_Infantry
	{
		displayName = "Men";
	};
	class MET_IND_PDF_Armor
	{
		displayName = "Armor";
	};
	class MET_IND_PDF_Cars
	{
		displayName = "Cars";
	};
	class MET_IND_PDF_Air
	{
		displayName = "Air";
	};
};

#include "weapons\CfgWeapons.hpp"
#include "weapons\CfgMagazines.hpp"
#include "weapons\CfgAmmos.hpp"

class CfgVehicles
{
	class TKE_CamelBakV2MDBlack;
	class PDF_AT_TKE_CamelBakV2MDBlack : TKE_CamelBakV2MDBlack
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_SFA_Launcher_Guided_Mag
			{
				count = 3;
				magazine = "SFA_Launcher_Guided_Mag";
			};
		};
	};

	class I_Soldier_base_F;
	class MET_IND_Man_Base : I_Soldier_base_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		author = "CommanderChet";			// The name of the author of the asset, which is displayed in the editor.
		scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 1;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 1;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "MET_IND_PDF";
		editorSubCategory = "MET_IND_PDF_Infantry";
		identityTypes[] = { "LanguageENG_F","Head_Euro","NoGlasses" };	// Identity Types are explained in the Headgear section of this guide.
		genericNames = "NATOMen";
		displayName = "MET_IND_Man_Base"; // The name of the soldier, which is displayed in the editor.
		cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 3;					// How likely this character spots enemies when controlled by AI.
		threat[] = { 1, 1, 0.8 };			// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\Characters_F\INDFOR\I_soldier_01.p3d";			// The path to the uniform model this character uses.
		uniformClass = "TKE_VoidSuitArmyV3_U_B";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo" };							// List of model selections which can be changed with hiddenSelectionTextures[]
		hiddenSelectionsTextures[] = { "\A3\Characters_F_New\INDFOR\Data\i_soldier_new.paa" };	// The textures for the selections defined above.
		canDeactivateMines = 0;					// Can this character deactivate mines?
		engineer = 0;							// Can this character repair vehicles?
		attendant = 0;							// Can this character heal soldiers?
		icon = "iconMan";				// If a character has a special role, a special icon shall be used.
		backpack = "";		// Which backpack the character is wearing.
		weapons[] = { "Throw", "Put" };		// Which weapons the character has.
		respawnWeapons[] = { "Throw", "Put" };	// Which weapons the character respawns with.
		Items[] =
		{
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"MET_LFP_BactaBandage",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		Magazines[] =
		{
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[] =
		{
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS"
		};
	};

	class MET_PDF_SL : MET_IND_Man_Base
	{
		displayName = "Squad Leader";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_RadioBag_01_black_F";
		Weapons[] =
		{
			"MET_PDF_DLA13_Carbine",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		respawnWeapons[] =
		{
			"MET_PDF_DLA13_Carbine",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		Magazines[] =
		{
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[] =
		{
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
	};

	class MET_PDF_Rifleman : MET_IND_Man_Base
	{
		displayName = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Rangemaster_belt_black";
		Weapons[] =
		{
			"MET_PDF_DLA13",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		respawnWeapons[] =
		{
			"MET_PDF_DLA13",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		Magazines[] =
		{
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[] =
		{
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
	};

	class MET_PDF_AT : MET_IND_Man_Base
	{
		displayName = "AT";
		scope = 2;
		scopeCurator = 2;
		backpack = "PDF_AT_TKE_CamelBakV2MDBlack";
		Weapons[] =
		{
			"MET_PDF_DLA13_Carbine",
			"MET_PDF_KE7",
			"SFA_Guided_Onslaught_Launcher",
			"Put",
			"Throw"
		};
		respawnWeapons[] =
		{
			"MET_PDF_DLA13_Carbine",
			"MET_PDF_KE7",
			"SFA_Guided_Onslaught_Launcher",
			"Put",
			"Throw"
		};
		Magazines[] =
		{
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"SFA_Launcher_Guided_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[] =
		{
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"SFA_Launcher_Guided_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
	};

	class MET_PDF_Grenadier : MET_IND_Man_Base
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Rangemaster_belt_black";
		Weapons[] =
		{
			"MET_PDF_DLA13_GL",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		respawnWeapons[] =
		{
			"MET_PDF_DLA13_GL",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		Magazines[] =
		{
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Grenade",
			"MET_PDF_DLA13_Grenade",
			"MET_PDF_DLA13_Grenade",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[] =
		{
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Mag",
			"MET_PDF_DLA13_Grenade",
			"MET_PDF_DLA13_Grenade",
			"MET_PDF_DLA13_Grenade",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
	};

	class MET_PDF_Marksman : MET_IND_Man_Base
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Rangemaster_belt_black";
		Weapons[] =
		{
			"IDA_773Firepuncher",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		respawnWeapons[] =
		{
			"IDA_773Firepuncher",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		Magazines[] =
		{
			"IDA_Blaster_Cell_Power4_10Rnd_Blue",
			"IDA_Blaster_Cell_Power4_10Rnd_Blue",
			"IDA_Blaster_Cell_Power4_10Rnd_Blue",
			"IDA_Blaster_Cell_Power4_10Rnd_Blue",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[] =
		{
			"IDA_Blaster_Cell_Power4_10Rnd_Blue",
			"IDA_Blaster_Cell_Power4_10Rnd_Blue",
			"IDA_Blaster_Cell_Power4_10Rnd_Blue",
			"IDA_Blaster_Cell_Power4_10Rnd_Blue",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
	};

	class MET_PDF_Autorifleman : MET_IND_Man_Base
	{
		displayName = "Autorifleman";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Rangemaster_belt_black";
		Weapons[] =
		{
			"MET_PDF_T20",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		respawnWeapons[] =
		{
			"MET_PDF_T20",
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		Magazines[] =
		{
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[] =
		{
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_T20_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"ls_nvg_honorGuard",
			"G_Bandanna_blk",
			"ls_vest_flakJacket_open",
			"ls_helmet_reinforcedServiceCoif"
		};
	};

	class MET_PDF_Crewman : MET_IND_Man_Base
	{
		displayName = "Crewman";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Rangemaster_belt_black";
		Weapons[] =
		{
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		respawnWeapons[] =
		{
			"MET_PDF_KE7",
			"Put",
			"Throw"
		};
		Magazines[] =
		{
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[] =
		{
			"MET_PDF_KE7_Pistol_Mag",
			"MET_PDF_KE7_Pistol_Mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"G_Bandanna_blk",
			"ls_nvg_goggles_white"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"G_Bandanna_blk",
			"ls_nvg_goggles_white"
		};
	};

	class MET_PDF_Pilot : MET_IND_Man_Base
	{
		displayName = "Pilot";
		linkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"G_Bandanna_blk",
			"TKE_UCNPilotHelmRVNoPipe"
		};
		respawnLinkedItems[] =
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_BinoUCN",
			"G_Bandanna_blk",
			"TKE_UCNPilotHelmRVNoPipe"
		};
	};

};

class CfgGroups
{
	class INDEP
	{
		class MET_IND_PDF_Groups
		{
			name = "[16th] Planetary Defense Force";
			class MET_IND_PDF_Groups
			{
				name = "Groups";
				class MET_IND_PDF_Patrol
				{
					name = "Patrol";
					scope = 2;
					side = 2;
					faction = "MET_PDF_Units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "MET_PDF_Rifleman";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "MET_PDF_Grenadier";
						rank = "PRIVATE";
						position[] = { 1,-2,0 };
					};
				};
				class MET_IND_PDF_Sniper_Team
				{
					name = "Sniper Team";
					scope = 2;
					side = 2;
					faction = "MET_PDF_Units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "MET_PDF_Marksman";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "MET_PDF_Marksman";
						rank = "PRIVATE";
						position[] = { 1,-2,0 };
					};
				};
				class MET_IND_PDF_Fireteam
				{
					name = "Fireteam";
					scope = 2;
					side = 2;
					faction = "MET_PDF_Units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "MET_PDF_Rifleman";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "MET_PDF_Grenadier";
						rank = "PRIVATE";
						position[] = { 1,-2,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "MET_PDF_Rifleman";
						rank = "PRIVATE";
						position[] = { 1,2,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "MET_PDF_Rifleman";
						rank = "PRIVATE";
						position[] = { 2,-2,0 };
					};
				};
				class MET_IND_PDF_Squad
				{
					name = "Squad";
					scope = 2;
					side = 2;
					faction = "MET_PDF_Units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "MET_PDF_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "MET_PDF_Grenadier";
						rank = "PRIVATE";
						position[] = { 1,-2,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "MET_PDF_Autorifleman";
						rank = "PRIVATE";
						position[] = { 1,2,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "MET_PDF_AT";
						rank = "PRIVATE";
						position[] = { 2,-2,0 };
					};
					class Unit4
					{
						side = 2;
						vehicle = "MET_PDF_Marksman";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit5
					{
						side = 2;
						vehicle = "MET_PDF_Rifleman";
						rank = "PRIVATE";
						position[] = { 3,-2,0 };
					};
					class Unit6
					{
						side = 2;
						vehicle = "MET_PDF_Rifleman";
						rank = "PRIVATE";
						position[] = { 3,2,0 };
					};
					class Unit7
					{
						side = 2;
						vehicle = "MET_PDF_Rifleman";
						rank = "PRIVATE";
						position[] = { 4,0,0 };
					};
				};
			};
		};
	};
};