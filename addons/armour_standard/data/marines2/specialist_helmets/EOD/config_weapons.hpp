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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_urban.paa",
		"34thPRC_ArmourStandard\data\mkvb\Mjolnir_EOD\HR_EOD\Visors\34_EOD_HR_Helmet_Visor_Gold.paa"
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_arid.paa",
		"34thPRC_ArmourStandard\data\mkvb\Mjolnir_EOD\HR_EOD\Visors\34_EOD_HR_Helmet_Visor_Gold.paa"
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_arctic.paa",
		"34thPRC_ArmourStandard\data\mkvb\Mjolnir_EOD\HR_EOD\Visors\34_EOD_HR_Helmet_Visor_Gold.paa"
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_tropic.paa",
		"34thPRC_ArmourStandard\data\mkvb\Mjolnir_EOD\HR_EOD\Visors\34_EOD_HR_Helmet_Visor_Gold.paa"
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\34th_eod_helmet_woodland.paa",
		"34thPRC_ArmourStandard\data\mkvb\Mjolnir_EOD\HR_EOD\Visors\34_EOD_HR_Helmet_Visor_Gold.paa"
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_urban.paa",
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_arid.paa",
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_arctic.paa",
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_tropic.paa",
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
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\EOD\cbrn\34th_eod_cbrn_woodland.paa",
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
