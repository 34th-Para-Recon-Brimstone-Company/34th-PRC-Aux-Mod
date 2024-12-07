class 34thPRC_ArmourStandard_ODST_M56R_Urban
{
	label = "[34thPRC] ODST Armors";
	author = "34th PRC Modding Team, J. Koko";
	options[] = {"camo", "medic", "shoulders"};
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
	class medic
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"standard", "isMedic"};
		class standard
		{
			label = "Non-Medic";
		};
		class isMedic
		{
			label = "Medic";
		};
	};
	class shoulders
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"standard", "cqb"};
		class standard
		{
			label = "Standard";
		};
		class cqb
		{
			label = "CQB";
		};
	};
};
class 34thPRC_ArmourStandard_ODST_Uniform_UrbanRed
{
	label = "[34thPRC] ODST Uniforms";
	author = "34th PRC Modding Team, J. Koko";
	options[] = {"camo"};
	class camo
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"urbanRed", "urbanBlue", "arctic", "arid", "tropic", "woodland"};
		class urbanRed
		{
			label = "Urban Red";
		};
		class urbanBlue
		{
			label = "Urban Blue";
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
};
class 34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor
{
	label = "[34thPRC] ODST Helmets";
	author = "34th PRC Modding Team, J. Koko";
	options[] = {"camo", "visor"};
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
		values[] = {"white", "maroon"};
		class white
		{
			label = "White";
		};
		class maroon
		{
			label = "Maroon";
		};
	};
};
