class CfgPatches
{
	class 34thPRC_Scorpion_Missiles
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
	class OPTRE_4Rnd_Scorpion_missiles;
	class 34th_8Rnd_Scorpion_missiles : OPTRE_4Rnd_Scorpion_missiles
	{
		displayName = "8x AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort = "8x Guided AT";
		count = 8;
		hardpoints[]={"OPAEX_Hardpoint_AV14","OPAEX_Hardpoint_UH144"}; //Impacts the Optre Hornet and the Falcon
	};
};
