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
		ammo = "MET_PDF_Blasterbolt";
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
		ammo = "MET_PDF_Blasterbolt_Low";
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
		ammo = "MET_PDF_Blasterbolt";
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