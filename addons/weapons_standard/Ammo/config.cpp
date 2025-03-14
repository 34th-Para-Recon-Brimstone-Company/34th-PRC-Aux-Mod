class CfgPatches
{
	class 34thPRC_Ammo
	{
		author="34th PRC Modding Team, Over Yandere, Vasya";
		addonRootClass="34thPRC_WeaponsStandard";
		requiredAddons[]=
		{
			"34thPRC_WeaponsStandard",
			"A3_Weapons_F", //A3 Weapons_F
		};
		units[]={};
	};
};

class CfgAmmo
{
	class B_35mm_AA; // Arma 3 weapons_f.pbo
	class 34thPRC_Ammo_20mmHE : B_35mm_AA
	{
		caliber=3;
		hit=75;
		indirectHit=10;
		indirectHitRange=3;
		explosive=0.75;
		tracerScale=1.75;
		tracerStartTime=0.005;
		tracerEndTime=10;
		allowAgainstInfantry=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		airLock = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
};
