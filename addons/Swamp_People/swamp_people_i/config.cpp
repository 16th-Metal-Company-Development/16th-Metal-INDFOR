class CfgPatches
{
	class SPR_Reserves
	{
		units[]=
		{
			"SPR_Officer",
			"SPR_Rifleman",
			"SPR_MG",
			"SPR_Sniper",
			"SPR_AT"
		};
		weapons[]={};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"IDA_INDEP",
			"metal_swamp_weap",
			"metal_inf_weap",
			"A3_Characters_F_Exp"
		};
	};
};
class WeaponSlotsInfo
{
	class MuzzleSlot;
};
class CfgWeapons
{
	class MET_DC15A_F;
	class MET_DC15A_GL;
	class MET_DC15L_F;
	class MET_DC15A_NPC: MET_DC15A_F
	{
		scope=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"Aux212_DC15A_Bayonet_Stan_Side"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="Aux212_DC15A_Bayonet_Stan_Side";
			};
		};
	};
	class MET_DC15A_GL_NPC: MET_DC15A_GL
	{
		scope=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"Aux212_DC15A_Bayonet_Stan_Side"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="Aux212_DC15A_Bayonet_Stan_Side";
			};
		};
	};
	class MET_DC15L_NPC: MET_DC15L_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptics
			{
				slot="CowsSlot";
				item="MET_optic_DC15L_F";
			};
		};
	};
	class UniformItem;
	class Uniform_Base;
	class U_I_T_Sniper_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		displayName="$STR_A3_U_BT_sniper_F0";
		picture="\A3\characters_f_exp\data\ui\icon_U_BT_sniper_F_tna_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_SL_F_tna_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_T_Sniper_F";
			containerClass="Supply60";
			mass=60;
		};
		DLC="Expansion";
	};
};
class ItemInfo;
class CfgVehicles
{
	class TKE_AlicePackUCN;
	class SPR_AlicePackUCN_HVY: TKE_AlicePackUCN
	{
		scope=2;
		class TransportMagazines
		{
			class _xx_MET_DC15L_mag
			{
				magazine="MET_DC15L_mag";
				count=3;
			};
		};
	};
	class SPR_AlicePackUCN_AT: TKE_AlicePackUCN
	{
		scope=2;
		class TransportMagazines
		{
			class _xx_MET_MAND_AP_SINGLE
			{
				magazine="MET_MAND_AP_SINGLE";
				count=1;
			};
			class _xx_MET_MAND_AA_SINGLE
			{
				magazine="MET_MAND_AA_SINGLE";
				count=1;
			};
		};
	};
	class B_sniper_F;
	class I_T_Sniper_F: B_sniper_F
	{
		side=2;
		scope=1;
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Sniper_F.jpg";
		_generalMacro="I_T_Sniper_F";
		faction="Swamp_People_Units";
		uniformClass="U_I_T_Sniper_F";
		weapons[]=
		{
			"srifle_LRR_tna_LRPS_F",
			"hgun_P07_khk_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"srifle_LRR_tna_LRPS_F",
			"hgun_P07_khk_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		linkedItems[]=
		{
			"V_Chestrig_rgr",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_rgr",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa",
			"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_sniper_F_tna_co.paa"
		};
		DLC="Expansion";
	};
	class I_Soldier_base_F;
	class SPR_Officer: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Reserves";
		uniformClass="U_I_T_Sniper_F";
		displayName="Swamp Officer";
		icon="iconManOfficer";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="TKE_AlicePackUCN";
		Weapons[]=
		{
			"MET_DC15A_GL_NPC",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_DC15A_GL_NPC",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_HE_Grenade",
			"MET_HE_Grenade",
			"MET_HE_Grenade",
			"MET_HE_Grenade",
			"MET_HE_Grenade",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_HE_Grenade",
			"MET_HE_Grenade",
			"MET_HE_Grenade",
			"MET_HE_Grenade",
			"MET_HE_Grenade",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		Items[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		respawnItems[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		linkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Heavy_Black",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Heavy_Black",
			"sc_trojanrespirator"
		};
		/*aimingAccuracy[] = { 0.9, 1, 1, 1 }; // Higher accuracy for elite units
		aimingShake[] = { 0.5, 0.5, 0.5, 0.5 }; // Less shaking, more stable aim
		aimingSpeed[] = { 1, 1.5, 1, 1 }; // Faster aiming speed
		commanding[] = { 1, 1, 1, 1 }; // Quick command responses
		courage[] = { 1, 1, 1, 1 }; // High courage
		general[] = { 1, 1, 1, 1 }; // General skill (includes things like awareness)
		reloadSpeed[] = { 0.9, 0.8, 1, 1 }; // Faster reload
		spotDistance[] = { 1, 1, 1, 1 }; // Good spotting range
		spotTime[] = { 0.7, 0.8, 1, 1 }; // Faster spotting response*/
		/*class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { {_unit setSkill [_x, 1]; } forEach ['aimingAccuracy','aimingShake','aimingSpeed','commanding','courage','general','reloadSpeed','spotDistance','spotTime']; };";
		};*/
		class Attributes
		{
			// VCOM compatibility: set skill to max via VCOM attributes if present
			VCOM_AISkill = 1;
		};

		/*class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { {_unit setSkill [_x, 1]; } forEach ['aimingAccuracy','aimingShake','aimingSpeed','commanding','courage','general','reloadSpeed','spotDistance','spotTime']; if !(isNil 'VCOM_AI_SetSkill') then { [_unit, 1] call VCOM_AI_SetSkill; }; };";
		};*/
		/*class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { _unit spawn { sleep 15; {_this setSkill [_x, 1]; } forEach ['aimingAccuracy','aimingShake','aimingSpeed','commanding','courage','general','reloadSpeed','spotDistance','spotTime']; if !(isNil 'VCOM_AI_SetSkill') then { [_this, 1] call VCOM_AI_SetSkill; }; }; };";
		};*/
		class CustomSkillScript
		{
			init = "_unit = _this select 0; if (local _unit) then { \
				_unit spawn { \
					sleep 15; \
					_unit setSkill ['aimingAccuracy', 1]; \
					_unit setSkill ['aimingShake', 1]; \
					_unit setSkill ['aimingSpeed', 1]; \
					_unit setSkill ['commanding', 1]; \
					_unit setSkill ['courage', 1]; \
					_unit setSkill ['general', 1]; \
					_unit setSkill ['reloadSpeed', 1]; \
					_unit setSkill ['spotDistance', 1]; \
					_unit setSkill ['spotTime', 1]; \
				}; \
			};";
		};
	};
	class SPR_Rifleman: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Reserves";
		uniformClass="U_I_T_Sniper_F";
		displayName="Swamp Rifleman";
		icon="iconMan";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="TKE_AlicePackUCN";
		Weapons[]=
		{
			"MET_DC15A_NPC",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_DC15A_NPC",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		Items[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		respawnItems[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		linkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Light_Black",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Light_Black",
			"sc_trojanrespirator"
		};
		class CustomSkillScript
		{
			init = "_unit = _this select 0; if (local _unit) then { \
				_unit spawn { \
					sleep 15; \
					_unit setSkill ['aimingAccuracy', 1]; \
					_unit setSkill ['aimingShake', 1]; \
					_unit setSkill ['aimingSpeed', 1]; \
					_unit setSkill ['commanding', 1]; \
					_unit setSkill ['courage', 1]; \
					_unit setSkill ['general', 1]; \
					_unit setSkill ['reloadSpeed', 1]; \
					_unit setSkill ['spotDistance', 1]; \
					_unit setSkill ['spotTime', 1]; \
				}; \
			};";
		};
	};
	class SPR_AT: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Reserves";
		uniformClass="U_I_T_Sniper_F";
		displayName="Swamp Anti-Tank";
		icon="iconManAT";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="SPR_AlicePackUCN_AT";
		Weapons[]=
		{
			"MET_DC15A_NPC",
			"MET_RPS6_SMRT",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_DC15A_NPC",
			"MET_RPS6_SMRT",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_MAND_AT_Single",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_DC15A_mag",
			"MET_MAND_AT_Single",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		Items[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		respawnItems[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		linkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Light_Black",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Light_Black",
			"sc_trojanrespirator"
		};
		class CustomSkillScript
		{
			init = "_unit = _this select 0; if (local _unit) then { \
				_unit spawn { \
					sleep 15; \
					_unit setSkill ['aimingAccuracy', 1]; \
					_unit setSkill ['aimingShake', 1]; \
					_unit setSkill ['aimingSpeed', 1]; \
					_unit setSkill ['commanding', 1]; \
					_unit setSkill ['courage', 1]; \
					_unit setSkill ['general', 1]; \
					_unit setSkill ['reloadSpeed', 1]; \
					_unit setSkill ['spotDistance', 1]; \
					_unit setSkill ['spotTime', 1]; \
				}; \
			};";
		};
	};
	class SPR_MG: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Reserves";
		uniformClass="U_I_T_Sniper_F";
		displayName="Swamp Machine Gunner";
		icon="iconManMG";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="SPR_AlicePackUCN_HVY";
		Weapons[]=
		{
			"MET_DC15L_NPC",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_DC15L_NPC",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_DC15L_mag",
			"MET_DC15L_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_DC15L_mag",
			"MET_DC15L_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		Items[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		respawnItems[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		linkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Heavy_Black",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Heavy_Black",
			"sc_trojanrespirator"
		};
		class CustomSkillScript
		{
			init = "_unit = _this select 0; if (local _unit) then { \
				_unit spawn { \
					sleep 15; \
					_unit setSkill ['aimingAccuracy', 1]; \
					_unit setSkill ['aimingShake', 1]; \
					_unit setSkill ['aimingSpeed', 1]; \
					_unit setSkill ['commanding', 1]; \
					_unit setSkill ['courage', 1]; \
					_unit setSkill ['general', 1]; \
					_unit setSkill ['reloadSpeed', 1]; \
					_unit setSkill ['spotDistance', 1]; \
					_unit setSkill ['spotTime', 1]; \
				}; \
			};";
		};
	};
	class SPR_Sniper: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Reserves";
		uniformClass="U_I_T_Sniper_F";
		displayName="Swamp Sniper";
		icon="JLTS_iconManSniper";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="TKE_AlicePackUCN";
		Weapons[]=
		{
			"MET_Valken38X_F",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_Valken38X_F",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_Valken_mag",
			"MET_Valken_mag",
			"MET_Valken_mag",
			"MET_Valken_mag",
			"MET_Valken_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_Valken_mag",
			"MET_Valken_mag",
			"MET_Valken_mag",
			"MET_Valken_mag",
			"MET_Valken_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		Items[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		respawnItems[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage"
		};
		linkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Light_Black",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"SC_Helmet_SAM_Black",
			"SC_Vest_SAM_Light_Black",
			"sc_trojanrespirator"
		};
		class CustomSkillScript
		{
			init = "_unit = _this select 0; if (local _unit) then { \
				_unit spawn { \
					sleep 15; \
					_unit setSkill ['aimingAccuracy', 1]; \
					_unit setSkill ['aimingShake', 1]; \
					_unit setSkill ['aimingSpeed', 1]; \
					_unit setSkill ['commanding', 1]; \
					_unit setSkill ['courage', 1]; \
					_unit setSkill ['general', 1]; \
					_unit setSkill ['reloadSpeed', 1]; \
					_unit setSkill ['spotDistance', 1]; \
					_unit setSkill ['spotTime', 1]; \
				}; \
			};";
		};
	};
};
class CfgGroups
{
	class INDEP
	{
		class SP_Units
		{
			name="[16th] Swamp People";
			class SPR_Fighters_Groups
			{
				name="[16th] Reserves";
				class SPR_Fighters_Squad
				{
					name="Squad";
					scope=2;
					side=2;
					faction="SPR_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SPR_Officer";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SPR_AT";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="PRIVATE";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="PRIVATE";
						position[]={-1,-3,0};
					};
					class Unit5
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit6
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="PRIVATE";
						position[]={-1,-4,0};
					};
					class Unit7
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit8
					{
						side=2;
						vehicle="SPR_MG";
						rank="PRIVATE";
						position[]={-1,-5,0};
					};
					class Unit9
					{
						side=2;
						vehicle="SPR_MG";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class SPR_Fighter_Team
				{
					name="Team";
					scope=2;
					side=2;
					faction="SPR_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="PRIVATE";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SPR_MG";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
				};
				class SPR_Fighter_Patrol
				{
					name="Patrol";
					scope=2;
					side=2;
					faction="SPR_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SPR_Rifleman";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SPR_Sniper";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
				};
			};
		};
	};
};