class CfgPatches
{
	class 34thPRC_M638
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_WeaponsStandard";
		requiredAddons[]=
		{
			"34thPRC_WeaponsStandard", "34thPRC_Magazines",
			"OPTRE_Weapons_Vehicle", //[Dev] Optre -> OPTRE_Weapons -> Vehicle
		};
		units[]={};
	};
};

class CfgWeapons
{
	class OPTRE_M638;
	class 34thPRC_M638 : OPTRE_M638
	{
		displayName = "M638 20mm Autocannon";
		descriptionShort = "20mm";
		magazines[] =
		{
			"34thPRC_Magazines_2000Rnd_20mmHE"
		};
		displayNameShort = "M638";
	};
};
