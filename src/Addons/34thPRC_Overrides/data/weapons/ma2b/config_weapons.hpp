class MA_Rifle_Base; // Misriah_Armory_Weapons
class MA_MA2B_AR: MA_Rifle_Base // Misriah_Armory_Weapons
{
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]+=
			{
				"muzzle_snds_b",
				"muzzle_snds_h_mg_blk_f",
				"ace_muzzle_mzls_b",
				"optre_ma5suppressor",
				"optre_m6_silencer",
				"OPTRE_M7_Silencer"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]+=
			{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]+=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight",
				"optre_m45_flashlight",
				"optre_m45_flashlight_red",
				"OPTRE_BMR_Laser"
			};
		};
	};
};
