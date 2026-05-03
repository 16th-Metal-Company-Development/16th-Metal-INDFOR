class UGL_F;
class Mode_SemiAuto;
class Mode_Burst : Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto : Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};

class CfgWeapons
{
	// DLA-13
	class SFA_DLA13;
	class MET_PDF_DLA13_Base : SFA_DLA13
	{
		scope = 0;
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_repairTime = 30;
		magazineWell[] =
		{
			"MET_PDF_DLA13_MagWell"
		};
		magazines[] =
		{
			"MET_PDF_DLA13_Mag"
		};
		reloadAction = "GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[] =
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.wss",
			5,
			1,
			100
		};
		aimTransitionSpeed = 0.5; //higher = Faster Aim Transition
		dexterity = 0.75; //higher = More Maneuverable
		distanceZoomMin = 100;
		distanceZoomMax = 300;

		ace_overheating_mrbs = 3000;
		ace_overheating_slowdownFactor = 1;
		ace_overheating_allowSwapBarrel = 0;
		ace_overheating_dispersion = 0.75;

		modes[] =
		{
			"Single",
			"Burst",
			"FullAuto",
			"close",
			"short",
			"medium",
		};
		class FullAuto : Mode_FullAuto
		{
			reloadTime = 0.1;
			dispersion = 0.02401;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			aiRateOfFire = 1e-006;
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				beginwater1[] =
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					0.33
				};
				soundBeginwater[] =
				{
					"beginwater1",
					0.33
				};
			};
		};
		class Burst : Mode_Burst
		{
			burst = 3;
			reloadTime = 0.1;
			dispersion = 0.02401;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				beginwater1[] =
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					0.33
				};
				soundBeginwater[] =
				{
					"beginwater1",
					0.33
				};
			};
		};
		class Single : Mode_SemiAuto
		{
			reloadTime = 0.12;
			dispersion = 0.00401;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				beginwater1[] =
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					0.33
				};
				soundBeginwater[] =
				{
					"beginwater1",
					0.33
				};
			};
		};

		aiDispersionCoefY = 8;
		aiDispersionCoefX = 5;

		modelOptics = "z\MET\addons\weapons\scopes\big_cross_red_full.p3d";

		class OpticsModes
		{
			class IronSight
			{
				opticsID = 0;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsPPEffects[] =
				{
					"Default"
				};
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.75;
				opticsZoomMax = 0.75;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
			class HoloSight : IronSight
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsFlare = 0;
				opticsPPEffects[] =
				{
					"Default"
				};
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 0.75;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
		caseless[] =
		{
			"",
			1,
			1,
			1
		};
		soundBullet[] =
		{
			"caseless",
			1
		};
		drySound[] =
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty.wss",
			2,
			1,
			20
		};
	};

	class MET_PDF_DLA13 : MET_PDF_DLA13_Base
	{
		JLTS_friedItem = "MET_PDF_DLA13_Fried";
		displayname = "[PDF] DLA-13 Rifle";
		descriptionShort = "Old Republic Rifle";
		baseWeapon = "MET_PDF_DLA13";
		scope = 2;
		model = "\SFA_Main\SFA_Weapons_S\DLA13\DLA13.p3d";
		picture = "\SFA_Main\SFA_Weapons_S\DLA13\data\ui\DLA13_ui.paa";
		UiPicture = "\SFA_Main\SFA_Weapons_S\DLA13\data\ui\DLA13_ui.paa";
	};

	class MET_PDF_DLA13_Carbine : MET_PDF_DLA13_Base
	{
		JLTS_friedItem = "MET_PDF_DLA13_Carbine_Fried";
		displayname = "[PDF] DLA-13 Carbine";
		descriptionShort = "Old Republic Rifle";
		baseWeapon = "MET_PDF_DLA13_Carbine";
		scope = 2;
		model = "\SFA_Main\SFA_Weapons_S\DLA13\DLA13_c.p3d";
		picture = "\SFA_Main\SFA_Weapons_S\DLA13\data\ui\DLA13_ui.paa";
		UiPicture = "\SFA_Main\SFA_Weapons_S\DLA13\data\ui\DLA13_ui.paa";

		//More Manueverable
		aimTransitionSpeed = 0.75; //higher = Faster Aim Transition
		dexterity = 1.5; //higher = More Maneuverable

		class WeaponSlotsInfo;
	};

	class MET_PDF_DLA13_GL : MET_PDF_DLA13_Base
	{
		JLTS_friedItem = "MET_PDF_DLA13_GL_Fried";
		displayname = "[PDF] DLA-13 Carbine (GL)";
		descriptionShort = "Old Republic Rifle";
		baseWeapon = "MET_PDF_DLA13_GL";
		scope = 2;
		model = "\SFA_Main\SFA_Weapons_S\DLA13\DLA13_gl.p3d";
		picture = "\SFA_Main\SFA_Weapons_S\DLA13\data\ui\DLA13_ui.paa";
		UiPicture = "\SFA_Main\SFA_Weapons_S\DLA13\data\ui\DLA13_ui.paa";

		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "\SFA_Main\SFA_Weapons_S\DLA13\data\DLA13_GL_co.paa" };

		muzzles[] = { "this","EGLM" };

		//More Manueverable
		aimTransitionSpeed = 0.75; //higher = Faster Aim Transition
		dexterity = 1.5; //higher = More Maneuverable

		class WeaponSlotsInfo;

		class EGLM : UGL_F
		{
			displayName = "Grenade Launcher";
			descriptionShort = "Grenade Launcher";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] =
			{
				"MET_PDF_DLA13_Grenade"
			};
			magazineWell[] =
			{
			};
			cameraDir = "OP_look";
			discreteDistance[] = { 100,200,300,400 };
			discreteDistanceCameraPoint[] = {
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] =
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload.wss",
				1,
				1,
				10
			};
		};
	};

	// DLA-13 Fried
	class MET_PDF_DLA13_Fried : MET_PDF_DLA13
	{
		baseWeapon = "MET_PDF_DLA13_Fried";
		displayName = "[PDF] Fried DLA-13 Rifle";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		magazines[] = {};
		magazineWell[] = {};
		JLTS_isFried = 1;
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};

	class MET_PDF_DLA13_Carbine_Fried : MET_PDF_DLA13_Carbine
	{
		baseWeapon = "MET_PDF_DLA13_Carbine_Fried";
		displayName = "[PDF] Fried DLA-13 Carbine";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		magazines[] = {};
		magazineWell[] = {};
		JLTS_isFried = 1;
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};

	class MET_PDF_DLA13_GL_Fried : MET_PDF_DLA13_GL
	{
		baseWeapon = "MET_PDF_DLA13_Carbine_Fried";
		displayName = "[PDF] Fried DLA-13 Carbine (GL)";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		magazines[] = {};
		magazineWell[] = {};
		JLTS_isFried = 1;
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};

	// KE-7
	class SFA_KE7;
	class MET_PDF_KE7 : SFA_KE7 
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		LTS_friedItem = "MET_PDF_KE7_Fried";
		JLTS_repairTime = 30;	
		displayName = "[PDF] KE-7 Pistol";
		author = "Chet";
		baseWeapon = "MET_PDF_KE7";
		reloadAction = "GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[] =
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.wss",
			5,
			1,
			100
		};
		drySound[] =
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		magazines[] =
		{
			"MET_PDF_KE7_Mag"
		};
		magazineWell[] =
		{
			"MET_PDF_KE7_MagWell"
		};

	};

	// KE-7 Fried
	class MET_PDF_KE7_Fried : MET_PDF_KE7
	{
		baseWeapon = "MET_PDF_KE7_Fried";
		displayName = "[PDF] Fried KE-7 Pistol";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		magazines[] = {};
		magazineWell[] = {};
		JLTS_isFried = 1;
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};

	// T20
	class SFA_T20_rifle;
	class MET_PDF_T20 : SFA_T20_rifle
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		LTS_friedItem = "MET_PDF_T20_Fried";
		JLTS_repairTime = 30;
		displayName = "[PDF] T20 Light Repeating Blaster";
		author = "Chet";
		baseWeapon = "MET_PDF_T20";
		reloadAction = "GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[] =
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.wss",
			5,
			1,
			100
		};
		magazines[] =
		{
			"MET_PDF_T20_Mag"
		};
		magazineWell[] =
		{
			"MET_PDF_T20_MagWell"
		};
		
		aimTransitionSpeed = 0.6; //higher = Faster Aim Transition
		dexterity = 0.6; //higher = More Maneuverable
		distanceZoomMin = 300;
		distanceZoomMax = 300;

		ace_overheating_mrbs = 3000;
		ace_overheating_slowdownFactor = 1;
		ace_overheating_allowSwapBarrel = 0;
		ace_overheating_dispersion = 0.75;

		modes[] =
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium",
		};
		class FullAuto : Mode_FullAuto
		{
			reloadTime = 0.15;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;

			soundContinuous = 0;
			soundBurst = 0;

			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			aiRateOfFire = 1e-006;
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"T20_Shot_SoundSet"
				};
			};
		};
		class Single : Mode_SemiAuto
		{
			reloadTime = 0.12;
			dispersion = 0.00401;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"T20_Shot_SoundSet"
				};
			};
		};

		aiDispersionCoefY = 8;
		aiDispersionCoefX = 5;

		caseless[] =
		{
			"",
			1,
			1,
			1
		};
		soundBullet[] =
		{
			"caseless",
			1
		};
		drySound[] =
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty.wss",
			2,
			1,
			20
		};
	};

	// Fried T20
	class MET_PDF_T20_Fried : MET_PDF_T20
	{
		baseWeapon = "MET_PDF_T20_Fried";
		displayName = "[PDF] Fried T20 Light Repeating Blaster";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		magazines[] = {};
		magazineWell[] = {};
		JLTS_isFried = 1;
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};

	// 773
	class IDA_773Firepuncher;
	class MET_PDF_773 : IDA_773Firepuncher
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		LTS_friedItem = "MET_PDF_773_Fried";
		JLTS_repairTime = 30;
		displayName = "[PDF] 773-Firepuncher Rifle";
		author = "Chet";
		magazines[] = { "IDA_Blaster_Cell_Power4_10Rnd_Red" };
	};

	// Fried 773
	class MET_PDF_773_Fried : MET_PDF_773
	{
		baseWeapon = "MET_PDF_773_Fried";
		displayName = "[PDF] Fried 773-Firepuncher Rifle";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		magazines[] = {};
		magazineWell[] = {};
		JLTS_isFried = 1;
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
};

