class arifle_19_UNSC_m7_Base_F; // 19_UNSC_Weapons
class 19_UNSC_M7: arifle_19_UNSC_m7_Base_F // 19_UNSC_Weapons
{
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]+=
			{
				"41st_Bayonet2",
				"145_Inches_Barrel_Bayonet"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]+=
			{
				"19_UNSC_evo",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"TCF_REC_holo",
				"TCF_REC_holo_Gre",
				"TCF_REC_holo_Red"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]+=
			{
				"34thPRC_Overrides_Weapons_M7_Flashlight"
			};
		};
	};
};

class 19_UNSC_M7_LAM; // 19_UNSC_Weapons
class InventoryFlashLightItem_Base_F; // Vanilla?
class 34thPRC_Overrides_Weapons_M7_Flashlight : 19_UNSC_M7_LAM
{
	displayName = "[34th] M7 Flashlight";
	class ItemInfo: InventoryFlashLightItem_Base_F // Mostly copied from OPTRE's M45 flashlight
	{
		mass=1;
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="laser";
			direction="laser_dir";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=0;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
		class Pointer
		{

		};
	};
};
