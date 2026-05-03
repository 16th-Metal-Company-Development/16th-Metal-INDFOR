class CfgPatches
{
	class BHA_Auto_Guns
	{
		units[]=
		{
			"BHA_UAV_AI",
			"BHA_PortableTurret_Boxed",
			"BHA_PortableTurret",
			"BHA_CeilingTurret",
			"BHA_FHR2_AutoTurret",
			"BHA_SBB4_AutoTurret"
		};
		weapons[]={};
	};
};
class CfgFunctions
{
	class BHA
	{
		tag = "BHA";
		class turretScripts
		{
			file = "z\MET\addons\units\bha\vehicles\turrets\scripts";
			class crew_ai_vincible{};
			class crew_invincible{};
			class crew_vincible{};
			class unlimited_mags{};
			class wreck_delete{};
		};
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
class CBA_Extended_EventHandlers_base
{
};
class CfgMagazines
{
	class MET_DC15A_mag;
	class MET_T20AC_Turret_mag: MET_DC15A_mag
	{
		scope=2;
		scopeArsenal=0;
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=200;
		displayName="T-20 Heavy Energy Cell";
		ammo="MET_bullet_heavy_orange";
		tracersEvery=1;
		mass=150;
	};
	class MET_FHR1_Turret_mag: MET_DC15A_mag
	{
		scope=2;
		scopearsenal=0;
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=800;
		displayName="FHR-1 Heavy Energy Cell";
		ammo="MET_bullet_heavy_orange";
		tracersEvery=1;
		mass=150;
	};
	class MET_SBB4_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="z\MET\addons\weapons\other_weapons\data\3as_pellets_o.paa";
		model="\MRC\JLTS\weapons\Core\stun_mag.p3d";
		count=100;
		displayName="[BHA] SB-B3 Pellets";
		displayNameShort="$STR_JLTS_snames_EnergyCellLow";
		descriptionShort="$STR_JLTS_descs_SBB3_mag";
		ammo="MET_pellet_orange";
		tracersEvery=1;
	};
};
class CfgWeapons
{
	class MGun;
	class BHA_SentryGun_Weapon: MGun
	{
		author="Tiberian Genesis";
		scope=2;
		displayName="BHA FHR-2 Twin Gatling Gun";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"MET_FHR1_Turret_mag"
		};
		canLock="LockCadet";
		weight=40;
		burst=2;
		reloadTime=0.00857142857;
		magazineReloadTime=1.5;
		aiRateOfFire=0.00857142857;
		aiRateOfFireDispersion=0.001;
		aiRateOfFireDistance=50;
		dispersion=0.001;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			weaponSoundEffect="";
			begin1[]=
			{
				"z\MET\addons\weapons\other_weapons\sounds\fhr1.ogg",
				200,
				1,
				1800
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		textureType="fullAuto";
		flash="gunfire";
		flashSize=10;
		soundContinuous=0;
		soundBurst=0;
		minRange=0.1;
		minRangeProbab=0.69999999;
		midRange=25;
		midRangeProbab=0.69999999;
		maxRange=50;
		maxRangeProbab=0.1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="usti hlavne";
				directionName="konec hlavne";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="usti hlavne 2";
				directionName="konec hlavne 2";
			};
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				//effectName="TG_GDI_AR_GunCartridge";
			};
			class effect2
			{
				positionName="machinegun_eject_2_pos";
				directionName="machinegun_eject_2_dir";
				//effectName="TG_GDI_AR_GunCartridge";
			};
		};
	};
	class BHA_SentryGun_Weapon_Single: MGun
	{
		author="Tiberian Genesis";
		scope=2;
		displayName="BHA FHR-2 Gatling Gun";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"MET_FHR1_Turret_mag"
		};
		canLock="LockCadet";
		weight=40;
		burst=2;
		reloadTime=0.0171428571;
		magazineReloadTime=1.5;
		aiRateOfFire=0.0171428571;
		aiRateOfFireDispersion=0.001;
		aiRateOfFireDistance=50;
		dispersion=0.001;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			weaponSoundEffect="";
			begin1[]=
			{
				"z\MET\addons\weapons\other_weapons\sounds\fhr1.ogg",
				200,
				1,
				1800
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		textureType="fullAuto";
		flash="gunfire";
		flashSize=10;
		soundContinuous=0;
		soundBurst=0;
		minRange=0.1;
		minRangeProbab=0.69999999;
		midRange=25;
		midRangeProbab=0.69999999;
		maxRange=50;
		maxRangeProbab=0.1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="usti hlavne";
				directionName="konec hlavne";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="usti hlavne 2";
				directionName="konec hlavne 2";
			};
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				//effectName="TG_GDI_AR_GunCartridge";
			};
			class effect2
			{
				positionName="machinegun_eject_2_pos";
				directionName="machinegun_eject_2_dir";
				//effectName="TG_GDI_AR_GunCartridge";
			};
		};
	};
	class BHA_SentryGun_Weapon_Heavy: MGun
	{
		author="Tiberian Genesis";
		scope=2;
		displayName="BHA T-20 Twin Cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"MET_T20AC_Turret_mag"
		};
		canLock="LockCadet";
		weight=40;
		burst=2;
		reloadTime=0.06;
		magazineReloadTime=1.5;
		aiRateOfFire=0.06;
		aiRateOfFireDispersion=0.001;
		aiRateOfFireDistance=50;
		dispersion=0.001;
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType
		{
			weaponSoundEffect="";
			closure1[]={};
			closure2[]={};
			soundClosure[]={};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"T20_Shot_SoundSet"
			};
		};
		textureType="fullAuto";
		flash="gunfire";
		flashSize=10;
		soundContinuous=0;
		soundBurst=0;
		minRange=0.1;
		minRangeProbab=0.69999999;
		midRange=25;
		midRangeProbab=0.69999999;
		maxRange=50;
		maxRangeProbab=0.1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="usti hlavne";
				directionName="konec hlavne";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="usti hlavne 2";
				directionName="konec hlavne 2";
			};
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				//effectName="TG_GDI_AR_GunCartridge";
			};
			class effect2
			{
				positionName="machinegun_eject_2_pos";
				directionName="machinegun_eject_2_dir";
				//effectName="TG_GDI_AR_GunCartridge";
			};
		};
	};
	class BHA_SentryGun_Weapon_Shotgun: MGun
	{
		author="Tiberian Genesis";
		scope=2;
		displayName="BHA SBB4 Auto Shotgun";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"MET_SBB4_mag"
		};
		canLock="LockCadet";
		weight=40;
		burst=2;
		reloadTime=0.2;
		magazineReloadTime=1.5;
		aiRateOfFire=0.2;
		aiRateOfFireDispersion=0.001;
		aiRateOfFireDistance=50;
		dispersion=0.001;
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType
		{
			weaponSoundEffect="";
			closure1[]={};
			closure2[]={};
			soundClosure[]={};
		};
		class StandardSound: BaseSoundModeType
		{
			weaponSoundEffect="";
			begin1[]=
			{
				"z\MET\addons\weapons\other_weapons\sounds\sbb3.ogg",
				200,
				1,
				1800
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		textureType="fullAuto";
		flash="gunfire";
		flashSize=10;
		soundContinuous=0;
		soundBurst=0;
		minRange=0.1;
		minRangeProbab=0.69999999;
		midRange=25;
		midRangeProbab=0.69999999;
		maxRange=50;
		maxRangeProbab=0.1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="usti hlavne";
				directionName="konec hlavne";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="usti hlavne 2";
				directionName="konec hlavne 2";
			};
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				//effectName="TG_GDI_AR_GunCartridge";
			};
			class effect2
			{
				positionName="machinegun_eject_2_pos";
				directionName="machinegun_eject_2_dir";
				//effectName="TG_GDI_AR_GunCartridge";
			};
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
	class Car: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class StaticWeapon: LandVehicle
	{
		class NewTurret;
	};
	class StaticWeapon_F: StaticWeapon
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class Components;
	};
	class BHA_StaticTurret_Base: StaticWeapon_F
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class Components;
	};
	/*class StaticWeapon: LandVehicle
	{
		class AnimationSources;
		class Components;
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		accuracy=0.12;
		cost=10000;
		threat[]={0.80000001,0.30000001,0.60000002};
		class AnimationSources;
		class Components;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				optics=1;
			};
		};
		icon="iconStaticMG";
	};
	class BHA_Auto_Turret_Base: StaticMGWeapon
	{
	};*/
	class I_Soldier_F;
	class BHA_Soldier_Base: I_Soldier_F
	{
		author="Tiberian Genesis";
		scope=1;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"Head_Euro"
		};
		genericNames="NATOMen";
		side=2;
		faction="BHA_Units";
		editorSubcategory="BHA_ShockDroidWorker";
		//editorPreview="\tg_core\data\ico\ico_gdi_ca.paa";
		picture="";
		icon="iconMan";
		accuracy=3.9000001;
		camouflage=1.4;
		cost=200000;
		//model="\tg_soldiers\gdi\model\gdi_uniform.p3d";
		modelsides[]={3,2,1,0};
		//nakedUniform="TG_BasicBody_GDI_01";
		//uniformClass="TG_Uniform_GDI_01";
		threat[]={1,1,1};
		receiveRemoteTargets=0;
		reportRemoteTargets=0;
		reportOwnPosition=1;
		visualTarget=1;
		visualTargetSize=0.1;
		class SoundHitScream
		{
		};
		class Attributes
		{
			class EnableDisableSpeed
			{
				displayName="Enable Speed";
				tooltip="Faster Infantry movement";
				property="EnableDisableSpeed";
				control="Checkbox";
				defaultValue=0;
				expression="if(_value) then {[_this] execVM '\tg_soldiers\scripts\speed.sqf'} else {};";
			};
		};
		class Eventhandlers
		{
			killed="[_this select 0] execVM ""\tg_soldiers\scripts\death.sqf""";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
		};
	};
	class BHA_UAV_AI: BHA_Soldier_Base
	{
		_generalMacro="BHA_UAV_AI";
		author="Hazmat";
		displayName="Barysaw AI Operator";
		scope=1;
		simulation="UAVPilot";
		role="Crewman";
		model="\A3\characters_F\Common\invisibleMan.p3d";
		weapons[]={};
		respawnWeapons[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"MET_NVG_Integrated_MU"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"MET_NVG_Integrated_MU"
		};
		class Eventhandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
		};
		class Reflectors
		{
		};
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
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
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class BHA_Turret_Base: Car_F
	{
		author="Hathmat";
		displayName="-";
		scope=0;
		scopeCurator=0;
		accuracy=0.30000001;
		model="";
		icon="";
		cost=1500000;
		damageResistance=0.02;
		crewVulnerable=0;
		extCameraPosition[]={0,3,-25};
		maxSpeed=50;
		armor=500;
		armorStructural=6;
		radarTargetSize=2;
		radarType=8;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		showAllTargets=2;
		visualTargetSize=2;
		LockDetectionSystem=4;
		IncommingMisslieDetectionSystem=16;
		irscanrangemax=3000;
		irscanrangemin=500;
		irtarget=1;
		irScanGround=0;
		laserscanner=0;
		enableRadio=1;
		enableGPS=1;
		canFloat=0;
		maxFordingDepth=2.5;
		overSpeedBrakeCoef=0.80000001;
		brakeDistance=1;
		brakeIdleSpeed=0.5;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.40000001;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.2;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.30000001;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.30000001;
			};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG",
				"TI"
			};
			thermalMode[]={4,5};
			initFov=0.25;
			minFov=0.15000001;
			maxFov=0.25;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-3;
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
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
		};
		class AnimationSources
		{
		};
		class Exhausts
		{
		};
		class Reflectors
		{
		};
		class Components;
		aggregateReflectors[]={};
	};
	class BHA_CeilingTurret_Base: Car_F
	{
		author="Tiberian Genesis";
		displayName="-";
		scope=0;
		scopeCurator=0;
		accuracy=0.30000001;
		model="";
		icon="";
		cost=1500000;
		damageResistance=0.02;
		crewVulnerable=0;
		extCameraPosition[]={0,3,-25};
		maxSpeed=50;
		armor=500;
		armorStructural=6;
		radarTargetSize=2;
		radarType=8;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		showAllTargets=2;
		visualTargetSize=2;
		LockDetectionSystem=4;
		IncommingMisslieDetectionSystem=16;
		irscanrangemax=3000;
		irscanrangemin=500;
		irtarget=1;
		irScanGround=0;
		laserscanner=0;
		enableRadio=1;
		enableGPS=1;
		canFloat=0;
		maxFordingDepth=2.5;
		overSpeedBrakeCoef=0.80000001;
		brakeDistance=1;
		brakeIdleSpeed=0.5;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.40000001;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.2;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.30000001;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.30000001;
			};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG",
				"TI"
			};
			thermalMode[]={4,5};
			initFov=0.25;
			minFov=0.15000001;
			maxFov=0.25;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-3;
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
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
		};
		class AnimationSources
		{
		};
		class Exhausts
		{
		};
		class Reflectors
		{
		};
		class Components;
		aggregateReflectors[]={};
	};
	class BHA_PortableTurret: BHA_StaticTurret_Base
	{
		author="Hazmat"; // Author who made the damn thing
		scope=2; //Global Scope
		scopeCurator=2; //Editor/Zeus Scope
		_generalMacro="BHA_PortableTurret";
		faction="BHA_Units";
		//editorCategory="BHA_Assets";
		editorSubcategory="BHA_Statics";
		editorPreview="z\MET\addons\units\bha\vehicles\turrets\data\ui\ico_vorlage.jpg";
		icon="z\MET\addons\units\bha\vehicles\turrets\data\ui\map_gdi_vulcan_ca.paa";
		picture="z\MET\addons\units\bha\vehicles\turrets\data\ui\gdi_vulcan_ca.paa";
		displayName="Auto Turret";
		hasDriver=0;
		hasCommander=0;
		hasGunner=1;
		simulation="tankX";
		weapons[]={};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_Static_MG_s"
				};
				speechPlural[]=
				{
					"veh_Static_MG_p"
				};
			};
		};
		textSingular="BHA Turret";
		textPlural="BHA Turrets";
		nameSound="veh_Static_MG_s";
		getInRadius=0;
		isUav=1;
		crew="BHA_UAV_AI";
		side=2;
		uavCameraGunnerPos="pos_gunner_view";
		uavCameraGunnerDir="pos_gunner_view_dir";
		unitInfoType="RscUnitInfoTank";
		model="z\MET\addons\units\bha\vehicles\turrets\models\portable_turret\portable_turret.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		threat[]={1,0,0};
		cost=2000000;
		accuracy=0.12;
		memoryPointAim="zamerny";
		extCameraPosition[]={0,1,-2};
		canFloat=0;
		animated=1;
		fuelExplosionPower=0;
		damageEffect="UAVDestructionEffects";
		enableGPS=1;
		radartype=2;
		radarTarget=1;
		radarTargetSize=1;
		visualTarget=1;
		visualTargetSize=1;
		irTarget=1;
		irTargetSize=1;
		reportRemoteTargets=0;
		receiveRemoteTargets=0;
		reportOwnPosition=1;
		type=0;
		lockDetectionSystem=0;
		incomingMissileDetectionSystem=16;
		/*class Attributes
		{
			class EnableDisableScan
			{
				displayName="Enable Scan";
				tooltip="Forces Unit to scan location";
				property="EnableDisableScan";
				control="Checkbox";
				defaultValue=0;
				expression="if(_value) then {[_this] spawn TG_fnc_scan} else {};";
			};
		};*/
		/*class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"TG_PortableTurret_GDI_BP_01"
			};
		};*/
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=80;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						aimDown=0;
						maxFogSeeThrough=0.94999999;
						nightRangeCoef=1;
						allowsMarking=1;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
						};
						class GroundTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=80;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						maxFogSeeThrough=0.94999999;
						nightRangeCoef=1;
						allowsMarking=1;
						color[]={0,1,0,1};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="BHA_SentryGun_Weapon_Heavy";
			};
		};
		/*class EventHandlers
		{
			init="_this spawn TG_fnc_initUnlimitedMagsAI; _this spawn TG_fnc_scan;";
			killed="_this spawn TG_fnc_initWreckDelete;";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
		};*/
		armor=1;
		armorStructural=0;
		explosionShielding=100;
		damageResistance=0.0040000002;
		class Hitpoints
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minelev=-25;
				maxelev=45;
				minturn=-180;
				maxturn=180;
				initElev=0;
				initTurn=0;
				maxHorizontalRotSpeed=2.7;
				maxVerticalRotSpeed=2.7;
				soundServo[]=
				{
					"z\MET\addons\units\bha\vehicles\turrets\sounds\turret_turn.ogg",
					"db3",
					1,
					40
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical.wss",
					0.15848932,
					1,
					30
				};
				hasGunner=1;
				gunnerName="$STR_A3_Mk21_operator_displayName";
				primary=1;
				primaryGunner=1;
				startEngine=0;
				enableManualFire=1;
				turretinfotype="RscOptics_APC_Tracked_01_gunner";
				forceHideGunner=1;
				gunnerforceoptics=1;
				gunnerOutForceOptics=1;
				viewgunnerinExternal=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				castGunnerShadow=0;
				showAllTargets=2;
				body="MainTurret";
				gun="MainGun";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				uavCameraGunnerPos="pos_gunner_view";
				uavCameraGunnerDir="pos_gunner_view_dir";
				memoryPointGunnerOptics="pos_gunner_view";
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner";
				selectionFireAnim="zasleh";
				memoryPointGun[]=
				{
					"usti hlavne",
					"usti hlavne 2"
				};
				gunBeg="usti hlavne, usti hlavne 2";
				gunEnd="konec hlavne, konec hlavne 2";
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				weapons[]=
				{
					"BHA_SentryGun_Weapon_Heavy"
				};
				magazines[]=
				{
					"MET_T20AC_Turret_mag",
					"MET_T20AC_Turret_mag",
					"MET_T20AC_Turret_mag",
					"MET_T20AC_Turret_mag",
					"MET_T20AC_Turret_mag"
				};
				optics=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				class Reflectors
				{
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						defaultDisplay="EmptyDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								range[]={80,80,80,80};
								resource="RscCustomInfoMiniMap";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={80,80,80,80};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								range[]={80,80,80,80};
								resource="RscCustomInfoMiniMap";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={80,80,80,80};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				class AttributeValues
				{
					RadarUsageAI=1;
				};
			};
		};
	};
	class BHA_PortableTurret_Boxed: BHA_Turret_Base
	{
		author="Tiberian Genesis";
		scope=2;
		scopeCurator=2;
		_generalMacro="BHA_PortableTurret_Boxed";
		faction="BHA_Units";
		//editorCategory="BHA_Assets";
		editorSubcategory="BHA_Statics";
		editorPreview="z\MET\addons\units\bha\vehicles\turrets\data\ui\ico_vorlage.jpg";
		icon="z\MET\addons\units\bha\vehicles\turrets\data\ui\map_nod_laser_ca.paa";
		picture="z\MET\addons\units\bha\vehicles\turrets\data\ui\nod_laser_ca.paa";
		model="z\MET\addons\units\bha\vehicles\turrets\models\box_turret\portable_turret_boxed.p3d";
		displayName="BHA Boxed Turret";
		crew="BHA_UAV_AI";
		side=2;
		weapons[]={};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_Static_MG_s"
				};
				speechPlural[]=
				{
					"veh_Static_MG_p"
				};
			};
		};
		textSingular="BHA Turret";
		textPlural="BHA Turrets";
		nameSound="veh_Static_MG_s";
		isUav=1;
		uavCameraDriverPos="pos_driver_view";
		uavCameraDriverDir="pos_driver_view_dir";
		uavCameraGunnerPos="pos_gunner_view";
		uavCameraGunnerDir="pos_gunner_view_dir";
		class CamShake
		{
			power=0;
			frequency=0;
			distance=0;
			minSpeed=0;
		};
		camShakeCoef=0;
		memoryPointsGetInDriver="pos_driver";
		memoryPointsGetInDriverDir="pos_driver_dir";
		memoryPointAim="zamerny";
		memoryPointTaskMarkerOffset[]={0,0.30000001,0};
		memoryPointTaskMarker="TaskMarker_1_pos";
		memoryPointDriverOptics="pos_driver_view";
		memoryPointGunnerOptics="pos_gunner_view";
		sensorPosition="sensorPos";
		threat[]={1,0,0};
		accuracy=0.12;
		extCameraPosition[]={0,1,-2};
		cost=2000000;
		selectionClan="clan";
		crewVulnerable=0;
		fuelExplosionPower=0;
		maxSpeed=0;
		terrainCoef=0;
		simulation="carx";
		driveOnComponent[]=
		{
			"Slide"
		};
		collisionEffect="";
		armor=1;
		armorStructural=0;
		explosionShielding=100;
		damageResistance=0.0040000002;
		damageEffect="UAVDestructionEffects";
		epeImpulseDamageCoef=0;
		crewExplosionProtection=100;
		radarTarget=1;
		radarTargetSize=1;
		radarType=8;
		visualTarget=1;
		visualTargetSize=1;
		irScanGround=1;
		irTarget=1;
		irTargetSize=1;
		type=0;
		formationTime=5;
		formationX=20;
		formationZ=20;
		receiveRemoteTargets=0;
		reportRemoteTargets=0;
		reportOwnPosition=1;
		slingLoadCargoMemoryPoints[]={};
		class Library
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		transportMaxBackpacks=0;
		transportSoldier=0;
		numberPhysicalWheels=4;
		/*class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"TG_PortableTurretBox_GDI_BP_01"
			};
		};*/
		/*class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=80;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						aimDown=0;
						maxFogSeeThrough=0.94999999;
						nightRangeCoef=1;
						allowsMarking=1;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=80;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						maxFogSeeThrough=0.94999999;
						nightRangeCoef=1;
						allowsMarking=1;
						color[]={0,1,0,1};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};*/
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1";
				steering=1;
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.35";
				mass=150;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=50000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=2066;
				springStrength=201234;
				springDamperRate=20600.6;
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
				boneName="wheel_1_2";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=500000;
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class RR: RF
			{
				boneName="wheel_2_2";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=500000;
			};
		};
		soundEngineOnInt[]=
		{
			"z\MET\addons\units\bha\vehicles\turrets\sounds\defense_alarm.ogg",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"z\MET\addons\units\bha\vehicles\turrets\sounds\defense_alarm.ogg",
			1,
			1,
			200
		};
		soundEngineOffInt[]={};
		soundEngineOffExt[]={};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				selectionFireAnim="zasleh";
				memoryPointGun[]=
				{
					"usti hlavne",
					"usti hlavne 2"
				};
				gunBeg="usti hlavne, usti hlavne 2";
				gunEnd="konec hlavne, konec hlavne 2";
				body="mainTurret";
				gun="mainGun";
				startEngine=1;
				gunnerCompartments="Compartment2";
				gunnerType="BHA_UAV_AI";
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				minElev=-35;
				maxElev=35;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				usePip=2;
				maxHorizontalRotSpeed=2.5;
				maxVerticalRotSpeed=2.5;
				stabilizedInAxes=3;
				weapons[]=
				{
					"BHA_SentryGun_Weapon"
				};
				magazines[]=
				{
					"MET_FHR1_Turret_mag",
					"MET_FHR1_Turret_mag",
					"MET_FHR1_Turret_mag",
					"MET_FHR1_Turret_mag",
					"MET_FHR1_Turret_mag",
					"MET_FHR1_Turret_mag"
				};
				soundServo[]=
				{
					"z\MET\addons\units\bha\vehicles\turrets\sounds\turret_turn.ogg",
					"db3",
					1,
					40
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical.wss",
					0.15848932,
					1,
					30
				};
				LockDetectionSystem=8;
				incomingMissileDetectionSystem=16;
				turretInfoType="RscOptics_MBT_01_gunner";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				gunnerAction="gunner_static_low01";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				memoryPointGunnerOptics="pos_gunner_view";
				memoryPointGunnerOpticsDir="pos_gunner_view_dir";
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				forceHideGunner=1;
				gunnerforceoptics=1;
				gunnerOutForceOptics=1;
				viewgunnerinExternal=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				castGunnerShadow=0;
				allowTabLock=1;
				gunnerCanSee=31;
				showAllTargets="2 + 4";
				showCrewAim=4;
				receiveRemoteTargets=0;
				reportRemoteTargets=0;
				reportOwnPosition=1;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						//thermalMode={6,7};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						defaultDisplay="EmptyDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								range[]={80,80,80,80};
								resource="RscCustomInfoMiniMap";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={80,80,80,80};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								range[]={80,80,80,80};
								resource="RscCustomInfoMiniMap";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={80,80,80,80};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				class AttributeValues
				{
					RadarUsageAI=1;
				};
				class Reflectors
				{
				};
			};
		};
		/*hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class TextureSources
		{
		};
		textureList[]={};*/
		class AnimationSources
		{
			class spinanim
			{
				source="reload";
				weapon="BHA_SentryGun_Weapon";
			};
			class unfold
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
		};
		class Exhausts
		{
		};
		class Reflectors
		{
		};
		class EventHandlers
		{
			init="enableCamShake false; _this spawn BHA_fnc_unlimited_mags;";
			//engine="params [""_veh"", ""_eng""]; if (_eng) then {_veh animateSource [""unfold"",2.0,0.8]; } else {_veh animateSource [""unfold"",0,0.8]; };";
			engine="params [""_veh"", ""_eng""]; if (_eng) then {_veh animateSource [""unfold"",1,0.8]; } else {_veh animateSource [""unfold"",0,0.8]; };";
			killed="_this spawn BHA_fnc_wreck_delete; _this spawn BHA_fnc_crew_ai_vincible;";
			getout="_this spawn BHA_fnc_crew_vincible;";
			getin="_this spawn BHA_fnc_crew_invincible;";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
			// _this spawn BHA_fnc_unlimited_mags;
		};
	};
	class BHA_CeilingTurret: BHA_CeilingTurret_Base
	{
		author="Tiberian Genesis";
		scope=2;
		scopeCurator=2;
		_generalMacro="BHA_CeilingTurret";
		faction="BHA_Units";
		editorPreview="z\MET\addons\units\bha\vehicles\turrets\data\ui\ico_vorlage.jpg";
		editorSubcategory="BHA_Statics";
		icon="z\MET\addons\units\bha\vehicles\turrets\data\ui\map_gdi_vulcan_ca.paa";
		picture="z\MET\addons\units\bha\vehicles\turrets\data\ui\gdi_vulcan_ca.paa";
		displayName="Ceiling Turret";
		hasDriver=1;
		hasCommander=0;
		hasGunner=1;
		maxSpeed=0;
		simulation="carX";
		weapons[]={};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_Static_MG_s"
				};
				speechPlural[]=
				{
					"veh_Static_MG_p"
				};
			};
		};
		textSingular="GDI Turret";
		textPlural="GDI Turrets";
		nameSound="veh_Static_MG_s";
		getInRadius=0;
		isUav=1;
		crew="BHA_UAV_AI";
		side=2;
		uavCameraGunnerPos="pos_gunner_view";
		uavCameraGunnerDir="pos_gunner_view_dir";
		unitInfoType="RscUnitInfoTank";
		model="z\MET\addons\units\bha\vehicles\turrets\models\Ceiling_turret\gdi_ceiling_turret.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		threat[]={1,0,0};
		cost=2000000;
		accuracy=0.12;
		memoryPointAim="zamerny";
		extCameraPosition[]={0,1,-2};
		canFloat=0;
		animated=1;
		fuelExplosionPower=0;
		damageEffect="UAVDestructionEffects";
		enableGPS=1;
		radartype=2;
		radarTarget=1;
		radarTargetSize=1;
		visualTarget=1;
		visualTargetSize=1;
		irTarget=1;
		irTargetSize=1;
		reportRemoteTargets=0;
		receiveRemoteTargets=0;
		reportOwnPosition=1;
		type=0;
		lockDetectionSystem=0;
		incomingMissileDetectionSystem=16;
		soundEngineOnInt[]=
		{
			"z\MET\addons\units\bha\vehicles\turrets\sounds\defense_alarm.ogg",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"z\MET\addons\units\bha\vehicles\turrets\sounds\defense_alarm.ogg",
			1,
			1,
			200
		};
		soundEngineOffInt[]={};
		soundEngineOffExt[]={};
		/*class Attributes
		{
			class EnableDisableScan
			{
				displayName="Enable Scan";
				tooltip="Forces Unit to scan location";
				property="EnableDisableScan";
				control="Checkbox";
				defaultValue=0;
				expression="if(_value) then {[_this] spawn TG_fnc_scan} else {};";
			};
		};*/
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=10;
							maxRange=50;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=10;
							maxRange=50;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=50;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						aimDown=0;
						maxFogSeeThrough=0.85000002;
						nightRangeCoef=1;
						allowsMarking=1;
					};
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="TG_GDI_SentryGun_Weapon";
			};
			class ceiling_source_fake
			{
				source="user";
				animPeriod=0.1;
				initPhase=0.83999997;
			};
			class ceiling_source
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
				sound="TG_Doors_Open_Close";
				soundPosition="zamerny";
			};
		};
		class EventHandlers
		{
			init="_this spawn TG_fnc_initUnlimitedMagsAI; _this spawn TG_fnc_initFixPos;";
			engine="params [""_veh"", ""_eng""]; if (_eng) then {_veh animateSource [""ceiling_source"",0.84,0.8]; } else {_veh animateSource [""ceiling_source"",0,0.8]; };";
			killed="_this spawn TG_fnc_initWreckDelete;";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
		};
		armor=1;
		armorStructural=0;
		explosionShielding=100;
		damageResistance=0.0040000002;
		class Hitpoints
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minelev=-90;
				maxelev=25;
				minturn=-180;
				maxturn=180;
				initElev=0;
				initTurn=0;
				maxHorizontalRotSpeed=2.7;
				maxVerticalRotSpeed=2.7;
				soundServo[]=
				{
					"tg_sounds\all\turret_turn.ogg",
					"db3",
					1,
					40
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical.wss",
					0.15848932,
					1,
					30
				};
				hasGunner=1;
				gunnerName="$STR_A3_Mk21_operator_displayName";
				primary=1;
				primaryGunner=1;
				startEngine=1;
				enableManualFire=1;
				turretinfotype="RscOptics_APC_Tracked_01_gunner";
				forceHideGunner=1;
				gunnerforceoptics=1;
				gunnerOutForceOptics=1;
				viewgunnerinExternal=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				castGunnerShadow=0;
				showAllTargets=2;
				body="MainTurret";
				gun="MainGun";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				uavCameraGunnerPos="pos_gunner_view";
				uavCameraGunnerDir="pos_gunner_view_dir";
				memoryPointGunnerOptics="pos_gunner_view";
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner";
				selectionFireAnim="zasleh";
				memoryPointGun[]=
				{
					"usti hlavne",
					"usti hlavne 2"
				};
				gunBeg="usti hlavne, usti hlavne 2";
				gunEnd="konec hlavne, konec hlavne 2";
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				weapons[]=
				{
					"TG_GDI_SentryGun_Weapon"
				};
				magazines[]=
				{
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine",
					"TG_GDI_SentryGun_Magazine"
				};
				optics=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				class Reflectors
				{
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						defaultDisplay="EmptyDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								range[]={50,50,50,50};
								resource="RscCustomInfoMiniMap";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={50,50,50,50};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								range[]={50,50,50,50};
								resource="RscCustomInfoMiniMap";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={50,50,50,50};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				class AttributeValues
				{
					RadarUsageAI=1;
				};
			};
		};
	};
	/*class BHA_T202_AutoTurret_Base: StaticMGWeapon
	{
		author="Hazmat"; // Self Explanatory
		scope=1; // The global scope. This makes it invisible, But can still be inhereted from
		scopeCurator=1; // Scope for Zeus. 2 is visible, 1 is hidden but can still be inhereted, 0 hidden in the ether and cannot be inhereted from
		_generalMacro="BHA_T202_AutoTurret"; // The class name, used by the engine (?)
		faction="BHA_Units"; // The faction this vehicle belongs to
		editorSubcategory="BHA_Statics"; // Editor Subcategory
		editorPreview="z\MET\addons\units\bha\vehicles\turrets\data\ui\ico_vorlage.jpg"; // Usually a JPG (for some fuck ass reason). Appears in Eden
		icon="z\MET\addons\units\bha\vehicles\turrets\data\ui\map_gdi_vulcan_ca.paa"; // Top Down appearance for unit icons, Radar, and Map
		picture="z\MET\addons\units\bha\vehicles\turrets\data\ui\gdi_vulcan_ca.paa"; // No idea why this exists yet
		displayName="T20E6 Auto Turret"; // You don't need this comment
		isUav=1; //Makes the unit a UAV for Remote Controlling. It can still auto engage, just like them fuck ass UAVs.
		getInRadius=0; // Prevents Entry
		uavCameraGunnerPos="pos_gunner_view"; //Gunner Camera
		uavCameraGunnerDir="pos_gunner_view_dir"; //Gunner Camera Direction
		explosionEffect=""; //It doesn't explode
		model="z\MET\addons\units\bha\vehicles\turrets\models\portable_turret\portable_turret.p3d";
		damageEffect="UAVDestructionEffects";
		cost=15000; //The associated "Threat Level"
		memoryPointAim="zamerny";
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		enableGPS=1;
		radartype=2;
		radarTarget=1;
		radarTargetSize=1;
		visualTarget=1;
		visualTargetSize=1;
		irTarget=1;
		irTargetSize=1;
		reportRemoteTargets=0;
		receiveRemoteTargets=0;
		reportOwnPosition=1;
		type=0;
		lockDetectionSystem=0;
		incomingMissileDetectionSystem=16;
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]={};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=80;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						aimDown=0;
						maxFogSeeThrough=0.94999999;
						nightRangeCoef=1;
						allowsMarking=1;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
						};
						class GroundTarget
						{
							minRange=10;
							maxRange=80;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=80;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						maxFogSeeThrough=0.94999999;
						nightRangeCoef=1;
						allowsMarking=1;
						color[]={0,1,0,1};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="BHA_SentryGun_Weapon_Heavy";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="z\MET\addons\weapons\scopes\optics_gunner_s1_n_ca";
				gunnerForceOptics=1;
				minelev=-25; // Minimum Elevation
				maxelev=45; // Maximum Elevation
				minturn=-180; // Minimum Turn (Basically max Left)
				maxturn=180; // Maximum Turn (Max Right)
				soundServo[]=
				{
					"tg_sounds\all\turret_turn.ogg",
					"db3",
					1,
					40
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1,
					30
				};
				weapons[]=
				{
					"BHA_SentryGun_Weapon_Heavy"
				};
				magazines[]=
				{
					"MET_T20AC_Turret_mag",
					"MET_T20AC_Turret_mag",
					"MET_T20AC_Turret_mag",
					"MET_T20AC_Turret_mag"
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				class HitPoints
				{
					class HitGun
					{
						armor=1;
						material=-1;
						name="gun";
						visual="autonomous_unhide";
						passThrough=0;
						radius=0.2;
					};
					class HitTurret: HitGun
					{
						armor=1;
						class DestructionEffects
						{
							class Smoke
							{
								simulation="particles";
								type="WeaponWreckSmoke";
								position="destructionEffect";
								intensity=1;
								interval=1;
								lifeTime=5;
							};
						};
					};
				};
			};
		};
	};
	class BHA_T202_AutoTurret: BHA_T202_AutoTurret_Base
	{
		author="Hazmat";
		scope=2;
		scopeCurator=2;
		crew="BHA_UAV_AI";
		side=2;
		displayName="T20E6 Auto Turret"; // You don't need this comment
	};*/
	class ls_vehicle_autoTurret_base
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class BHA_FHR2_AutoTurret: ls_vehicle_autoTurret_base
	{
        scope = 2;
        author = "Hazmat";
		displayName = "FHR-2 Sentry Gun";
        side = 2;
		faction="BHA_Units";
		editorSubcategory="BHA_Statics";
        crew = "I_UAV_AI_F";

        class AnimationSources {
            class muzzle_source {
                source = "reload";
                weapon = "BHA_SentryGun_Weapon_Single";
            };
            class muzzleflash {
                source = "reload";
                weapon = "BHA_SentryGun_Weapon_Single";
            };
            class muzzle_source_rot {
                source = "ammorandom";
                weapon = "BHA_SentryGun_Weapon_Single";
            };
            class revolving {
                source = "revolving";
                weapon = "BHA_SentryGun_Weapon_Single";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = 
				{
                    "BHA_SentryGun_Weapon_Single"
                };
                magazines[] = 
				{
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag",
                    "MET_FHR1_Turret_mag"
                };
            };
        };
	};
	class BHA_SBB4_AutoTurret: ls_vehicle_autoTurret_base
	{
        scope = 2;
        author = "Hazmat";
		displayName = "SBB4 Auto Turret";
        side = 2;
		faction="BHA_Units";
		editorSubcategory="BHA_Statics";
        crew = "I_UAV_AI_F";

        class AnimationSources {
            class muzzle_source {
                source = "reload";
                weapon = "BHA_SentryGun_Weapon_Shotgun";
            };
            class muzzleflash {
                source = "reload";
                weapon = "BHA_SentryGun_Weapon_Shotgun";
            };
            class muzzle_source_rot {
                source = "ammorandom";
                weapon = "BHA_SentryGun_Weapon_Shotgun";
            };
            class revolving {
                source = "revolving";
                weapon = "BHA_SentryGun_Weapon_Shotgun";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = 
				{
                    "BHA_SentryGun_Weapon_Shotgun"
                };
                magazines[] = 
				{
                    "MET_SBB4_mag",
                    "MET_SBB4_mag",
                    "MET_SBB4_mag",
                    "MET_SBB4_mag",
                    "MET_SBB4_mag",
                    "MET_SBB4_mag",
                    "MET_SBB4_mag",
                    "MET_SBB4_mag",
                    "MET_SBB4_mag",
                    "MET_SBB4_mag"
                };
            };
        };
	};
};