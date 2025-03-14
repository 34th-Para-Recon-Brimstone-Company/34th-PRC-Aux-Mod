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
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_NoShoulder; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Light_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Medium_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Heavy_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Blue_Light; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Blue_Medium; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Blue_Heavy; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Blue_NoShoulder; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Blue_Light_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Blue_Medium_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Trooper_Urban_Blue_Heavy_NoCollar; //34thPRC_ArmourStandard


	#include "data\config_vehicles.hpp"
};
class CfgWeapons
{
	class ItemInfo; // ARMA3
	class U_B_CombatUniform_mcam; // A3_Characters_F

	class 34thPRC_ArmourStandard_Marines2_CH252_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_CH252_Urban_EyePiece; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_CH252_Urban_VisorGlasses; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic_EyePiece; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic_VisorGlasses; //34thPRC_ArmourStandard

	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_NoShoulder; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium_NoCollar; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy_NoCollar; //34thPRC_ArmourStandard

	class MA_Marine_BDU_Light: U_B_CombatUniform_mcam // MA_Armor
	{
		class ItemInfo;
	};
	class MA_Marine_BDU_Medium: U_B_CombatUniform_mcam // MA_Armor
	{
		class ItemInfo;
	};
	class MA_Marine_BDU_Heavy: U_B_CombatUniform_mcam // MA_Armor
	{
		class ItemInfo;
	};
	class MA_Marine_BDU_Light_NC: U_B_CombatUniform_mcam // MA_Armor
	{
		class ItemInfo;
	};
	class MA_Marine_BDU_Medium_NC: U_B_CombatUniform_mcam // MA_Armor
	{
		class ItemInfo;
	};
	class MA_Marine_BDU_Heavy_NC: U_B_CombatUniform_mcam // MA_Armor
	{
		class ItemInfo;
	};
	class MA_Marine_BDU_NoShoulder: U_B_CombatUniform_mcam //MA_Armor
	{
		class ItemInfo;
	};

	class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban_dp; //34thPRC_ArmourStandard

	class 34thPRC_ArmourStandard_ODST2_M52_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_B_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_C_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_D_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_Marksman_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_M52_CQB_Urban; //34thPRC_ArmourStandard

	class 34thPRC_ArmourStandard_EOD_Helmet_Urban;
	class 34thPRC_ArmourStandard_JFO_Helmet_Urban;
	class 34thPRC_ArmourStandard_Recon_Helmet_Urban;

	//includes
	#include "data\config_weapons.hpp"
};
