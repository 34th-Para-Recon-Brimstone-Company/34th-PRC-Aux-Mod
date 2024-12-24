class CfgPatches
{
	class 34thPRC_FactionBrimstone
	{
		author="34th PRC Modding Team";
		units[] = {};
		requiredAddons[] =
		{
			"34thPRC_ArmourStandard", // 34th PRC Aux Mod
		};
	};
};
class CfgFactionClasses
{
	class 34thPRC_FactionBrimstone_Faction
	{
		displayName="34th Para-Recon Company";
		author="34th PRC Modding Team";
		priority=1;
		side=1;
		icon="\34thPRC_FactionBrimstone\data\company_emblem.paa";
		flag="\34thPRC_FactionBrimstone\data\company_emblem.paa";
	};
};
class CfgEditorCategories
{
	class 34thPRC_FactionBrimstone_EditorCategory
	{
		displayName="34th PRC Brimstone";
	};
};
class CfgEditorSubcategories
{
	class 34thPRC_FactionBrimstone_EditorSubCategory_Aircraft
	{
		displayName="Aircraft";
	};
	class 34thPRC_FactionBrimstone_EditorSubCategory_Cars
	{
		displayName="Cars";
	};
	class 34thPRC_FactionBrimstone_EditorSubCategory_Tanks
	{
		displayName="Tanks";
	};
	class 34thPRC_FactionBrimstone_EditorSubCategory_APCs
	{
		displayName="APCs";
	};
	class 34thPRC_FactionBrimstone_EditorSubCategory_IFVs
	{
		displayName="IFVs";
	};
	// Not sure about these, maybe split marines and ODST?
	class 34thPRC_FactionBrimstone_EditorSubCategory_Infantry_Woodland
	{
		displayName="Troopers Woodland";
	};
	class 34thPRC_FactionBrimstone_EditorSubCategory_Infantry_Urban
	{
		displayName="Troopers Urban";
	};
	class 34thPRC_FactionBrimstone_EditorSubCategory_Infantry_Snow
	{
		displayName="Troopers Snow";
	};
	class 34thPRC_FactionBrimstone_EditorSubCategory_Infantry_Arid
	{
		displayName="Troopers Snow";
	};
};
