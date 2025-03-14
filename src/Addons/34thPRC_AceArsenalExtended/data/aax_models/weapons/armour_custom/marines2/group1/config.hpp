//Custom Marine Armor Group 1: Jade, Harrison
class 34thPRC_ArmourCustom_Marines2_Jade_Uniform_Urban_Light
{
	label = "[34th] Custom Uniforms";
	author = "34th PRC Modding Team, Yandere";
	options[] = {"player", "camo", "collar", "variant"};
	class player
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"jade", "harrison"};
		class jade
		{
			label = "Jade";
		};
		class harrison
		{
			label="Harrison";
		};
	};
	class variant
	{
		label = "Variant";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"light", "medium", "heavy", "shoulderless"};
		class light
		{
			label = "Light";
		};
		class medium
		{
			label = "Medium";
		};
		class heavy
		{
			label = "Heavy";
		};
		class shoulderless
		{
			label = "Shoulderless";
		};
	};
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
	class collar
	{
		label = "Collar";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"up", "down"};
		class up
		{
			label = "Collar";
		};
		class down
		{
			label = "No Collar";
		};
	};
};

//Custom Marine Helmet Group 1: Jade, Ramirez, Conex, Harrison
class 34thPRC_ArmourCustom_Marines2_Jade_CH252_Urban
{
	label = "[34th] CH252 Custom Helmets";
	author = "34th PRC Modding Team, J. Yandere";
	options[] = {"player", "camo", "eyewear", "medic", "eyewear_color"};
	class player
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"jade", "ramirez", "conex", "harrison"};
		class jade
		{
			label = "Jade";
		};
		class ramirez
		{
			label = "Ramirez";
		};
		class conex
		{
			label = "Conex";
		};
		class harrison
		{
			label = "Harrison";
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
	class eyewear
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"standard", "eyepiece", "visor"};
		class standard
		{
			label = "Standard";
		};
		class eyepiece
		{
			label = "Eyepiece";
		};
		class visor
		{
			label = "Visor";
		};
	};
	class medic
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"false", "true"};
		class false
		{
			label = "Non-Medic";
		};
		class true
		{
			label = "Medic";
		};
	};
	class eyewear_color
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"blue", "green", "red", "purple", "orange"};
		class blue
		{
			label = "Blue";
		};
		class green
		{
			label = "Green";
		};
		class red
		{
			label = "Red";
		};
		class purple
		{
			label = "Purple";
		};
		class orange
		{
			label = "Orange";
		};
	};
};
