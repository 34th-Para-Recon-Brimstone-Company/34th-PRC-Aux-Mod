//Custom M52 Group 1: Yandere, Cappy
class 34thPRC_ArmourCustom_ODST2_Yandere_M52_Urban
{
	label = "[34thPRC] ODST Custom Armors";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"player", "camo", "variant"};
	class player
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"yandere", "cappy"};
		class yandere
		{
			label = "Yandere";
		};
		class cappy
		{
			label = "Cappy";
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
	class variant
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"a", "b", "c", "cqb", "marksman", "medic_a", "medic_b", "medic_c"};
		class a
		{
			label = "M52-A";
		};
		class b
		{
			label = "M52-B";
		};
		class c
		{
			label = "M52-C";
		};
		class cqb
		{
			label = "CQB";
		};
		class marksman
		{
			label = "Marksman";
		};
		class medic_a
		{
			label = "Medic-A";
		};
		class medic_b
		{
			label = "Medic-B";
		};
		class medic_c
		{
			label = "Medic-C";
		};
	};
};


//Custom ODST Helmets Group 1: Yandere,
class 34thPRC_ArmourCustom_ODST2_Yandere_CH252D_CustomVisor_Urban
{
	label = "[34thPRC] ODST CH252D Custom Helmets";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"player","camo", "visor"};
	class player
	{
		alwaysSelectable= 1;
		changeingame =0;
		values[]= {"yandere","player2"};
		class yandere
		{
			label = "Yandere";
		};
		class player2
		{
			label = "Player2";
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

//Custom ODST Specialist Helmets Helmets Group 1: Cappy
class 34thPRC_ArmourCustom_Cappy_EOD_Helmet_Urban
{
	label="[34thPRC] Specialist Helmets Custom";
	author="34th PRC Modding Team, Over Yandere";
	options[]= {"player","helmet","camo","visor"};
	class player
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Player";
		values[] = {"cappy", "yandere"};
		class cappy
		{
			label="Cappy";
		};
		class yandere
		{
			label="Yandere";
		};
	};
	class helmet
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Helmet Type";
		values[]={"eod","gungnir","jfo"};
		class eod
		{
			label="EOD";
		};
		class gungnir
		{
			label="Gungnir";
		};
		class jfo
		{
			label="JFO";
		};
	};
	class camo
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Camo Variant";
		values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
		class urban
		{
			label="Urban";
		};
		class arctic
		{
			label="Arctic";
		};
		class arid
		{
			label="Arid";
		};
		class tropic
		{
			label="Tropic";
		};
		class woodland
		{
			label="Woodland";
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
