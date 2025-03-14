class CfgPatches
{
	class 34thPRC_ArmourStandard
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddons[] =
		{
			"A3_Characters_F", // Vanilla
			"A3_Characters_F_EPB", // Vanilla
			"MA_Armor",	// Misriah Armory
			"34thPRC_Overrides", // 34th PRC Aux Mod
			"DMNS_Units", //UNSC Foundries
			"A3_Characters_F_TCP_BLUFOR_UNSC_Headgear_helmet_CH252A", //TCP ODST Helm
		};
	};
};
class CfgVehicles
{
	#include "data\config_vehicles.hpp"
};
class CfgWeapons
{
	#include "data\config_weapons.hpp"
};
class CfgGlasses
{
	#include "data\config_glasses.hpp"
};
