class CfgPatches
{
	class BHA_Weapons
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
	};
};
class CfgAmmo
{
	class SmokeShell;
	class Met_Ammo_smoke_black: SmokeShell
	{
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		smokeColor[]={0,0,0,1};
		effectsSmoke="HTASmokeEffect";
		SmokeShellSoundHit1[]=
		{
			"\MetAux\Weapons\Grenades\data\sounds\smoke_explode.wss",
			"+10db",
			1,
			500
		};
		SmokeShellSoundLoop1[]=
		{
			"\MetAux\Weapons\Grenades\data\sounds\smoke_loop.wss",
			"+3db",
			1,
			150
		};
		grenadeFireSound[]=
		{
			"SmokeShellSoundHit1",
			1
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			1
		};
	};
};
class CfgMagazines
{
	class SmokeShell;
	class MET_Smoke_Black: SmokeShell
	{
		scope=1;
		author="16th Aux Team";
		displayName="[16th] Nacht-5 (Black)";
		displayNameShort="Nacht-5 (Black)";
		descriptionShort="Nacht-5 (Black)";
		//ammo="3AS_SmokeShellBase";
		ammo="Met_Ammo_smoke_black";
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"BHA_Smoke_Muzzle"
		};
		class ThrowMuzzle;
		class BHA_Smoke_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Black"
			};
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
