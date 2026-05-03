class CfgPatches
{
	class BHA_Turrets
	{
		units[]=
		{
			"BHA_HeavyRepeater_Armoured",
            "BHA_Mortar",
            "BHA_AU_44_Mortar",
			"BHA_AA_Base"
		};
		weapons[]={};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"OPTRE_Weapons_Turrets",
			"OPTRE_Core"
		};
	};
};
class CfgVehicles
{
    class 3AS_HeavyRepeater_Base
    {
        class Turrets
        {
            class MainTurret;
        };
    };
	
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
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
				class Hitpoints;
			};
		};
		class assembleInfo;
	};
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class SimpleObject;
	};
	class BHA_HeavyRepeater_Armoured: 3AS_HeavyRepeater_Base
	{
		author="$STR_3AS_Studio";
		editorPreview="\3as\3as_static\images\3AS_HeavyRepeater_Armoured.jpg";
		_generalMacro="B_HMG_01_F";
		displayName="[3AS] Heavy Repeater(Armored)";
		model="3AS\3AS_Static\HeavyRepeater\3AS_HeavyRepeaterShieldStatic.p3d";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Statics";
		crew="BHA_Initiates_Initiate";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BHA_EL34_Gatling"
				};
				magazines[]=
				{
					"MET_EL34_vic_mag",
					"MET_EL34_vic_mag",
					"MET_EL34_vic_mag",
					"MET_EL34_vic_mag"
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\HeavyRepeater\data\Textures\Shield.rvmat",
				"3as\3as_static\HeavyRepeater\data\Textures\Shield.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="BHA_EL34_Gatling";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="BHA_EL34_Gatling";
			};
			class minigun
			{
				source="revolving";
				weapon="BHA_EL34_Gatling";
			};
		};
		/*class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"3AS_Republic_HR_Shield_Bag"
			};
		};*/
	};
	class BHA_Mortar: B_Mortar_01_F
	{
		author="$STR_3AS_Studio";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		icon="3AS\3as_static\Mortar\Data\ui\Mortar_top_ca.paa";
		displayname="[BHA] 60MW Mortar";
		side=2;
		editorPreview="\3as\3as_static\images\3as_CIS_Mortar.jpg";
		faction="BHA_Units";
		editorCategory="BHA_Assets_2";
		editorSubcategory="BHA_Statics";
		crew="BHA_Initiates_Initiate";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				weapons[]=
				{
					"BHA_mortar_60mm"
				};
				magazines[]=
				{
					"BHA_20Rnd_82mm_Mo_shells",
					"BHA_20Rnd_82mm_Mo_shells",
					"BHA_20Rnd_82mm_Mo_shells",
					"BHA_20Rnd_82mm_Mo_shells",
					"BHA_20Rnd_82mm_Mo_Flare_white",
					"BHA_20Rnd_82mm_Mo_Flare_white",
					"BHA_20Rnd_82mm_Mo_Flare_white",
					"BHA_20Rnd_82mm_Mo_Flare_Red",
					"BHA_20Rnd_82mm_Mo_Flare_Red",
					"BHA_20Rnd_82mm_Mo_Flare_Red",
					"BHA_20Rnd_82mm_Mo_Smoke_white",
					"BHA_20Rnd_82mm_Mo_Smoke_white",
					"BHA_20Rnd_82mm_Mo_Smoke_white"
				};
				elevationMode=3;
				gunnerforceoptics=1;
				class Hitpoints: Hitpoints
				{
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base_cis.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube_cis.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
            "z\MET\addons\units\bha\vehicles\turrets\data\black_base_co.paa",
			"z\MET\addons\units\bha\vehicles\turrets\data\black_tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base_cis.rvmat",
			"\3as\3as_static\Mortar\data\tube_cis.rvmat"
		};
		scopeCurator=2;
		/*class assembleInfo: assembleInfo
		{
			dissasembleTo[]=
			{
				"3AS_CIS_Mortar_Bag"
			};
		};*/
	};
    class BHA_AU_44_Mortar: Mortar_01_base_F
    {
        displayName = "AU-44";
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\AU_44_Mortar.p3d";
        author = "A2S";
        class SimpleObject
        {
            eden = 1;
            animate[] = {{"mainturret", 0}, {"maingun", 0}, {"computerAim", 0}, {"computerRotate", 0}, {"barRotate", 0}};
            hide[] = {};
            verticalOffset = 0.757;
            verticalOffsetWorld = 0.035;
            init = "''";
        };
        editorPreview = "\OPTRE_Misc\Image\OPTRE\Turrets\OPTRE_AU_44_Mortar.jpg";
        scope = 2;
        side = 2;
		faction="BHA_Units";
		editorSubcategory="BHA_Statics";
		crew="BHA_Initiates_Initiate";
        availableForSupportTypes[] = {"Artillery"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                elevationMode = 3;
                weapons[] = {"BHA_SGM120_Mortar_120mm"};
                magazines[] = {
                    "BHA_10Rnd_120mm_Mo_shells",
                    "BHA_10Rnd_120mm_Mo_shells",
                    "BHA_10Rnd_120mm_Mo_shells",
                    "BHA_10Rnd_120mm_Mo_shells",
					"BHA_5Rnd_120mm_Mo_Cluster_HE",
					"BHA_5Rnd_120mm_Mo_Cluster_HE",
					"BHA_5Rnd_120mm_Mo_Cluster_HE"
                };

                minelev = -22.5;
                initelev = 0;
				maxelev = 22.5;

                disableSoundAttenuation = 0;
                soundElevation[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03.wss", 0.316228, 1, 10};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03.wss", 0.177828, 1, 10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03.wss", 0.316228, 1, 30};
            };
        };
        class AnimationSources
        {
            class muzzle_hide_mortar
            {
                source = "reload";
                weapon = "BHA_SGM120_Mortar_120mm";
            };
        };
        /*class assembleInfo
        {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {"MET_AU_44_Mortar_Bag"};
            primary = 0;
        };
        /*class ace_csw
		{
			enabled = 1;
			proxyWeapon = "OPTRE_CSW_SGM122_Mortar_122mm";
			magazineLocation = "_target selectionPosition 'magazine'";
			disassembleWeapon = "OPTRE_CSW_AU44_Mortar_Carry";
			disassembleTurret = "OPTRE_CSW_Mortar_Baseplate";
			desiredAmmo = 1;
			ammoLoadTime = 0.5;
			ammoUnloadTime = 1;
		};*/
        hiddenSelections[] =
		{
            "camo",
			"camoScreen"
        };
        hiddenSelectionsTextures[] = {
			"z\MET\addons\units\bha\vehicles\turrets\data\mortar_co_fuq_dat.paa",
            "OPTRE_Weapons_Turrets\au_44_mortar\data\computer_screen.paa"
        };
        hiddenSelectionsMaterials[] = {
            "OPTRE_Weapons_Turrets\AU_44_Mortar\data\mortar.rvmat",
            "OPTRE_Weapons_Turrets\AU_44_Mortar\data\mfd.rvmat"
        };
        //#include "\OPTRE_Weapons_Turrets\AU_44_Mortar\_mfd.hpp"
    };
	class SFA_AA_Base
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class BHA_AA_Base: SFA_AA_Base
	{
		author="Hazmat";
		scope=2;
		scopeCurator=2;
		side=2;
		armor=250;
		armorStructural=3.25;
		faction="BHA_Units";
		editorCategory="BHA_Assets_2";
		editorSubcategory="BHA_Statics";
		crew="BHA_warbot";
		displayName="AA Gun";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\units\bha\vehicles\turrets\data\aa gun_co.paa",
			"z\MET\addons\units\bha\vehicles\turrets\data\capsules_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BHA_autocannon_70mm"
				};
				magazines[]=
				{
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag"
				};
				gunnerAction="FieldCannon_Gunner";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				displayName="Gunner";
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				ejectDeadGunner=1;
				gunnerForceOptics=1;
				forceHideGunner=1;
				gunnerRightHandAnimName="OtocHlaven_shake";
				gunnerLeftHandAnimName="OtocHlaven_shake";
				body="MainTurret";
				gun="MainGun";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				minElev=-25;
				maxElev=45;
				minTurn=-360;
				maxTurn=360;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm.wss",
					1.4125376,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical.wss",
					1.4125376,
					1,
					30
				};
				memoryPointGun[]=
				{
					"konec hlavne",
					"konec hlavne2"
				};
				selectionFireAnim="Zasleh";
				LODOpticsIn=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=100;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=120;
						angleRangeVertical=60;
						groundNoiseDistanceCoef=0.1;
						maxTrackableSpeed=800;
						minSpeedThreshold=30;
						componentType="ActiveRadarSensorComponent";
						detectGround=1;
						detectAir=1;
						aimDown=0;
						enabled=1;
						color[]={0.05,0.85,0.95,0.1};
					};
				};
			};
		};
		class AnimationSources
		{
			class Recoil_Source
			{
				source="reload";
				weapon="BHA_autocannon_70mm";
			};
		};
	};
};
