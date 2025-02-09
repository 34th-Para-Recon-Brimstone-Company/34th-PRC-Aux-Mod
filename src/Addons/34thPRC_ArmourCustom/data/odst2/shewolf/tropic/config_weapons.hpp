class 34thPRC_ArmourCustom_ODST2_Shewolf_CH252D_CustomVisor_Tropic : 34thPRC_ArmourCustom_ODST2_Shewolf_CH252D_CustomVisor_Urban
{
	displayName="[34th] CH252D Tropic 'Shewolf' (Custom Visor)";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourCustom\data\odst2\shewolf\tropic\shewolf_odst_helmet_tropic.paa",
		"34thPRC_ArmourCustom\data\odst2\shewolf\visor\shewolf_odst_visor.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourCustom_ODST2_Yandere_CH252D_CustomVisor_Urban";
		player="shewolf";
		camo="tropic";
		visor="custom";
	};
};
class 34thPRC_ArmourCustom_ODST2_Shewolf_CH252D_CustomVisor_Tropic_dp : 34thPRC_ArmourCustom_ODST2_Shewolf_CH252D_CustomVisor_Urban_dp
{
	displayName="[34th] CH252D Tropic 'Shewolf' (Custom Visor)";
	author="Over Yandere";
	scope=1;
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourCustom\data\odst2\shewolf\tropic\shewolf_odst_helmet_tropic.paa",
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
	};
	class ItemInfo:ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
		};
	};
};
