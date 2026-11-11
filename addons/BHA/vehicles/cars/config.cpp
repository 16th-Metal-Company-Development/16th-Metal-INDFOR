class CfgPatches
{
	class BHA_Cars
	{
		units[]=
		{
			"BHA_Gator_TO",
			"BHA_Gator_FB",
			"BHA_Gator_TC",
			"BHA_Ferret_ATGM",
			"BHA_Ferret_AA",
			"BHA_Ferret_Autocannon",
			"BHA_SaurusAPC_SE",
			"BHA_HAGM",
			"BHA_Stormcaller_F",
			"BHA_Avalanche_F",
			"BHA_Firebrand_Rocket"
		};
		weapons[]={};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"sc_wheeled",
			"SFA_Vehicles_S",
			"SFA_Vehicles_R",
			"3AS_HAAG"
		};
	};
};
class AnimationSources;
class CfgVehicles
{
	class All
	{
		class ViewCargo;
		class ViewOptics;
	};
	class AllVehicles: All
	{
		class NewTurret
		{
			class ViewGunner;
			class ViewOptics;
			class HitPoints
			{
				class HitTurret;
				class HitGun;
			};
		};
		class ViewPilot;
		class ViewCargo;
		class ViewOptics;
		class CargoTurret: NewTurret
		{
			class ViewGunner: ViewCargo
			{
			};
		};
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
		class CommanderOptics: NewTurret
		{
			class ViewOptics: ViewOptics
			{
			};
			class ViewGunner: ViewCargo
			{
			};
		};
	};
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitEngine;
			class HitRGlass;
			class HitLGlass;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitRFWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitLBWheel;
			class HitRBWheel;
		};
		class ViewPilot: ViewPilot
		{
		};
		class DestructionEffects
		{
			class Light1;
		};
		class EventHandlers;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
			class HitHull;
		};
		class ViewPilot: ViewPilot
		{
		};
		class NewTurret: NewTurret
		{
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class ViewOptics: ViewOptics
				{
				};
				class ViewGunner: ViewGunner
				{
				};
			};
		};
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel: HitLFWheel
			{
			};
			class HitLBWheel: HitLFWheel
			{
			};
			class HitRBWheel: HitLFWheel
			{
			};
			class HitLF2Wheel: HitLFWheel
			{
			};
			class HitRF2Wheel: HitLFWheel
			{
			};
			class HitLMWheel: HitLFWheel
			{
			};
			class HitRMWheel: HitLFWheel
			{
			};
			class HitGlass1;
			class HitGlass2: HitGlass1
			{
			};
			class HitGlass3: HitGlass1
			{
			};
			class HitGlass4: HitGlass1
			{
			};
			class HitGlass5: HitGlass1
			{
			};
			class HitGlass6: HitGlass1
			{
			};
		};
		class Exhausts
		{
			class Exhaust1;
		};
		class Reflectors
		{
			class Left;
			class Right: Left
			{
			};
			class Right2: Right
			{
			};
			class Left2: Left
			{
			};
		};
	};
	class SC_Gator_TO_AR;
	class SC_Gator_FB_AR;
	class SC_Gator_TC_AR;
	/*class SC_Ferret_Base
	{
		class Turrets
		{
			class MainTurret
			{
				class ViewOptics;
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
	};
	class SC_Ferret_AA_AR
	{
		class Turrets
		{
			class MainTurret
			{
				class ViewOptics;
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
	};
	class SC_Ferret_Autocannon_AR
	{
		class Turrets
		{
			class MainTurret
			{
				class ViewOptics;
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
	};*/
	class BHA_Gator_TO: SC_Gator_TO_AR
	{
		author="Scion Conflict Mod Team and Hazmat";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Cars";
		crew="BHA_Initiates_Initiate";
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\gator\body_black_co.paa",
			"\sc_wheeled\data\gator\doors_co.paa",
			"\sc_wheeled\data\gator\frame_co.paa"
		};
	};
	class BHA_Gator_FB: SC_Gator_FB_AR
	{
		author="Scion Conflict Mod Team and Hazmat";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Cars";
		crew="BHA_Initiates_Initiate";
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\gator\body_black_co.paa",
			"\sc_wheeled\data\gator\doors_co.paa"
		};
	};
	class BHA_Gator_TC: SC_Gator_TC_AR
	{
		author="Scion Conflict Mod Team and Hazmat";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Cars";
		crew="BHA_Initiates_Initiate";
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\gator\body_black_co.paa",
			"\sc_wheeled\data\gator\doors_co.paa",
			"\sc_wheeled\data\gator\compartment_co.paa"
		};
	};
	/*class BHA_Ferret_ATGM: SC_Ferret_Base
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Ferret Scout Car ATGM";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Cars";
		crew="BHA_Initiates_Initiate";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\ferret\body_black_co.paa",
			"\sc_wheeled\data\ferret\details_black_co.paa",
			"\sc_wheeled\data\ferret\wheels_black_co.paa"
		};
		armor = 275;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_MG",
					"BHA_missiles_TOW",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"BHA_AT_DUB",
					"BHA_AT_DUB",
					"BHA_AP_DUB",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01.wss",
					0.17782794,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01.wss",
					0.17782794,
					1,
					10
				};
				gunnerAction="driver_hemtt";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=1;
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500};
				discreteDistanceInitIndex=0;
				turretInfoType="RscOptics_crows";
				usePip=0;
				minElev=-10;
				maxElev=25;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				gunnerForceOptics=1;
				commanding=1;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.30000001;
					minFov=0.30000001;
					maxFov=0.30000001;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={4,5,6};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=15;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]={};
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor="2*(19+2*19+19)/((18+2*9+9) + (19+2*19+19))";
						name="vez";
						visual="OtocVez";
					};
					class HitGun: HitGun
					{
						armor="4*100/((18+2*9+9) + (19+2*19+19))";
						name="zbranVelitele";
						visual="OtocHlaven";
					};
				};
				gunnerDoor="";
			};
		};
	};
	class BHA_Ferret_AA: SC_Ferret_AA_AR
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Ferret Scout Car AA";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Cars";
		crew="BHA_Initiates_Initiate";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\ferret\body_black_co.paa",
			"\sc_wheeled\data\ferret\details_black_co.paa",
			"\sc_wheeled\data\ferret\wheels_black_co.paa",
			"\sc_wheeled\data\saurus_apc\textures\turret_black_co.paa"
		};
		armor = 275;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BHA_EL34_Gatling",
					"BHA_Missiles_SAAMI",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"MET_EL34_vic_mag",
					"MET_EL34_vic_mag",
					"BHA_AA_Dub",
					"BHA_AA_Dub",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.30000001;
					minFov=0.30000001;
					maxFov=0.30000001;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={4,5,6};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Minigun
			{
				source="revolving";
				weapon="BHA_EL34_Gatling";
			};
		};
	};
	class BHA_Ferret_AUTOGUN: SC_Ferret_Autocannon_AR
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Ferret Scout Car Auto Cannon";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Cars";
		crew="BHA_Initiates_Initiate";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\ferret\body_black_co.paa",
			"\sc_wheeled\data\ferret\details_black_co.paa",
			"\sc_wheeled\data\ferret\wheels_black_co.paa",
			"\sc_wheeled\data\saurus_apc\textures\turret_auto_co.paa"
		};
		armor = 275;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-5;
				maxElev=40;
				memoryPointGun="usti hlavne1";
				selectionFireAnim="zasleh1";
				weapons[]=
				{
					"MET_autocannon_Z36_HBC",
					"BHA_MG2",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"MET_500Rnd_Z36_HBC",
					"MET_500Rnd_Z36_HBC",
					"MET_500Rnd_Z36_HBC",
					"MET_500Rnd_Z36_HBC",
					"MET_500Rnd_Z36_HBC_AP",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.30000001;
					minFov=0.30000001;
					maxFov=0.30000001;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={4,5,6};
				};
			};
		};
	};*/
	/*class SC_SaurusAPC_SE
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class BHA_SaurusAPC_SE: SC_SaurusAPC_SE
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Saurus APC";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_IFVs";
		crew="BHA_Initiates_Initiate";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\vehicles\data\body_co.paa",
			"z\MET\addons\vehicles\data\details_co.paa",
			"z\MET\addons\vehicles\data\turret_auto_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					//"BHA_autocannon_40mm_AP",
					"BHA_autocannon_40mm_HE"
				};
				magazines[]=
				{
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC_AP",
					"MET_500Rnd_Z38_HBC_AP",
					"MET_500Rnd_Z38_HBC_AP",
					"MET_500Rnd_Z38_HBC_AP"
				};
				minElev=-10;
				maxElev=85;
				maxHorizontalRotSpeed=1.2;
				maxVerticalRotSpeed=1.2;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=2;
				memoryPointGun[]=
				{
					"usti hlavne1",
					"usti hlavne"
				};
				selectionFireAnim="zasleh";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.30000001;
					minFov=0.30000001;
					maxFov=0.30000001;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={4,5,6};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="BHA_autocannon_40mm_AP";
			};
			class muzzle_rot1
			{
				source="ammorandom";
				weapon="BHA_autocannon_40mm_HE";
			};
		};
	};*/
	class BHA_Ferret_Base: Car_F
	{
		scope=1;
		scopeCurator=1;
		author="Scion Conflict Mod Team";
		displayName="Ferret (BASE)";
		side=2;
		faction="BHA_Units";
		crew="BHA_Initiates_Initiate";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\ferret\body_black_co.paa",
			"\sc_wheeled\data\ferret\details_black_co.paa",
			"\sc_wheeled\data\ferret\wheels_black_co.paa"
		};
		model="\sc_wheeled\model\ferret\ferret.p3d";
		picture="\sc_wheeled\data\icons\icon_ferret_ca.paa";
		icon="\sc_wheeled\data\icons\icon_ferret_map_ca.paa";
		terrainCoef=1.2;
		turnCoef=2.5;
		precision=15;
		brakeDistance=1;
		acceleration=17;
		enableRadio=0;
		enableGPS=0;
		crewCrashProtection=0.44999999;
		crewExplosionProtection=0.99000001;
		crewVulnerable=0;
		damageResistance=0.00562;
		armorGlass=0.5;
		armorWheels=0.33000001;
		armor=275;
		cost=30000;
		transportMaxBackpacks=2;
		transportSoldier=0;
		hideWeaponsCargo=1;
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.44999999;
		waterResistanceCoef=0.5;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverAction="driver_hemtt";
		cargoAction[]={};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInGunner="pos gunner";
		memoryPointsGetInGunnerDir="pos gunner dir";
		driverForceOptics=0;
		driverOpticsModel="";
		memoryPointDriverOptics="";
		class TransportItems
		{
		};
		weapons[]=
		{
			"TruckHorn2"
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				name="hull";
				visual="body";
			};
			class HitEngine: HitEngine
			{
				name="engine";
				visual="";
			};
			class HitFuel: HitFuel
			{
				name="palivo";
				visual="";
			};
			class HitLFWheel: HitLFWheel
			{
				armor=3.8;
				armorComponent="wheel_1_1_hide";
				name="wheel_1_1_steering";
				visual="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=3.8;
				armorComponent="wheel_1_2_hide";
				name="wheel_1_2_steering";
				visual="wheel_1_2_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=3.8;
				armorComponent="wheel_2_1_hide";
				name="wheel_2_1_steering";
				visual="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=3.8;
				armorComponent="wheel_2_2_hide";
				name="wheel_2_2_steering";
				visual="wheel_2_2_hide";
			};
		};
		soundGetIn[]=
		{
			"A3\Sounds_F_EPC\Truck_03\int\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPC\Truck_03\int\getout",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Exp\vehicles\soft\LSV_02\engine_ext_start",
			0.50118721,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Exp\vehicles\soft\LSV_02\engine_ext_start",
			0.50118721,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Exp\vehicles\soft\LSV_02\engine_ext_stop",
			0.50118721,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Exp\vehicles\soft\LSV_02\engine_ext_stop",
			0.50118721,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\soft\LSV_02\engine_ext_idle",
					1.5848932,
					1,
					100
				};
				frequency="1 * (1 + 1.2 * (((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) - 0))";
				volume="engineOn * (campos factor[ 0.5/(0.5 - 1), 1]) * 1.7 * (((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) factor[ (1000 - 400)/(4200 - 400) - (((1000 - 400)/(4200 - 400) - 0) - (0.9 * (((1000 - 400)/(4200 - 400) - 0)))) / 2, 0 + (((1000 - 400)/(4200 - 400) - 0) - (0.9 * (((1000 - 400)/(4200 - 400) - 0)))) / 2]) * (rpm factor[ 400 * 0.2 , 400])";
			};
			class Engine_RPM1
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\soft\LSV_02\engine_ext_rpm1",
					1,
					1,
					200
				};
				frequency="1 * (1 + 1.2 * (((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) - (1000 - 400)/(4200 - 400)))";
				volume="engineOn * (campos factor[ 0.5/(0.5 - 1), 1]) * 1.7 * ((((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) factor[ 0 + (((1000 - 400)/(4200 - 400) - 0) - (0.9 * (((1000 - 400)/(4200 - 400) - 0)))) / 2, (1000 - 400)/(4200 - 400) - (((1000 - 400)/(4200 - 400) - 0) - (0.9 * (((1000 - 400)/(4200 - 400) - 0)))) / 2]) * (((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) factor[ (2500 - 400)/(4200 - 400) - (((2500 - 400)/(4200 - 400) - (1000 - 400)/(4200 - 400)) - (0.9 * (((2500 - 400)/(4200 - 400) - (1000 - 400)/(4200 - 400))))) / 2, (1000 - 400)/(4200 - 400) + (((2500 - 400)/(4200 - 400) - (1000 - 400)/(4200 - 400)) - (0.9 * (((2500 - 400)/(4200 - 400) - (1000 - 400)/(4200 - 400))))) / 2]))";
			};
			class Engine_RPM2
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\soft\LSV_02\engine_ext_rpm2",
					1.4125376,
					1,
					225
				};
				frequency="1 * (1 + 1.2 * (((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) - (2500 - 400)/(4200 - 400)))";
				volume="engineOn * (campos factor[ 0.5/(0.5 - 1), 1]) * 1.7 * ((((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) factor[ (1000 - 400)/(4200 - 400) + (((2500 - 400)/(4200 - 400) - (1000 - 400)/(4200 - 400)) - (0.9 * (((2500 - 400)/(4200 - 400) - (1000 - 400)/(4200 - 400))))) / 2, (2500 - 400)/(4200 - 400) - (((2500 - 400)/(4200 - 400) - (1000 - 400)/(4200 - 400)) - (0.9 * (((2500 - 400)/(4200 - 400) - (1000 - 400)/(4200 - 400))))) / 2]) * (((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) factor[ 1 - ((1 - (2500 - 400)/(4200 - 400)) - (0.8 * ((1 - (2500 - 400)/(4200 - 400))))) / 2, (2500 - 400)/(4200 - 400) + ((1 - (2500 - 400)/(4200 - 400)) - (0.8 * ((1 - (2500 - 400)/(4200 - 400))))) / 2]))";
			};
			class Engine_RPM3
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\soft\LSV_02\engine_ext_rpm3",
					1.5848932,
					1,
					250
				};
				frequency="1 * (1 + 1.2 * (((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) - 1))";
				volume="engineOn * (campos factor[ 0.5/(0.5 - 1), 1]) * 1.7 * (((rpm * ((speed*speed) factor [-15*15,15*15])) factor [400 * 0.5,  4200]) factor[ (2500 - 400)/(4200 - 400) + ((1 - (2500 - 400)/(4200 - 400)) - (0.8 * ((1 - (2500 - 400)/(4200 - 400))))) / 2, 1 - ((1 - (2500 - 400)/(4200 - 400)) - (0.8 * ((1 - (2500 - 400)/(4200 - 400))))) / 2])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * rock * (Speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * sand*(Speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * grass*(Speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.70794576,
					1,
					60
				};
				frequency="1";
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * mud*(Speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.70794576,
					1,
					60
				};
				frequency="1";
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.70794576,
					1,
					60
				};
				frequency="1";
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * asphalt*(Speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					0.56234133,
					1,
					90
				};
				frequency="1";
				volume="camPos * (damper0 max 0.02)*(Speed factor[0, 8])";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * 5 * asphalt * (LongSlipDrive factor[-0.05, -0.3])*(Speed factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * asphalt * (LongSlipDrive factor[0.05, 0.2])*(Speed factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					80
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * 5 * asphalt * (latSlipDrive factor[0.1, 0.3])*(Speed factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					80
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * 5 * asphalt * (latSlipDrive factor[-0.1, -0.3])*(Speed factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * 5 * (1-asphalt) * (LongSlipDrive factor[-0.05, -0.3])*(Speed factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * (1-asphalt) * (LongSlipDrive factor[0.05, 0.2])*(Speed factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					1,
					1,
					60
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * 5 * (1-asphalt) * (latSlipDrive factor[0.1, 0.3])*(Speed factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					1,
					1,
					60
				};
				frequency=1;
				volume="(campos factor[ 0.5/(0.5 - 1), 1]) * 5 * (1-asphalt) * (latSlipDrive factor[-0.1, -0.3])*(Speed factor[1, 15])";
			};
			class Waternoise_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water",
					0.50118721,
					1,
					300
				};
				frequency="1";
				volume="(Speed factor[0, 10]) * water * camPos + (Speed factor[-0.1, -10]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int",
					0.39810717,
					1,
					100
				};
				frequency="1";
				volume="(Speed factor[0, 10]) * water * (1-camPos) + (Speed factor[-0.1, -10]) * water * (1-camPos)";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		thrustDelay=0.30000001;
		brakeIdleSpeed=1.78;
		maxSpeed=130;
		fuelCapacity=200;
		wheelCircumference=2.8340001;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=70;
		idleRpm=700;
		redRpm=4000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4,
				"N",
				0,
				"D1",
				4.0999999,
				"D2",
				2.21,
				"D3",
				1.1,
				"D4",
				0.47,
				"D5",
				0.34999999,
				"D6",
				0.15000001
			};
			TransmissionRatios[]=
			{
				"High",
				7
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		damperSize=0.2;
		damperForce=1;
		damperDamping=1;
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=10;
		enginePower=376;
		maxOmega=522;
		peakTorque=400;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.1;
		torqueCurve[]=
		{
			
			{
				0,
				"0/500"
			},
			
			{
				0.2,
				"175/500"
			},
			
			{
				0.30000001,
				"300/500"
			},
			
			{
				0.40000001,
				"400/500"
			},
			
			{
				0.60000002,
				"450/500"
			},
			
			{
				0.69999999,
				"275/500"
			},
			
			{
				0.89999998,
				"125/500"
			},
			
			{
				1,
				"0/500"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		switchTime=0.2;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=50;
				MOI=15;
				dampingRate=0.40000001;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=1500;
				maxHandBrakeTorque=300000;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				maxDroop=0.050000001;
				sprungMass=705;
				springStrength=13000;
				springDamperRate=10000;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=300000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=300000;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust3
			{
				position="exhaust3_pos";
				direction="exhaust3_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust4
			{
				position="exhaust4_pos";
				direction="exhaust4_dir";
				effect="ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				selection="Light_R";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01",
				"LightCarHeadR01"
			}
		};
		driveOnComponent[]=
		{
			"wheel_1_1_damper_land",
			"wheel_1_2_damper_land",
			"wheel_2_1_damper_land",
			"wheel_2_2_damper_land"
		};
		maximumLoad=1000;
		smokeLauncherGrenadeCount=4;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=100;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_MG",
					"BHA_missiles_TOW",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"BHA_AT_DUB",
					"BHA_AT_DUB",
					"BHA_AP_DUB",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				gunnerAction="driver_hemtt";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=1;
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500};
				discreteDistanceInitIndex=0;
				turretInfoType="RscOptics_crows";
				usePip=0;
				minElev=-10;
				maxElev=25;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				gunnerForceOptics=1;
				commanding=1;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.30000001;
					minFov=0.30000001;
					maxFov=0.30000001;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=15;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]={};
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor="2*(19+2*19+19)/((18+2*9+9) + (19+2*19+19))";
						name="vez";
						visual="OtocVez";
					};
					class HitGun: HitGun
					{
						armor="4*100/((18+2*9+9) + (19+2*19+19))";
						name="zbranVelitele";
						visual="OtocHlaven";
					};
				};
				gunnerDoor="";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"sc_wheeled\data\ferret\body.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\ferret\details.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\ferret\wheels.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
			};
		};
		class TextureSources
		{
			class Olive
			{
				displayName="Olive";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\ferret\body_co.paa",
					"\sc_wheeled\data\ferret\details_co.paa",
					"\sc_wheeled\data\ferret\wheels_co.paa"
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
					"\sc_wheeled\data\ferret\body_black_co.paa",
					"\sc_wheeled\data\ferret\details_black_co.paa",
					"\sc_wheeled\data\ferret\wheels_black_co.paa"
				};
				factions[]=
				{
					"SC_Faction_AR",
					"SC_Faction_AC"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\ferret\body_desert_co.paa",
					"\sc_wheeled\data\ferret\details_desert_co.paa",
					"\sc_wheeled\data\ferret\wheels_desert_co.paa"
				};
				factions[]=
				{
					"SC_Faction_AR"
				};
			};
		};
	};
	class BHA_Ferret_ATGM: BHA_Ferret_Base
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Ferret Scout Car (ATGM)";
		crew="BHA_Initiates_Initiate";
	};
	class BHA_Ferret_AA: BHA_Ferret_ATGM
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Scion Conflict Mod Team";
		displayName="Ferret Scout Car (AA)";
		crew="BHA_Initiates_Initiate";
		model="\sc_wheeled\model\ferret\ferret_aa.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\ferret\body_black_co.paa",
			"\sc_wheeled\data\ferret\details_black_co.paa",
			"\sc_wheeled\data\ferret\wheels_black_co.paa",
			"\sc_wheeled\data\saurus_apc\textures\turret_black_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BHA_EL34_Gatling",
					"BHA_Missiles_SAAMI",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"MET_EL34_vic_mag",
					"MET_EL34_vic_mag",
					"BHA_AA_Dub",
					"BHA_AA_Dub",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Minigun
			{
				source="revolving";
				weapon="BHA_EL34_Gatling";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"sc_wheeled\data\ferret\body.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\ferret\details.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\ferret\wheels.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\saurus_apc\textures\turret.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
			};
		};
		class TextureSources
		{
			class Olive
			{
				displayName="Olive";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\ferret\body_co.paa",
					"\sc_wheeled\data\ferret\details_co.paa",
					"\sc_wheeled\data\ferret\wheels_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_co.paa"
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
					"\sc_wheeled\data\ferret\body_black_co.paa",
					"\sc_wheeled\data\ferret\details_black_co.paa",
					"\sc_wheeled\data\ferret\wheels_black_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_black_co.paa"
				};
				factions[]=
				{
					"SC_Faction_AR",
					"SC_Faction_AC"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\ferret\body_desert_co.paa",
					"\sc_wheeled\data\ferret\details_desert_co.paa",
					"\sc_wheeled\data\ferret\wheels_desert_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_desert_co.paa"
				};
				factions[]=
				{
					"SC_Faction_AR"
				};
			};
		};
	};
	class BHA_Ferret_Autocannon: BHA_Ferret_Base
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Ferret Scout Car (Autocannon)";
		crew="BHA_Initiates_Initiate";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\sc_wheeled\data\ferret\body_black_co.paa",
			"\sc_wheeled\data\ferret\details_black_co.paa",
			"\sc_wheeled\data\ferret\wheels_black_co.paa",
			"\sc_wheeled\data\saurus_apc\textures\turret_auto_co.paa"
		};
		model="\sc_wheeled\model\ferret\ferret_20mm.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-5;
				maxElev=40;
				memoryPointGun="usti hlavne1";
				selectionFireAnim="zasleh1";
				weapons[]=
				{
					"MET_autocannon_Z36_HBC",
					"BHA_MG2",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"MET_500Rnd_Z36_HBC",
					"MET_500Rnd_Z36_HBC",
					"MET_500Rnd_Z36_HBC",
					"MET_500Rnd_Z36_HBC_AP",
					"MET_500Rnd_Z36_HBC_AP",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"MET_T20AC_vic_mag",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"sc_wheeled\data\ferret\body.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\ferret\details.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\ferret\wheels.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\saurus_apc\textures\turret_auto.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
			};
		};
		class TextureSources
		{
			class Olive
			{
				displayName="Olive";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\ferret\body_co.paa",
					"\sc_wheeled\data\ferret\details_co.paa",
					"\sc_wheeled\data\ferret\wheels_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_auto_co.paa"
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
					"\sc_wheeled\data\ferret\body_black_co.paa",
					"\sc_wheeled\data\ferret\details_black_co.paa",
					"\sc_wheeled\data\ferret\wheels_black_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_auto_co.paa"
				};
				factions[]=
				{
					"SC_Faction_AR",
					"SC_Faction_AC"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\ferret\body_desert_co.paa",
					"\sc_wheeled\data\ferret\details_desert_co.paa",
					"\sc_wheeled\data\ferret\wheels_desert_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_auto_co.paa"
				};
				factions[]=
				{
					"SC_Faction_AR"
				};
			};
		};
	};
	class BHA_Saurus_Base: Car_F
	{
		scope=1;
		scopeCurator=1;
		author="Scion Conflict Mod Team";
		displayName="Saurus APC (BASE)";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_IFVs";
		crew="BHA_Initiates_Initiate";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\vehicles\data\body_co.paa",
			"z\MET\addons\vehicles\data\details_co.paa",
			"z\MET\addons\vehicles\data\turret_auto_co.paa"
		};
		model="\sc_wheeled\model\saurus_apc\saurus_armed.p3d";
		picture="\sc_wheeled\data\icons\icon_saurus_ca.paa";
		icon="\sc_wheeled\data\icons\icon_sarus_map_ca.paa";
		terrainCoef=0.80000001;
		turnCoef=2.5;
		precision=15;
		brakeDistance=1;
		acceleration=17;
		enableRadio=0;
		enableGPS=0;
		crewCrashProtection=0.55000001;
		crewExplosionProtection=0.99000001;
		crewVulnerable=0;
		damageResistance=0.0084499996;
		armorGlass=0.5;
		armorWheels=0.33000001;
		armor=345;
		cost=30000;
		transportMaxBackpacks=2;
		transportSoldier=14;
		getInProxyOrder[]={2,3,4,5,6,7,8,9,10,11,12,13,14,15};
		cargoProxyIndexes[]={2,3,4,5,6,7,8,9,10,11,12,13,14,15};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
		};
		hideWeaponsCargo=0;
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.44999999;
		waterResistanceCoef=0.5;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverAction="crew_tank01_out";
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInGunner="pos gunner";
		memoryPointsGetInGunnerDir="pos gunner dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		driverForceOptics=0;
		driverOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
		memoryPointDriverOptics="driverview";
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		weapons[]=
		{
			"TruckHorn2"
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				name="hull";
				visual="body";
			};
			class HitEngine: HitEngine
			{
				name="engine";
				visual="";
			};
			class HitFuel: HitFuel
			{
				name="palivo";
				visual="";
			};
			class HitLFWheel: HitLFWheel
			{
				armor=3.8;
				armorComponent="wheel_1_1_hide";
				name="wheel_1_1_steering";
				visual="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=3.8;
				armorComponent="wheel_1_2_hide";
				name="wheel_1_2_steering";
				visual="wheel_1_2_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=3.8;
				armorComponent="wheel_2_1_hide";
				name="wheel_2_1_steering";
				visual="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=3.8;
				armorComponent="wheel_2_2_hide";
				name="wheel_2_2_steering";
				visual="wheel_2_2_hide";
			};
			class HitLMWheel: HitLMWheel
			{
				armor=3.8;
				armorComponent="wheel_1_3_hide";
				name="wheel_1_3_steering";
				visual="wheel_1_3_hide";
			};
			class HitRMWheel: HitRMWheel
			{
				armor=3.8;
				armorComponent="wheel_2_3_hide";
				name="wheel_2_3_steering";
				visual="wheel_2_3_hide";
			};
		};
		soundGetIn[]=
		{
			"A3\Sounds_F_EPC\Truck_03\int\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPC\Truck_03\int\getout",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",
			0.3548134,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",
			0.70794576,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",
			0.3548134,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",
			0.70794576,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_idle",
					0.31622776,
					1,
					150
				};
				frequency="0.95 + ((rpm/ 4000) factor[(800/ 4000),(1200/ 4000)])*0.15";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(400/ 4000),(600/ 4000)]) * ((rpm/ 4000) factor[(1300/ 4000),(1000/ 4000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm02",
					0.39810717,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1100/ 4000),(1450/ 4000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(1000/ 4000),(1200/ 4000)]) * ((rpm/ 4000) factor[(1500/ 4000),(1300/ 4000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm03",
					0.39810717,
					1,
					225
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1300/ 4000),(1670/ 4000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(1250/ 4000),(1400/ 4000)]) * ((rpm/ 4000) factor[(1670/ 4000),(1500/ 4000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm04",
					0.44668359,
					1,
					250
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1500/ 4000),(1900/ 4000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(1500/ 4000),(1600/ 4000)]) * ((rpm/ 4000) factor[(2000/ 4000),(1800/ 4000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm06",
					0.44668359,
					1,
					275
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1750/ 4000),(2150/ 4000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(1700/ 4000),(1900/ 4000)]) * ((rpm/ 4000) factor[(2250/ 4000),(2000/ 4000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm07",
					0.50118721,
					1,
					300
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2000/ 4000),(2350/ 4000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(2000/ 4000),(2150/ 4000)]) * ((rpm/ 4000) factor[(2400/ 4000),(2200/ 4000)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm09",
					0.56234133,
					1,
					325
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2200/ 4000),(2580/ 4000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(2200/ 4000),(2350/ 4000)]) * ((rpm/ 4000) factor[(2600/ 4000),(2450/ 4000)]))";
			};
			class Engine6_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm10",
					0.63095737,
					1,
					325
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2450/ 4000),(2750/ 4000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(2450/ 4000),(2500/ 4000)]) * ((rpm/ 4000) factor[(2800/ 4000),(2600/ 4000)]))";
			};
			class Engine7_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm11",
					0.70794576,
					1,
					350
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2650/ 4000),(3100/ 4000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(2600/ 4000),(2700/ 4000)]) * ((rpm/ 4000) factor[(3100/ 4000),(2900/ 4000)]))";
			};
			class Engine8_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm12",
					0.79432821,
					1,
					375
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2900/ 4000),(3300/ 4000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(2900/ 4000),(3000/ 4000)]) * ((rpm/ 4000) factor[(3350/ 4000),(3180/ 4000)]))";
			};
			class Engine9_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm13",
					0.79432821,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 4000) factor[(3180/ 4000),(3750/ 4000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 4000) factor[(3100/ 4000),(3200/ 4000)]) * ((rpm/ 4000) factor[(3750/ 4000),(3450/ 4000)]))";
			};
			class Engine10_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_engine_rpm14",
					1.1220185,
					1,
					450
				};
				frequency="0.95 + ((rpm/ 4000) factor[(3400/ 4000),(4000/ 4000)])*0.1";
				volume="engineOn*camPos*((rpm/ 4000) factor[(3400/ 4000),(3600/ 4000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_idle",
					0.56234133,
					1,
					180
				};
				frequency="0.95 + ((rpm/ 4000) factor[(800/ 4000),(1200/ 4000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(400/ 4000),(600/ 4000)]) * ((rpm/ 4000) factor[(1300/ 4000),(1000/ 4000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm02",
					0.63095737,
					1,
					225
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1100/ 4000),(1450/ 4000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(1000/ 4000),(1200/ 4000)]) * ((rpm/ 4000) factor[(1500/ 4000),(1300/ 4000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm03",
					0.63095737,
					1,
					250
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1300/ 4000),(1670/ 4000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(1250/ 4000),(1400/ 4000)]) * ((rpm/ 4000) factor[(1670/ 4000),(1500/ 4000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm04",
					0.70794576,
					1,
					275
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1500/ 4000),(1900/ 4000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(1500/ 4000),(1600/ 4000)]) * ((rpm/ 4000) factor[(2000/ 4000),(1800/ 4000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm06",
					0.70794576,
					1,
					300
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1750/ 4000),(2150/ 4000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(1700/ 4000),(1900/ 4000)]) * ((rpm/ 4000) factor[(2250/ 4000),(2000/ 4000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm07",
					0.79432821,
					1,
					325
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2000/ 4000),(2350/ 4000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2000/ 4000),(2150/ 4000)]) * ((rpm/ 4000) factor[(2400/ 4000),(2200/ 4000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm09",
					0.89125091,
					1,
					350
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2200/ 4000),(2580/ 4000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2200/ 4000),(2350/ 4000)]) * ((rpm/ 4000) factor[(2600/ 4000),(2450/ 4000)]))";
			};
			class Engine6_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm10",
					1,
					1,
					375
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2450/ 4000),(2750/ 4000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2450/ 4000),(2500/ 4000)]) * ((rpm/ 4000) factor[(2800/ 4000),(2600/ 4000)]))";
			};
			class Engine7_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm11",
					1.1220185,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2650/ 4000),(3100/ 4000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2600/ 4000),(2700/ 4000)]) * ((rpm/ 4000) factor[(3100/ 4000),(2900/ 4000)]))";
			};
			class Engine8_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm12",
					1.1220185,
					1,
					450
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2900/ 4000),(3300/ 4000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2900/ 4000),(3000/ 4000)]) * ((rpm/ 4000) factor[(3350/ 4000),(3180/ 4000)]))";
			};
			class Engine9_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm13",
					1.2589254,
					1,
					475
				};
				frequency="0.8 + ((rpm/ 4000) factor[(3180/ 4000),(3750/ 4000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(3100/ 4000),(3200/ 4000)]) * ((rpm/ 4000) factor[(3750/ 4000),(3450/ 4000)]))";
			};
			class Engine10_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm14",
					1.2589254,
					1,
					500
				};
				frequency="0.8 + ((rpm/ 4000) factor[(3400/ 4000),(4000/ 4000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4000) factor[(3400/ 4000),(3600/ 4000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_idle",
					0.2818383,
					1
				};
				frequency="0.95 + ((rpm/ 4000) factor[(800/ 4000),(1200/ 4000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(400/ 4000),(600/ 4000)]) * ((rpm/ 4000) factor[(1300/ 4000),(1000/ 4000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm02",
					0.25118864,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1100/ 4000),(1450/ 4000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(1000/ 4000),(1200/ 4000)]) * ((rpm/ 4000) factor[(1500/ 4000),(1300/ 4000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm03",
					0.2818383,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1300/ 4000),(1670/ 4000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(1250/ 4000),(1400/ 4000)]) * ((rpm/ 4000) factor[(1670/ 4000),(1500/ 4000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm04",
					0.31622776,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1500/ 4000),(1900/ 4000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(1500/ 4000),(1600/ 4000)]) * ((rpm/ 4000) factor[(2000/ 4000),(1800/ 4000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm06",
					0.3548134,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1750/ 4000),(2150/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(1700/ 4000),(1900/ 4000)]) * ((rpm/ 4000) factor[(2250/ 4000),(2000/ 4000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm07",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2000/ 4000),(2350/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(2000/ 4000),(2150/ 4000)]) * ((rpm/ 4000) factor[(2400/ 4000),(2200/ 4000)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm09",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2200/ 4000),(2580/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(2200/ 4000),(2350/ 4000)]) * ((rpm/ 4000) factor[(2600/ 4000),(2450/ 4000)]))";
			};
			class Engine6_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm10",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2450/ 4000),(2750/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(2450/ 4000),(2500/ 4000)]) * ((rpm/ 4000) factor[(2800/ 4000),(2600/ 4000)]))";
			};
			class Engine7_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm11",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2650/ 4000),(3100/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(2600/ 4000),(2700/ 4000)]) * ((rpm/ 4000) factor[(3100/ 4000),(2900/ 4000)]))";
			};
			class Engine8_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm12",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2900/ 4000),(3300/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(2900/ 4000),(3000/ 4000)]) * ((rpm/ 4000) factor[(3350/ 4000),(3180/ 4000)]))";
			};
			class Engine9_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm13",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(3180/ 4000),(3750/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 4000) factor[(3100/ 4000),(3200/ 4000)]) * ((rpm/ 4000) factor[(3750/ 4000),(3450/ 4000)]))";
			};
			class Engine10_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_int_engine_rpm14",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(3400/ 4000),(4000/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 4000) factor[(3400/ 4000),(3600/ 4000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_idle",
					0.3548134,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(800/ 4000),(1200/ 4000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(400/ 4000),(600/ 4000)]) * ((rpm/ 4000) factor[(1300/ 4000),(1000/ 4000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm02",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1100/ 4000),(1450/ 4000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(1000/ 4000),(1200/ 4000)]) * ((rpm/ 4000) factor[(1500/ 4000),(1300/ 4000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm03",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1300/ 4000),(1670/ 4000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(1250/ 4000),(1400/ 4000)]) * ((rpm/ 4000) factor[(1670/ 4000),(1500/ 4000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm04",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1500/ 4000),(1900/ 4000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(1500/ 4000),(1600/ 4000)]) * ((rpm/ 4000) factor[(2000/ 4000),(1800/ 4000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm06",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(1750/ 4000),(2150/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(1700/ 4000),(1900/ 4000)]) * ((rpm/ 4000) factor[(2250/ 4000),(2000/ 4000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm07",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2000/ 4000),(2350/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2000/ 4000),(2150/ 4000)]) * ((rpm/ 4000) factor[(2400/ 4000),(2200/ 4000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm09",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2200/ 4000),(2580/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2200/ 4000),(2350/ 4000)]) * ((rpm/ 4000) factor[(2600/ 4000),(2450/ 4000)]))";
			};
			class Engine6_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm10",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2450/ 4000),(2750/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2450/ 4000),(2500/ 4000)]) * ((rpm/ 4000) factor[(2800/ 4000),(2600/ 4000)]))";
			};
			class Engine7_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm11",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2650/ 4000),(3100/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2600/ 4000),(2700/ 4000)]) * ((rpm/ 4000) factor[(3100/ 4000),(2900/ 4000)]))";
			};
			class Engine8_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm12",
					0.70794576,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(2900/ 4000),(3300/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(2900/ 4000),(3000/ 4000)]) * ((rpm/ 4000) factor[(3350/ 4000),(3180/ 4000)]))";
			};
			class Engine9_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm13",
					0.79432821,
					1
				};
				frequency="0.8 + ((rpm/ 4000) factor[(3180/ 4000),(3750/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4000) factor[(3100/ 4000),(3200/ 4000)]) * ((rpm/ 4000) factor[(3750/ 4000),(3450/ 4000)]))";
			};
			class Engine10_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_02\MRAP_02_ext_exhaust_rpm14",
					0.89125091,
					1
				};
				frequency="0.95 + ((rpm/ 4000) factor[(3400/ 4000),(4000/ 4000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4000) factor[(3400/ 4000),(3600/ 4000)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(Speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(Speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(Speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(Speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.5848932,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(Speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(Speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(Speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(Speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(Speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(Speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(Speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(Speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive factor[-0.15, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive factor[0.15, 0.3])*(Speed factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive factor[-0.15, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive factor[0.15, 0.3])*(Speed factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive factor[-0.15, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive factor[0.15, 0.3])*(Speed factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive factor[-0.15, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive factor[0.15, 0.3])*(Speed factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class Waternoise_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water",
					0.50118721,
					1,
					300
				};
				frequency="1";
				volume="(Speed factor[0, 10]) * water * camPos + (Speed factor[-0.1, -10]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int",
					0.3548134,
					1,
					100
				};
				frequency="1";
				volume="(Speed factor[0, 10]) * water * (1-camPos)* 0.8 + (Speed factor[-0.1, -10]) * water * (1-camPos) *0.8";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		thrustDelay=0.30000001;
		brakeIdleSpeed=1.78;
		maxSpeed=90;
		fuelCapacity=200;
		wheelCircumference=2.8340001;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=70;
		idleRpm=700;
		redRpm=4000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4,
				"N",
				0,
				"D1",
				4.0999999,
				"D2",
				2.21,
				"D3",
				1.1,
				"D4",
				0.47,
				"D5",
				0.34999999,
				"D6",
				0.15000001
			};
			TransmissionRatios[]=
			{
				"High",
				7
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		damperSize=0.2;
		damperForce=1;
		damperDamping=1;
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=180;
		enginePower=2666;
		maxOmega=600;
		peakTorque=2000;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.1;
		torqueCurve[]=
		{
			
			{
				0,
				"0/500"
			},
			
			{
				0.2,
				"175/500"
			},
			
			{
				0.30000001,
				"300/500"
			},
			
			{
				0.40000001,
				"400/500"
			},
			
			{
				0.60000002,
				"450/500"
			},
			
			{
				0.69999999,
				"275/500"
			},
			
			{
				0.89999998,
				"125/500"
			},
			
			{
				1,
				"0/500"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		switchTime=0.2;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=50;
				MOI=18;
				dampingRate=0.40000001;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=1500;
				maxHandBrakeTorque=300000;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				maxDroop=0.050000001;
				sprungMass=4250;
				springStrength=13000;
				springDamperRate=10000;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=1;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=300000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=1;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=300000;
			};
			class LR3: LF
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=300000;
			};
			class RR3: RF
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=300000;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={10000,6500,4500};
				ambient[]={100,65,45};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				intensity=10;
				useFlare=1;
				dayLight=0;
				flareSize=1.5;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				selection="Light_R";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01",
				"LightCarHeadR01"
			}
		};
		driveOnComponent[]=
		{
			"wheel_1_1_damper_land",
			"wheel_1_2_damper_land",
			"wheel_1_3_damper_land",
			"wheel_2_1_damper_land",
			"wheel_2_2_damper_land",
			"wheel_2_3_damper_land"
		};
		maximumLoad=1000;
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="gunnerview_Dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=1;
				};
			};
			class DriverCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="driverview";
					pointDirection="driverview_Dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=1;
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"SC_gatling_20mm_VTOL_01"
				};
				magazines[]=
				{
					"1000Rnd_20mm_shells",
					"1000Rnd_20mm_shells"
				};
				memoryPointGun[]=
				{
					"usti hlavne1",
					"usti hlavne"
				};
				selectionFireAnim="zasleh";
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				proxytype="CPGunner";
				gunnername="Gunner";
				proxyIndex=1;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				gunnerAction="crew_tank01_out";
				gunnerInAction="crew_tank01_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
				discreteDistance[]={100,200,300,400,500};
				discreteDistanceInitIndex=0;
				turretInfoType="RscOptics_crows";
				usePip=1;
				minElev=-10;
				maxElev=25;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				gunnerForceOptics=0;
				forcehidegunner=1;
				personTurretAction="vehicle_turnout_1";
				class dynamicViewLimits
				{
					MainTurret[]={-135,75};
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.30000001;
					minFov=0.30000001;
					maxFov=0.30000001;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=15;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]={};
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor="2*(19+2*19+19)/((18+2*9+9) + (19+2*19+19))";
						name="vez";
						visual="OtocVez";
					};
					class HitGun: HitGun
					{
						armor="4*100/((18+2*9+9) + (19+2*19+19))";
						name="zbranVelitele";
						visual="OtocHlaven";
					};
				};
				gunnerDoor="";
				class Turrets
				{
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"sc_wheeled\data\saurus_apc\textures\body.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\saurus_apc\textures\details.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\saurus_apc\textures\turret.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\saurus_apc\textures\wheels.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
			};
		};
		class TextureSources
		{
			class Woodland
			{
				displayName="Woodland";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\saurus_apc\textures\body_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\details_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_co.paa"
				};
				factions[]=
				{
					"SC_Faction_SE"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\saurus_apc\textures\body_desert_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\details_desert_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_desert_co.paa"
				};
				factions[]=
				{
					"SC_Faction_SE"
				};
			};
		};
		textureList[]=
		{
			"Woodland",
			1,
			"Sand",
			1
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="SC_gatling_20mm_VTOL_01";
			};
			class Minigun
			{
				source="revolving";
				weapon="SC_gatling_20mm_VTOL_01";
			};
			class Ramp
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorR
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorL
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class HatchGunner
			{
				source="HatchGunner";
				animPeriod=1;
				initPhase=0;
			};
			class HatchGunner2
			{
				source="HatchGunner2";
				animPeriod=1;
				initPhase=0;
			};
			class HatchGunner3
			{
				source="HatchGunner3";
				animPeriod=1;
				initPhase=0;
			};
			class HatchGunner4
			{
				source="HatchGunner4";
				animPeriod=1;
				initPhase=0;
			};
		};
		class EventHandlers: EventHandlers
		{
			init="";
		};
	};
	class BHA_SaurusAPC_SE: BHA_Saurus_Base
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Saurus APC";
		crew="BHA_Initiates_Initiate";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\vehicles\data\body_co.paa",
			"z\MET\addons\vehicles\data\details_co.paa",
			"z\MET\addons\vehicles\data\turret_auto_co.paa"
		};
		model="\sc_wheeled\model\saurus_apc\saurus_armed_apc.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BHA_autocannon_40mm_HE"
				};
				magazines[]=
				{
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC",
					"MET_500Rnd_Z38_HBC_AP",
					"MET_500Rnd_Z38_HBC_AP",
					"MET_500Rnd_Z38_HBC_AP",
					"MET_500Rnd_Z38_HBC_AP"
				};
				minElev=-10;
				maxElev=85;
				maxHorizontalRotSpeed=1.2;
				maxVerticalRotSpeed=1.2;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=2;
				memoryPointGun[]=
				{
					"usti hlavne1",
					"usti hlavne"
				};
				selectionFireAnim="zasleh";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"sc_wheeled\data\saurus_apc\textures\body.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\saurus_apc\textures\details.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\saurus_apc\textures\turret_auto.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"sc_wheeled\data\saurus_apc\textures\wheels.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
			};
		};
		class TextureSources
		{
			class Woodland
			{
				displayName="Woodland";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\saurus_apc\textures\body_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\details_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_auto_co.paa"
				};
				factions[]=
				{
					"SC_Faction_SE"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"\sc_wheeled\data\saurus_apc\textures\body_desert_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\details_desert_co.paa",
					"\sc_wheeled\data\saurus_apc\textures\turret_auto_desert_co.paa"
				};
				factions[]=
				{
					"SC_Faction_SE"
				};
			};
		};
		textureList[]=
		{
			"Woodland",
			1,
			"Sand",
			1
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="BHA_autocannon_40mm_HE";
			};
			/*class muzzle_rot1
			{
				source="ammorandom";
				weapon="SC_autocannon_40mm_HE";
			};*/
		};
	};
	class 3AS_HAGM_Tan
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class BHA_HAGM: 3AS_HAGM_Tan
	{
		author="$STR_3AS_Studio";
		crew="BHA_warbot";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Tanks";
		displayname="HAG-M Artillery Tank (BHA)";
		hiddenselectionstextures[]=
		{
			"z\MET\addons\BHA\vehicles\cars\data\cisarty_black_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BHA_HAGM_300mm_AMOS"
				};
				magazines[]=
				{
					"BHA_30Rnd_300mm_Mo_shells",
					"BHA_30Rnd_300mm_Mo_shells",
					"BHA_4Rnd_300mm_Mo_guided",
					"BHA_4Rnd_300mm_Mo_guided",
					"BHA_4Rnd_300mm_Mo_guided",
					"BHA_5Rnd_300mm_Mo_Cluster",
					"BHA_5Rnd_300mm_Mo_Cluster",
					"BHA_5Rnd_300mm_Mo_Cluster"
				};
			};
		};
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner;
					};
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class CargoTurret;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class BHA_hovertank_base: Tank_F
	{
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Firebrand_on.wav",
			2,
			1
		};
		soundEngineOnExt[]=
		{
			"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Firebrand_on.wav",
			4,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Firebrand_off.wav",
			2,
			1
		};
		soundEngineOffExt[]=
		{
			"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Firebrand_off.wav",
			4,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					4,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					4.48808,
					1,
					240
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					5.6501598,
					1,
					280
				};
				frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					6.3396001,
					1,
					320
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					7.1131301,
					1,
					360
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"",
					7.98104,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"",
					8.9548903,
					1,
					440
				};
				frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume="engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"",
					5.6501598,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"",
					7.1131301,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"",
					8.9548903,
					1,
					230
				};
				frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"",
					10.0475,
					1,
					290
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"",
					8.9548903,
					1,
					350
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"",
					11.27353,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"",
					12.64913,
					1,
					450
				};
				frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"",
					2,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"",
					1.41589,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"",
					1.58866,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"",
					1.7825,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"",
					2,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"",
					2.24404,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"",
					2.5178499,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"",
					2.5178499,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"",
					1.58866,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"",
					1.7825,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"",
					1.7825,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"",
					2,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"",
					2.24404,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"",
					2.5178499,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118703,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.89125103,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"",
					0.39810699,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"",
					0.446684,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"",
					0.50118703,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"",
					0.56234097,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"",
					0.56234097,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"",
					0.316228,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"",
					0.35481301,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"",
					0.39810699,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"",
					0.446684,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"",
					0.50118703,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"",
					0.25118899,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"",
					0.281838,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"",
					0.316228,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"",
					0.35481301,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"",
					0.39810699,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"",
					0.316228,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"",
					0.316228,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"",
					0.35481301,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"",
					0.35481301,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"",
					0.39810699,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
		};
		simulation="tankX";
		enginePower=1400;
		maxOmega=175;
		maxSpeed=65;
		peakTorque=5832;
		torqueCurve[]=
		{
			{0,0},
			
			{
				"(1600/2640)",
				"(2650/2850)"
			},
			
			{
				"(1800/2640)",
				"(2800/2850)"
			},
			
			{
				"(1900/2640)",
				"(2850/2850)"
			},
			
			{
				"(2000/2640)",
				"(2800/2850)"
			},
			
			{
				"(2200/2640)",
				"(2750/2850)"
			},
			
			{
				"(2400/2640)",
				"(2600/2850)"
			},
			
			{
				"(2640/2640)",
				"(2350/2850)"
			}
		};
		thrustDelay=0.5;
		clutchStrength=180;
		fuelCapacity=50;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=1000000;
		idleRpm=700;
		redRpm=2640;
		engineLosses=25;
		transmissionLosses=15;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R2",
				-3.9000001,
				"N",
				0,
				"D1",
				4,
				"D2",
				3.2,
				"D3",
				2.5999999,
				"D4",
				2,
				"D5",
				1.5,
				"D6",
				1.125,
				"D7",
				0.85000002
			};
			TransmissionRatios[]=
			{
				"High",
				15
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				moi=26;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=20000;
				sprungMass=4166;
				springStrength=104166;
				springDamperRate=41663;
				dampingRate=1;
				dampingRateInAir=8000;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
		};
		author="Starforge Armory Team";
		armor=1000;
		ace_cookoff_probability=0.5;
		destrType="DestructWreck";
		armorStructural=7;
		crewExplosionProtection=0.99989998;
		damageResistance=0.0054700002;
		cost=2500000;
		crewVulnerable=0;
		epeImpulseDamageCoef=18;
		waterPPInVehicle=0;
		wheelCircumference=2.1500001;
		tracksSpeed=1.4;
		model="\SFA_Main\SFA_Vehicles_R\Firebrand2.p3d";
		icon="\SFA_Main\SFA_Vehicles_R\data\Firebrand\ui\firebrand_ui_ca.paa";
		picture="";
		memoryPointTaskMarker="TaskMarker_1_pos";
		driverAction="mbt2_slot2b_in";
		forceHideDriver=1;
		driverInAction="mbt2_slot2b_in";
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=4.5;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.12;
			};
			class HitEngine: HitEngine
			{
				armor=0.75;
				material=-1;
				name="motor";
				passThrough=0.2;
				minimalHit=0.23999999;
				explosionShielding=0.2;
				radius=0.33000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="track_l_hit";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="track_r_hit";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=1.5;
				material=-1;
				name="palivo";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.25;
			};
		};
		animationSourceHatch="";
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust_2
			{
				position="Exhaust_2_pos";
				direction="Exhaust_2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
		insideSoundCoef=0.89999998;
		threat[]={0.80000001,1,0.30000001};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
			class driver_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_DRV_TL",
					"PIP_DRV_TR",
					"PIP_DRV_BL",
					"PIP_DRV_BR"
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={13,20,20};
					ambient[]={0,0,0};
					intensity=2;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
					point="light_interior1";
				};
				class Light2: Light1
				{
					point="light_interior2";
					color[]={13,20,20};
					ambient[]={0,0,0};
					intensity=1.5;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={13,20,20};
					ambient[]={0,0,0};
					intensity=1.5;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={13,20,20};
					ambient[]={0,0,0};
					intensity=0.69999999;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={18,20,20};
					ambient[]={0,0,0};
					intensity=0.2;
					size=0;
				};
				class Light6: Light1
				{
					point="light_interior6";
					color[]={18,20,20};
					ambient[]={0,0,0};
					intensity=3;
					size=0;
				};
				class Light7: Light1
				{
					point="light_interior7";
					color[]={18,20,20};
					ambient[]={0,0,0};
					intensity=4;
					size=0;
				};
				class Light8: Light1
				{
					point="light_interior8";
					color[]={18,20,20};
					ambient[]={0,0,0};
					intensity=4;
					size=0;
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
			0.31622776,
			1
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		memoryPointsGetInCommander="getin";
		memoryPointsGetInDriver="getin";
		memoryPointsGetInGunner="getin";
		memoryPointsGetInCommanderDir="getindir";
		memoryPointsGetInDriverDir="getindir";
		memoryPointsGetInGunnerDir="getindir";
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=1200;
				forceHideGunner=1;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				gunnerName="Passenger Gunner 4";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo4";
				memoryPointsGetInGunnerDir="pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				gunnerName="Passenger Gunner 5";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo5";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				gunnerName="Passenger Gunner 6";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				gunnerName="Passenger Gunner 7";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex=8;
				gunnerName="Passenger Gunner 8";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret9: CargoTurret1
			{
				proxyIndex=9;
				gunnerName="Passenger Gunner 9";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret10: CargoTurret1
			{
				proxyIndex=10;
				gunnerName="Passenger Gunner 10";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret11: CargoTurret1
			{
				proxyIndex=11;
				gunnerName="Passenger Gunner 11";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo11";
				memoryPointsGetInGunnerDir="pos cargo11 dir";
			};
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="Obsturret";
						gun="Obsgun";
						proxyIndex=1;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="Obsturret";
						animationSourceGun="Obsgun";
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							"db-40",
							1,
							50
						};
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-15;
						maxTurn=15;
						initTurn=0;
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="konec hlavne3";
						gunnerLeftHandAnimName="konec hlavne3";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"z_gunL_muzzle",
							"z_gunR_muzzle"
						};
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="CommanderView";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretFollowFreeLook=1;
						commanding=1;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-15;
							maxAngleX=15;
							initAngleY=0;
							minAngleY=-10;
							maxAngleY=60;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={2,3,4};
						};
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Turret";
								visual="commander_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
							class HitGun
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Gun";
								visual="Commander_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
						};
						selectionFireAnim="ZaslehCommander";
					};
				};
				startEngine=0;
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_Heavy_Cannon",
					"BHA_weapon_Cannon_low",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"SmokeLauncherMag"
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="gunnerview";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
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
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="mbt2_slot2b_in";
				forceHideGunner=1;
				outGunnerMayFire=1;
				gunnerInAction="mbt2_slot2b_in";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=1;
				viewGunnerInExternal=0;
				gunnerName="Gunner";
				proxytype="CPGunner";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				minElev=-9;
				maxElev=20;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="otocvez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=1;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.75;
						material=-1;
						name="otocvez";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.15000001;
					};
				};
			};
		};
		animationList[]=
		{
			"showCamonetCannon",
			0,
			"showCamonetPlates1",
			0,
			"showCamonetPlates2",
			0,
			"showCamonetTurret",
			0,
			"showCamonetHull",
			0
		};
	};
	class BHA_hovertank_R_base: Tank_F
	{
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Firebrand_on.wav",
			2,
			1
		};
		soundEngineOnExt[]=
		{
			"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Firebrand_on.wav",
			4,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Firebrand_off.wav",
			2,
			1
		};
		soundEngineOffExt[]=
		{
			"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Firebrand_off.wav",
			4,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					4,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					4.48808,
					1,
					240
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					5.6501598,
					1,
					280
				};
				frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					6.3396001,
					1,
					320
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\firebrand_idle.wav",
					7.1131301,
					1,
					360
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"",
					7.98104,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"",
					8.9548903,
					1,
					440
				};
				frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume="engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"",
					5.6501598,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"",
					7.1131301,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"",
					8.9548903,
					1,
					230
				};
				frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"",
					10.0475,
					1,
					290
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"",
					8.9548903,
					1,
					350
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"",
					11.27353,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"",
					12.64913,
					1,
					450
				};
				frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"",
					2,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"",
					1.41589,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"",
					1.58866,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"",
					1.7825,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"",
					2,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"",
					2.24404,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"",
					2.5178499,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"",
					2.5178499,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"",
					1.58866,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"",
					1.7825,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"",
					1.7825,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"",
					2,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"",
					2.24404,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"",
					2.5178499,
					1
				};
				frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118703,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.89125103,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"",
					0.39810699,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"",
					0.446684,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"",
					0.50118703,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"",
					0.56234097,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"",
					0.56234097,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"",
					0.316228,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"",
					0.35481301,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"",
					0.39810699,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"",
					0.446684,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"",
					0.50118703,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"",
					0.25118899,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"",
					0.281838,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"",
					0.316228,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"",
					0.35481301,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"",
					0.39810699,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"",
					0.316228,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"",
					0.316228,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"",
					0.35481301,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"",
					0.35481301,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"",
					0.39810699,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
		};
		simulation="tankX";
		enginePower=1400;
		maxOmega=175;
		maxSpeed=65;
		peakTorque=5832;
		torqueCurve[]=
		{
			{0,0},
			
			{
				"(1600/2640)",
				"(2650/2850)"
			},
			
			{
				"(1800/2640)",
				"(2800/2850)"
			},
			
			{
				"(1900/2640)",
				"(2850/2850)"
			},
			
			{
				"(2000/2640)",
				"(2800/2850)"
			},
			
			{
				"(2200/2640)",
				"(2750/2850)"
			},
			
			{
				"(2400/2640)",
				"(2600/2850)"
			},
			
			{
				"(2640/2640)",
				"(2350/2850)"
			}
		};
		thrustDelay=0.5;
		clutchStrength=180;
		fuelCapacity=50;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=1000000;
		idleRpm=700;
		redRpm=2640;
		engineLosses=25;
		transmissionLosses=15;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R2",
				-3.9000001,
				"N",
				0,
				"D1",
				4,
				"D2",
				3.2,
				"D3",
				2.5999999,
				"D4",
				2,
				"D5",
				1.5,
				"D6",
				1.125,
				"D7",
				0.85000002
			};
			TransmissionRatios[]=
			{
				"High",
				15
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				moi=26;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=20000;
				sprungMass=4166;
				springStrength=104166;
				springDamperRate=41663;
				dampingRate=1;
				dampingRateInAir=8000;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
		};
		author="Starforge Armory Team";
		armor=1100;
		ace_cookoff_probability=0.5;
		destrType="DestructWreck";
		armorStructural=7;
		crewExplosionProtection=0.99989998;
		damageResistance=0.0054700002;
		cost=2500000;
		crewVulnerable=0;
		epeImpulseDamageCoef=18;
		waterPPInVehicle=0;
		wheelCircumference=2.1500001;
		tracksSpeed=1.4;
		model="\SFA_Main\SFA_Vehicles_R\Firebrand_Rocket.p3d";
		icon="\SFA_Main\SFA_Vehicles_R\data\Firebrand\ui\firebrand_ui_ca.paa";
		picture="";
		memoryPointTaskMarker="TaskMarker_1_pos";
		driverAction="mbt2_slot2b_in";
		forceHideDriver=1;
		driverInAction="mbt2_slot2b_in";
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=4.5;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.12;
			};
			class HitEngine: HitEngine
			{
				armor=0.75;
				material=-1;
				name="motor";
				passThrough=0.2;
				minimalHit=0.23999999;
				explosionShielding=0.2;
				radius=0.33000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="track_l_hit";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="track_r_hit";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=1.5;
				material=-1;
				name="palivo";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.25;
			};
		};
		animationSourceHatch="";
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust_2
			{
				position="Exhaust_2_pos";
				direction="Exhaust_2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
		insideSoundCoef=0.89999998;
		threat[]={0.80000001,1,0.30000001};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
			class driver_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_DRV_TL",
					"PIP_DRV_TR",
					"PIP_DRV_BL",
					"PIP_DRV_BR"
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={13,20,20};
					ambient[]={0,0,0};
					intensity=2;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
					point="light_interior1";
				};
				class Light2: Light1
				{
					point="light_interior2";
					color[]={13,20,20};
					ambient[]={0,0,0};
					intensity=1.5;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={13,20,20};
					ambient[]={0,0,0};
					intensity=1.5;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={13,20,20};
					ambient[]={0,0,0};
					intensity=0.69999999;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={18,20,20};
					ambient[]={0,0,0};
					intensity=0.2;
					size=0;
				};
				class Light6: Light1
				{
					point="light_interior6";
					color[]={18,20,20};
					ambient[]={0,0,0};
					intensity=3;
					size=0;
				};
				class Light7: Light1
				{
					point="light_interior7";
					color[]={18,20,20};
					ambient[]={0,0,0};
					intensity=4;
					size=0;
				};
				class Light8: Light1
				{
					point="light_interior8";
					color[]={18,20,20};
					ambient[]={0,0,0};
					intensity=4;
					size=0;
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
			0.31622776,
			1
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		memoryPointsGetInCommander="getin";
		memoryPointsGetInDriver="getin";
		memoryPointsGetInGunner="getin";
		memoryPointsGetInCommanderDir="getindir";
		memoryPointsGetInDriverDir="getindir";
		memoryPointsGetInGunnerDir="getindir";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="Obsturret";
						gun="Obsgun";
						proxyIndex=1;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="Obsturret";
						animationSourceGun="Obsgun";
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							"db-40",
							1,
							50
						};
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-15;
						maxTurn=15;
						initTurn=0;
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="konec hlavne3";
						gunnerLeftHandAnimName="konec hlavne3";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"z_gunL_muzzle",
							"z_gunR_muzzle"
						};
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="CommanderView";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretFollowFreeLook=1;
						commanding=1;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-15;
							maxAngleX=15;
							initAngleY=0;
							minAngleY=-10;
							maxAngleY=60;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={2,3,4};
						};
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Turret";
								visual="commander_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
							class HitGun
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Gun";
								visual="Commander_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
						};
						selectionFireAnim="ZaslehCommander";
					};
				};
				startEngine=0;
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_Rockets_Firebrand",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"BHA_AT_DEC",
					"BHA_AP_DEC",
					"BHA_AP_DEC",
					"BHA_AP_DEC",
					"BHA_AP_DEC",
					"BHA_AA_DEC",
					"BHA_AA_DEC",
					"BHA_AA_DEC",
					"SmokeLauncherMag"
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				missileBeg="spice rakety";
				missileEnd="konec rakety";
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="gunnerview";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
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
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="mbt2_slot2b_in";
				forceHideGunner=1;
				outGunnerMayFire=1;
				gunnerInAction="mbt2_slot2b_in";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=1;
				viewGunnerInExternal=0;
				gunnerName="Gunner";
				proxytype="CPGunner";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				minElev=-9;
				maxElev=20;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="otocvez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=1;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.75;
						material=-1;
						name="otocvez";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.15000001;
					};
				};
			};
		};
		animationList[]=
		{
			"showCamonetCannon",
			0,
			"showCamonetPlates1",
			0,
			"showCamonetPlates2",
			0,
			"showCamonetTurret",
			0,
			"showCamonetHull",
			0
		};
	};
	class BHA_Stormcaller_F: BHA_hovertank_base
	{
		author="Starforge Armory Team";
		scope=2;
		scopeCurator=2;
		_generalMacro="BHA_Avalanche_F";
		displayName="Stormcaller Tank";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Tanks";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\BHA\vehicles\cars\data\firebrand_cannons_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Hull_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Turret_black_co.paa"
		};
		crew="BHA_ShockDroid";
		typicalCargo[]=
		{
			"BHA_ShockDroid"
		};
		class TextureSources
		{
			class Yellow
			{
				displayName="Republic Yellow";
				author="Starforge Armory Team";
				textures[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Cannons_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Hull_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Turret_co.paa"
				};
				factions[]=
				{
					"SFA_Republic"
				};
			};
			class Red
			{
				displayName=" Republic Red";
				author="Starforge Armory Team";
				textures[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Cannons_red_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Hull_red_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Turret_red_co.paa"
				};
				factions[]=
				{
					"SFA_Republic"
				};
			};
		};
	};
	class BHA_Avalanche_F: BHA_hovertank_base
	{
		author="Starforge Armory Team";
		scope=2;
		scopeCurator=2;
		_generalMacro="BHA_Avalanche_F";
		displayName="Avalanche Heavy Tank";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Tanks";
		model="\SFA_Main\SFA_Vehicles_R\Avalanche.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		armor=1200;
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\BHA\vehicles\cars\data\firebrand_cannons_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Hull_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Turret_black_co.paa"
		};
		crew="BHA_ShockDroid";
		typicalCargo[]=
		{
			"BHA_ShockDroid"
		};
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=1200;
				forceHideGunner=1;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				gunnerName="Passenger Gunner 4";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo4";
				memoryPointsGetInGunnerDir="pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				gunnerName="Passenger Gunner 5";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo5";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				gunnerName="Passenger Gunner 6";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				gunnerName="Passenger Gunner 7";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex=8;
				gunnerName="Passenger Gunner 8";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret9: CargoTurret1
			{
				proxyIndex=9;
				gunnerName="Passenger Gunner 9";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret10: CargoTurret1
			{
				proxyIndex=10;
				gunnerName="Passenger Gunner 10";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret11: CargoTurret1
			{
				proxyIndex=11;
				gunnerName="Passenger Gunner 11";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo11";
				memoryPointsGetInGunnerDir="pos cargo11 dir";
			};
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="Obsturret";
						gun="Obsgun";
						proxyIndex=1;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="Obsturret";
						animationSourceGun="Obsgun";
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							"db-40",
							1,
							50
						};
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-15;
						maxTurn=15;
						initTurn=0;
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="konec hlavne3";
						gunnerLeftHandAnimName="konec hlavne3";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"z_gunL_muzzle",
							"z_gunR_muzzle"
						};
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="CommanderView";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretFollowFreeLook=1;
						commanding=1;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-15;
							maxAngleX=15;
							initAngleY=0;
							minAngleY=-10;
							maxAngleY=60;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={2,3,4};
						};
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Turret";
								visual="commander_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
							class HitGun
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Gun";
								visual="Commander_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
						};
						selectionFireAnim="ZaslehCommander";
					};
				};
				startEngine=0;
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_Heavy_Cannon",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"SmokeLauncherMag"
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="gunnerview";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
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
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="mbt2_slot2b_in";
				forceHideGunner=1;
				outGunnerMayFire=1;
				gunnerInAction="mbt2_slot2b_in";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=1;
				viewGunnerInExternal=0;
				gunnerName="Gunner";
				proxytype="CPGunner";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				minElev=-9;
				maxElev=20;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="otocvez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=1;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.75;
						material=-1;
						name="otocvez";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.15000001;
					};
				};
			};
		};
		class TextureSources
		{
			class Yellow
			{
				displayName="Republic Yellow";
				author="Starforge Armory Team";
				textures[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Cannons_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Hull_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Turret_co.paa"
				};
				factions[]=
				{
					"SFA_Republic"
				};
			};
			class Red
			{
				displayName=" Republic Red";
				author="Starforge Armory Team";
				textures[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Cannons_red_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Hull_red_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Turret_red_co.paa"
				};
				factions[]=
				{
					"SFA_Republic"
				};
			};
		};
	};
	class BHA_Firebrand_Rocket: BHA_hovertank_R_base
	{
		author="Starforge Armory Team";
		scope=2;
		scopeCurator=2;
		_generalMacro="BHA_Firebrand_Rocket";
		displayName="Firebrand Rocket Tank";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Tanks";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\BHA\vehicles\cars\data\rocket_pods_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Hull_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Turret_black_co.paa"
		};
		crew="BHA_ShockDroid";
		typicalCargo[]=
		{
			"BHA_ShockDroid"
		};
	};
	/*class BHA_Firebrand_F: BHA_hovertank_base
	{
		author="Starforge Armory Team";
		scope=2;
		scopeCurator=2;
		_generalMacro="BHA_Firebrand_F";
		displayName="Stormcaller Heavy Tank";
		crew="BHA_warbot";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Tanks";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Cannons_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Hull_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Turret_black_co.paa"
		};
		typicalCargo[]=
		{
			"BHA_warbot"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="Obsturret";
						gun="Obsgun";
						proxyIndex=1;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="Obsturret";
						animationSourceGun="Obsgun";
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best.wss",
							"db-40",
							1,
							50
						};
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-15;
						maxTurn=15;
						initTurn=0;
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="konec hlavne3";
						gunnerLeftHandAnimName="konec hlavne3";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"z_gunL_muzzle",
							"z_gunR_muzzle"
						};
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="CommanderView";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretFollowFreeLook=1;
						commanding=1;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-15;
							maxAngleX=15;
							initAngleY=0;
							minAngleY=-10;
							maxAngleY=60;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={4,5};
						};
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Turret";
								visual="commander_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
							class HitGun
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Gun";
								visual="Commander_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
						};
						selectionFireAnim="ZaslehCommander";
					};
				};
				startEngine=0;
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_Heavy_Cannon",
					"BHA_weapon_Cannon_low",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"BHA_100Rnd_autocannon_70mm_AA_mag",
					"SmokeLauncherMag"
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="gunnerview";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
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
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="mbt2_slot2b_in";
				forceHideGunner=1;
				outGunnerMayFire=1;
				gunnerInAction="mbt2_slot2b_in";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=1;
				viewGunnerInExternal=0;
				gunnerName="Gunner";
				proxytype="CPGunner";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=25;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best.wss",
					"db-40",
					1,
					50
				};
				minElev=-9;
				maxElev=45;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="otocvez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=1;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.75;
						material=-1;
						name="otocvez";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.15000001;
					};
				};
			};
		};
		class TextureSources
		{
			class Yellow
			{
				displayName="Republic Yellow";
				author="Starforge Armory Team";
				textures[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Cannons_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Hull_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Turret_co.paa"
				};
				factions[]=
				{
					"SFA_Republic"
				};
			};
			class Red
			{
				displayName=" Republic Red";
				author="Starforge Armory Team";
				textures[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Cannons_red_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Hull_red_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Turret_red_co.paa"
				};
				factions[]=
				{
					"SFA_Republic"
				};
			};
		};
	};
	class BHA_Avalanche_F: BHA_Firebrand_F
	{
		author="Starforge Armory Team";
		scope=2;
		scopeCurator=2;
		_generalMacro="BHA_Avalanche_F";
		displayName="Avalanche Medium Tank";
		model="\SFA_Main\SFA_Vehicles_R\Avalanche.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="Obsturret";
						gun="Obsgun";
						proxyIndex=1;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="Obsturret";
						animationSourceGun="Obsgun";
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best.wss",
							"db-40",
							1,
							50
						};
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-15;
						maxTurn=15;
						initTurn=0;
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="konec hlavne3";
						gunnerLeftHandAnimName="konec hlavne3";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"z_gunL_muzzle",
							"z_gunR_muzzle"
						};
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="CommanderView";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretFollowFreeLook=1;
						commanding=1;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-15;
							maxAngleX=15;
							initAngleY=0;
							minAngleY=-10;
							maxAngleY=60;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={4,5};
						};
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Turret";
								visual="commander_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
							class HitGun
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Gun";
								visual="Commander_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
						};
						selectionFireAnim="ZaslehCommander";
					};
				};
				startEngine=0;
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_Heavy_Cannon",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_AP_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"BHA_MassDriver_HE_x25",
					"SmokeLauncherMag"
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="gunnerview";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
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
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="mbt2_slot2b_in";
				forceHideGunner=1;
				outGunnerMayFire=1;
				gunnerInAction="mbt2_slot2b_in";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=1;
				viewGunnerInExternal=0;
				gunnerName="Gunner";
				proxytype="CPGunner";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best.wss",
					"db-40",
					1,
					50
				};
				minElev=-9;
				maxElev=20;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="otocvez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=1;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.75;
						material=-1;
						name="otocvez";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.15000001;
					};
				};
			};
		};
		class TextureSources
		{
			class Yellow
			{
				displayName="Republic Yellow";
				author="Starforge Armory Team";
				textures[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Cannons_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Hull_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Turret_co.paa"
				};
				factions[]=
				{
					"SFA_Republic"
				};
			};
			class Red
			{
				displayName=" Republic Red";
				author="Starforge Armory Team";
				textures[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Cannons_red_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Hull_red_co.paa",
					"\SFA_Main\SFA_Vehicles_R\data\Firebrand\Firebrand_Turret_red_co.paa"
				};
				factions[]=
				{
					"SFA_Republic"
				};
			};
		};
	};
	class BHA_Firebrand_Rocket: BHA_hovertank_R_base
	{
		author="Starforge Armory Team";
		scope=2;
		scopeCurator=2;
		_generalMacro="BHA_Firebrand_Rocket";
		displayName="Firebrand Rocket Tank";
		crew="BHA_warbot";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Tanks";
		typicalCargo[]=
		{
			"BHA_warbot"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\BHA\vehicles\cars\data\rocket_pods_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Hull_black_co.paa",
			"z\MET\addons\BHA\vehicles\cars\data\Firebrand_Turret_black_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="Obsturret";
						gun="Obsgun";
						proxyIndex=1;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="Obsturret";
						animationSourceGun="Obsgun";
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best.wss",
							"db-40",
							1,
							50
						};
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-15;
						maxTurn=15;
						initTurn=0;
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="konec hlavne3";
						gunnerLeftHandAnimName="konec hlavne3";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"z_gunL_muzzle",
							"z_gunR_muzzle"
						};
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="CommanderView";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretFollowFreeLook=1;
						commanding=1;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-15;
							maxAngleX=15;
							initAngleY=0;
							minAngleY=-10;
							maxAngleY=60;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={2,3,4};
						};
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Turret";
								visual="commander_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
							class HitGun
							{
								armor=0.60000002;
								material=-1;
								name="Commander_Gun";
								visual="Commander_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
						};
						selectionFireAnim="ZaslehCommander";
					};
				};
				startEngine=0;
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_Rockets_Firebrand",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"BHA_AT_DEC",
					"BHA_AP_DEC",
					"BHA_AP_DEC",
					"BHA_AP_DEC",
					"BHA_AP_DEC",
					"BHA_AA_DEC",
					"BHA_AA_DEC",
					"BHA_AA_DEC",
					"SmokeLauncherMag"
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				missileBeg="spice rakety";
				missileEnd="konec rakety";
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="gunnerview";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
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
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="mbt2_slot2b_in";
				forceHideGunner=1;
				outGunnerMayFire=1;
				gunnerInAction="mbt2_slot2b_in";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=1;
				viewGunnerInExternal=0;
				gunnerName="Gunner";
				proxytype="CPGunner";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best.wss",
					"db-40",
					1,
					50
				};
				minElev=-9;
				maxElev=20;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="otocvez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=1;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.75;
						material=-1;
						name="otocvez";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.15000001;
					};
				};
			};
		};
	};*/
};