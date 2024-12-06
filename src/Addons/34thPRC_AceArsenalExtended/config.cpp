class CfgPatches
{
	class 34thPRC_AceArsenalExtended
	{
		author = "34th PRC Modding Team, J.Koko";
		units[] = {};
		requiredAddons[] = {
			"34thPRC_ArmourStandard", // 34th PRC Aux Mod
			"34thPRC_ArmourCustom", // 34th PRC Aux Mod
			"aceax_gearinfo" // Ace Arsenal Extended
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
