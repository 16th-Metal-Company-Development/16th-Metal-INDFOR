class CfgPatches
{
	class BHA_Vehicles
	{
		units[]={};
		weapons[]={};
		skipWhenMissingDependencies=1;
		requiredaddons[]=
		{
			"sc_vtol",
			"sc_units",
			"sc_wheeled",
			"BHA_Weapons",
			"A3_Weapons_F",
			"OPTRE_Core",
			"OPTRE_Weapons_Turrets"
		};
	};
};
class CfgLights
{
	class BHA_aaplasmaorange
	{
		color[]={0,0,0,0.5};
		diffuse[]={253,153,0,1};
		ambient[]={0,0,0,0.5};
		intensity=200000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="1e20 * 0.7";
			hardLimitEnd=1e+020;
		};
		dayLight=1;
		useFlare=1;
		flareSize=5;
		flareMaxDistance=6000;
		position[]={0,0,-1};
	};
};
class BHA_aaplasmaorange
{
	class Light
	{
		simulation="light";
		type="BHA_aaplasmaorange";
		position[]={0,0,1};
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
class CfgAmmo
{
	/*class B_127x99_Ball_Tracer_Yellow;
	class BHA_127x99_Ball_Tracer_Orange: B_127x99_Ball_Tracer_Yellow
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_30mm_MP_Tracer_Green;
	class B_30mm_MP_Tracer_Orange: B_30mm_MP_Tracer_Green
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_30mm_APFSDS_Tracer_Green;
	class B_30mm_APFSDS_Tracer_Orange: B_30mm_APFSDS_Tracer_Green
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_762x51_Tracer_Green;
	class B_762x51_Tracer_Orange: B_762x51_Tracer_Green
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_762x51_Minigun_Tracer_Yellow_splash;
	class B_762x51_Minigun_Tracer_Orange_splash: B_762x51_Minigun_Tracer_Yellow_splash
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_20mm;
	class BHA_20mm_Orange: B_20mm
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_127x99_Ball_Tracer_Red;
	class B_338_NM_Ball;
	class BHA_338_NM_Ball: B_338_NM_Ball
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class Sh_120mm_APFSDS_Tracer_Red;
	class BHA_120mm_APFSDS_Tracer_Orange: Sh_120mm_APFSDS_Tracer_Red
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerScale=3;
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class Sh_120mm_HE_Tracer_Red;
	class BHA_120mm_HE_Tracer_Orange: Sh_120mm_HE_Tracer_Red
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerScale=3;
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class Sh_120mm_HEAT_MP_T_Red;
	class BHA_120mm_HEAT_MP_T_Orange: Sh_120mm_HEAT_MP_T_Red
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerScale=3;
		tracerStartTime=0.1;
		tracerEndTime=3;
	};*/
	class B_20mm;
	class B_20mm_AP;
	class SubmunitionBase;
	class B_35mm_AA;
	class MET_B_OrangePlasma_127_GPR: B_20mm
	{
		hit=35;
		indirectHit=15;
		indirectHitRange=3;
		explosive=1;
		caliber=1.8;
		typicalSpeed=1000;
		coefGravity=0;
		/*hit=20;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1.4;*/
		bulletFly[]=
		{
			"bulletFly1",
			1
		};
		bulletFly1[]=
		{
			"",
			1.58489,
			1,
			30
		};
		timeToLive=10;
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=10;
		deflecting=0;
		model="3AS\3as_Weapons\Data\tracer_yellow.p3d";
		effectFly="MET_plasma_orange";
	};
	class MET_B_OrangePlasma_127_AP: B_20mm_AP
	{
		hit=650;
		indirectHit=11;
		indirectHitRange=0.2;
		explosive=1;
		caliber=9;
		typicalSpeed=1000;
		coefGravity=0;
		/*hit=20;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1.4;*/
		bulletFly[]=
		{
			"bulletFly1",
			1
		};
		bulletFly1[]=
		{
			"",
			1.58489,
			1,
			30
		};
		timeToLive=10;
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=10;
		deflecting=0;
		model="3AS\3as_Weapons\Data\tracer_yellow.p3d";
		effectFly="MET_plasma_orange";
	};
	class B_40mm_GPR;
	class MET_B_OrangePlasma_40_GPR: B_40mm_GPR
	{
		hit=75;
		indirectHit=25;
		indirectHitRange=6;
		explosive=1;
		caliber=1.8;
		typicalSpeed=1000;
		coefGravity=0;
		/*hit=20;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1.4;*/
		bulletFly[]=
		{
			"bulletFly1",
			1
		};
		bulletFly1[]=
		{
			"",
			1.58489,
			1,
			30
		};
		timeToLive=10;
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=10;
		deflecting=0;
		model="3AS\3as_Weapons\Data\tracer_yellow.p3d";
		effectFly="MET_plasma_orange";
	};
	class B_40mm_AP;
	class MET_B_OrangePlasma_40_APC: B_40mm_GPR
	{
		hit=850;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		caliber=9;
		typicalSpeed=1000;
		coefGravity=0;
		/*hit=20;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1.4;*/
		bulletFly[]=
		{
			"bulletFly1",
			1
		};
		bulletFly1[]=
		{
			"",
			1.58489,
			1,
			30
		};
		timeToLive=10;
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=10;
		deflecting=0;
		model="3AS\3as_Weapons\Data\tracer_yellow.p3d";
		effectFly="MET_plasma_orange";
	};
	class MET_B_OrangePlasma_40_AP: B_40mm_AP
	{
		hit=850;
		indirectHit=16;
		indirectHitRange=0.2;
		explosive=1;
		caliber=9;
		typicalSpeed=1000;
		coefGravity=0;
		bulletFly[]=
		{
			"bulletFly1",
			1
		};
		bulletFly1[]=
		{
			"",
			1.58489,
			1,
			30
		};
		timeToLive=10;
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=10;
		deflecting=0;
		model="3AS\3as_Weapons\Data\tracer_yellow.p3d";
		effectFly="MET_plasma_orange";
	};
	class ShellBase;
	class BHA_Mass_Driver_Shell: ShellBase
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		hit=800;
		indirectHit=60;
		indirectHitRange=6;
		warheadName="AP";
		dangerRadiusHit=160;
		suppressionRadiusHit=32;
		explosive=0.1;
		cost=300;
		airFriction=-3.96e-005;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="BombExplosion";
		typicalSpeed=1550;
		caliber=35;
		deflecting=0;
		timeToLive=15;
		whistleOnFire=1;
		whistleDist=14;
		model="\3AS\3AS_Weapons\Data\tracer_shell_yellow.p3d";
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=15;
		muzzleEffect="";
		explosionSoundEffect="DefaultExplosion";
		effectFly="MET_plasma_orange_big";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01.wss",
			1.7782794,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02.wss",
			1.7782794,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03.wss",
			1.7782794,
			1,
			1800
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04.wss",
			1.7782794,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class HitEffects
		{
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="ImpactConcreteSabot";
			hitConcrete="ImpactConcreteSabot";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactEffectsGroundSabot";
		};
		soundSetSonicCrack[]=
		{
			"3AS_Cannon_Flyby_SoundSet"
		};
		class CamShakeExplode
		{
			power=24;
			duration=2.5999999;
			frequency=20;
			distance=143.636;
		};
		class CamShakeHit
		{
			power=180;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.3097501;
			duration=2.2;
			frequency=20;
			distance=87.635597;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		ace_frag_enabled=1;
		ace_frag_metal=23000;
		ace_frag_charge=3148;
		ace_frag_gurney_c=2830;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_medium",
			"ACE_frag_medium_HD"
		};
	};
	//------------------------------- BHA 60mm Shells
	class Sh_82mm_AMOS;
	class FlareCore;
	class Smoke_82mm_AMOS_White;
	class BHA_60mm_HE_Mortar: Sh_82mm_AMOS
	{
		displayname="Barysaw HE Mortar Shell";
		effectFly="MET_plasma_medium_orange";
		hit=140;
		indirectHit=90;
		indirectHitRange=30;
		cost=200;
		muzzleEffect="";
		warheadName="HE";
		dangerRadiusHit=400;
		suppressionRadiusHit=75;
		typicalSpeed=800;
		caliber=8;
		deflecting=0;
		explosive=0.6;
        ace_frag_metal = 120;  // Amount of metal being fragmented (grams)
        ace_frag_charge = 60;  // Amount of explosive filler (grams)
        ace_frag_gurney_c = 2300;  // Gurney velocity constant for explosive type
        ace_frag_gurney_k = 1/2;  // Gurney velocity shape factor
        ace_frag_classes[] = {"ACE_frag_medium_HD","ACE_frag_small_HD","ACE_frag_small"};  // Type of fragments
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled)
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled)
    
