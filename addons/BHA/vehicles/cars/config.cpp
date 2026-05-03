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
			"BHA_Ferret_AUTOGUN",
			"BHA_SaurusAPC_SE",
			"BHA_Mantis",
			"BHA_HAGM",
			"BHA_Firebrand_F",
			"BHA_Avalanche_F",
			"BHA_Firebrand_Rocket"
		};
		weapons[]={};
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class RCWSOptics;
class AnimationSources;
class CfgVehicles
{
	class SC_Gator_TO_AR;
	class SC_Gator_FB_AR;
	class SC_Gator_TC_AR;
	class SC_Ferret_Base
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
	};
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
	class BHA_Ferret_ATGM: SC_Ferret_Base
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
	};
	class SC_SaurusAPC_SE
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
	};
	class SC_Mantis_Base
	{
		class Turrets
		{
			class MainTurret
			{
				class Turrets
				{
					class CommanderOptics;
					class ViewOptics;
				};
				class CommanderOptics;
				class ViewOptics;
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
		class AnimationSources;
	};
	class BHA_Mantis: SC_Mantis_Base
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Mantis Tank";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Tanks";
		crew="BHA_warbot";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_tracked\data\mantis\textures\body_black_co.paa",
			"sc_tracked\data\mantis\textures\turret_black_co.paa",
			"sc_tracked\data\mantis\textures\brace_black_co.paa"
		};
		armor = 1500;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="ObsTurret";
						gun="ObsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm.wss",
							1,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm.wss",
							1,
							1,
							30
						};
						minElev=-5;
						maxElev=60;
						initElev=0;
						initTurn=0;
						memoryPointGun="commander_end";
						gunBeg="commander_beg";
						gunEnd="commander_end";
						weapons[]=
						{
							"BHA_MG3",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"MET_T20AC_vic_mag",
							"MET_T20AC_vic_mag",
							"MET_T20AC_vic_mag",
							"MET_T20AC_vic_mag",
							"SmokeLauncherMag"
						};
						turretInfoType="RscOptics_crows";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
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
								thermalMode[]={4,5,6};
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
						gunnerAction="mbt2_slot2b_out";
						gunnerInAction="mbt2_slot2b_in";
						gunnerGetInAction="GetInLow";
						gunnerGetOutAction="GetOutLow";
						forceHideGunner=1;
						gunnerForceOptics=1;
						startEngine=0;
						viewGunnerInExternal=1;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						class HitPoints
						{
							class HitTurret
							{
								armor=0.30000001;
								material=-1;
								name="vez";
								visual="vez";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
							class HitGun
							{
								armor=0.30000001;
								material=-1;
								name="zbranVelitele";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
						};
						selectionFireAnim="zasleh3";
					};
				};
				memoryPointGun="usti hlavne1";
				selectionFireAnim="zasleh1";
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BHA_Mass_Driver_Cannon",
					"BHA_E403_Vic",
					"BHA_Rockets_Mantis"
				};
				magazines[]=
				{
					"BHA_30Rnd_Mass_Driver_shells",
					"BHA_30Rnd_Mass_Driver_shells",
					"BHA_AP_OCT",
					"MET_vic_proton_mag",
					"MET_vic_proton_mag"
				};
				memoryPointLRocket="L raketa";
				memoryPointRRocket="P raketa";
				missileBeg="missleEnd";
				missileEnd="missleBeg";
				minElev=-5;
				maxElev=20;
				initElev=5;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner.wss",
					0.56234133,
					1,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical.wss",
					0.56234133,
					1,
					50
				};
				startEngine=0;
				maxHorizontalRotSpeed=0.44999999;
				maxVerticalRotSpeed=0.44999999;
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="usti hlavne";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
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
							"TI"
						};
						thermalMode[]={4,5,6};
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
				gunnerAction="mbt2_slot2a_out";
				gunnerInAction="mbt2_slot2a_in";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				forceHideGunner=1;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="BHA_Mass_Driver_Cannon";
			};
			class Revolving
			{
				source="revolving";
				weapon="BHA_Rockets_Mantis";
			};
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
			"z\MET\addons\units\bha\vehicles\cars\data\cisarty_black_co.paa"
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
	class SFA_hovertank_base
	{
		class Turrets
		{
			class MainTurret
			{
				class Turrets
				{
					class CommanderOptics;
					class ViewOptics;
				};
			};
		};
	};
	class BHA_Firebrand_F: SFA_hovertank_base
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
			"z\MET\addons\units\bha\vehicles\cars\data\Firebrand_Cannons_black_co.paa",
			"z\MET\addons\units\bha\vehicles\cars\data\Firebrand_Hull_black_co.paa",
			"z\MET\addons\units\bha\vehicles\cars\data\Firebrand_Turret_black_co.paa"
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
	class SFA_hovertank_R_base
	{
		class Turrets
		{
			class MainTurret
			{
				class Turrets
				{
					class CommanderOptics;
					class ViewOptics;
				};
			};
		};
	};
	class BHA_Firebrand_Rocket: SFA_hovertank_R_base
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
			"z\MET\addons\units\bha\vehicles\cars\data\rocket_pods_black_co.paa",
			"z\MET\addons\units\bha\vehicles\cars\data\Firebrand_Hull_black_co.paa",
			"z\MET\addons\units\bha\vehicles\cars\data\Firebrand_Turret_black_co.paa"
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
	};
};