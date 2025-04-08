

class 34thPRC_ArmourStandard_EOD_Helmet_Urban : 34thPRC_ArmourStandard_Marines2_CH252_Urban
{
	displayName="[34th] EOD Helmet Urban";
	author="Yandere";
	model="MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_urban_CO.paa",
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\visor\EOD_Visor_R_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\eod.rvmat",
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\visor\eod_visor.rvmat"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="eod";
		camo="urban";
	};
	class ItemInfo:ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
	};
};
class 34thPRC_ArmourStandard_EOD_Helmet_Arid : 34thPRC_ArmourStandard_EOD_Helmet_Urban
{
	displayName="[34th] EOD Helmet Arid";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_arid_CO.paa",
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\visor\EOD_Visor_R_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="eod";
		camo="arid";
	};
};
class 34thPRC_ArmourStandard_EOD_Helmet_Arctic : 34thPRC_ArmourStandard_EOD_Helmet_Urban
{
	displayName="[34th] EOD Helmet Arctic";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_arctic_CO.paa",
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\visor\EOD_Visor_R_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="eod";
		camo="arctic";
	};
};
class 34thPRC_ArmourStandard_EOD_Helmet_Tropic : 34thPRC_ArmourStandard_EOD_Helmet_Urban
{
	displayName="[34th] EOD Helmet Tropic";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_tropic_CO.paa",
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\visor\EOD_Visor_R_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="eod";
		camo="tropic";
	};
};
class 34thPRC_ArmourStandard_EOD_Helmet_Woodland : 34thPRC_ArmourStandard_EOD_Helmet_Urban
{
	displayName="[34th] EOD Helmet Woodland";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_woodland_CO.paa",
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\visor\EOD_Visor_R_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="eod";
		camo="woodland";
	};
};

class 34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban : MA_EOD_CBRN_Attachment_NVG
{
	displayName="[34th] EOD CBRN Module Urban";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_urban_CO.paa",
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\cbrn\eod_cbrn.rvmat"
	};
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban";
		camo="urban";
	};
};
class 34thPRC_ArmourStandard_EOD_CBRN_NVG_Arid : 34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban
{
	displayName="[34th] EOD CBRN Module Arid";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_arid_CO.paa",
	};
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban";
		camo="arid";
	};
};
class 34thPRC_ArmourStandard_EOD_CBRN_NVG_Arctic : 34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban
{
	displayName="[34th] EOD CBRN Module Arctic";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_arctic_CO.paa",
	};
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban";
		camo="arctic";
	};
};
class 34thPRC_ArmourStandard_EOD_CBRN_NVG_Tropic : 34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban
{
	displayName="[34th] EOD CBRN Module Tropic";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_tropic_CO.paa",
	};
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban";
		camo="tropic";
	};
};
class 34thPRC_ArmourStandard_EOD_CBRN_NVG_Woodland : 34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban
{
	displayName="[34th] EOD CBRN Module Woodland";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_woodland_CO.paa",
	};
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban";
		camo="woodland";
	};
};
