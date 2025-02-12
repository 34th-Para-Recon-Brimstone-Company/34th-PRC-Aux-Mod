//New Rucksacks
class 34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban
{
	label = "[34th] M52 Rucksack"
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"camo", "variant"};
	class camo
	{
		label="Camo";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
		class urban
		{
			label = "Urban";
		};
		class arctic
		{
			label = "Arctic";
		};
		class arid
		{
			label = "Arid";
		};
		class tropic
		{
			label = "Tropic";
		};
		class woodland
		{
			label = "Woodland";
		};
	};
	class variant
	{
		label="Model";
		alwaysSelectable=1;
		changeingame=0;
		values[]= {"m52","c","g","r"};
		class m52
		{
			label="Standard";
		};
		class c
		{
			label="Corpsman";
		};
		class g
		{
			label="Gunbag";
		};
		class r
		{
			label="RTO/JTAC";
		};
	};
};
