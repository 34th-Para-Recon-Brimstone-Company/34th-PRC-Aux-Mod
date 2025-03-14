class MA_M52D_Rucksack; //MA_Armor -> Backpacks.hpp
class 34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban : MA_M52D_Rucksack
{
	displayName="[34th] M52 ODST Rucksack Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\odst2\urban\34th_odst_rucksack_urban.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"34thPRC_ArmourStandard\data\odst2\M52_Rucksack.rvmat",
		"MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack_Straps.rvmat"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban";
		variant="standard";
		camo="urban";
	};
};
class 34thPRC_ArmourStandard_ODST_M52_Rucksack_Medic_Urban : 34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban
{
	displayName="[34th] M52-C ODST Rucksack Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\odst2\urban\34th_odst_rucksack_medic_urban.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban";
		variant="medic";
		camo="urban";
	};
};
class 34thPRC_ArmourStandard_ODST_M52_Rucksack_Gunbag_Urban : 34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban
{
	displayName="[34th] M52-G ODST Rucksack Urban";
	author="Over Yandere";
	ace_gunbag=1;
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\odst2\urban\34th_odst_rucksack_urban.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban";
		variant="gunbag";
		camo="urban";
	};
};
class 34thPRC_ArmourStandard_ODST_M52_Rucksack_Radio_Urban : 34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban
{
	displayName="[34th] M52-R ODST Rucksack Urban";
	author="Over Yandere";
	tf_hasLRradio=1;
	tf_range=25000;
	tf_encryptionCode="tf_west_radio_code";
	tf_dialog="rt1523g_radio_dialog";
	tf_subtype="digital_lr";
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\odst2\urban\34th_odst_rucksack_urban.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban";
		variant="radio";
		camo="urban";
	};
};
