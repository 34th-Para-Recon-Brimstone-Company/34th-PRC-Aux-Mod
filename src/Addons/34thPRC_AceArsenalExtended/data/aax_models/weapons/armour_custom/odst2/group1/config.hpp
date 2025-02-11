//Custom M52 Group 1: Yandere, Cappy, Ambrose, Vasya
class 34thPRC_ArmourCustom_ODST2_Yandere_M52_Urban : 34thPRC_ArmourStandard_ODST2_M52_Urban
{
	label = "[34thPRC] ODST Custom Armors";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"player", "camo", "variant"};
	class player
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"yandere", "cappy", "ambrose", "vasya"};
		class yandere
		{
			label = "Yandere";
		};
		class cappy
		{
			label = "Cappy";
		};
		class ambrose
		{
			label = "Ambrose";
		};
		class vasya
		{
			label = "Vasya";
		};
	};
};

//Custom ODST Helmets Group 1: Yandere, Ambrose, Shewolf, Vasya
class 34thPRC_ArmourCustom_ODST2_Yandere_CH252D_CustomVisor_Urban
{
	label = "[34thPRC] ODST CH252D Custom Helmets";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"player","camo", "visor"};
	class player
	{
		alwaysSelectable= 1;
		changeingame =0;
		values[]= {"yandere","ambrose","shewolf", "vasya"};
		class yandere
		{
			label = "Yandere";
		};
		class ambrose
		{
			label = "Ambrose";
		};
		class shewolf
		{
			label = "Shewolf";
		};
		class vasya
		{
			label="Vasya";
		};
	};
	class camo
	{
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
	class visor
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"silver", "red", "gold", "custom"};
		class silver
		{
			label = "Silver";
		};
		class maroon
		{
			label = "Red";
		};
		class gold
		{
			label = "Gold";
		};
			class custom
		{
			label = "Custom";
		};
	};
};

//Custom ODST Specialist Helmets Helmets Group 1: Cappy, Yandere, Luther
class 34thPRC_ArmourCustom_Cappy_EOD_Helmet_Urban : 34thPRC_ArmourStandard_EOD_Helmet_Urban
{
	label="[34thPRC] Specialist Helmets Custom";
	author="34th PRC Modding Team, Over Yandere";
	options[]= {"player","helmet","camo","visor"};
	class player
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Player";
		values[] = {"cappy", "yandere", "luther"};
		class cappy
		{
			label="Cappy";
		};
		class yandere
		{
			label="Yandere";
		};
		class luther
		{
			label="Luther";
		};
	};
	class visor
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Visor Variant";
		values[] = {"default","custom"};
		class default
		{
			label="Default";
		};
		class custom
		{
			label="Custom";
		};
	};
};
