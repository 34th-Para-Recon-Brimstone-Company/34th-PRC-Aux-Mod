class MA_Pistol_Base; // Misriah_Armory_Weapons
class MA_MK50_Sidekick: MA_Pistol_Base // Misriah_Armory_Weapons
{
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]+=
			{
				"OPTRE_M6_silencer",
				"OPTRE_M6C_compensator"
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
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Snow",
				"Optre_Recon_Sight_UNSC",
				"TCF_REC_holo",
				"TCF_REC_holo_Gre",
				"TCF_REC_holo_Red"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]+=
			{
				"TCF_M6_Flashlight_IR",
				"OPTRE_M6C_Laser",
				"OPTRE_M6G_Flashlight",
				"acc_flashlight_pistol"
			};
		};
	};
};
