class CfgPatches
{
	class BHA_Turrets_FG75
	{
		units[]=
		{
			"BHA_Static_FG75"
		};
		weapons[]={};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"A3_Static_F",
			"OPTRE_Weapons_Turrets"
		};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class HitPoints;
			};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class BHA_Static_FG75: StaticMGWeapon
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Turrets\OPTRE_Static_FG75.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="BHA_Units";
		//editorCategory="BHA_Assets";
		editorSubcategory="BHA_Statics";
		//vehicleClass="OPTRE_UNSC_Static_class";
		displayName="FG75 Mass Driver";
		model="\OPTRE_Weapons_Turrets\FG75\FG75.p3d";
		picture="\OPTRE_Weapons_Turrets\LAU65D\data\UI\LAU65D_ca.paa";
		icon="\OPTRE_Weapons_Turrets\LAU65D\data\UI\map_LAU65D_ca.paa";
		mapSize=4;
		armor=100000;
		crew="BHA_Initiates_Initiate";
		class AnimationSources: AnimationSources
		{
			class revolving_rot
			{
				source="revolving";
				weapon="BHA_75mm_M75";
			};
			class revolving_recoil
			{
				source="ammo";
				weapon="BHA_75mm_M75";
			};
			class recoil
			{
				source="reload";
				weapon="BHA_75mm_M75";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BHA_75mm_M75",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"BHA_75MW_HE",
					"BHA_75MW_HE",
					"BHA_75MW_AP",
					"BHA_75MW_AP",
					"BHA_75MW_AP",
					"BHA_75MW_AP",
					"Laserbatteries"
				};
				viewGunnerInExternal=1;
				gunnerAction="Mortar_Gunner";
				gunnerInAction="Mortar_Gunner";
				forceHideGunner=1;
				ejectDeadGunner=1;
				minElev=-10;
				maxElev=20;
				minTurn=-20;
				maxTurn=20;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.041669998;
					maxFov=0.40000001;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.40000001;
					maxFov=0.40000001;
				};
			};
		};
	};
};
