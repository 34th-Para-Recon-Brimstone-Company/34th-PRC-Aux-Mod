class CfgPatches
{
	class 34thPRC_Vehicles
	{
		author="34th PRC Modding Team";
		units[]=
		{
			"34thPRC_Vehicles_Scorpion",
			"34thPRC_Vehicles_Scorpion_1",
			"34thPRC_Vehicles_Scorpion_2",
			"34thPRC_Vehicles_Scorpion_3",
			"34thPRC_Vehicles_Scorpion_4",
			"34thPRC_Vehicles_Scorpion_5",
		};
		requiredAddons[] =
		{
			"34thPRC_FactionBrimstone", // 34th PRC Aux Mod
			"DMNS_Vehicles_M808B", // UNSC Foundries
		};
	};
};
class CfgVehicles
{
	#include "data\config_vehicles.hpp"
};
