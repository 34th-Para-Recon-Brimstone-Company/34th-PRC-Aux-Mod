class CfgPatches
{
	class 34thPRC_Magazines
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_WeaponsStandard";
		requiredAddons[]=
		{
			"34thPRC_WeaponsStandard", "34thPRC_Ammo",
			"A3_Weapons_F", //Arma Weapons_F
		};
		units[]={};
	};
};

class CfgMagazines
{
	class 2000Rnd_20mm_shells;
	class 34thPRC_Magazines_2000Rnd_20mmHE : 2000Rnd_20mm_shells
	{
		displayNameShort = "20mm HE";
		ammo = "34thPRC_Ammo_20mmHE";
		count = 2000;
	};
};
