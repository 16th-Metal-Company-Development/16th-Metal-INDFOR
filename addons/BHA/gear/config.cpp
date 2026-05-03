class CfgPatches
{
	class armor_16
	{
		units[]=
		{
		};
		weapons[]=
		{
			"MET_Warbot_Uniform",
			"MET_EliminatorUpArmorVest"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_characters_F"
		};
		author="DJ, LCDR Wolf, JLTS Team";
		Name="16th Metal Armor";
	};
};


class CfgWeapons
{
	class ItemInfo;
	class HeadgearItem;
	/*==================================================================================================================================================
	==Initiates
	==================================================================================================================================================*/
	class SC_Helmet_WD_Green_VU;
    class MET_Helmet_WD_Black_VU: SC_Helmet_WD_Green_VU
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Initiate Helmet";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\helmet_black_co.paa"
		};
        class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\sc_equipment\data\watchdog\wd_helmet_heavy_noGlasses.p3d";
			modelSides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=16;
					passThrough=0.3;
				};
				class Face
				{
					hitPointName="HitFace";
					armor=10;
					passThrough=0.3;
				};
			};
		};
	};
    class VestItem;
    class SC_Vest_WD_Basic_Green;
	class MET_Vest_WD_Basic_Black: SC_Vest_WD_Basic_Green
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Initiate Vest (Basic)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\vest_black_co.paa"
		};
        class ItemInfo: VestItem
		{
			uniformModel="\sc_equipment\data\watchdog\wd_vest_basic.p3d";
			containerClass="Supply80";
			mass=50;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=62;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=62;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=14;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
			};
		};
	};
    class SC_Vest_WD_Medium_Green;
    class MET_Vest_WD_Medium_Black: SC_Vest_WD_Medium_Green
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Initiate Vest (Medium)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\vest_black_co.paa"
		};
        class ItemInfo: VestItem
		{
			uniformModel="\sc_equipment\data\watchdog\wd_vest_medium.p3d";
			containerClass="Supply180";
			mass=80;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=62;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=62;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=14;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=14;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
    /*==================================================================================================================================================
	==Acolytes
	==================================================================================================================================================*/
	class SC_MDF_Helmet;
	class MET_MDF_Helmet_Black: SC_MDF_Helmet
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Helmet (Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFHelmet\Black\Material.001_CO.paa"
		};
        class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="MDF\MDFHelmet.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=30;
					passThrough=0.4;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=22;
					passThrough=0.4;
				};
			};
		};
	};
    class SC_MDF_Heavy;
	class MET_MDF_Heavy_Black: SC_MDF_Heavy
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Armor";
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFTorso\Black\DefaultMaterial_CO.paa",
			"MDF\MDFLegs\Black\DefaultMaterial_CO.paa"
		};
        class ItemInfo: ItemInfo
		{
			uniformModel="MDF\MDFHeavy.p3d";
			containerClass="Supply200";
			mass=110;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=18;
					passThrough=0.4;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=20;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=88;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=88;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.3;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.4;
				};
			};
		};
	};
    /*==================================================================================================================================================
	==Honor Guard
	==================================================================================================================================================*/
	class SC_MDF_Helmet_SSD;
	class MET_MDF_Helmet_PHOBOS: SC_MDF_Helmet_SSD
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Honor Guard Helmet";
        class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="MDF\MDFHelmet.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=50;
					passThrough=0.2;
				};
				class Face
				{
					hitPointName="HitFace";
					armor=40;
					passThrough=0.2;
				};
			};
		};
	};
    class SC_MDF_Heavy_SSD;
	class MET_MDF_Heavy_PHOBOS: SC_MDF_Heavy_SSD
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Honor Guard Armor";
        class ItemInfo: ItemInfo
		{
			uniformModel="MDF\MDFHeavy.p3d";
			containerClass="Supply200";
			mass=110;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=32;
					passThrough=0.3;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=40;
					passThrough=0.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=118;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=110;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=110;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
    /*==================================================================================================================================================
	==Apostles
	==================================================================================================================================================*/
    class SC_Helmet_SEN_Night_SL;
	class MET_Helmet_SEN_SL_Black: SC_Helmet_SEN_Night_SL
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Apostle Helmet";
        class ItemInfo: HeadgearItem
		{
			mass=35;
			uniformModel="\sc_equipment\data\sentinel\sen_helmet_sl.p3d";
			modelSides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.3;
				};
				class Face
				{
					hitPointName="HitFace";
					armor=30;
					passThrough=0.3;
				};
			};
		};
	};
    class SC_Vest_SEN_Heavy_Night;
	class MET_Vest_SEN_Heavy_Black: SC_Vest_SEN_Heavy_Night
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Apostle Vest";
        class ItemInfo: VestItem
		{
			uniformModel="\sc_equipment\data\sentinel\sen_vest_heavy.p3d";
			containerClass="Supply200";
			mass=100;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=22;
					passThrough=0.4;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.3;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=108;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=100;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=100;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=30;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.3;
				};
			};
		};
	};
    /*==================================================================================================================================================
	==Bots
	==================================================================================================================================================*/
    class UniformItem;
    class Uniform_Base;
    class MET_Warbot_Uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=2;
		author="Moose (Scion Conflict Mod Team)";
		picture="sc_newequipment2\icon_sc_ca.paa";
		displayName="BHA Warbot Gen II";
		descriptionshort="Generation II Warbots, manufactured by the Atlas Corporation";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\Warbot\Torso\DefaultMaterial_CO.paa",
			"Uniforms\Warbot\Legs\DefaultMaterial_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[]={0,1,2,3};
			uniformClass="WarbotUniform_dummy";
			containerClass="Supply30";
			mass=45;
			allowedSlots[]={701,801,901};
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=18;
					passThrough=0.4;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=20;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=88;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=88;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.3;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.4;
				};
			};
		};
	};
    class SC_Gen2WarbotHead;
	class MET_Gen2WarbotHead_NoFS: SC_Gen2WarbotHead
	{
		scopeArsenal=1;
		displayName="Gen II Warbot Head (No Faceshield)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_newequipment2\WarbotHead\DefaultMaterial_CO.paa",
			""
		};
        
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="sc_newequipment2\WarbotHead.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=45;
					passThrough=0.3;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=35;
					passThrough=0.4;
				};
			};
		};
	};
    class Vest_Camo_Base;
    class MET_EliminatorUpArmorVest: Vest_Camo_Base
	{
		_generalMacro="MEt_EliminatorUpArmorVest";
		scope=2;
		scopeArsenal=1;
		scopeCurator=2;
		weaponPoolAvailable=1;
		author="Moose (Scion Conflict Mod Team)";
		displayName="Eliminator MKI UpArmored Plating";
		picture="\sc_newequipment2\icon_sc_ca.paa";
		model="sc_newequipment2\eliminatoruparmor.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_newequipment2\UpArmor\DefaultMaterial_CO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="sc_newequipment2\eliminatoruparmor.p3d";
			containerClass="Supply160";
			mass=30;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.35;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.35;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=100;
					passThrough=0.3;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=100;
					passThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=50;
					passThrough=0.3;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.35;
				};
			};
		};
	};
    /*==================================================================================================================================================
	==Shock Droids
	==================================================================================================================================================*/
	class H_HelmetB;
	class TKE_WarBotHead;
	class BHA_WarBotHead: H_HelmetB
	{
		author="Rogue771";
		scope=2;
		scopeArsenal=1;
		displayName="[BHA] ARES-04 Legionnaire Head";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		model="\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotHead.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_WarBotHead_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotHead.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=40;
					passThrough=0.1;
					explosionShielding=30;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=35;
					passThrough=0.25;
					explosionShielding=25;
				};
			};
		};
	};
	class BHA_WarBotHeadWorker: TKE_WarBotHead
	{
		author="Rogue771";
		scope=1;
		displayName="[BHA] ARES-04 Legionnaire Head (Worker)";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_WarBotHeadWorker_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotHead.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
					explosionShielding=30;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.25;
					explosionShielding=25;
				};
			};
		};
	};
	class BHA_WarBotHeadMDMC: TKE_WarBotHead
	{
		author="Rogue771";
		scope=2;
		displayName="[MDMC] ARES-04 Legionnaire Head";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDMCLogoUI.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_WarBotHeadMDMC_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotHead.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.1;
					explosionShielding=30;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=45;
					passThrough=0.25;
					explosionShielding=25;
				};
			};
		};
	};
	class TKE_WarbotUni_U_OP;
	class BHA_WarbotUniWorker_U_I: TKE_WarbotUni_U_OP
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="Rogue771";
		scope=2;
		scopeArsenal=1;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BHA] ARES-04 Legionnaire chasis (Worker)";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="BHA_WarbotUniWorker_inf_I";
			containerClass="Supply200";
			mass=80;
		};
	};
	class BHA_WarBotArmour: Vest_Camo_Base
	{
		author="Rogue771";
		scope=2;
		scopeArsenal=1;
		displayName="[BHA] ARES-04 Legionnaire Armour";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		model="\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotArmour.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="Armour Level IV";
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_WarBotArmour_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotArmour.p3d";
			containerClass="Supply200";
			mass=25;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_WarBotArmour_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=55;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=55;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=55;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=1;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.6;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
	class BHA_WarBotArmourMDMC: BHA_WarBotArmour
	{
		author="Rogue771";
		scope=2;
		displayName="[MDMC] ARES-04 Legionnaire Armour";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDMCLogoUI.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_WarBotArmourMDMC_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotArmour.p3d";
			containerClass="Supply200";
			mass=25;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_WarBotArmourMDMC_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=40;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=65;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=65;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=65;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=1;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.6;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class BHA_WarbotUni_U_I: TKE_WarbotUni_U_OP
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="Rogue771";
		scope=2;
		scopeArsenal=1;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BHA] ARES-04 Legionnaire chasis";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="BHA_WarbotUni_inf_I";
			containerClass="Supply200";
			mass=100;
		};
	};
	class BHA_WarbotUniMDMC_inf_B: TKE_WarbotUni_U_OP
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=1;
		JLTS_deathSounds="DeathDroid";
		author="Rogue771";
		scope=2;
		scopeArsenal=1;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_BotLegsMDMC_co.paa",
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_BotTorsoMDMC_co.paa"
		};
		side=1;
		displayName="[BHA] ARES-04 Elite Legionnaire chasis";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="BHA_WarbotUni_Elite_inf_I";
			containerClass="Supply200";
			mass=100;
		};
	};
};
class CfgVehicles
{
	/*==================================================================================================================================================
	==Initiates
	==================================================================================================================================================*/
	class SC_Backpack_WD_Green;
	class MET_Backpack_WD_Black: SC_Backpack_WD_Green
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Initiate Backpack";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\backpack_black_co.paa"
		};
		maximumLoad=300;
		mass=35;
	};
    class MET_Backpack_ATWD_Black: SC_Backpack_WD_Green
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Scion Conflict Mod Team";
		displayName="Initiate Backpack";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\backpack_black_co.paa"
		};
		class TransportMagazines
		{
			class _xx_BHA_AT_SINGLE
			{
				count=2;
				magazine="BHA_AT_SINGLE";
			};
            class _xx_BHA_AP_SINGLE
			{
				count=1;
				magazine="BHA_AP_SINGLE";
			};
		};
		maximumLoad=500;
		mass=35;
	};
    /*==================================================================================================================================================
	==Acolytes
	==================================================================================================================================================*/
	class SC_MDFBackpack;
    class MET_MDFBackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=300;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
	};
    class MET_MDFMEDBackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=300;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
        class TransportItems
		{
			class _xx_LFP_item_bacta_bandage
			{
				count=80;
				magazine="LFP_item_bacta_bandage";
			};
            class _xx_Medikit
			{
				count=3;
				magazine="Medikit";
			};
		};
	};
    class MET_MDFMGBackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=300;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
        class TransportMagazines
		{
			class _xx_MET_T20AC_mag
			{
				count=5;
				magazine="MET_EL34_mag";
			};
		};
	};
    class MET_MDFATBackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=600;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_BHA_AT_SINGLE
			{
				count=3;
				magazine="BHA_AT_SINGLE";
			};
            class _xx_BHA_AP_SINGLE
			{
				count=2;
				magazine="BHA_AP_SINGLE";
			};
		};
	};
    class MET_MDFAABackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=600;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_BHA_AA_SINGLE
			{
				count=5;
				magazine="BHA_AA_SINGLE";
			};
            class _xx_BHA_AP_SINGLE
			{
				count=1;
				magazine="BHA_AP_SINGLE";
			};
		};
	};
    /*==================================================================================================================================================
	==Honor Guard
	==================================================================================================================================================*/
	class SC_MDFBackpack_SSD;
	class MET_MDFBackpack_SSD: SC_MDFBackpack_SSD
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Honor Guard Backpack";
		descriptionshort="Backpack used by the BHA Honor Guard.";
		maximumLoad=300;
	};
	class MET_MDFBackpack_SSD_MG: SC_MDFBackpack_SSD
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Honor Guard Backpack";
		descriptionshort="Backpack used by the BHA Honor Guard.";
		maximumLoad=300;
        class TransportMagazines
		{
			class _xx_MET_FHR1_mag
			{
				count=5;
				magazine="MET_FHR1_mag";
			};
		};
	};
    /*==================================================================================================================================================
	==Apostles
	==================================================================================================================================================*/
	class SC_SentinelPack_Night;
    class MET_SentinelPack_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
    };
    class MET_SentinelPackMED_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
        class TransportItems
		{
			class _xx_LFP_item_bacta_bandage
			{
				count=80;
				magazine="LFP_item_bacta_bandage";
			};
            class _xx_Medikit
			{
				count=1;
				magazine="Medikit";
			};
		};
    };
    class MET_SentinelPackAT_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
		class TransportMagazines
		{
			class _xx_BHA_AT_SINGLE
			{
				count=5;
				magazine="BHA_AT_SINGLE";
			};
            class _xx_BHA_AP_SINGLE
			{
				count=1;
				magazine="BHA_AP_SINGLE";
			};
		};
    };
    class MET_SentinelPackMG_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
		class TransportMagazines
		{
			class _xx_MET_T20AC_mag
			{
				count=5;
				magazine="MET_T20AC_mag";
			};
		};
    };
    class MET_SentinelPackGMG_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
		class TransportMagazines
		{
			class _xx_MET_heavy_proton_mag
			{
				count=2;
				magazine="MET_heavy_proton_mag";
			};
		};
    };
    /*==================================================================================================================================================
	==Bots
	==================================================================================================================================================*/
	class O_V_Soldier_hex_F;
    class WarbotUniform_dummy: O_V_Soldier_hex_F
	{
		scope=1;
		modelSides[]={0,1,2,3};
		displayName="Warbot Gen II Chasis-Body";
		model="Uniforms\warbot.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\Warbot\Torso\DefaultMaterial_CO.paa",
			"Uniforms\Warbot\Legs\DefaultMaterial_CO.paa"
		};
	};
    class Bag_Base;
    class MET_Backpack_Warbot: Bag_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Warbot Backpack Extension";
		descriptionshort="Backpack extension for Mk2 Warbots.";
		hiddenSelections[]=
		{
			"camo_backpack"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\warbot\textures\backpack_co.paa"
		};
		picture="\sc_equipment\data\icons\icon_sc_ca.paa";
		model="sc_equipment\data\warbot\gen2_backpack.p3d";
		maximumLoad=600;
		mass=50;
	};
    /*==================================================================================================================================================
	==Shock Droids
	==================================================================================================================================================*/
	class TKE_WarbotUni_base;
	class BHA_WarbotUniWorker_inf_I: TKE_WarbotUni_base
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_BotLegsWorker_co.paa",
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_BotTorsoWorker_co.paa"
		};
		side=2;
		displayName="[BHA] ARES-04 Legionnaire chasis (Worker)";
		backpack="";
		uniformClass="BHA_WarbotUniWorker_U_I";
		armor				= 3;	// total hit points (meaning global "health") of the object.
									// keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
		armorStructural		= 0.6;	// divides all damage taken to total hit point, either directly or through hit point passThrough coefficient.
									// must be adjusted for each model to achieve consistent total damage results
		explosionShielding	= 0.1; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold	= 0.001;	// minimalHit for total damage
		impactDamageMultiplier	= 0.5;		// multiplier for falling damage
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.5;
				radius=0.08;
				explosionShielding=0.1;
				minimalHit=0.01;
			};
			class HitNeck: HitFace
			{
				armor=4;
				material=-1;
				name="neck";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.01;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.5;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.01;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=10;
				material=-1;
				name="pelvis";
				passThrough=0.2;
				radius=0.24;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.05;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=1;
				radius=0.16;
				explosionShielding=0.5;
				visual="injury_body";
				minimalHit=0.05;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=25;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.25;
			};
			class HitChest: HitDiaphragm
			{
				armor=30;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.30;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.01;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=15;
				material=-1;
				name="arms";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=40;
				visual="injury_hands";
				minimalHit=1;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=10;
				material=-1;
				name="hands";
				passThrough=0;
				radius=0.1;
				explosionShielding=40;
				visual="injury_hands";
				minimalHit=20;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=20;
				material=-1;
				name="legs";
				passThrough=0.1;
				radius=0.14;
				explosionShielding=40;
				visual="injury_legs";
				minimalHit=1;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=1;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.08;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"MRC\JLTS\Characters\DroidArmor\data\b1.rvmat",
				"MRC\JLTS\Characters\DroidArmor\data\b1_injury.rvmat",
				"MRC\JLTS\Characters\DroidArmor\data\b1_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class BHA_WarbotUni_inf_I: TKE_WarbotUni_base
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_BotLegs_co.paa",
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_BotTorso_co.paa"
		};
		side=2;
		displayName="[BHA] ARES-04 Legionnaire chasis";
		backpack="";
		uniformClass="BHA_WarbotUni_U_I";
		armor				= 3;	// total hit points (meaning global "health") of the object.
									// keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
		armorStructural		= 0.6;	// divides all damage taken to total hit point, either directly or through hit point passThrough coefficient.
									// must be adjusted for each model to achieve consistent total damage results
		explosionShielding	= 0.1; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold	= 0.001;	// minimalHit for total damage
		impactDamageMultiplier	= 0.5;		// multiplier for falling damage
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.5;
				radius=0.08;
				explosionShielding=0.1;
				minimalHit=0.01;
			};
			class HitNeck: HitFace
			{
				armor=4;
				material=-1;
				name="neck";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.01;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.5;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.01;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=20;
				material=-1;
				name="pelvis";
				passThrough=0.2;
				radius=0.24;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.05;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=8;
				material=-1;
				name="spine1";
				passThrough=1;
				radius=0.16;
				explosionShielding=0.5;
				visual="injury_body";
				minimalHit=0.05;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=35;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.25;
			};
			class HitChest: HitDiaphragm
			{
				armor=40;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.30;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.01;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=25;
				material=-1;
				name="arms";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=5;
				visual="injury_hands";
				minimalHit=1;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=20;
				material=-1;
				name="hands";
				passThrough=0;
				radius=0.1;
				explosionShielding=5;
				visual="injury_hands";
				minimalHit=20;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=40;
				material=-1;
				name="legs";
				passThrough=0.1;
				radius=0.14;
				explosionShielding=5;
				visual="injury_legs";
				minimalHit=1;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=1;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.08;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=10;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"MRC\JLTS\Characters\DroidArmor\data\b1.rvmat",
				"MRC\JLTS\Characters\DroidArmor\data\b1_injury.rvmat",
				"MRC\JLTS\Characters\DroidArmor\data\b1_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class BHA_WarbotUni_Elite_inf_I: TKE_WarbotUni_base
	{
		scope=2;
		scopeCurator=1;
		scopeArsenal=1;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_BotLegsMDMC_co.paa",
			"\TKE_Kuiper_Engagements\TKE_Warbots\data\TKE_BotTorsoMDMC_co.paa"
		};
		side=1;
		displayName="[BHA] ARES-04 Elite Legionnaire chasis";
		backpack="";
		uniformClass="BHA_WarbotUniMDMC_inf_B";
		armor				= 3;	// total hit points (meaning global "health") of the object.
									// keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
		armorStructural		= 0.6;	// divides all damage taken to total hit point, either directly or through hit point passThrough coefficient.
									// must be adjusted for each model to achieve consistent total damage results
		explosionShielding	= 0.1; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold	= 0.001;	// minimalHit for total damage
		impactDamageMultiplier	= 0.5;		// multiplier for falling damage
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.5;
				radius=0.08;
				explosionShielding=0.1;
				minimalHit=0.01;
			};
			class HitNeck: HitFace
			{
				armor=6;
				material=-1;
				name="neck";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.01;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.5;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.01;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=30;
				material=-1;
				name="pelvis";
				passThrough=0.2;
				radius=0.24;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.05;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=9;
				material=-1;
				name="spine1";
				passThrough=1;
				radius=0.16;
				explosionShielding=0.5;
				visual="injury_body";
				minimalHit=0.05;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=45;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.25;
			};
			class HitChest: HitDiaphragm
			{
				armor=50;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.30;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.01;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=35;
				material=-1;
				name="arms";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=5;
				visual="injury_hands";
				minimalHit=1;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=30;
				material=-1;
				name="hands";
				passThrough=0;
				radius=0.1;
				explosionShielding=5;
				visual="injury_hands";
				minimalHit=20;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=50;
				material=-1;
				name="legs";
				passThrough=0.1;
				radius=0.14;
				explosionShielding=5;
				visual="injury_legs";
				minimalHit=1;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=1;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.08;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=10;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"MRC\JLTS\Characters\DroidArmor\data\b1.rvmat",
				"MRC\JLTS\Characters\DroidArmor\data\b1_injury.rvmat",
				"MRC\JLTS\Characters\DroidArmor\data\b1_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
};