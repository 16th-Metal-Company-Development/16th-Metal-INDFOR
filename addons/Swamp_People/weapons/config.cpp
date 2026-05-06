class CfgPatches
{
	class metal_swamp_weap
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"Metal_Swamp_FA11",
			"MET_Swamp_M41",
			"MET_Swamp_IQA11"
		};
		magazines[]=
		{
			"MET_FA11_mag",
			"MET_M41_mag",
			"MET_IQA11_mag"
		};
		requiredAddons[]=
		{
			//"IDA_INDEP"
			//"metal_inf_weap"
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class 3AS_recoil_default;
	class MET_recoil_Z6: recoil_default
	{
		muzzleOuter[]={0,0.1,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.090000004};
		temporary=0.0060000001;
	};
};
class UGL_F;
class Mode_SemiAuto;
class Mode_Burst: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Single;
class close;
class GunParticles;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class arifle_MX_Base_F;
	class SFA_rifle_base;
	class Pistol_Base_F;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class LMG_Mk200_F;
	class IDA_stun_muzzle;
	class 3AS_PLX1_F;
	class IDA_FA11
	{
		class WeaponSlotsInfo;
	};
	class MET_Swamp_optic_DC15C_F: ItemCore
	{
		author="$STR_3as_Studio";
		scope=1;
		displayName="FA-11 Scope";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_MRCO_ca.paa";
		model="\3AS\3AS_Weapons\Republic\ACC\3AS_acco_DC15C_Scope_F.p3d";
		descriptionShort="$STR_3AS_Weapons_Republic_Optic_DC15C_Scope_DesShort";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			opticType=1;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_green_med.p3d";
			class OpticsModes
			{
				class cq
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class scope
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsRadialBlur1",
						"OpticsBlur1"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.050000001;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_green_med.p3d"
					};
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				/*class HoloScope: HoloSight
				{
					opticsID=3;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.050000001;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=550;
					weaponInfoType="RscWeaponEmpty";
				};*/
			};
		};
		inertia=0.1;
	};
	class Metal_Swamp_FA11: IDA_FA11
	{
		IDA_StunWeapon="Metal_Swamp_FA11_Stun";
		author="Indecisive Armoury Team";
		scope=1;
		displayName="[Swamp] FA-11 Heavy Blaster Rifle";
		descriptionShort="";
		magazines[]=
		{
			"MET_FA11_mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"SlowAuto",
			"FullAuto"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		class EGLM: UGL_F
		{
			displayName="Rifle grenade";
			descriptionShort="";
			weaponInfoType="RscWeaponZeroing";
			magazines[]=
			{
				"Met_Swamp_HE_RifleGrenade"
			};
			recoil="IDA_recoil_ScatterBlaster";
			reloadAction="GestureReloadMXUGL";
			magazineWell[]={};
		};
		class Single: Mode_SemiAuto
		{
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
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.2;
			dispersion=0.00044;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class SlowAuto: Mode_FullAuto
		{
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
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1.25,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\FA11.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			textureType="burst";
			reloadTime=0.171428571;
			dispersion=0.00044;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: SlowAuto
		{
			textureType="fullAuto";
			reloadTime=0.0857142857;
			dispersion=0.00044;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"optic_Arco_AK_blk_F",
					"optic_MRCO",
					"MET_Swamp_optic_DC15C_F"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class Metal_Swamp_FA11_Stun: Metal_Swamp_FA11
	{
		IDA_StunWeapon="Metal_Swamp_FA11";
		scope=1;
		canShootInWater=0;
		fireLightDiffuse[]={0,0,1};
		baseWeapon="Metal_Swamp_FA11_Stun";
		magazines[]=
		{
			"IDA_Stun_Cell"
		};
		muzzles[]=
		{
			"Stun"
		};
		class Stun: IDA_stun_muzzle
		{
		};
		weaponInfoType="RscWeaponZeroing";
	};
	class IDA_M41
	{
		class WeaponSlotsInfo;
	};
	class MET_Swamp_M41: IDA_M41
	{
		IDA_StunWeapon="MET_Swamp_M41_Stun";
		author="Indecisive Armoury Team";
		scope=1;
		inertia=0;
		canShootInWater=1;
		displayName="[Swamp] M-41 Heavy Repeating Blaster";
		descriptionShort="";
		WBK_UseHeavyWeaponFramework = "true";	
		magazines[]=
		{
			"MET_M41_mag"
		};
		magazineWell[]={};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"FullAuto",
			"FasterAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
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
					"\Indecisive_Armoury_Sounds\INDEP\M41.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\M41.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\M41.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\M41.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\M41.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\M41.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			textureType="burst";
			reloadTime=0.15000001;
			dispersion=0.00050000002;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class FasterAuto: FullAuto
		{
			textureType="fullAuto";
			reloadTime=0.1;
			dispersion=0.00050000002;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class close: FullAuto
		{
			reloadTime=0.1;
			burst=12;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.3;
			midRange=50;
			midRangeProbab=0.9;
			maxRange=100;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=12;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			minRange=50;
			minRangeProbab=0.8;
			midRange=100;
			midRangeProbab=0.9;
			maxRange=150;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			reloadTime=0.15000001;
			burst=9;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=100;
			minRangeProbab=0.8;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=300;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=6;
			aiRateOfFire=3;
			aiRateOfFireDistance=400;
			minRange=200;
			minRangeProbab=1;
			midRange=400;
			midRangeProbab=0.85;
			maxRange=600;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			reloadTime=0.15;
			burst=6;
			aiRateOfFire=5;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=1000;
			midRangeProbab=0.7;
			maxRange=1500;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=1000;
		};
	};
	class MET_Swamp_M41_Stun: MET_Swamp_M41
	{
		IDA_StunWeapon="MET_Swamp_M41_Stun";
		scope=1;
		WBK_UseHeavyWeaponFramework="false";
		canShootInWater=0;
		fireLightDiffuse[]={0,0,1};
		baseWeapon="MET_Swamp_M41_Stun";
		magazines[]=
		{
			"IDA_Stun_Cell"
		};
		muzzles[]=
		{
			"Stun"
		};
		class Stun: IDA_stun_muzzle
		{
		};
		weaponInfoType="RscWeaponZeroing";
	};
	class IDA_IQA11
	{
		class WeaponSlotsInfo;
	};
	class MET_Swamp_IQA11: IDA_IQA11
	{
		scope=1;
		displayName="[Swamp] IQA-11 Targeting Blaster";
		descriptionShort="";
		baseWeapon="MET_Swamp_IQA11";
		cursor="srifle";
		magazines[]=
		{
			"MET_IQA11_mag"
		};
		magazineWell[]={};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
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
					"\Indecisive_Armoury_Sounds\INDEP\IQA11.ogg",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\IQA11.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.60000002;
			dispersion=9.9999997e-005;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_Swamp_TargetingScope"
				};
				iconPicture="";
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"bipod_01_F_blk"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_Swamp_TargetingScope";
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class optic_lrps;
	class MET_Swamp_TargetingScope: optic_lrps
	{
		author="Indecisive Armoury Team";
		scope=1;
		displayname="FP-1 Targeting Scope";
		picture="\Indecisive_Armoury_Weapons_INDEP\Data\TargetingScope\TargetingScope_ui.paa";
		model="\Indecisive_Armoury_Weapons_INDEP\Data\TargetingScope\Model\IDA_TargetingScope.p3d";
		memoryPointCamera="eye";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_green_med.p3d";
			allowedSlots[]={801,701,901};
			class OpticsModes
			{
				class IDA_TargetingScope
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsRadialBlur1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.041999999;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
					discreteInitIndex=0;
					//discretefov[]={0.125,0.041999999};
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="opticView";
					visionMode[]={};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
	};
	class ShdwCmpny_SPASS_Optre_F;
	class MET_Swamp_KS23: ShdwCmpny_SPASS_Optre_F
	{
		scope = 1;
		displayName="[Swamp] KS-23 Shotgun";
		magazines[]=
		{
			"MET_KS23_mag",
			"MET_IQA11_mag"
		};
		magazineWell[]={};
	};
};
class CfgMagazines
{
	class JLTS_DC15A_mag;
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 100Rnd_65x39_caseless_mag;
	class 30Rnd_65x39_caseless_mag;
	class MET_DC15x_mag;
	class MET_blaster_pistol_battery;
	class MET_DC15A_mag;
	class MET_HE_Grenade;
	class MET_DC15L_mag;
	class SFA_Base_mag;
	class 3AS_JLTS_MK39_AA;
	class 1Rnd_HE_Grenade_shell;
	class Met_Swamp_HE_RifleGrenade: 1Rnd_HE_Grenade_shell
	{
		author="Indecisive Armoury Team";
		count=1;
		displayName="1Rnd Impact Rifle grenade";
		descriptionShort="Impact Rifle grenade";
		ammo="Met_Swamp_RifleGrenade";
		mass=10;
	};
	class MET_FA11_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_g.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=20;
		displayName="[16th] FA-11 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the FA-11";
		ammo="MET_blasterbolt_br_Green";
		tracersEvery=1;
	};
	class MET_M41_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_g.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=200;
		displayName="[16th] M41 Energy Cell";
		displayNameShort="M41 Energy Cell";
		descriptionShort="Energy cell for the M41";
		ammo="MET_blasterbolt_Green";
		mass = 50;
		tracersEvery=1;
	};
	class MET_IQA11_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_g.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=10;
		displayName="[16th] IQA-11 Energy Cell";
		displayNameShort="IQA-11 Energy Cell";
		descriptionShort="Energy cell for the IQA-11";
		ammo="MET_blasterbolt_dmr_green";
		tracersEvery=1;
		initSpeed = 1250;
		mass=20;
	};
	class MET_KS23_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pellets_y.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=4;
		displayName="[16th] KS-23 Shell";
		displayNameShort="KS-23 Shell";
		descriptionShort="Shell for the KS-23.";
		ammo="MET_KS23_Shot_Green";
		tracersEvery=1;
		mass=20;
	};
};
class CfgLights
{
	class MET_BlasterboltLight_Blue;
	class MET_plasmaGreen_medbig: MET_BlasterboltLight_Blue
	{
		diffuse[]={0,252,0,1};
		intensity=15000;
	};
};
class MET_plasma_Green_MedBig
{
	class MET_Green_plasma
	{
		simulation="light";
		type="MET_plasmaGreen_medbig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=60;
	};
};
class CfgAmmo
{
	class MET_HE_LauncherGrenade;
	class Met_Swamp_RifleGrenade: MET_HE_LauncherGrenade
	{
		effectflare="FlareShell";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		fuseDistance=0;
		ExplosionEffects="GrenadeExplosion";
		CraterEffects="GrenadeCrater";
		Lightcolor[]={0,1,0};
		model="Indecisive_Armoury_Ammos\Data\RifleGrenade\IDA_RifleGrenade.p3d";
	};
	class 3AS_PlasmaBase;
	class MET_slug_green: 3AS_PlasmaBase
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		lightcolor[]={0,1,0};
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		hit=90;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1;
		timetolive=4;
		tracerendtime=4;
	};
	class MET_KS23_Shot_Green: MET_slug_green
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
		hit=75;
		simulationStep=9.9999997e-005;
		cartridge="";
		submunitionAmmo="MET_ks23_subminition_green";
		submunitionConeType[]=
		{
			"poissondisc",
			5
		};
		submunitionConeAngle=0.3;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
		cost=1;
	};
	class MET_ks23_subminition_green: MET_slug_green
	{
		hit=75;
		deflecting=2;
	};
};