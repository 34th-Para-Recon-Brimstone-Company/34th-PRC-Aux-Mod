class CfgPatches
{
	class 34thPRC_AceArsenalExtended
	{
		author = "34th PRC Modding Team, J.Koko";
		units[] = {};
		requiredAddons[] = {
			"34thPRC_ArmourStandard", // 34th PRC Aux Mod
			"34thPRC_ArmourCustom", // 34th PRC Aux Mod
			"aceax_gearinfo", // Ace Arsenal Extended
			"OPTRE_UNSC_Units", // [DEV] Operation Trebuchet
			"TAC_VESTS_S", "TAC_VESTS", "TAC_VESTS_Z2", "TAC_VESTS_B", "ua_cap_tryk", "TAC_VESTS_US", "TAC_VESTS_W", //TAC-VESTS
			"Kio_Balaclava", "US_ESS_Glasses_tryk", "maa_Uniform", "TRYK_Shemaghs", "TRYK_BackPack", "MULTIPLAY_Uniform", "TRYK_Uniform", //Multi-play Uniforms
			"Halo_marine_02", //MA: TGE
			"cigs_main", //Immersion Cigs - Rewrite
		};
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	#include "data\aax_models\config.hpp"
};
class XtdGearInfos
{
	#include "data\aax_infos\config.hpp"
};
