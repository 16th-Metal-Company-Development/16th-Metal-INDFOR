class CfgPatches
{
	class BHA_tracked
	{
		units[]=
		{
			"BHA_Mantis"
		};
		weapons[]={};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"sc_tracked"
		};
	};
};
class ViewOptics;
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class LandVehicle;
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
	};
	class BHA_Mantis_Base: Tank_F
	{
		class EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		scope=1;
		scopeCurator=1;
		author="Scion Conflict Mod Team";
		displayName="Mantis Tank (BASE)";
		side="East";
		faction="BHA_Units";
		crew="BHA_Acolytes_Acolyte";
		hasDriver=1;
		hasGunner=1;
		hasCommander=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\sc_tracked\data\mantis\textures\body_black_co.paa",
			"\sc_tracked\data\mantis\textures\turret_black_co.paa",
			"\sc_tracked\data\mantis\textures\brace_black_co.paa"
		};
		model="\sc_tracked\data\mantis\mantis.p3d";
		picture="\sc_tracked\data\icons\icon_mantis_ca.paa";
		icon="\sc_tracked\data\icons\icon_mantis_map_ca.paa";
		accuracy=0.30000001;
		acceleration=17;
		terrainCoef=1;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInGunner="pos gunner";
		memoryPointsGetInGunnerDir="pos gunner dir";
		memoryPointsGetInCommander="pos commander";
		memoryPointsGetInCommanderDir="pos commander dir";
		getInRadius=6;
		memoryPointDriverOptics="driverview";
		driverForceOptics=1;
		forceHideDriver=1;
		driverAction="driver_hemtt";
		driverInAction="driver_low01";
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		maximumLoad=1000;
		cost=1500000;
		damageResistance=0.02;
		crewVulnerable=0;
		armor=1200;
		armorStructural=6;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=2.5;
				material=-1;
				armorComponent="hull";
				name="hull";
				visual="hull";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.60000002;
				material=-1;
				armorComponent="engine";
				name="engine";
				visual="-";
				passThrough=0.2;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="palivo";
				name="palivo";
				visual="-";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.30000001;
			};
			class HitLTrack: HitLTrack
			{
				material=-1;
				armorComponent="pas_L";
				name="pas_L";
				visual="pas_L";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitRTrack: HitRTrack
			{
				material=-1;
				armorComponent="pas_P";
				name="pas_P";
				visual="pas_P";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
		};
		enableManualFire=0;
		/*class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						primaryGunner=0;
						primaryObserver=1;
						isCommander=1;
						proxyIndex=1;
						proxyType="CPCommander";
						gunnerName="Commander";
						body="ObsTurret";
						gun="ObsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							1,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
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
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F.p3d";
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
					"BHA_vic_proton_mag",
					"BHA_vic_proton_mag"
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
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.56234133,
					1,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.56234133,
					1,
					50
				};
				startEngine=0;
				maxHorizontalRotSpeed=0.44999999;
				maxVerticalRotSpeed=0.44999999;
				//turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="usti hlavne";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				class ViewGunner: ViewGunner
				{
					initAngleX=-17;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=0;
					maxMoveX=0;
					minMoveY=0;
					maxMoveY=0;
					minMoveZ=0;
					maxMoveZ=0;
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
						thermalMode[]={4,5};
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
				class OpticsIn: Optics_Gunner_MBT_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_MBT_01_gunner";
				showCrewAim=2;
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
		};*/
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						primaryGunner=0;
						primaryObserver=1;
						isCommander=1;
						proxyIndex=1;
						proxyType="CPCommander";
						gunnerName="Commander";
						body="ObsTurret";
						gun="ObsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						memoryPointGun="commander_end";
						gunBeg="commander_beg";
						gunEnd="commander_end";
						selectionFireAnim="zasleh3";
						memoryPointsGetInGunner="pos commander";
						memoryPointsGetInGunnerDir="pos commander dir";
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
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
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							0.56234133,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							0.56234133,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="mbt2_slot2b_out";
						gunnerInAction="mbt2_slot2b_in";
						gunnerGetInAction="GetInLow";
						gunnerGetOutAction="GetOutLow";
						forceHideGunner=1;
						gunnerForceOptics=1;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						turretFollowFreeLook=2;
						usePip=2;
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerRightHandAnimName="com_turret_control";
						LODTurnedIn=1100;
						LODOpticsIn=0;
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
						isPersonTurret=0;
						personTurretAction="";
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-95;
						maxOutTurn=95;
						initOutTurn=0;
						class ViewGunner: ViewGunner
						{
							initAngleX=-10;
							initAngleY=0;
							initFov=0.89999998;
							minFov=0.25;
							maxFov=1.25;
							minAngleX=-65;
							maxAngleX=85;
							minAngleY=-150;
							maxAngleY=150;
							minMoveX=-0.075000003;
							maxMoveX=0.075000003;
							minMoveY=-0.075000003;
							maxMoveY=0.075000003;
							minMoveZ=-0.075000003;
							maxMoveZ=0.1;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.31;
							minFov=0.034000002;
							maxFov=0.31;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={2,3};
						};
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_MBT_01_commander";
						showCrewAim=1;
						startEngine=0;
						gunnerHasFlares=1;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						viewGunnerInExternal=1;
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_turret";
								name="hit_com_turret_point";
								visual="-";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="-";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isGun=1;
							};
						};
					};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-17;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=0;
					maxMoveX=0;
					minMoveY=0;
					maxMoveY=0;
					minMoveZ=0;
					maxMoveZ=0;
				};
				gunnerforceoptics=1;
				usePip=2;
				LODTurnedIn=1100;
				LODOpticsIn=0;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control_y";
				gunnerRightHandAnimName="turret_control_y";
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				memoryPointGun="usti hlavne1";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				selectionFireAnim="zasleh1";
				gunnerAction="mbt1_slot2_out";
				gunnerInAction="Gunner_MBT_01_cannon_F_in";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.15848932,
					1,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1,
					50
				};
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
					"BHA_vic_proton_mag",
					"BHA_vic_proton_mag"
				};
				forceHideGunner=1;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				minElev=-7;
				maxElev=20;
				initElev=10;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				startEngine=0;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				class OpticsIn: Optics_Gunner_MBT_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_MBT_01_gunner";
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.30000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
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
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"sc_tracked\data\mantis\textures\body.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat",
				"sc_tracked\data\mantis\textures\turret.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat",
				"sc_tracked\data\mantis\textures\brace.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat",
				"sc_tracked\data\mantis\textures\tracks.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat"
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
					"sc_tracked\data\mantis\textures\body_olive_co.paa",
					"sc_tracked\data\mantis\textures\turret_olive_co.paa",
					"sc_tracked\data\mantis\textures\brace_olive_co.paa"
				};
				factions[]=
				{
					"SC_Faction_SE"
				};
			};
			class DesertCamo
			{
				displayName="Desert Camo";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"sc_tracked\data\mantis\textures\body_desert_camo_co.paa",
					"sc_tracked\data\mantis\textures\turret_desert_camo_co.paa",
					"sc_tracked\data\mantis\textures\brace_desert_camo_co.paa"
				};
				factions[]=
				{
					"SC_Faction_SE"
				};
			};
			class BlackCamo
			{
				displayName="Black Camo";
				author="Scion Conflict Mod Team";
				textures[]=
				{
					"sc_tracked\data\mantis\textures\body_black_co.paa",
					"sc_tracked\data\mantis\textures\turret_black_co.paa",
					"sc_tracked\data\mantis\textures\brace_black_co.paa"
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
					"sc_tracked\data\mantis\textures\body_tan_co.paa",
					"sc_tracked\data\mantis\textures\turret_tan_co.paa",
					"sc_tracked\data\mantis\textures\brace_tan_co.paa"
				};
				factions[]=
				{
					"SC_Faction_SE"
				};
			};
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
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
			"A3\Sounds_F_Tank\vehicles\armor\Mbt_04\MBT_04_Engine_Int_Start",
			0.446684,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Tank\vehicles\armor\Mbt_04\MBT_04_Engine_Int_Stop",
			0.446684,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Tank\vehicles\armor\Mbt_04\MBT_04_Engine_Ext_Stop",
			1.99526,
			1,
			100
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Tank\vehicles\armor\Mbt_04\MBT_04_Engine_Ext_Start",
			1.99526,
			1,
			100
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095701,
			1,
			100
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095701,
			1,
			100
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095701,
			1,
			100
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		woodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		woodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		woodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		woodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		woodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
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
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		ArmorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		ArmorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		class Sounds
		{
			soundSetsInt[]=
			{
				"MBT_04_Engine_RPM0_INT_SoundSet",
				"MBT_04_Engine_RPM1_INT_SoundSet",
				"MBT_04_Engine_RPM2_INT_SoundSet",
				"MBT_04_Engine_RPM3_INT_SoundSet",
				"MBT_04_Engine_RPM4_INT_SoundSet",
				"MBT_04_Engine_INT_Burst_SoundSet",
				"MBT_04_Tracks_01_INT_SoundSet",
				"MBT_04_Tracks_02_INT_SoundSet",
				"MBT_04_Tracks_03_INT_SoundSet",
				"MBT_04_Tracks_04_INT_SoundSet",
				"MBT_04_Tracks_05_INT_SoundSet",
				"MBT_04_Tracks_06_INT_SoundSet",
				"MBT_04_Interior_Tone_Engine_Off_SoundSet",
				"MBT_04_Interior_Tone_Engine_On_SoundSet",
				"MBT_04_Rattling_INT_SoundSet",
				"MBT_04_Rain_INT_SoundSet",
				"MBT_04_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_04_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_04_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_04_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_04_Drive_Water_INT_SoundSet",
				"MBT_04_Drive_Dirt_INT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet"
			};
			soundSetsExt[]=
			{
				"MBT_04_Engine_RPM0_EXT_SoundSet",
				"MBT_04_Engine_RPM1_EXT_SoundSet",
				"MBT_04_Engine_RPM2_EXT_SoundSet",
				"MBT_04_Engine_RPM3_EXT_SoundSet",
				"MBT_04_Engine_RPM4_EXT_SoundSet",
				"MBT_04_Engine_EXT_Burst_SoundSet",
				"MBT_04_Tracks_01_EXT_SoundSet",
				"MBT_04_Tracks_02_EXT_SoundSet",
				"MBT_04_Tracks_03_EXT_SoundSet",
				"MBT_04_Tracks_04_EXT_SoundSet",
				"MBT_04_Tracks_05_EXT_SoundSet",
				"MBT_04_Tracks_06_EXT_SoundSet",
				"MBT_04_Rain_EXT_SoundSet",
				"MBT_04_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_04_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_04_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_04_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_04_Drive_Water_EXT_SoundSet",
				"MBT_04_Drive_Dirt_EXT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundSet"
			};
		};
		simulation="tankX";
		fuelCapacity=20;
		brakeIdleSpeed=0.1;
		maxSpeed=70;
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.5;
		waterResistanceCoef=0.25;
		enginePower=1120;
		maxOmega=251.327;
		minOmega=104.72;
		redRpm=2400;
		idleRpm=1000;
		peakTorque=5500;
		torqueCurve[]=
		{
			{0.41666701,0.76363599},
			{0.5,0.89090902},
			{0.58333302,0.91818202},
			{0.66666698,0.98181802},
			{0.75,1},
			{0.83333302,0.96363598},
			{0.91666698,0.86363602},
			{1,0.65454501}
		};
		thrustDelay=0.1;
		dampingRateFullThrottle=2.5;
		dampingRateZeroThrottleClutchEngaged=8;
		dampingRateZeroThrottleClutchDisengaged=2;
		clutchStrength=150;
		latency=0.5;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.58333302,0.41666701,0.41666701,0.95833302,0.41666701,0.9375,0.72916698,0.91666698,0.70833302,0.91666698,0.70833302,0.91666698,0.70833302,0.91666698,0.66666698,1,0.625};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.5,
				"N",
				0,
				"D1",
				6.8000002,
				"D2",
				5.5999999,
				"D3",
				4,
				"D4",
				2.9000001,
				"D5",
				2.0999999,
				"D6",
				1.5,
				"D7",
				1.1
			};
			transmissionRatios[]=
			{
				"High",
				5.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		tankTurnForce=200000;
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
				MOI=12;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=40000;
				sprungMass=5833;
				springStrength=145833;
				springDamperRate=58331;
				dampingRate=1;
				dampingRateInAir=8830;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0;
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
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustEffectTankBack";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustEffectTankBack";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
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
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
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
	};
	class BHA_Mantis: BHA_Mantis_Base
	{
		scope=2;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Mantis Tank";
		side=2;
		faction="BHA_Units";
		crew="BHA_Acolytes_Acolyte";
	};
};