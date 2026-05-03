class cfgPatches
{
	class MET_IND_PDF_Faction
	{
		units[] = {};
		weapons[] = { "MET_PDF_DLA13_Base", "MET_PDF_DLA13", "MET_PDF_DLA13_Carbine", "MET_PDF_DLA13_GL"};
		requiredVersion = 0.1;
		skipWhenMissingDependencies=1;
		requiredAddons[] = {  };
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

class cfgVehicles
{

	class I_Soldier_base_F;
	class MET_IND_Man_Base : I_Soldier_base_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		author = "CommanderChet";			// The name of the author of the asset, which is displayed in the editor.
		scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 1;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 1;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		identityTypes[] = { "LanguageENG_F","Head_NATO","NoGlasses" };	// Identity Types are explained in the Headgear section of this guide.
		displayName = "MET_IND_Man_Base"; // The name of the soldier, which is displayed in the editor.
		cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 3;					// How likely this character spots enemies when controlled by AI.
		threat[] = { 1, 1, 0.8 };			// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\Characters_F\INDFOR\I_soldier_01.p3d";			// The path to the uniform model this character uses.
		uniformClass = "U_I_soldier_new";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo" };							// List of model selections which can be changed with hiddenSelectionTextures[]
		hiddenSelectionsTextures[] = { "\A3\Characters_F_New\INDFOR\Data\i_soldier_new.paa" };	// The textures for the selections defined above.
		canDeactivateMines = 0;					// Can this character deactivate mines?
		engineer = 0;							// Can this character repair vehicles?
		attendant = 0;							// Can this character heal soldiers?
		icon = "iconMan";				// If a character has a special role, a special icon shall be used.
		backpack = "";		// Which backpack the character is wearing.
		weapons[] = { "Throw", "Put" };		// Which weapons the character has.
		respawnWeapons[] = { "Throw", "Put" };	// Which weapons the character respawns with.
		Items[] = {};			// Which items the character has.
		RespawnItems[] = {};		// Which items the character respawns with.
		magazines[] = {};			// What ammunition the character has.
		respawnMagazines[] = {};	// What ammunition the character respawns with.
		linkedItems[] = {};		// Which items the character has.
		respawnLinkedItems[] = {};	// Which items the character respawns with.
	};

};