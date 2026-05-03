class CfgPatches
{
	class SP_Fighters
	{
		units[]=
		{
			"SP_Officer",
			"SP_Rifleman",
			"SP_Rifleman_Light",
			"SP_MG",
			"SP_Sniper",
			"SP_AT",
			"SP_CQC"
		};
		weapons[]={};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"IDA_INDEP",
			"metal_swamp_weap",
			"metal_inf_weap"
		};
	};
};
class ItemInfo;
class CfgWeapons
{
	class Metal_Swamp_FA11;
    class Metal_Swamp_FA11_NPC: Metal_Swamp_FA11
    {
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot="CowsSlot";
                item="MET_Swamp_optic_DC15C_F";
            };
        };
    };
};
class CfgVehicles
{
	class TKE_EVAPackFCF;
	class SP_EVAPackFCF_HVY: TKE_EVAPackFCF
	{
		scope=2;
		class TransportMagazines
		{
			class _xx_MET_M41_mag
			{
				magazine="MET_M41_mag";
				count=3;
			};
		};
	};
	class SP_EVAPackFCF_AT: TKE_EVAPackFCF
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
	class I_Soldier_base_F;
	class SP_Officer: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Fighters";
		uniformClass="TKE_CombatUniRolledV2FCF_U_B";
		displayName="Swamp Officer";
		icon="iconManOfficer";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="TKE_EVAPackFCF";
		Weapons[]=
		{
			"Metal_Swamp_FA11_NPC",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Metal_Swamp_FA11_NPC",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"Met_Swamp_HE_RifleGrenade",
			"Met_Swamp_HE_RifleGrenade",
			"Met_Swamp_HE_RifleGrenade",
			"Met_Swamp_HE_RifleGrenade",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"Met_Swamp_HE_RifleGrenade",
			"Met_Swamp_HE_RifleGrenade",
			"Met_Swamp_HE_RifleGrenade",
			"Met_Swamp_HE_RifleGrenade",
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
			"TKE_PatrolCapCFCF",
			"TKE_FCFHArmour",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_PatrolCapCFCF",
			"TKE_FCFHArmour",
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
	class SP_Rifleman: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Fighters";
		uniformClass="TKE_CombatUniRolledV2FCF_U_B";
		displayName="Swamp Rifleman";
		icon="iconMan";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="TKE_EVAPackFCF";
		Weapons[]=
		{
			"Metal_Swamp_FA11",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Metal_Swamp_FA11",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"Met_Swamp_HE_RifleGrenade",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"Met_Swamp_HE_RifleGrenade",
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
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
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
	class SP_Rifleman_Light: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Fighters";
		uniformClass="TKE_CombatUniRolledV2FCF_U_B";
		displayName="Swamp Rifleman";
		icon="iconMan";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="TKE_EVAPackFCF";
		Weapons[]=
		{
			"Metal_Swamp_FA11",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Metal_Swamp_FA11",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
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
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
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
	class SP_AT: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Fighters";
		uniformClass="TKE_CombatUniRolledV2FCF_U_B";
		displayName="Swamp Anti-Tank";
		icon="iconManAT";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="SP_EVAPackFCF_AT";
		Weapons[]=
		{
			"Metal_Swamp_FA11",
			"MET_RPS6_SMRT",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Metal_Swamp_FA11",
			"MET_RPS6_SMRT",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_MAND_AT_Single",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
			"MET_FA11_mag",
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
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
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
	class SP_MG: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Fighters";
		uniformClass="TKE_CombatUniRolledV2FCF_U_B";
		displayName="Swamp Machine Gunner";
		icon="iconManMG";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="SP_EVAPackFCF_HVY";
		Weapons[]=
		{
			"MET_Swamp_M41",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_Swamp_M41",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_M41_mag",
			"MET_M41_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_M41_mag",
			"MET_M41_mag",
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
			"TKE_FCFHelm",
			"TKE_FCFHArmour",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_FCFHelm",
			"TKE_FCFHArmour",
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
	class SP_Sniper: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Fighters";
		uniformClass="TKE_CombatUniRolledV2FCF_U_B";
		displayName="Swamp Sniper";
		icon="JLTS_iconManSniper";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="TKE_EVAPackFCF";
		Weapons[]=
		{
			"MET_Swamp_IQA11",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_Swamp_IQA11",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_IQA11_mag",
			"MET_IQA11_mag",
			"MET_IQA11_mag",
			"MET_IQA11_mag",
			"MET_IQA11_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_IQA11_mag",
			"MET_IQA11_mag",
			"MET_IQA11_mag",
			"MET_IQA11_mag",
			"MET_IQA11_mag",
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
			"TKE_HeadsetEP",
			"TKE_FCFLArmour",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
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
	class SP_CQC: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="Swamp_People_Units";
		editorSubCategory="Swamp_People_Fighters";
		uniformClass="TKE_CombatUniRolledV2FCF_U_B";
		displayName="Swamp CQC";
		icon="iconMan";
		//genericNames="FrenchMen";
		identityTypes[]=
		{
			"LanguageFRE_F",
			"ls_head_mirialan",
			"NoGlasses"
		};
		backpack="SP_EVAPackFCF_AT";
		Weapons[]=
		{
			"MET_Swamp_KS23",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_Swamp_KS23",
			"MET_RPS6_SMRT",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_Weapons_Mags_Thermal_Penetrator",
			"MET_Weapons_Mags_Thermal_Penetrator"
		};
		respawnMagazines[]=
		{
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
			"MET_KS23_mag",
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
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
			"sc_trojanrespirator"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"TKE_MercHelmV2FCF",
			"TKE_FCFLArmour",
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
			class SP_Fighters_Groups
			{
				name="[16th] Fighters";
				class SP_Fighters_Squad
				{
					name="Squad";
					scope=2;
					side=2;
					faction="SP_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SP_Officer";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SP_AT";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="PRIVATE";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="PRIVATE";
						position[]={-1,-3,0};
					};
					class Unit5
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit6
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="PRIVATE";
						position[]={-1,-4,0};
					};
					class Unit7
					{
						side=2;
						vehicle="SP_CQC";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit8
					{
						side=2;
						vehicle="SP_MG";
						rank="PRIVATE";
						position[]={-1,-5,0};
					};
					class Unit9
					{
						side=2;
						vehicle="SP_MG";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class SP_Fighter_Team
				{
					name="Team";
					scope=2;
					side=2;
					faction="SP_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="PRIVATE";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SP_MG";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
				};
				class SP_Fighter_Patrol
				{
					name="Patrol";
					scope=2;
					side=2;
					faction="SP_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SP_Rifleman";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SP_Sniper";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
				};
			};
			class SP_Fighters_Lite_Groups
			{
				name="[16th] Fighters (Light)";
				class SP_Fighters_Squad
				{
					name="Squad";
					scope=2;
					side=2;
					faction="SP_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SP_Officer";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SP_AT";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="PRIVATE";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="PRIVATE";
						position[]={-1,-3,0};
					};
					class Unit5
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit6
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="PRIVATE";
						position[]={-1,-4,0};
					};
					class Unit7
					{
						side=2;
						vehicle="SP_CQC";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit8
					{
						side=2;
						vehicle="SP_MG";
						rank="PRIVATE";
						position[]={-1,-5,0};
					};
					class Unit9
					{
						side=2;
						vehicle="SP_MG";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class SP_Fighter_Team
				{
					name="Team";
					scope=2;
					side=2;
					faction="SP_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="PRIVATE";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SP_MG";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
				};
				class SP_Fighter_Patrol
				{
					name="Patrol";
					scope=2;
					side=2;
					faction="SP_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="SP_Rifleman_Light";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SP_Sniper";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
				};
			};
		};
	};
};