class CfgMagazineWells
{
	class MET_PDF_DLA13_MagWell
	{
		MET_Magazines[] =
		{
			"MET_PDF_DLA13_Mag"
		};
	};

	class MET_PDF_KE7_MagWell
	{
		MET_Magazines[] =
		{
			"MET_PDF_KE7_Mag"
		};
	};

	class MET_PDF_T20_MagWell
	{
		MET_Magazines[] =
		{
			"MET_PDF_T20_Mag"
		};
	};

};

class CfgMagazines
{
	class CA_Magazine;
	class MET_PDF_DLA13_Mag : CA_Magazine
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;
		author = "Chet";
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelspecial = "";
		count = 60;
		displayName = "[PDF] DLA-13 Energy Cell";
		displayNameShort = "Energy Cell";
		descriptionShort = "Energy cell for the DLA-13 Rifle and Carbine </br>Ammo Count=60";
		ammo = "MET_blasterbolt_Red";
		tracersEvery = 1;
		
	};

	class MET_PDF_KE7_Mag : CA_Magazine
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;
		author = "Chet";
		modelSpecialIsProxy = 0;	
		picture = "\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelspecial = "";
		count = 20;
		displayName = "[PDF] KE-7 Energy Cell";
		displayNameShort = "KE-7 Energy Cell";
		descriptionShort = "Low Power Energy Cell for the KE-7";
		ammo = "MET_blasterbolt_low_Red";
		tracersEvery = 1;

		initSpeed = 250;
		mass = 2;
	};

	class MET_PDF_T20_Mag : CA_Magazine
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;
		author = "Chet";	
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_box_r.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial = "";
		count = 150;
		displayName = "[PDF] T20 Energy Cell";
		displayNameShort = "T20 Energy Cell";
		descriptionShort = "Energy cell for the T20";
		ammo = "MET_blasterbolt_Red";	
		tracersEvery = 1;

		mass = 20;
	};

	class 1Rnd_HE_Grenade_shell;
	class MET_PDF_DLA13_Grenade : 1Rnd_HE_Grenade_shell
	{
		author = "Chet";
		count = 1;
		displayName = "[PDF] Light Proton Grenade";
		displayNameShort = "";
		picture = "\SFA_Main\SFA_Weapons_R\ammo\icon\SFA_icon_mag.paa";
		descriptionShort = "Impact Grenade";
		ammo = "SFA_ammo_40mm_he";
		mass = 10;
	};
};