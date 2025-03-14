class CfgPatches
{
	class 34thPRC_ArmourStandard_jumppacks_scionconflict
	{
		author="34th PRC Modding Team";
		addonRootClass="34thPRC_ArmourStandard";
		units[]={};
		requiredAddons[] =
		{
			"34thPRC_Overrides", // 34th PRC Aux Mod
			"OPTRE_Weapons", // OPTRE
			"sc_newequipment2", // Scion Conflict
		};
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
	class SC_MercerJumppack; //Scion Conflict ---> sc_newequipment2
	class 34thPRC_ArmourStandard_jumppacks_scionconflict_S9SSOLAThrusterPack : SC_MercerJumppack
	{
		displayName="[34th] Series-9[X] SOLA Thruster Pack";
		author="34th PRC - Vasya, Outworld Studios, & Article 2 Studios";
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
