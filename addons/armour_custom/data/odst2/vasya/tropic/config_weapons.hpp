class 34thPRC_ArmourCustom_ODST2_Vasya_CH252D_CustomVisor_Tropic : 34thPRC_ArmourCustom_ODST2_Vasya_CH252D_CustomVisor_Urban
{
	displayName="[34th] CH252D Tropic 'Vasya' (Custom Visor)";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\vasya_odst_helmet_tropic.paa",
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\visor\vasya_odst_visor.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourCustom_ODST2_Yandere_CH252D_CustomVisor_Urban";
		player="vasya";
		camo="tropic";
		visor="custom";
	};
};
class 34thPRC_ArmourCustom_ODST2_Vasya_CH252D_CustomVisor_Tropic_dp : 34thPRC_ArmourCustom_ODST2_Shewolf_CH252D_CustomVisor_Urban_dp
{
	displayName="[34th] CH252D Tropic 'Vasya' (Custom Visor)";
	author="Over Yandere";
	scope=1;
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\vasya_odst_helmet_tropic.paa",
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
	};
	class ItemInfo:ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
		};
	};
};
class 34thPRC_ArmourCustom_ODST2_Vasya_M52_D_Tropic : 34thPRC_ArmourCustom_ODST2_Vasya_M52_D_Urban
{
	displayName="[34th] M52-D Combat Armour 'Vasya' Tropic";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_cqb_Tropic.paa", //CQB Left
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_cqb_Tropic.paa", //CQB Right
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_marksman_Tropic.paa", //Marksman_Left
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_marksman_Tropic.paa", //Marksman_Right
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_vest_Tropic.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_vest_Tropic.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_vest_Tropic.paa", //ODST_Chest
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_shoulders_Tropic.paa", //ODST_Left
		"\z\34thprc\addons\armour_custom\data\odst2\vasya\tropic\Vasya_odst_shoulders_Tropic.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourCustom_ODST2_Yandere_M52_Urban";
		player="vasya";
		camo="tropic";
		variant="d";
	};
};
