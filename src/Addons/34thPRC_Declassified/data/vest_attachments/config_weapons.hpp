class Vest_Camo_Base; // Halo_marine_02
class MA_TGE_InvisVest: Vest_Camo_Base // Halo_marine_02
{
	class ItemInfo;
}
class 34th_Declassified_Vest_Base: MA_TGE_InvisVest
{
	displayName="[34th D] Attachments Base";
	author="Lupus590";
	model="\OPTRE_UNSC_Units\Army\armor.p3d"; // OPTRE_UNSC_Units_Army
	class ItemInfo: ItemInfo
	{
		uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d"; // OPTRE_UNSC_Units_Army
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad", // floats badly
			"AP_Pack", // floats badly
			"AP_SG", // floats badly
			"APO_SMG", // floats badly

			"APO_Knife", // looks ok standing but floats when rifle out
			"AP_GL", // looks ok but floats a little at the sides and is not on the belt
			"AP_Canteen", // looks ok but floats a little at the back and clips a little too much with the leg plate

			"AP_SMG", // clips badly
			"CustomKit_Scorch", // clips badly

			//"AP_MGThigh", // looks good
			//"AP_Rounds", // looks good but low quality
			//"AP_Thigh", // looks good
			//"AP_Frag", // looks good

			//"AP_AR", // looks ok but floats at the sides
			//"AP_BR", // looks ok but floats a little at the sides
			//"AP_Knife", // looks ok but floats a little
			//"AP_Pistol", // looks ok but floats a bit and is hard to see
			//"AP_Smoke", // looks ok but clips a little at the front and floats a little at the back
			//"APO_AR", // looks ok but floats at the sides
			//"APO_BR" // looks ok but floats at the sides
			//"APO_Sniper", // looks ok but floats at the sides
			//"AP_Sniper", // looks ok but clips a little at the front
		};
	};
};

class 34th_Declassified_Vest_AP_MGThigh: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_MGThigh";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			//"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_AP_Rounds: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Rounds";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			//"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_AP_Thigh: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Thigh";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			//"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_AP_Frag: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Frag";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			//"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_AP_AR: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_AR";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			//"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};


class 34th_Declassified_Vest_AP_BR: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_BR";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			//"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_AP_Knife: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Knife";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			//"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_AP_Pistol: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Pistol";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			//"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_AP_Smoke: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Smoke";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			//"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_APO_AR: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments APO_AR";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			//"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_APO_BR: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments APO_BR";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_APO_Sniper: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments APO_Sniper";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Sniper",
			"AP_Sniper",
		};
	};
};

class 34th_Declassified_Vest_AP_Sniper: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Sniper";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"A_TacPad",
			"AP_Pack",
			"AP_SG",
			"APO_SMG",
			"APO_Knife",
			"AP_GL",
			"AP_Canteen",
			"AP_SMG",
			"CustomKit_Scorch",

			"AP_MGThigh",
			"AP_Rounds",
			"AP_Thigh",
			"AP_Frag",
			"AP_AR",
			"AP_BR",
			"AP_Knife",
			"AP_Pistol",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			//"AP_Sniper",
		};
	};
};
