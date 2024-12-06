class CfgPatches
{
	class 34thPRC_ArmourCustom
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddons[]=
		{
			"34thPRC_ArmourStandard" //34th PRC Aux Mod
		};
	};
};
class CfgVehicles
{
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Light; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Medium; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Heavy; //34thPRC_ArmourStandard
	// class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_NS; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Light_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Medium_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Heavy_NoCollar; //34thPRC_ArmourStandard


	#include "data\config_vehicles.hpp"
};
class CfgWeapons
{
	class ItemInfo; // ARMA3

	class 34thPRC_ArmourStandard_Marines2_CH252_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_CH252_Urban_EyePiece; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_CH252_Urban_VisorGlasses; //34thPRC_ArmourStandard

	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy; //34thPRC_ArmourStandard
	// class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_NoShoulder; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy_NoCollar; //34thPRC_ArmourStandard

	class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban_dp; //34thPRC_ArmourStandard

	class 34thPRC_ArmourStandard_ODST2_M52_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_B_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_C_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_Marksman_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_CQB_Urban; //34thPRC_ArmourStandard

	//includes
	#include "data\config_weapons.hpp"
};
