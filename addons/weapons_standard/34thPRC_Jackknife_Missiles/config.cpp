class CfgPatches
{
	class 34thPRC_Jackknife_Missiles
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"34thPRC_Overrides",
			"OPTRE_Weapons_Ammo", ////[DEV] OPTRE -> OPTRE_Weapons -> Ammo
		};
		units[]={};
	};
};
class cfgMagazines
{
	class OPTRE_1Rnd_Jackknife_missile;
	class 34thPRC_8Rnd_Jackknife_missile : OPTRE_1Rnd_Jackknife_missile
	{
		displayName = "8x AGM-502 'Jack Knife' SALH-ATGM";
		count = 1;
	};
};
