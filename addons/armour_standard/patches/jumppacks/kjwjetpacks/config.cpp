class CfgPatches
{
	class 34thPRC_ArmourStandard_jumppacks_kjwjetpacks
	{
		author="34th PRC Modding Team";
		addonRootClass="34thPRC_ArmourStandard";
		units[]={};
		requiredAddons[] =
		{
			"34thPRC_Overrides", // 34th PRC Aux Mod
			"OPTRE_Weapons", // OPTRE
			"jen_jetpacks_example", // KJW's Jetpacks
		};
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
class Bag_Base;
class 34thPRC_ArmourStandard_jumppacks_kjwjetpacks_S9BSOLAJetpack : Bag_Base
{
	displayName="[34th] Series-9[B] SOLA Jetpack";
	author="34th PRC - Vasya, Jennderqueer, KJW, & Article 2 Studios";
	picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
	scope=2;
	scopeArsenal=2;
	ace_gunbag=1;
	tf_hasLRradio=1;
	tf_range=25000;
	tf_encryptionCode="tf_west_radio_code";
	tf_dialog="rt1523g_radio_dialog";
	tf_subtype="digital_lr";
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	sc_grapplinghook=1;
	jen_jetpacks_core_isJetpack=1;
	jen_jetpacks_core_acceleration=1.75;
	jen_jetpacks_core_drag=10;
	jen_jetpacks_core_fuelCoef=1;
	jen_jetpacks_core_fuelCapacity=150;
	jen_jetpacks_core_heatCoef=8;
	jen_jetpacks_core_coolCoef=8;
	jen_jetpacks_core_ascensionCoef=1.25;
	jen_jetpacks_core_jumpCoef=1;
	jen_jetpacks_core_strafeCoef=0.7;
	model="OPTRE_Weapons\Backpacks\jetpack_on.p3d";
	uniformModel="OPTRE_Weapons\Backpacks\jetpack_on.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"optre_weapons\backpacks\data\jetpack_co.paa"
	};
	maximumLoad=600;
	mass=20;
};
};
