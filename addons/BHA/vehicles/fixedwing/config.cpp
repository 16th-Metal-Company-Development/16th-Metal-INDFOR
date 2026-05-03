class CfgPatches
{
	class BHA_Planes
	{
		units[]=
		{
			"BHA_starsaber_F",
			"BHA_Fixed_Bomber_01"
		};
		weapons[]={};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Optics_Armored;
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Helicopter;
	class Items_base_F;
	class Wreck_base_F;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class CargoTurret;
		class ACE_selfActions;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitAvionics;
		};
	};
	class SFA_starsaber_Base_F;
	class BHA_starsaber_F: SFA_starsaber_Base_F
	{
		author="Starforge Armory Team";
		editorPreview="";
		scope=2;
		scopeCurator=2;
		displayName="XC-01 StarSaber";
		side=2;
		crew="BHA_Acolytes_HonorGuard";
		faction="BHA_Units";
		//editorCategory="BHA_Assets";
		editorSubcategory="BHA_Planes";
		typicalCargo[]=
		{
			"BHA_Acolytes_HonorGuard"
		};
		availableForSupportTypes[]={};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\units\bha\vehicles\fixedwing\data\XC01_Main_co.paa"
		};
		weapons[]=
		{
			"BHA_starsaber_HeavyCannon",
			"BHA_L04_Concussion",
			"BHA_missiles_Pulverizer",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"BHA_300Rnd_Heavy",
			"BHA_300Rnd_Heavy",
			"BHA_L04_Concussion_AA_x9",
			"BHA_L04_Concussion_AA_x9",
			"BHA_L04_Concussion_AA_x9",
			"BHA_L04_Concussion_AA_x9",
			"BHA_L04_Concussion_AA_x9",
			"BHA_12Rnd_Pulverizer",
			"BHA_12Rnd_Pulverizer",
			"BHA_12Rnd_Pulverizer",
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class SC_Fixed_Bomber_Base
	{
		class Components;
	};
	class BHA_Fixed_Bomber_01: SC_Fixed_Bomber_Base
	{
		getInProxyOrder[]={};
		cargoProxyIndexes[]={};
		cargoAction[]={};
		author="Scion Conflict Mod Team";
		weapons[]=
		{
			"BHA_starsaber_HeavyCannon",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"BHA_300Rnd_Heavy",
			"BHA_300Rnd_Heavy",
			"120Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		scope=2;
		scopeCurator=2;
		DisplayName="B-45 Strikebat Bomber";
		side=2;
		crew="BHA_Acolytes_HonorGuard";
		faction="BHA_Units";
		//editorCategory="BHA_Assets";
		editorSubcategory="BHA_Planes";
		maxSpeed=650;
		stallSpeed=135;
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"sc_fixed\Data\fixed_bomber_01\body\body_black_co.paa",
			"sc_fixed\Data\fixed_bomber_01\details\details_co.paa"
		};
		memoryPointGun[]=
		{
			"Konec hlavne",
			"Konec hlavne1"
		};
		gunBeg[]=
		{
			"Usti hlavne",
			"Usti hlavne1"
		};
		Gunend[]=
		{
			"Konec hlavne",
			"Konec hlavne1"
		};
		class TextureSources
		{
			class Navy
			{
				displayName="AR Navy";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"sc_fixed\Data\fixed_bomber_01\body\body_co.paa",
					"sc_fixed\Data\fixed_bomber_01\details\details_co.paa"
				};
				factions[]=
				{
					"SC_Faction_AR"
				};
			};
			class Black
			{
				displayName="Black";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"sc_fixed\Data\fixed_bomber_01\body\body_black_co.paa",
					"sc_fixed\Data\fixed_bomber_01\details\details_co.paa"
				};
				factions[]=
				{
					"SC_Faction_AR"
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"sc_fixed\Data\fixed_bomber_01\Body\body.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_fixed\Data\fixed_bomber_01\details\details.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_damage.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_damage.rvmat"
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"BHA_BOMB_RAIL",
							"BHA_AGM_RAIL"
						};
						attachment="BHA_PylonMissile_1Rnd_Concussion_Missile";
						priority=10;
						maxweight=300;
						UIposition[]={0.15000001,0.2};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.15000001,0.25};
					};
					class pylons3: pylons1
					{
						UIposition[]={0.15000001,0.30000001};
					};
					class pylons4: pylons1
					{
						UIposition[]={0.15000001,0.34999999};
						attachment="BHA_PylonMissile_1Rnd_Proton_Torpedo";
					};
					class pylons5: pylons4
					{
						UIposition[]={0.15000001,0.40000001};
					};
					class pylons6: pylons4
					{
						UIposition[]={0.15000001,0.44999999};
					};
					class pylons7: pylons1
					{
						UIposition[]={0.15000001,0.5};
					};
					class pylons8
					{
						hardpoints[]=
						{
							"BHA_BOMB_RAIL",
							"BHA_AGM_RAIL"
						};
						attachment="BHA_PylonMissile_1Rnd_Proton_Torpedo";
						priority=10;
						maxweight=300;
						UIposition[]={0.60000002,0.2};
						mirroredMissilePos=1;
					};
					class pylons9: pylons8
					{
						UIposition[]={0.60000002,0.25};
						mirroredMissilePos=2;
					};
					class pylons10: pylons8
					{
						UIposition[]={0.60000002,0.30000001};
						mirroredMissilePos=3;
					};
					class pylons11: pylons8
					{
						UIposition[]={0.60000002,0.34999999};
						attachment="BHA_PylonMissile_1Rnd_Concussion_Missile";
						mirroredMissilePos=4;
					};
					class pylons12: pylons11
					{
						UIposition[]={0.60000002,0.40000001};
						mirroredMissilePos=5;
					};
					class pylons13: pylons11
					{
						UIposition[]={0.60000002,0.44999999};
						mirroredMissilePos=6;
					};
					class pylons14: pylons11
					{
						UIposition[]={0.60000002,0.5};
						mirroredMissilePos=7;
					};
					class pylons15: pylons1
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_AMRAAM_D_RAIL",
							"BHA_AAA_RAIL"
						};
						attachment="BHA_PylonMissile_1Rnd_Discord_missiles";
						priority=9;
						maxweight=2500;
						UIposition[]={0.44999999,0.34999999};
					};
					class pylons16: pylons15
					{
						UIposition[]={0.44999999,0.25};
						attachment="BHA_PylonMissile_1Rnd_Discord_missiles";
					};
					class pylons17: pylons15
					{
						UIposition[]={0.44999999,0.15000001};
						attachment="BHA_PylonMissile_1Rnd_Discord_missiles";
					};
					class pylons18: pylons15
					{
						UIposition[]={0.25,0.34999999};
						mirroredMissilePos=15;
					};
					class pylons19: pylons16
					{
						UIposition[]={0.25,0.25};
						mirroredMissilePos=16;
					};
					class pylons20: pylons17
					{
						UIposition[]={0.25,0.15000001};
						mirroredMissilePos=17;
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"BHA_PylonMissile_1Rnd_Concussion_Missile",
							"BHA_PylonMissile_1Rnd_Concussion_Missile",
							"BHA_PylonMissile_1Rnd_Concussion_Missile",
							"BHA_PylonMissile_1Rnd_Proton_Torpedo",
							"BHA_PylonMissile_1Rnd_Proton_Torpedo",
							"BHA_PylonMissile_1Rnd_Proton_Torpedo",
							"BHA_PylonMissile_1Rnd_Concussion_Missile",
							"BHA_PylonMissile_1Rnd_Proton_Torpedo",
							"BHA_PylonMissile_1Rnd_Proton_Torpedo",
							"BHA_PylonMissile_1Rnd_Proton_Torpedo",
							"BHA_PylonMissile_1Rnd_Concussion_Missile",
							"BHA_PylonMissile_1Rnd_Concussion_Missile",
							"BHA_PylonMissile_1Rnd_Concussion_Missile",
							"BHA_PylonMissile_1Rnd_Concussion_Missile",
							"BHA_PylonMissile_1Rnd_Discord_missiles",
							"BHA_PylonMissile_1Rnd_Discord_missiles",
							"BHA_PylonMissile_1Rnd_Discord_missiles",
							"BHA_PylonMissile_1Rnd_Discord_missiles",
							"BHA_PylonMissile_1Rnd_Discord_missiles",
							"BHA_PylonMissile_1Rnd_Discord_missiles"
						};
					};
				};
			};
		};
	};
};