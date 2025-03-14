class DMNS_M808B_F;
class 34thPRC_Vehicles_Scorpion : DMNS_M808B_F
{
	displayName="[34th] 850 M808B Scorpion MBT";
	faction="34thPRC_FactionBrimstone_Faction";
	editorCategory="34thPRC_FactionBrimstone_EditorCategory";
	editorSubcategory="34thPRC_FactionBrimstone_EditorSubCategory_Tanks";
	crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";

	hiddenSelectionsTextures[]=
	{
		"34thPRC_Vehicles\data\scorpion\M808B_Hull_co.paa",
		"34thPRC_Vehicles\data\scorpion\M808B_Turret_co.paa",
		"34thPRC_Vehicles\data\scorpion\M808B_Track_Housing_Front_co.paa",
		"34thPRC_Vehicles\data\scorpion\M808B_Track_Housing_Rear_co.paa",
		"34thPRC_Vehicles\data\scorpion\M808B_Commander_co.paa",
		"34thPRC_Vehicles\data\scorpion\M808B_Details_EXT_co.paa",
		"34thPRC_Vehicles\data\scorpion\M808B_Details_EXT_2_co.paa",
		"DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Int_co.paa"
	};
	textureList[] = {};

	damageResistance=0.04; // 0.02
	crewCrashProtection=0.44999999; // same a springbok
	armor=850; // original 850 // 950 < ??? < 1000000
	/*
	crewVulnerable=0;
	crewExplosionProtection=1;
	lockDetectionSystem=4;
	incomingMissileDetectionSystem=4;
	armor=850;
	armorLights=1;
	armorStructural=6;
	class HitPoints: HitPoints
	{
		class HitHull : HitHull
		{
			armor=3;
			material=-1;
			passThrough=1;
			minimalHit=0.14;
			explosionShielding=2;
			radius=0.30000001;
		};
		class HitEngine : HitEngine
		{
			armor=1.5;
			material=-1;
			passThrough=0.25;
			minimalHit=0.30000001;
			explosionShielding=0.2;
			radius=0.2;
		};
		class HitFuel: HitFuel
		{
			armor=1.5;
			material=-1;
			passThrough=0.2;
			minimalHit=0.050000001;
			explosionShielding=2;
			radius=0.25;
		};
		class HitLTrack: HitLTrack
		{
			material=-1;
			radius=0.2;
			armor=-650;
			minimalHit=0.073846199;
			explosionShielding=0.80000001;
			passThrough=0;
		};
		class HitRTrack: HitRTrack
		{
			material=-1;
			radius=0.2;
			armor=-650;
			minimalHit=0.073846199;
			explosionShielding=0.80000001;
			passThrough=0;
		};
		class HitGlass1 : HitGlass1
		{
			armor=2.25;
			material=-1;
			minimalHit=0.1;
			passThrough=0;
			explosionShielding=2;
		};
		class HitGlass2: HitGlass1
		{
			armor=2.25;
			material=-1;
			passThrough=0;
			explosionShielding=2;
		};
		class HitGlass3: HitGlass1
		{
			armor=2.25;
			material=-1;
			passThrough=0;
			explosionShielding=2;
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class HitPoints
			{
				class HitTurret : HitTurret
				{
					armor=4.5;
					material=-1;
					passThrough=0;
					minimalHit=0.02;
					explosionShielding=0.60000002;
					radius=0.25;
				};
				class HitGun : HitGun
				{
					armor=4.5;
					material=-1;
					passThrough=0;
					minimalHit=0;
					explosionShielding=0.60000002;
					radius=0.25;
				};
			};
		};
		class CommandersTurret: CommandersTurret
		{
			class HitPoints : HitPoints
			{
				class HitComTurret : HitComTurret
				{
					armor=4.5;
					material=-1;
					passThrough=0;
					minimalHit=0.02;
					explosionShielding=0.60000002;
					radius=0.25;
				};
				class HitComGun : HitComGun
				{
					armor=4.5;
					material=-1;
					passThrough=0;
					minimalHit=0;
					explosionShielding=0.60000002;
					radius=0.25;
				};
			};
		};

	};
	*/
};
class 34thPRC_Vehicles_Scorpion_1 : 34thPRC_Vehicles_Scorpion
{
	displayName="[34th-test] 900 M808B Scorpion MBT";
	armor=900;
};
class 34thPRC_Vehicles_Scorpion_2 : 34thPRC_Vehicles_Scorpion
{
	displayName="[34th-test] 950 M808B Scorpion MBT";
	armor=950;
};
class 34thPRC_Vehicles_Scorpion_3 : 34thPRC_Vehicles_Scorpion
{
	displayName="[34th-test] 1000 M808B Scorpion MBT";
	armor=1000;
};
class 34thPRC_Vehicles_Scorpion_4 : 34thPRC_Vehicles_Scorpion
{
	displayName="[34th-test] 1100 M808B Scorpion MBT";
	armor=1100;
};
class 34thPRC_Vehicles_Scorpion_5 : 34thPRC_Vehicles_Scorpion
{
	displayName="[34th-test] 1200 M808B Scorpion MBT";
	armor=1200;
};
