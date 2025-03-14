
class arifle_19_UNSC_MA5B_Base_F; // 19_UNSC_Weapons
class 19_UNSC_MA5B: arifle_19_UNSC_MA5B_Base_F // 19_UNSC_Weapons
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
				"OPTRE_M7_Silencer",
				"41st_Bayonet2",
				"145_Inches_Barrel_Bayonet"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]+=
			{
			"19_UNSC_MA5A_smartlink"
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
