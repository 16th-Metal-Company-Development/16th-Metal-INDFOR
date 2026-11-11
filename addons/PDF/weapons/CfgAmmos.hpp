class CfgAmmo
{
	class B_338_Ball;
	class MET_PDF_Blasterbolt : B_338_Ball
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		ACE_damageType = "metplasma";
		cartridge = "";
		lightcolor[] = { 1,0,0 };
		hit = 20;
		indirectHit = 0;
		explosive = 0;
		indirectHitRange = 0.5;
		caliber = 1.4;
		coefGravity = 0;
		timetolive = 8;
		waterFriction = -0.0099999998;
		deflecting = 0;
		airfriction = 0;
		tracerstarttime = 0.050000001;
		tracerendtime = 10;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		flaresize = 5;
		tracerscale = 1;
		effectflare = "FlareShell";
		effectfly = "MET_BlasterBoltGlow_Red_Fly";
		ExplosionEffects = "MET_ImpactEffect";
		cratereffects = "";
		class HitEffects
		{
			Hit_Foliage_Green = "MET_ImpactEffect";
			Hit_Foliage_Dead = "MET_ImpactEffect";
			Hit_Foliage_Green_big = "MET_ImpactEffect";
			Hit_Foliage_Palm = "MET_ImpactEffect";
			Hit_Foliage_Pine = "MET_ImpactEffect";
			hitFoliage = "MET_ImpactEffect";
			hitGlass = "MET_ImpactEffect";
			hitGlassArmoRed = "MET_ImpactEffect";
			hitWood = "MET_ImpactEffect";
			hitMetal = "MET_ImpactEffect";
			hitMetalPlate = "MET_ImpactEffect";
			hitBuilding = "MET_ImpactEffect";
			hitPlastic = "MET_ImpactEffect";
			hitRubber = "MET_ImpactEffect";
			hitTyre = "MET_ImpactEffect";
			hitConcrete = "MET_ImpactEffect";
			hitMan = "MET_ImpactEffect";
			hitGroundSoft = "MET_ImpactEffect";
			hitGroundRed = "MET_ImpactEffect";
			hitGroundHard = "MET_ImpactEffect";
			hitWater = "MET_ImpactEffect";
			hitVirtual = "MET_ImpactEffect";
			default_mat = "MET_ImpactEffect";
		};
		soundHitBody1[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_1.ogg",
			3,
			1,
			200
		};
		soundHitBody2[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_2.ogg",
			3,
			1,
			200
		};
		soundHitBody3[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_3.ogg",
			3,
			1,
			200
		};
		soundHitBody4[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_4.ogg",
			3,
			1,
			200
		};
		soundHitBody5[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_5.ogg",
			3,
			1,
			200
		};
		soundHitBody6[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_1.ogg",
			3,
			1.5,
			200
		};
		soundHitBody7[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_2.ogg",
			3,
			1.5,
			200
		};
		soundHitBody8[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_3.ogg",
			3,
			1.5,
			200
		};
		soundHitBody9[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_4.ogg",
			3,
			1.5,
			200
		};
		soundHitBody10[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_5.ogg",
			3,
			1.5,
			200
		};
		hitMan[] =
		{
			"soundHitBody1",
			0.1,
			"soundHitBody2",
			0.1,
			"soundHitBody3",
			0.1,
			"soundHitBody4",
			0.1,
			"soundHitBody5",
			0.1,
			"soundHitBody6",
			0.1,
			"soundHitBody7",
			0.1,
			"soundHitBody8",
			0.1,
			"soundHitBody9",
			0.1,
			"soundHitBody10",
			0.1
		};
		soundDefault1[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_1.ogg",
			2,
			1,
			165
		};
		soundDefault2[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_2.ogg",
			2,
			1,
			165
		};
		soundDefault3[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_3.ogg",
			2,
			1,
			165
		};
		soundDefault4[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_4.ogg",
			2,
			1,
			165
		};
		soundDefault5[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_5.ogg",
			2,
			1,
			165
		};
		soundDefault6[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_6.ogg",
			2,
			1,
			165
		};
		soundDefault7[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_7.ogg",
			2,
			1,
			165
		};
		soundDefault8[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_8.ogg",
			2,
			1,
			165
		};
		soundDefault9[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_9.ogg",
			2,
			1,
			165
		};
		soundDefault10[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_10.ogg",
			2,
			1,
			165
		};
		soundDefault11[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_11.ogg",
			2,
			1,
			165
		};
		soundDefault12[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_12.ogg",
			2,
			1,
			165
		};
		soundDefault13[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_13.ogg",
			2,
			1,
			165
		};
		soundDefault14[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_14.ogg",
			2,
			1,
			165
		};
		soundDefault15[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_15.ogg",
			2,
			1,
			165
		};
		soundDefault16[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_16.ogg",
			2,
			1,
			165
		};
		soundDefault17[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_17.ogg",
			2,
			1,
			165
		};
		soundDefault18[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_18.ogg",
			2,
			1,
			165
		};
		soundDefault19[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_19.ogg",
			2,
			1,
			165
		};
		soundDefault20[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_20.ogg",
			2,
			1,
			165
		};
		soundDefault21[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_21.ogg",
			2,
			1,
			165
		};
		soundDefault22[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_22.ogg",
			2,
			1,
			165
		};
		soundDefault23[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_23.ogg",
			2,
			1,
			165
		};
		soundDefault24[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_24.ogg",
			2,
			1,
			165
		};
		soundDefault25[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_25.ogg",
			2,
			1,
			165
		};
		soundDefault26[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_26.ogg",
			2,
			1,
			165
		};
		soundDefault27[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_27.ogg",
			2,
			1,
			165
		};
		soundDefault28[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_28.ogg",
			2,
			1,
			165
		};
		soundDefault29[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_29.ogg",
			2,
			1,
			165
		};
		soundDefault30[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_30.ogg",
			2,
			1,
			165
		};
		soundDefault31[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_31.ogg",
			2,
			1,
			165
		};
		soundDefault32[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_32.ogg",
			2,
			1,
			165
		};
		soundDefault33[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_33.ogg",
			2,
			1,
			165
		};
		soundDefault34[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_34.ogg",
			2,
			1,
			165
		};
		soundDefault35[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_35.ogg",
			2,
			1,
			165
		};
		soundDefault36[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_36.ogg",
			2,
			1,
			165
		};
		soundDefault37[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_37.ogg",
			2,
			1,
			165
		};
		hitDefault[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitFoliage[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitPlastic[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitRubber[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitTyre[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitWood[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitBuilding[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		soundHit1[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_1.ogg",
			2,
			1,
			165
		};
		soundHit2[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_2.ogg",
			2,
			1,
			165
		};
		soundHit3[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_3.ogg",
			2,
			1,
			165
		};
		soundHit4[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_4.ogg",
			2,
			1,
			165
		};
		soundHit5[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_5.ogg",
			2,
			1,
			165
		};
		soundHit6[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_6.ogg",
			2,
			1,
			165
		};
		soundHit7[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_7.ogg",
			2,
			1,
			165
		};
		soundHit8[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_8.ogg",
			2,
			1,
			165
		};
		soundHit9[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_9.ogg",
			2,
			1,
			165
		};
		soundHit10[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_10.ogg",
			2,
			1,
			165
		};
		soundHit11[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_11.ogg",
			2,
			1,
			165
		};
		hitGround[] =
		{
			"soundHit1",
			0.090899996,
			"soundHit2",
			0.090899996,
			"soundHit3",
			0.090899996,
			"soundHit4",
			0.090899996,
			"soundHit5",
			0.090899996,
			"soundHit6",
			0.090899996,
			"soundHit7",
			0.090899996,
			"soundHit8",
			0.090899996,
			"soundHit9",
			0.090899996,
			"soundHit10",
			0.090899996,
			"soundHit11",
			0.090899996
		};
		hitGroundHard[] =
		{
			"soundHit1",
			0.090899996,
			"soundHit2",
			0.090899996,
			"soundHit3",
			0.090899996,
			"soundHit4",
			0.090899996,
			"soundHit5",
			0.090899996,
			"soundHit6",
			0.090899996,
			"soundHit7",
			0.090899996,
			"soundHit8",
			0.090899996,
			"soundHit9",
			0.090899996,
			"soundHit10",
			0.090899996,
			"soundHit11",
			0.090899996
		};
		hitGroundSoft[] =
		{
			"soundHit1",
			0.090899996,
			"soundHit2",
			0.090899996,
			"soundHit3",
			0.090899996,
			"soundHit4",
			0.090899996,
			"soundHit5",
			0.090899996,
			"soundHit6",
			0.090899996,
			"soundHit7",
			0.090899996,
			"soundHit8",
			0.090899996,
			"soundHit9",
			0.090899996,
			"soundHit10",
			0.090899996,
			"soundHit11",
			0.090899996
		};
		hitConcrete[] =
		{
			"soundHit1",
			0.090899996,
			"soundHit2",
			0.090899996,
			"soundHit3",
			0.090899996,
			"soundHit4",
			0.090899996,
			"soundHit5",
			0.090899996,
			"soundHit6",
			0.090899996,
			"soundHit7",
			0.090899996,
			"soundHit8",
			0.090899996,
			"soundHit9",
			0.090899996,
			"soundHit10",
			0.090899996,
			"soundHit11",
			0.090899996
		};
		soundMetal1[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_1.ogg",
			2,
			1,
			165
		};
		soundMetal2[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_2.ogg",
			2,
			1,
			165
		};
		soundMetal3[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_3.ogg",
			2,
			1,
			165
		};
		soundMetal4[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_4.ogg",
			2,
			1,
			165
		};
		soundMetal5[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_5.ogg",
			2,
			1,
			165
		};
		soundMetal6[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_6.ogg",
			2,
			1,
			165
		};
		soundMetal7[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_7.ogg",
			2,
			1,
			165
		};
		soundMetal8[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_8.ogg",
			2,
			1,
			165
		};
		soundMetal9[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_9.ogg",
			2,
			1,
			165
		};
		soundMetal10[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_10.ogg",
			2,
			1,
			165
		};
		soundMetal11[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_11.ogg",
			2,
			1,
			165
		};
		soundMetal12[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_12.ogg",
			2,
			1,
			165
		};
		soundMetal13[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_13.ogg",
			2,
			1,
			165
		};
		soundMetal14[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_14.ogg",
			2,
			1,
			165
		};
		soundMetal15[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_15.ogg",
			2,
			1,
			165
		};
		hitMetal[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitIron[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitMetalInt[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitMetalPlate[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitArmor[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitArmorInt[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		bulletFly1[] =
		{
			"\infantry_weap\sounds\plasma_flyby_1.wss",
			2.2387211,
			1,
			100
		};
		bulletFly2[] =
		{
			"\infantry_weap\sounds\plasma_flyby_2.wss",
			2.2387211,
			1,
			100
		};
		bulletFly3[] =
		{
			"\infantry_weap\sounds\plasma_flyby_3.wss",
			2.2387211,
			1,
			100
		};
		bulletFly4[] =
		{
			"\infantry_weap\sounds\plasma_flyby_4.wss",
			2.2387211,
			1,
			100
		};
		bulletFly5[] =
		{
			"\infantry_weap\sounds\plasma_flyby_5.wss",
			2.2387211,
			1,
			100
		};
		bulletFly[] =
		{
			"bulletFly1",
			0.2,
			"bulletFly2",
			0.2,
			"bulletFly3",
			0.2,
			"bulletFly4",
			0.2,
			"bulletFly5",
			0.2
		};
		soundSetBulletFly[] =
		{
			"MET_plasma_bullet_flyby_soundSet"
		};
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
	};

	class MET_PDF_Blasterbolt_Low : MET_PDF_Blasterbolt
	{
		hit = 15;
		indirectHit = 0;
		explosive = 1;
		indirectHitRange = 0.5;
		caliber = 1.2;
		timetolive = 8;
	};
};