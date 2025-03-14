class CfgPatches
{
	class SEC_Guest_Pack
	{
		author="Reiken";
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units",
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Air",
			"OPTRE_Vehicles_Tracked",
			"OPTRE_Weapons",
			"MA_Armor"
		};
		units[]=
		{

		};
		weapons[] =
		{

		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

class CfgWeapons
{
	class VestItem;
	class ItemInfo;
	class HeadgearItem;
	class V_PlateCarrier1_rgr;
	class UniformItem;
	class H_HelmetB;
	class MA_MKVB_Armor;
	class MA_Mjolnir_MKVB_Helmet;

	class SEC_Guest_MKVB_ArmorCore: MA_MKVB_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR MKV/B Guest Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
		MJOLNIR_shieldStrength = 80;            //Shield energy capacity
		MJOLNIR_shieldChargeValue = 1.1;           //How much shield energy gets regenerated
		MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
		hiddenSelectionsTextures[]=
		{
			"SEC_GuestPack\data\MKVB\Steel_MKV_Upper_CO.paa",
			"SEC_GuestPack\data\MKVB\Steel_MKV_Lower_CO.paa"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
			//    "mkvb_upper",
			//    "mkvb_lower"
			};
			hiddenSelectionsTextures[]=
			{
				"SEC_GuestPack\data\MKVB\Steel_MKV_Upper_CO.paa",
				"SEC_GuestPack\data\MKVB\Steel_MKV_Lower_CO.paa"
			};
			uniformModel="MA_Armor\data\Vests\MKVB\MKVB_Armor.p3d";
			containerClass="Supply250";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=15;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=15;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=10;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=15;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=25;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};

	class SEC_Guest_MKVB_Helmet: MA_Mjolnir_MKVB_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V/B Guest Helmet";
		MJOLNIR_helmetOutline="SEC_GuestPack\data\MKVB\MKVBHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"SEC_GuestPack\data\MKVB\Steel_MKVB_Helmet_CO.paa",
			"SEC_GuestPack\data\MKVB\Gold_MKVB_Visor_CO.paa"
		};
	};
};

class CfgVehicles
{
	class B_Kitbag_rgr;
	class Mjolnir_MKV_Shoulders;

	class SEC_Guest_MKVB_Shoulders : Mjolnir_MKV_Shoulders
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[EAGLE] MJOLNIR Guest Shoulders";
		maximumLoad = 400;
		mass = 50;
		hiddenSelectionsTextures[] =
		{
			"MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
			"",
			"",
			"SEC_GuestPack\data\MKV\Gray_MKV_Shoulders_CO.paa",
			"SEC_GuestPack\data\MKV\Gray_MKV_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
		};
	};
};