		/*class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};*/
	};
	class BHA_60mm_Flare_White: FlareCore
	{
		effectFlare = "CounterMeasureFlare";
		lightColor[] = {0.95,0.95,1,0.5};
		smokeColor[] = {1,1,1,0.5};
		intensity = 2000000;
		brightness=12;
        coefGravity = 1.5;
		size = 1;
		timeToLive=300;
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		triggerTime=-1;
		triggerSpeedCoef=1;
		flareSize=40;
		flareAirFriction=-15.5;
		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
		class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class BHA_60mm_Flare_Red: FlareCore
	{
		timeToLive=120;
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		triggerTime=-1;
		triggerSpeedCoef=1;
		lightColor[] = {0.84380001,0.1383,0.1353,0};
		smokeColor[] = {1,1,1,0.5};
		brightness=12;
		intensity = 2000000;
		flareSize=40;
		flareAirFriction=-2;
		fuseDistance=10;
		effectFly="MET_BlasterBoltGlow_Medium_Red_Fly";
		class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class BHA_60mm_Smoke_White: Smoke_82mm_AMOS_White
	{
		displayname="Barysaw 60 MW Smoke Mortar Shell";

		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
		model="\A3\weapons_f\ammo\shell";
		submunitionAmmo="Met_Ammo_smoke_white";
	};
    //------------------------------- HE
	class Sh_155mm_AMOS;
    class BHA_Sh_120mm_AMOS: Sh_155mm_AMOS
    {
		displayname="Barysaw 120 MW HE Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_plasma_large_orange";

        hit = 225;
        indirectHit = 100;
        indirectHitRange = 60;
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ace_frag_medium", "ace_frag_medium_HD","ace_frag_large", "ace_frag_large_HD"};
        ace_frag_metal = 10000;
        ace_frag_charge = 1024;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 120;
        //These are here as reference

        //155mm
        // hit = 340;
        // indirectHit = 125;
        // indirectHitRange = 30;
        // ace_frag_classes[] = {"ace_frag_large", "ace_frag_large", "ace_frag_large_HD", "ace_frag_large", "ace_frag_huge", "ace_frag_huge_HD", "ace_frag_huge"};
        // ace_frag_metal = 36000;
        // ace_frag_charge = 9979;
        // ace_frag_gurney_c = 2440;
        // ace_frag_gurney_k = "1/2";
        // ace_rearm_caliber = 155;
        // ace_vehicle_damage_incendiary = 0.4;

        //82mm
        // hit = 165;
        // indirectHit = 52;
        // indirectHitRange = 18;
        // ace_frag_enabled = 1;
        // ace_frag_classes[] = {"ace_frag_medium", "ace_frag_medium_HD"};
        // ace_frag_metal = 3200;
        // ace_frag_charge = 420;
        // ace_frag_gurney_c = 2440;
        // ace_frag_gurney_k = "1/2";
        // ace_rearm_caliber = 82;
    };
    //------------------------------- Cluster HE cause aye lmao
	class Sh_82mm_AMOS_guided;
    class BHA_M_Mo_Cluster_HE: Sh_82mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_plasma_large_orange";
        ace_rearm_caliber = 120;
        submunitionAmmo[] = {"MET_gl_orange",1};//70% HE, 20% HEAT, 10% cluster
        submunitionConeType[] = { "randomcenter", 25 };
        submunitionConeAngle = 35;
        triggerDistance = 100;
        submunitionDirectionType = "SubmunitionModelDirection";
        cost = 200;
        muzzleEffect = "";      
    };
    //------------------------------- HE
	class BHA_300mm_AMOS: ShellBase
	{
		hit=1200;
		indirectHit=800;
		indirectHitRange=50;
		warheadName="HE";
		dangerRadiusHit=1250;
		suppressionRadiusHit=120;
		typicalSpeed=800;
		caliber=10;
		deflecting=0;
		explosive=0.80000001;
		cost=300;
		model="\A3\weapons_f\ammo\shell";
		CraterEffects="HeavyBombCrater";
		ExplosionEffects="HeavyBombExplosion";
		whistleDist=60;
		artilleryLock=1;
		thrust=0;
		timeToLive=180;
		airFriction=0;
		sideairFriction=0;
		effectFly="MET_plasma_orange_big";
		soundSetSonicCrack[]=
		{
			"3AS_Cannon_Flyby_SoundSet"
		};
		soundDefault1[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_1.wss",
			6,
			1,
			1000
		};
		soundDefault2[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_2.wss",
			6,
			1,
			1000
		};
		soundDefault3[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_3.wss",
			6,
			1,
			1000
		};
		soundDefault4[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_4.wss",
			6,
			1,
			1000
		};
		soundDefault5[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_5.wss",
			6,
			1,
			1000
		};
		soundDefault6[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_6.wss",
			6,
			1,
			1000
		};
		soundDefault7[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_7.wss",
			6,
			1,
			1000
		};
		soundDefault8[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_8.wss",
			6,
			1,
			1000
		};
		soundDefault9[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_9.wss",
			6,
			1,
			1000
		};
		soundDefault10[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_10.wss",
			6,
			1,
			1000
		};
		soundDefault11[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_11.wss",
			6,
			1,
			1000
		};
		soundDefault12[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_12.wss",
			6,
			1,
			1000
		};
		soundDefault13[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_13.wss",
			6,
			1,
			1000
		};
		soundDefault14[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_14.wss",
			6,
			1,
			1000
		};
		soundDefault15[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_15.wss",
			6,
			1,
			1000
		};
		soundDefault16[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_16.wss",
			6,
			1,
			1000
		};
		soundDefault17[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_17.wss",
			6,
			1,
			1000
		};
		soundDefault18[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_18.wss",
			6,
			1,
			1000
		};
		soundDefault19[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_19.wss",
			6,
			1,
			1000
		};
		soundDefault20[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_20.wss",
			6,
			1,
			1000
		};
		soundDefault21[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_21.wss",
			6,
			1,
			1000
		};
		soundDefault22[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_22.wss",
			6,
			1,
			1000
		};
		hitDefault[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitGround[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitGroundHard[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitGroundSoft[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitConcrete[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitBuilding[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitFoliage[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitWood[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitPlastic[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitRubber[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitTyre[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitMetal[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitIron[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitMetalInt[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitMetalPlate[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitArmor[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitArmorInt[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		multiSoundHit[]=
		{
			"soundDefault1",
			0.045455001,
			"soundDefault2",
			0.045455001,
			"soundDefault3",
			0.045455001,
			"soundDefault4",
			0.045455001,
			"soundDefault5",
			0.045455001,
			"soundDefault6",
			0.045455001,
			"soundDefault7",
			0.045455001,
			"soundDefault8",
			0.045455001,
			"soundDefault9",
			0.045455001,
			"soundDefault10",
			0.045455001,
			"soundDefault11",
			0.045455001,
			"soundDefault12",
			0.045455001,
			"soundDefault13",
			0.045455001,
			"soundDefault14",
			0.045455001,
			"soundDefault15",
			0.045455001,
			"soundDefault16",
			0.045455001,
			"soundDefault17",
			0.045455001,
			"soundDefault18",
			0.045455001,
			"soundDefault19",
			0.045455001,
			"soundDefault20",
			0.045455001,
			"soundDefault21",
			0.045455001,
			"soundDefault22",
			0.045455001
		};
		class CamShakeExplode
		{
			power=31;
			duration=2.4000001;
			frequency=20;
			distance=339.599;
		};
		class CamShakeHit
		{
			power=155;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.52844;
			duration=2.4000001;
			frequency=20;
			distance=99.599197;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		ace_frag_classes[]=
		{
			"ace_frag_large",
			"ace_frag_large",
			"ace_frag_large_HD",
			"ace_frag_large",
			"ace_frag_huge",
			"ace_frag_huge_HD",
			"ace_frag_huge"
		};
		ace_frag_enabled=1;
		ace_frag_metal=30000;
		ace_frag_charge=9000;
		ace_frag_gurney_c=3500;
		ace_frag_gurney_k="1/2";
		ace_rearm_caliber=300;
	};
    //-------------------------------- Guided
    class BHA_Sh_300mm_AMOS_guided: Sh_82mm_AMOS_guided
    {
		displayname="Republic 300 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_plasma_orange_big";
        submunitionAmmo = "BHA_M_Mo_300mm_AT";
        hit = 1000;
		submunitionInitSpeed=100;
        ace_rearm_caliber = 300;
        irLock = 1;
        laserLock = 0;
    };
    class MissileBase;
    class M_Mo_82mm_AT:MissileBase
    {
        class Components;
    };
	class ammo_Penetrator_Base;
	class BHA_300HEAT_Penetrator: ammo_Penetrator_Base
	{
		effectFly="MET_plasma_orange_big";
		hit=100000;
		warheadName="TandemHEAT";
		caliber=1000;
	};
    class BHA_M_Mo_300mm_AT: M_Mo_82mm_AT
    {
        ace_rearm_caliber = 300;
		effectFly="MET_plasma_orange_big";
		effectsMissile="MET_Rocket_effect_orange_fly2";

		submunitionAmmo="BHA_300HEAT_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		hit=10000;
        indirectHit = 165;
        indirectHitRange = 9;
        maneuvrability = 15;

        //lets give it more lock angle
        missileLockCone = 90;
		missileKeepLockedCone = 90;
        irLock = 1;
		laserLock = 0;
		manualControl = 0;
		artilleryLock = 0;
		airLock = 1;
		groundLock = 1;
		dataLinkLock = 0;
		activeRadarLock = 0;
		passiveRadarLock = 0;
		antiRadiationLock = 0;

        //only angle changed
        class Components: Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class IRSensorComponent: SensorTemplateIR
                    {
                        class AirTarget
                        {
                            minRange = 200;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget
                        {
                            minRange = 200;
                            maxRange = 800;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 100;
                        angleRangeVertical = 100;
                    };
                };
            };
        };
    };
	class BHA_Cluster_300mm_AMOS: SubmunitionBase
	{
		triggerDistance=200;
		triggerSpeedCoef[]={0.5,1};
		submunitionConeAngle=30;
		submunitionConeType[]=
		{
			"randomcenter",
			50
		};
		effectFly="MET_plasma_orange_big";
        submunitionAmmo[] = {"MET_gl_orange",0.75,"MET_60HEAT",0.25};//70% HE, 20% HEAT, 10% cluster
		cost=200;
		airFriction=0;
		muzzleEffect="";
		hit=300;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01.wss",
			1.7782794,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02.wss",
			1.7782794,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03.wss",
			1.7782794,
			1,
			2000
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04.wss",
			1.7782794,
			1,
			2000
		};
		soundHit5[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05.wss",
			1.7782794,
			1,
			2000
		};
		soundHit6[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06.wss",
			1.7782794,
			1,
			2000
		};
		soundHit7[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07.wss",
			1.7782794,
			1,
			2000
		};
		soundHit8[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08.wss",
			1.7782794,
			1,
			2000
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.125,
			"soundHit2",
			0.125,
			"soundHit3",
			0.125,
			"soundHit4",
			0.125,
			"soundHit5",
			0.125,
			"soundHit6",
			0.125,
			"soundHit7",
			0.125,
			"soundHit8",
			0.125
		};
		class CamShakeFire
		{
			power=3.52844;
			duration=2.4000001;
			frequency=20;
			distance=99.599197;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class BHA_autocannon_ammo_AA_Orange: B_35mm_AA
	{
		hit=250;
		indirectHit=50;
		indirectHitRange=4;
		explosive=0.80000001;
		typicalSpeed=1600;
		model="SFA_Main\SFA_Weapons_Core\tracer_yellow.p3d";
		aiAmmoUsageFlags="256";
		tracerScale=2.5;
		tracerStartTime=0.001;
		tracerEndTime=4;
		airFriction=0;
		sideairfriction=0;
		caliber=18;
		effectFly="BHA_aaplasmaorange";
	};
	class SFA_Fighter_Shell;
	class BHA_Starsaber_Shell: SFA_Fighter_Shell
	{
		hit=250;
		indirectHit=50;
		indirectHitRange=5;
		warheadName="HE";
		explosive=0.40000001;
		caliber=16;
		cost=3000;
		model="SFA_Main\SFA_Weapons_Core\tracer_yellow.p3d";
		tracerScale=2;
		tracerStartTime=0;
		tracerEndTime=10;
		nvgOnly=0;
		typicalSpeed=980;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		aiAmmoUsageFlags="64 + 128 + 256";
		effectFly="BHA_aaplasmaorange";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01.wss",
			1.7782794,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02.wss",
			1.7782794,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03.wss",
			1.7782794,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04.wss",
			1.7782794,
			1,
			1300
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		explosionSoundEffect="DefaultExplosion";
		airLock=1;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		airFriction=-0.00050000002;
		muzzleEffect="";
		class CamShakeExplode
		{
			power=4;
			duration=0.80000001;
			frequency=20;
			distance=43.7771;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.1147399;
			duration=0.80000001;
			frequency=20;
			distance=35.7771;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class M_Air_AA;
	class BHA_Concussion_Missile: M_Air_AA
	{
		author="Starforge Armory";
		model="SFA_Main\SFA_Weapons_Core\ammo\ConcussionMissile.p3d";
		proxyShape="SFA_Main\SFA_Weapons_Core\ammo\ConcussionMissile.p3d";
		effectsMissileInit="PylonBackEffects";
		effectsMissile="MET_Rocket_effect_orange_fly";
		hit=2050;
		indirectHit=120;
		indirectHitRange=12;
		warheadName="AA";
		proximityExplosionDistance=10;
	};
	class Missile_AGM_01_F;
	class BHA_AT_Concussion_Missile: Missile_AGM_01_F
	{
		author="$STR_3as_Studio";
		model="3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		maverickWeaponIndexOffset=2;
		effectsMissile="MET_Rocket_effect_orange_fly2";
		effectsMissileInit="PylonBackEffects";
		effectFly="MET_Rocket_effect_orange_fly2";
		hit=10000;
		indirectHit=15;
		indirectHitRange=1;
	};
	class BHA_PulverizerMissile: Missile_AGM_01_F
	{
		displayName="Pulverizer Rockets";
		model="\A3\Weapons_F\Ammo\rocket_01_f.p3d";
		hit=120;
		indirectHit=25;
		indirectHitRange=5;
		maxSpeed=500;
		timeToLive=20;
		airFriction=-0.00079999998;
		trackOversteer=1;
		trackLead=0;
		maneuvrability=7;
		thrust=140;
		thrustTime=2;
		fuseDistance=50;
		aiAmmoUsageFlags="0";
		airLock=0;
		irLock=0;
		laserLock=0;
		missileLockCone=0;
		missileLockMinDistance=0;
		missileLockMaxDistance=0;
		manualControl=0;
		effectsMissile="MET_Rocket_effect_orange_fly3";
	};
	class BHA_Discord_Missile: M_Air_AA
	{
		author="$STR_3as_Studio";
		model="3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		effectsMissileInit="PylonBackEffects";
		//effectFly="3AS_Rocket_effect_Blue_fly";
		effectsMissile="MET_Rocket_effect_orange_fly";
		hit=2050;
		indirectHit=120;
		indirectHitRange=12;
		warheadName="AA";
		proximityExplosionDistance=10;
	};
	class Bomb_04_F;
	class BHA_Proton_Torpedo: Bomb_04_F
	{
		author="$STR_3as_Studio";
		model="3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		maverickWeaponIndexOffset=8;
	};
	class Sh_125mm_APFSDS;
	class BHA_MassDriver_AP: Sh_125mm_APFSDS
	{
		cartridge="";
		caliber=80;
		model="SFA_Main\SFA_Weapons_Core\tracer_yellow.p3d";
		effectfly="MET_plasma_orange_big";
		hit=1000;
		explosionEffects="";
		tracerScale=5;
		indirectHit=15;
		indirectHitRange=0.5;
		coefGravity=0;
	};
	class Sh_125mm_HE;
	class BHA_MassDriver_HE: Sh_125mm_HE
	{
		cartridge="";
		caliber=80;
		explosionEffects="";
		model="SFA_Main\SFA_Weapons_Core\tracer_yellow.p3d";
		effectfly="MET_plasma_orange_big";
		hit=800;
		tracerScale=5;
		indirectHit=80;
		indirectHitRange=6;
		coefGravity=0;
	};
	class BHA_MassDriver75_AP: Sh_125mm_APFSDS
	{
		cartridge="";
		caliber=80;
		model="SFA_Main\SFA_Weapons_Core\tracer_yellow.p3d";
		effectfly="MET_plasma_orange_medbig";
		hit=750;
		explosionEffects="";
		tracerScale=5;
		indirectHit=15;
		indirectHitRange=0.5;
		coefGravity=0;
	};
	class BHA_MassDriver75_HE: Sh_125mm_HE
	{
		cartridge="";
		caliber=80;
		explosionEffects="";
		model="SFA_Main\SFA_Weapons_Core\tracer_yellow.p3d";
		effectfly="MET_plasma_orange_medbig";
		hit=400;
		tracerScale=5;
		indirectHit=40;
		indirectHitRange=6;
		coefGravity=0;
		ace_frag_enabled = 1;  // Deprecated
        ace_frag_metal = 120;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 100;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2400;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney velocity shape factor - information below
        ace_frag_classes[] = {"ACE_frag_large", "ACE_frag_large_HD"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
    };
	class BHA_MassDriver75_AP_G: BHA_MassDriver75_AP
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_plasma_Green_MedBig";
	};
	class BHA_MassDriver75_HE_G: BHA_MassDriver75_HE
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_plasma_Green_MedBig";
    };
};
class CfgMagazines
{
	/*class 200Rnd_127x99_mag_Tracer_Yellow;
	class 200Rnd_127x99_mag_Tracer_Orange: 200Rnd_127x99_mag_Tracer_Yellow
	{
		ammo="BHA_127x99_Ball_Tracer_Orange";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green;
	class 140Rnd_30mm_MP_shells_Tracer_Orange: 140Rnd_30mm_MP_shells_Tracer_Green
	{
		ammo="B_30mm_MP_Tracer_Orange";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Orange: 60Rnd_30mm_APFSDS_shells_Tracer_Green
	{
		ammo="B_30mm_APFSDS_Tracer_Orange";
	};
	class 200Rnd_762x51_Belt_Green;
	class 200Rnd_762x51_Belt_Orange: 200Rnd_762x51_Belt_Green
	{
		ammo="B_762x51_Tracer_Orange";
	};
	class 5000Rnd_762x51_Yellow_Belt;
	class 5000Rnd_762x51_Orange_Belt: 5000Rnd_762x51_Yellow_Belt
	{
		ammo="B_762x51_Minigun_Tracer_Orange_splash";
	};
	class 300Rnd_20mm_shells;
	class PylonWeapon_300Rnd_20mm_shells_Orange: 300Rnd_20mm_shells
	{
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		ammo="BHA_20mm_Orange";
		hardpoints[]=
		{
			"BHA_20MM_TWIN_CANNON"
		};
		pylonWeapon="BHA_Twin_Cannon_20mm";
		mass=230;
	};
	class 200Rnd_127x99_mag_Tracer_Red;
	class 12Rnd_120mm_APFSDS_shells_Tracer_Red;
	class 12Rnd_120mm_APFSDS_shells_Tracer_Orange: 12Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		ammo="BHA_120mm_APFSDS_Tracer_Orange";
	};
	class 8Rnd_120mm_HE_shells_Tracer_Red;
	class 8Rnd_120mm_HE_shells_Tracer_Orange: 8Rnd_120mm_HE_shells_Tracer_Red
	{
		ammo="BHA_120mm_HE_Tracer_Orange";
	};
	class 8Rnd_120mm_HEAT_MP_T_Red;
	class 8Rnd_120mm_HEAT_MP_T_Orange: 8Rnd_120mm_HEAT_MP_T_Red
	{
		ammo="BHA_120mm_HEAT_MP_T_Orange";
	};
	class 200Rnd_338_Mag;
	class BHA_200Rnd_338_Orange_Mag: 200Rnd_338_Mag
	{
		ammo="BHA_338_NM_Ball";
	};*/
	class MET_DC15A_mag;
	class MET_DC15L_mag;
	class VehicleMagazine;
	class MET_T20AC_vic_mag: MET_DC15A_mag
	{
		scope=2;
		scopeArsenal=0;
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=300;
		displayName="T-20 Heavy Energy Cell";
		ammo="MET_bullet_heavy_orange";
		tracersEvery=1;
		mass=150;
	};
	class MET_EL34_vic_mag: MET_DC15L_mag
	{
		scope=2;
		scopearsenal=0;
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=1000;
		displayName="EL-34 Mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_bullet_carbine_orange";
		tracersEvery=1;
		initSpeed=920;
		mass=100;
	};
	class MET_500Rnd_Z36_HBC: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z36 Heavy Blaster Bolt";
		displayNameShort="Z36 H.B.C";
		picture="";
		ammo="MET_B_OrangePlasma_127_GPR";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class MET_500Rnd_Z36_HBC_AP: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z36 Heavy Blaster Bolt AP";
		displayNameShort="Z36 H.B.C";
		picture="";
		ammo="MET_B_OrangePlasma_127_AP";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class MET_500Rnd_Z38_HBC: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z38 Heavy Blaster Bolt";
		displayNameShort="Z38 H.B.C";
		picture="";
		ammo="MET_B_OrangePlasma_40_GPR";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class MET_500Rnd_Z38_HBC_AP: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z38 Heavy Blaster Bolt AP";
		displayNameShort="Z38 H.B.C";
		picture="";
		ammo="MET_B_OrangePlasma_40_APC";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class BHA_30Rnd_Mass_Driver_shells: VehicleMagazine
	{
		author="Hazmat";
		scope=2;
		displayName="30 Round Mass Driver Shells";
		displayNameShort="Mass Driver Shells";
		displayNameMFDFormat="AP";
		ammo="BHA_Mass_Driver_Shell";
		count=30;
		initSpeed=1680;
		maxLeadSpeed=250;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,3};
	};
	class SFA_Base_mag;
	class MET_vic_proton_mag: SFA_Base_mag
	{
		scope=2;
		scopeArsenal=0;
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=200;
		displayName="E403 Heavier Proton mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_gl_orange";
		tracersEvery=1;
		initSpeed=320;
		mass=400;
	};
	class BHA_20Rnd_82mm_Mo_shells: VehicleMagazine
	{
		author="$STR_3as_Studio";
		displayName="HE Mortar Shells";
		displayNameShort="HE";
		displayNameMFDFormat="HE";
		scope=2;
		count=20;
		ammo="BHA_60mm_HE_Mortar";
		nameSound="heat";
		muzzleImpulseFactor[]={0,0};
		initSpeed=200;
		ace_arsenal_hide=-1;
		ace_artillerytables_airFriction=-9.9999997e-005;
	};
	class BHA_20Rnd_82mm_Mo_Flare_white: BHA_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="BHA_60mm_Flare_White";
		displayName="Flare Mortar Shell (White)";
		displayNameShort="White Flare";
	};
	class BHA_20Rnd_82mm_Mo_Flare_Red: BHA_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="BHA_60mm_Flare_Red";
		displayName="Flare Mortar Shell (Red)";
		displayNameShort="Red Flare";
	};
	class BHA_20Rnd_82mm_Mo_Smoke_white: BHA_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="BHA_60mm_Smoke_White";
		displayName="Smoke Mortar Shell (White)";
		displayNameShort="White Smoke";
	};
	class 8Rnd_82mm_Mo_shells;
    class BHA_10Rnd_120mm_Mo_shells: 8Rnd_82mm_Mo_shells
    {
        author = "Hazmat";
        count = 10;
        ammo = "BHA_Sh_120mm_AMOS";
        displayName = "HE Mortar Shells";
        displayNameShort = "HE";  
        displayNameMFDFormat = "HE";
        picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class BHA_5Rnd_120mm_Mo_Cluster_HE: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 5;
		ammo = "BHA_M_Mo_Cluster_HE";
		displayName = "Cluster HE Mortar Shells";
		displayNameShort = "Cluster HE";
		displayNameMFDFormat = "CLST";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class BHA_30Rnd_300mm_Mo_shells: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="HAGM High Explosive Shells";
		displayNameShort="HE";
		displayNameMFDFormat="HE";
		ammo="BHA_300mm_AMOS";
		count=30;
		nameSound="heat";
		muzzleImpulseFactor[]={1.5,10};
	};
	class BHA_5Rnd_Disin_300mm_Mo_shells: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="HAGM High Explosive Disintegrating Shells";
		WBK_PlasmaKill_Color_String_Int = "Orange";
		WBK_UseDisintegrate = "true";
		displayNameShort="HE";
		displayNameMFDFormat="HE";
		ammo="BHA_300mm_AMOS";
		count=5;
		nameSound="heat";
		muzzleImpulseFactor[]={1.5,10};
	};
	class BHA_4Rnd_300mm_Mo_guided: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="HAGM AT Guided Shells";
		displayNameShort="AT Guided";
		displayNameMFDFormat="ATG";
		ammo="BHA_Sh_300mm_AMOS_guided";
		count=4;
		nameSound="heat";
		muzzleImpulseFactor[]={1.5,10};
	};
	class BHA_5Rnd_300mm_Mo_Cluster: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="HAGM Cluster Shells";
		displayNameShort="Cluster";
		displayNameMFDFormat="CLST";
		ammo="BHA_Cluster_300mm_AMOS";
		count=5;
		nameSound="cluster";
		muzzleImpulseFactor[]={1.5,10};
	};
	class BHA_100Rnd_autocannon_70mm_AA_mag: VehicleMagazine
	{
		author="Starforge Armory Team";
		scope=2;
		displayName="70mm AA Shells";
		displayNameShort="AA";
		ammo="BHA_autocannon_ammo_AA_Orange";
		count=100;
		initSpeed=1600;
		maxLeadSpeed=300;
		tracersEvery=1;
		nameSound="cannon";
	};
	class BHA_300Rnd_Heavy: VehicleMagazine
	{
		scope=2;
		displayName="300 Heavy Blaster Rounds";
		descriptionShort="HE";
		ammo="BHA_Starsaber_Shell";
		count=600;
		initSpeed=1036;
		maxLeadSpeed=800;
		tracersEvery=1;
		nameSound="cannon";
	};
	class BHA_L04_Concussion_AA_x9: VehicleMagazine
	{
		scope=2;
		author="Starforge Armory";
		displayName="Balmorran L04 Concussion Missiles x9";
		count=9;
		model="SFA_Main\SFA_Weapons_Core\ammo\ConcussionMissile.p3d";
		ammo="BHA_Concussion_Missile";
		initSpeed=0;
		maxLeadSpeed=60;
	};
	class BHA_L04_Concussion_AA_x9_pylon: BHA_L04_Concussion_AA_x9
	{
		count=9;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON"
		};
		pylonWeapon="BHA_L04_Concussion";
	};
	class 12Rnd_PG_missiles;
	class BHA_12Rnd_Pulverizer: 12Rnd_PG_missiles
	{
		displayName="Elsinore-Cordova Pulverizer Rockets x12";
		ammo="BHA_PulverizerMissile";
		count=20;
		initSpeed=0;
		mass=80;
	};
	class BHA_12Rnd_Pulverizer_ATGM_pylon: BHA_12Rnd_Pulverizer
	{
		count=4;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON"
		};
		pylonWeapon="BHA_missiles_Pulverizer";
	};
	class BHA_1Rnd_Discord_Missile: VehicleMagazine
	{
		author="$STR_3as_Studio";
		scope=2;
		displayName="[BHA] Discord Missile";
		displayNameShort="Discord Missile";
		descriptionShort="AAA";
		ammo="BHA_Discord_Missile";
		count=1;
		initSpeed=0;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class BHA_PylonMissile_1Rnd_Discord_missiles: BHA_1Rnd_Discord_Missile
	{
		count=1;
		hardpoints[]=
		{
			"BHA_AAA_RAIL"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon="BHA_Discord_Missile_Weapon";
		mass=128;
	};
	class BHA_1Rnd_Proton_Torpedo: VehicleMagazine
	{
		author="$STR_3as_Studio";
		scope=2;
		displayName="[BHA] Proton Torpedo";
		displayNameShort="Proton Torpedo";
		descriptionShort="PT";
		ammo="BHA_Proton_Torpedo";
		initSpeed=0;
		maxLeadSpeed=30;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
	};
	class BHA_PylonMissile_1Rnd_Proton_Torpedo: BHA_1Rnd_Proton_Torpedo
	{
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		hardpoints[]=
		{
			"BHA_BOMB_RAIL"
		};
		pylonWeapon="BHA_Proton_Torpedo_Weapon";
	};
	class BHA_1Rnd_Concussion_Missile: VehicleMagazine
	{
		scope=2;
		displayName="[BHA] 1 Rnd Concussion Missile (AGM)";
		displayNameShort="Concussion Missile (AGM)";
		descriptionShort="AGM";
		ammo="BHA_AT_Concussion_Missile";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="missiles";
	};
	class BHA_PylonMissile_1Rnd_Concussion_Missile: BHA_1Rnd_Concussion_Missile
	{
		count=1;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F.p3d";
		hardpoints[]=
		{
			"BHA_AGM_RAIL"
		};
		pylonWeapon="BHA_Concussion_Missile_Weapon";
	};
	class 12Rnd_120mm_APFSDS_shells;
	class BHA_MassDriver_AP_x25: 12Rnd_120mm_APFSDS_shells
	{
		displayName="Mass Driver AP";
		displayNameShort="AP";
		ammo="BHA_MassDriver_AP";
		initSpeed=1000;
		tracersevery=1;
		count=25;
	};
	class BHA_MassDriver_HE_x25: 12Rnd_120mm_APFSDS_shells
	{
		displayName="Mass Driver HE";
		displayNameShort="HE";
		ammo="BHA_MassDriver_HE";
		initSpeed=1000;
		tracersevery=1;
		count=25;
	};
	class BHA_Cannon_Low_x500: 12Rnd_120mm_APFSDS_shells
	{
		cartridge="";
		displayName="Heavy Hmg 1000rnd";
		ammo="BHA_autocannon_ammo_AA_Orange";
		initSpeed=800;
		tracersevery=1;
		count=500;
	};
	//FG75
	class 40Rnd_105mm_APFSDS_T_Green;
	class BHA_75MW_AP: 40Rnd_105mm_APFSDS_T_Green
	{
		ammo = "BHA_MassDriver75_AP";
		count = 10;
		displayname = "75MW AP";
		displaynameshort = "AP";
		tracersevery = 1;
		muzzleImpulseFactor[]={0,0};
	};
	class BHA_75MW_HE: BHA_75MW_AP
	{
		ammo = "BHA_MassDriver75_HE";
		displayname = "75MW HE";
		displaynameshort = "HE";
	};
	class BHA_75MW_AP_G: BHA_75MW_AP
	{
		ammo = "BHA_MassDriver75_AP_G";
	};
	class BHA_75MW_HE_G: BHA_75MW_AP_G
	{
		ammo = "BHA_MassDriver75_HE_G";
		displayname = "75MW HE";
		displaynameshort = "HE";
	};
};
class Mode_Burst;
class Mode_FullAuto;
class Mode_SemiAuto;
class MGun;
class GunParticles;
class LMG_M200;
class autocannon_Base_F;
class CfgWeapons
{
	/*class HMG_127;
	class BHA_HMG_127: HMG_127
	{
		magazines[]=
		{
			"200Rnd_127x99_mag_Tracer_Orange"
		};
	};
	class autocannon_Base_F;
	class autocannon_30mm_CTWS;
	class BHA_30mm_CTWS: autocannon_30mm_CTWS
	{
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: autocannon_Base_F
		{
			displayName="Mk44 Bushmaster II";
			magazines[]=
			{
				"140Rnd_30mm_MP_shells_Tracer_Orange"
			};
		};
		class AP: autocannon_Base_F
		{
			displayName="Mk44 Bushmaster II";
			magazines[]=
			{
				"60Rnd_30mm_APFSDS_shells_Tracer_Orange"
			};
		};
		class GunParticles
		{
			class Effect
			{
				effectName="AutoCannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class Shell
			{
				positionName="shell_eject_pos";
				directionName="shell_eject_dir";
				effectName="HeavyGunCartridge1";
			};
		};
	};
	class LMG_coax_ext;
	class BHA_LMG_coax_ext: LMG_coax_ext
	{
		magazines[]=
		{
			"200Rnd_762x51_Belt_Orange"
		};
	};
	class M134_minigun;
	class BHA_M134_minigun: M134_minigun
	{
		magazines[]=
		{
			"5000Rnd_762x51_Orange_Belt"
		};
	};
	class Twin_Cannon_20mm;
	class BHA_Twin_Cannon_20mm: Twin_Cannon_20mm
	{
		magazines[]=
		{
			"PylonWeapon_300Rnd_20mm_shells_Orange"
		};
	};
	class HMG_127_UGV;
	class BHA_HMG_127_UGV: HMG_127_UGV
	{
		magazines[]=
		{
			"200Rnd_127x99_mag_Tracer_Orange"
		};
	};
	class cannon_120mm;
	class BHA_cannon_120mm: cannon_120mm
	{
		magazines[]=
		{
			"12Rnd_120mm_APFSDS_shells_Tracer_Orange",
			"8Rnd_120mm_HE_shells_Tracer_Orange",
			"8Rnd_120mm_HEAT_MP_T_Orange",
			"4Rnd_120mm_LG_cannon_missiles"
		};
	};
	class MMG_02_coax;
	class BHA_MMG_02_coax: MMG_02_coax
	{
		magazines[]=
		{
			"BHA_200Rnd_338_Orange_Mag"
		};
	};*/
    class CannonCore;
	class MET_autocannon_Base_F: CannonCore
	{
		scope=1;
		cursor="EmptyCursor";
		cursorAim="cannon";
		nameSound="cannon";
		sound[]=
		{
			"A3\sounds_f\dummysound.wss",
			2.5118864,
			1,
			1800
		};
		soundContinuous=0;
		reloadTime=0.30000001;
		aiRateOfFire=0.60000002;
		magazineReloadTime=2;
		autoReload=1;
		ballisticsComputer="2 + 16";
		FCSMaxLeadSpeed=27.778;
		FCSZeroingDelay=1;
		canLock=0;
		autoFire=1;
		modes[]=
		{
			"player",
			"close",
			"short",
			"medium",
			"far"
		};
		shotFromTurret=0;
		showAimCursorInternal=0;
		class player: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
					1.5,
					1,
					1500
				};
				begin3[]=
				{
					"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
					0.80000001,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
			};
			soundContinuous=0;
			reloadTime=0.30000001;
			dispersion=0.00089999998;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: player
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=6;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.80000001;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=5;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.80000001;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=3;
			aiRateOfFire=2;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.80000001;
			midRange=1500;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.69999999;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=2;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1800;
			minRange=1800;
			minRangeProbab=0.74000001;
			midRange=2400;
			midRangeProbab=0.64999998;
			maxRange=3000;
			maxRangeProbab=0.050000001;
		};
	};
	class HMG_127;
	class BHA_MG: HMG_127
	{
		displayName = "HMG";
		magazines[] = { "MET_T20AC_mag", "MET_T20AC_vic_mag" };
		reloadTime = 0.1;
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		class manual: Mode_FullAuto
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class BHA_MG2: HMG_127
	{
		displayName = "HMG";
		magazines[] = { "MET_T20AC_mag", "MET_T20AC_vic_mag" };
		reloadTime = 0.1;
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		class GunParticles: GunParticles
		{
			class effect1
			{
				positionName="usti hlavne1";
				directionName="konec hlavne1";
				effectName="MachineGunCloud";
			};
		};
		class manual: Mode_FullAuto
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class HMG_127_APC;
	class BHA_MG3: HMG_127_APC
	{
		displayName = "HMG";
		magazines[] = { "MET_T20AC_mag", "MET_T20AC_vic_mag" };
		reloadTime = 0.1;
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		class GunParticles: GunParticles
		{
			class effect1
			{
				positionName="usti hlavne3";
				directionName="konec hlavne3";
				effectName="MachineGunCloud";
			};
		};
		class manual: Mode_FullAuto
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class missiles_titan;
	class BHA_missiles_TOW: missiles_titan
	{
		displayName = "Twin HH-12 Mounted Launcher";
		magazines[] = { "BHA_AA_Dub", "BHA_AT_DUB", "BHA_AP_DUB" };
		reloadTime = 2.0;
		autoFire = 0;
		cursor = "missile";
		/*modes[] = { "manual" };
		class manual: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"3AS\3AS_Weapons\PLX1\Sounds\PLX_Fire.wss",
					3.1622777,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime = 2.0;
			dispersion = 0.001;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 2500;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
		};*/
	};
	class BHA_EL34_Gatling: HMG_127
	{
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		displayName="EL-36 Rotary Cannon";
		magazines[] = { "MET_EL34_mag", "MET_EL34_vic_mag" };
		class manual: MGun
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
					"\SFA_Main\SFA_Weapons_S\EL34\data\SFX\EL43.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.03;
			dispersion=0.0012000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.03;
			aiRateOfFireDispersion=1.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=16;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.69999999;
			midRange=400;
			midRangeProbab=0.75;
			maxRange=800;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=4;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=400;
			minRange=400;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.25;
			maxRange=2000;
			maxRangeProbab=0.050000001;
		};
	};
	class missiles_SAAMI;
	class BHA_Missiles_SAAMI: missiles_SAAMI
	{
		displayName = "Twin HH-12 Mounted Launcher";
		magazines[]=
		{
			"BHA_AA_Dub"
		};
	};
	class cannon_20mm;
	class MET_autocannon_Z36_HBC: cannon_20mm
	{
		displayName="Z36 HBC";
		class GunParticles: GunParticles
		{
			class SmokeEffect1
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="AutoCannonFired";
			};
		};
		//modes[] = { "HE", "AP" };
		class HE: MET_autocannon_Base_F
		{
			displayName="Z36 H.B.C HE";
			magazines[]=
			{
				"MET_500Rnd_Z36_HBC"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.2;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
					};
				};
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		class AP: MET_autocannon_Base_F
		{
			displayName="Z36 H.B.C AP";
			magazines[]=
			{
				"MET_500Rnd_Z36_HBC_AP"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.2;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
					};
				};
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
	};
	class autocannon_40mm_CTWS;
	class BHA_autocannon_40mm_HE: autocannon_40mm_CTWS
	{
		class GunParticles: GunParticles
		{
			class Effect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="AutoCannonFired";
			};
			class SmokeEffect2
			{
				positionName="usti hlavne1";
				directionName="usti hlavne1";
				effectName="AutoCannonFired";
			};
		};
		class HE: MET_autocannon_Base_F
		{
			displayName="Z38 H.B.C HE";
			magazines[]=
			{
				"MET_500Rnd_Z38_HBC"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.15;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
					};
				};
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		class AP: MET_autocannon_Base_F
		{
			displayName="Z38 H.B.C AP";
			magazines[]=
			{
				"MET_500Rnd_Z38_HBC_AP"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.15;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
					};
				};
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		magazines[]=
		{
			"MET_500Rnd_Z38_HBC",
			"MET_500Rnd_Z38_HBC_AP"
		};
	};
	/*class BHA_autocannon_40mm_AP: autocannon_40mm_CTWS
	{
		class GunParticles: GunParticles
		{
			class Effect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="AutoCannonFired";
			};
			class SmokeEffect2
			{
				positionName="usti hlavne1";
				directionName="usti hlavne1";
				effectName="AutoCannonFired";
			};
		};
		class AP: MET_autocannon_Base_F
		{
			displayName="Z38 H.B.C AP";
			magazines[]=
			{
				"MET_500Rnd_Z38_HBC_AP"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.15;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\MET\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
					};
				};
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		magazines[]=
		{
			"MET_500Rnd_Z38_HBC_AP"
		};
	};*/
	class BHA_Mass_Driver_Cannon: CannonCore
	{
		scope=1;
		displayName="[BHA] Mass Driver Cannon";
		cursor="EmptyCursor";
		cursorAim="cannon";
		showAimCursorInternal=0;
		nameSound="cannon";
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss",
			2.5118864,
			1,
			10
		};
		magazines[]=
		{
			"BHA_30Rnd_Mass_Driver_shells"
		};
		reloadTime=6;
		magazineReloadTime=6;
		autoReload=1;
		canLock=0;
		ballisticsComputer="2 + 8 + 16";
		FCSMaxLeadSpeed=250;
		FCSZeroingDelay=1;
		aiDispersionCoefY=2;
		aiDispersionCoefX=2;
		autoFire=0;
		modes[]=
		{
			"player",
			"topDown",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
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
					"z\MET\addons\vehicles\sounds\laser_cannon.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=6;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class TopDown: player
		{
			textureType="topDown";
			displayName="$STR_A3_FireMode_TopDown0";
			minRange=150;
			minRangeProbab=0.40000001;
			midRange=400;
			midRangeProbab=0.94999999;
			maxRange=8000;
			maxRangeProbab=0.94999999;
		};
		class close: player
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=0.5;
			aiRateOfFireDistance=500;
			minRange=5;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.85000002;
		};
		class short: close
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=1000;
			minRange=500;
			minRangeProbab=0.30000001;
			midRange=1000;
			midRangeProbab=0.85000002;
			maxRange=1500;
			maxRangeProbab=0.85000002;
		};
		class medium: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=8;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1250;
			minRange=1000;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.85000002;
			maxRange=2000;
			maxRangeProbab=0.80000001;
		};
		class far: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=10;
			aiRateOfFireDispersion=8;
			aiRateOfFireDistance=1500;
			minRange=1500;
			minRangeProbab=0.75;
			midRange=2000;
			midRangeProbab=0.80000001;
			maxRange=3500;
			maxRangeProbab=0.050000001;
		};
	};
	class BHA_E403_Vic: HMG_127
	{
		displayName = "GMG";
		magazines[] = { "MET_heavy_proton_mag", "MET_vic_proton_mag" };
		reloadTime = 0.1;
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		magazineReloadTime=6;
		class GunParticles: GunParticles
		{
			class effect1
			{
				positionName="usti hlavne1";
				directionName="konec hlavne1";
				effectName="AutoCannonFired";
			};
		};
		class manual: Mode_FullAuto
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
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.3;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class LMG_RCWS;
	class BHA_L1_Gatling: LMG_RCWS
	{
		displayName="L1 Gatling Laser";
		canLock=0;
		reloadTime=1;
		maxholdstervalue=2;
		ballisticsComputer="4 + 2 + 8";
		magazines[]=
		{
			"MET_500Rnd_Z38_HBC"
		};
		class GunParticles
		{
		};
		class manual: MGun
		{
			displayName="L1 Gatling";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\sfx7",
					0.56234133,
					1,
					40
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx8",
					0.56234133,
					1,
					40
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_01",
					1,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				soundsetshot[]=
				{
					"SFA_LS1_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.2;
			dispersion=0.0016;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=12;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=250;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=8;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.64999998;
			midRange=800;
			midRangeProbab=0.40000001;
			maxRange=1200;
			maxRangeProbab=0.1;
		};
	};
	class missiles_DAGR;
	class BHA_Rockets_Mantis: missiles_DAGR
	{
		magazines[]=
		{
			"BHA_AP_OCT",
			"BHA_AT_OCT",
			"BHA_AA_OCT"
		};
	};
	class BHA_Rockets_Firebrand: missiles_DAGR
	{
		magazines[]=
		{
			"BHA_AP_DEC",
			"BHA_AT_DEC",
			"BHA_AA_DEC"
		};
		lockToneSound[] = { "A3\Sounds_F\arsenal\weapons_rockets\lock_tone_01.wss", 1, 1, 100 };
	};
	class BHA_mortar_60mm: CannonCore
	{
		scope=1;
		displayname="[BHA] 60MW Mortar";
		nameSound="CannonCore";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"3AS_Mortar_SoundSet"
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar.wss",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar.wss",
			1,
			1,
			20
		};
		soundServo[]=
		{
			"",
			9.9999997e-005,
			1
		};
		reloadTime=1.8;
		magazineReloadTime=5;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"BHA_20Rnd_82mm_Mo_shells",
			"BHA_20Rnd_82mm_Mo_Flare_white",
			"BHA_20Rnd_82mm_Mo_Flare_Red",
			"BHA_20Rnd_82mm_Mo_Smoke_white"
		};
		ballisticsComputer=2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MortarFired";
				positionName="Usti Hlavne";
				directionName="Konec Hlavne";
			};
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Burst1",
			"Burst2",
			"Burst3"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_mortar_82mm_Single10";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Mortar_SoundSet"
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar.wss",
				1,
				1,
				20
			};
			reloadTime=1;
			artilleryDispersion=1.9;
			artilleryCharge=0.25;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single20";
			artilleryCharge=0.50;
		};
		class Single3: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single30";
			artilleryCharge=0.75;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst10";
			burst=4;
			aiBurstTerminable=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.2589254,
					1,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.2589254,
					1,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar.wss",
				1,
				1,
				20
			};
			soundServo[]=
			{
				"",
				9.9999997e-005,
				1
			};
			soundBurst=0;
			reloadTime=1.8;
			artilleryDispersion=2.2;
			artilleryCharge=0.34999999;
			minRange=60;
			minRangeProbab=0.5;
			midRange=290;
			midRangeProbab=0.69999999;
			maxRange=665;
			maxRangeProbab=0.5;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst20";
			artilleryCharge=0.69999999;
			minRange=230;
			minRangeProbab=0.40000001;
			midRange=1175;
			midRangeProbab=0.60000002;
			maxRange=2660;
			maxRangeProbab=0.40000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst30";
			artilleryCharge=1;
			minRange=540;
			minRangeProbab=0.30000001;
			midRange=2355;
			midRangeProbab=0.40000001;
			maxRange=5500;
			maxRangeProbab=0.30000001;
		};
	};
    class mortar_82mm: CannonCore
    {
        class Single1;
        class Single2;
        class Single3;
        class Burst1;
        class Burst2;
        class Burst3;
    };
    class BHA_SGM120_Mortar_120mm: mortar_82mm
    {
        displayname = "SGM-120 120MW";
        //Maybe we change sound if we get
            reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar.wss", 1, 1, 20};
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar.wss", 1, 1, 20};
            soundServo[] = {"", 0.0001, 1};
        //

        reloadTime = 2;
        magazineReloadTime = 5;
        autoReload = 1;
        magazines[] = {
            "BHA_10Rnd_120mm_Mo_shells",
			"MET_10Rnd_120mm_Mo_Flare_white",
			"MET_10Rnd_120mm_Mo_IR_Flare_white",
			"MET_10Rnd_120mm_Mo_Smoke_white",
			"MET_10Rnd_120mm_Mo_Smoke_Cluster_white",
			"MET_10Rnd_120mm_Mo_Smoke_Cluster_pride",
			"MET_10Rnd_120mm_Mo_guided",
			"MET_10Rnd_120mm_Mo_LG",
			"BHA_5Rnd_120mm_Mo_Cluster_HE"
        };
        magazineWell[] = {}; //for ace reasons, this kinda doesnt help

        //Lets keep everything the same, except for dispersion, make that better cause scifi lol
        modes[] = {"Single1", "Single2", "Single3", "Burst1", "Burst2", "Burst3"};
        class Single1: Single1
        {
			displayName="Single (Close)";
            artilleryDispersion = 1;
            reloadTime = 2;
			artilleryCharge=0.4;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
        };
        class Single2: Single1
        {
			displayName="Single (Medium)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=0.9;
        };
        class Single3: Single1
        {
			displayName="Single (Far)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=1.4;
        };
        /*class Single4: Single1
        {
			displayName="Single (Farther)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=1.7;
        };
        class Single5: Single1
        {
			displayName="Single (Extreme)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=2.0;
        };*/
        class Burst1: Burst1
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
        class Burst2: Burst2
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
        class Burst3: Burst3
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
    };
	class BHA_HAGM_300mm_AMOS: CannonCore
	{
		scope=1;
		displayName="[BHA] HAGM Cannon";
		nameSound="cannon";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
				2.5118864,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2.wss",
			31.622778,
			1,
			15
		};
		reloadTime=7;
		magazineReloadTime=7;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"BHA_30Rnd_300mm_Mo_shells",
			"BHA_4Rnd_300mm_Mo_guided",
			"BHA_5Rnd_Disin_300mm_Mo_shells",
			"BHA_5Rnd_300mm_Mo_Cluster"
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Single4",
			"Single5",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5"
		};
		class GunParticles
		{
			class Effect1
			{
				effectName="ArtilleryFired1";
				positionName="MainCannon_Barrel";
				directionName="MainCannon_Barrel_Dir";
			};
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single10";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound.wss",
				1,
				1,
				20
			};
			reloadTime=4;
			artilleryDispersion=3.2;
			artilleryCharge=0.19;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single20";
			artilleryCharge=0.30000001;
		};
		class Single3: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single30";
			artilleryCharge=0.47999999;
		};
		class Single4: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single40";
			artilleryCharge=0.80000001;
		};
		class Single5: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single50";
			artilleryCharge=1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst10";
			burst=6;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound.wss",
				1,
				1,
				20
			};
			soundBurst=0;
			reloadTime=6;
			minRange=800;
			minRangeProbab=0.5;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.5;
			artilleryDispersion=5.3000002;
			artilleryCharge=0.19;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst20";
			minRange=2000;
			minRangeProbab=0.40000001;
			midRange=3000;
			midRangeProbab=0.60000002;
			maxRange=5200;
			maxRangeProbab=0.40000001;
			artilleryCharge=0.30000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst30";
			minRange=5200;
			minRangeProbab=0.30000001;
			midRange=8000;
			midRangeProbab=0.40000001;
			maxRange=13300;
			maxRangeProbab=0.30000001;
			artilleryCharge=0.47999999;
		};
		class Burst4: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst40";
			minRange=14600;
			minRangeProbab=0.2;
			midRange=25000;
			midRangeProbab=0.30000001;
			maxRange=37000;
			maxRangeProbab=0.2;
			artilleryCharge=0.80000001;
		};
		class Burst5: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst50";
			minRange=25000;
			minRangeProbab=0.1;
			midRange=40000;
			midRangeProbab=0.2;
			maxRange=58000;
			maxRangeProbab=0.1;
			artilleryCharge=1;
		};
	};
	class BHA_autocannon_70mm: LMG_M200
	{
		displayName="L-5 70MW AA";
		muzzles[]=
		{
			"HE"
		};
		magazineReloadTime=5;
		class GunParticles
		{
		};
		class HE: autocannon_Base_F
		{
			displayName="L-5 70MW AA";
			magazines[]=
			{
				"BHA_100Rnd_autocannon_70mm_AA_mag"
			};
			magazineReloadTime=5;
			cursorAim="mg";
			cursor="EmptyCursor";
			showAimCursorInternal=1;
			modes[]=
			{
				"manual",
				"close",
				"short",
				"medium",
				"far"
			};
			class manual: Mode_FullAuto
			{
				reloadTime=0.30000001;
				dispersion=0.0018;
				magazineReloadTime=5;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					soundSetShot[]=
					{
						"SFA_LW_SoundSet"
					};
				};
				aiRateOfFire=0.5;
				aiRateOfFireDistance=1000;
				minRange=50;
				minRangeProbab=0.1;
				midRange=800;
				midRangeProbab=0.69999999;
				maxRange=1500;
				maxRangeProbab=0.89999998;
			};
			class close: manual
			{
				showToPlayer=0;
				aiBurstTerminable=1;
				minRange=0;
				minRangeProbab=0.050000001;
				midRange=500;
				midRangeProbab=0.60000002;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				minRange=400;
				midRange=800;
				maxRange=1200;
			};
			class medium: close
			{
				minRange=900;
				midRange=1300;
				maxRange=1700;
			};
			class far: close
			{
				minRange=1600;
				midRange=2000;
				maxRange=2500;
			};
		};
	};
	class BHA_starsaber_HeavyCannon: CannonCore
	{
		scope=2;
		displayName="MK 2e/W Heavy Laser Cannon";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		showAimCursorInternal=0;
		magazines[]=
		{
			"BHA_300Rnd_Heavy"
		};
		canLock=0;
		ballisticsComputer="4 + 8";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
		};
		class manual: CannonCore
		{
			displayName="MK 2E/W Heavy Laser Cannon";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\XC01\sfx\Starsaber_guns1.wav",
					1.5,
					1,
					3000
				};
				begin2[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\XC01\sfx\Starsaber_guns2.wav",
					1.5,
					1,
					3000
				};
				begin3[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\XC01\sfx\Starsaber_guns3.wav",
					1.5,
					1,
					3000
				};
				begin4[]=
				{
					"\SFA_Main\SFA_Vehicles_R\data\XC01\sfx\Starsaber_guns4.wav",
					1.5,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					0.125,
					"begin2",
					0.125,
					"begin3",
					0.125,
					"begin4",
					0.125
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0089999996;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=5;
			burstRangeMax=20;
			aiBurstTerminable=1;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.94999999;
			midRange=200;
			midRangeProbab=0.89999998;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burstRangeMax=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=2;
			minRange=300;
			minRangeProbab=0.55000001;
			midRange=400;
			midRangeProbab=0.40000001;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			aiRateOfFireDispersion=4;
			minRange=500;
			minRangeProbab=0.25;
			midRange=700;
			midRangeProbab=0.2;
			maxRange=900;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=1500;
			aiRateOfFireDispersion=6;
			minRange=800;
			minRangeProbab=0.15000001;
			midRange=1000;
			midRangeProbab=0.1;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class missiles_ASRAAM;
	class BHA_L04_Concussion: missiles_ASRAAM
	{
		author="Barysaw Armory";
		displayName="L04 Silent Thunder Launcher";
		magazines[]=
		{
			"BHA_L04_Concussion_AA_x9",
			"BHA_L04_Concussion_AA_x9_pylon"
		};
		reloadTime=0.5;
		magazineReloadTime=4;
		canLock=2;
	};
	class BHA_missiles_Pulverizer: missiles_ASRAAM
	{
		author="Starforge Armory";
		displayName="Elsinore-Cordova Pulverizer Rocket Pod";
		magazines[]=
		{
			"BHA_12Rnd_Pulverizer",
			"BHA_12Rnd_Pulverizer_ATGM_pylon"
		};
	};
	class BHA_Discord_Missile_Weapon: missiles_ASRAAM
	{
		displayName="[BHA] Discord Missile Launcher";
		reloadTime=0.1;
		magazineReloadTime=0.1;
		magazines[]=
		{
			"BHA_1Rnd_Discord_Missile",
			"BHA_PylonMissile_1Rnd_Discord_missiles"
		};
	};
	class weapon_GBU12Launcher;
	class BHA_Proton_Torpedo_Weapon: weapon_GBU12Launcher
	{
		displayName="[BHA] Proton Torpedo Launcher";
		magazines[]=
		{
			"BHA_1Rnd_Proton_Torpedo",
			"BHA_PylonMissile_1Rnd_Proton_Torpedo"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
	};
	class weapon_AGM_KH25Launcher;
	class BHA_Concussion_Missile_Weapon: weapon_AGM_KH25Launcher
	{
		autoFire=0;
		displayName="[BHA] Concussion Missile Launcher";
		magazines[]=
		{
			"BHA_PylonMissile_1Rnd_Concussion_Missile",
			"BHA_1Rnd_Concussion_Missile"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		cursor="EmptyCursor";
		cursorAim="missile";
	};
	class SFA_Cannons_Base
	{
		class Manual;
	};
	class BHA_Heavy_Cannon: SFA_Cannons_Base
	{
		scope=1;
		displayName="Heavy Blaster Cannon";
		magazines[]=
		{
			"BHA_MassDriver_AP_x25",
			"BHA_MassDriver_HE_x25"
		};
		magazineReloadTime=3;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		canLock=0;
		ballisticsComputer="2 + 16";
		FCSMaxLeadSpeed=0;
		FCSZeroingDelay=1;
		maxZeroing=1500;
		aiDispersionCoefY=3;
		aiDispersionCoefX=3;
		ace_overpressure_angle=90;
		ace_overpressure_range=10;
		ace_overpressure_damage=0.85000002;
		displayNameShort="HEAT";
		class manual: MGun
		{
			displayName="$STR_A3_LMG_RCWS0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\weapons_heavy.wav",
					2.5,
					0.94999999,
					10000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=2;
			dispersion=0.0016;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=12;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=250;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=8;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.64999998;
			midRange=800;
			midRangeProbab=0.40000001;
			maxRange=1200;
			maxRangeProbab=0.1;
		};
	};
	class BHA_weapon_Cannon_low: SFA_Cannons_Base
	{
		magazineWell[]={};
		magazines[]=
		{
			"BHA_100Rnd_autocannon_70mm_AA_mag"
		};
		displayName="[BHA] Medium Blaster Cannon";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		class manual: manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"SFA_Main\SFA_Vehicles_R\data\Firebrand\SFX\Hmg20mm.wav",
					1,
					1,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=1;
			reloadTime=0.079999998;
			dispersion=0;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
		};
		class close: manual
		{
			burst=40;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=40;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=40;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class OPTRE_90mm_M512;
  	class BHA_75mm_M75: OPTRE_90mm_M512 
	{
		displayName = "FG75 Mass Driver";
		magazines[] = {
		"BHA_75MW_HE",
		"BHA_75MW_AP",
		"BHA_75MW_HE_G",
		"BHA_75MW_AP_G"
		};
		magazineReloadTime = 12;
		reloadTime = 1;
		class player: Mode_SemiAuto {
		sounds[] = {
			"StandardSound"
		};
		class StandardSound {
			begin1[] = {
			"z\MET\addons\units\bha\vehicles\turrets\sounds\emplaced_at_gun.ogg",
			1,
			1,
			1500
			};
			soundBegin[] = {
			"begin1",
			1
			};
		};
		soundContinuous = 0;
		reloadTime = 1;
		magazineReloadTime = 12;
		autoReload = 1;
		autoFire = 0;
		dispersion = 0.00057;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 10;
		minRange = 0;
		minRangeProbab = 0.01;
		midRange = 1;
		midRangeProbab = 0.01;
		maxRange = 2;
		maxRangeProbab = 0.01;
		};
  	};
};