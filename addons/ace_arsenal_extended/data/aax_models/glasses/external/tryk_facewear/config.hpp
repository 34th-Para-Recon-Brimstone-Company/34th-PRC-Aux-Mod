class TRYK_facewear
{
	label = "[TRYK] Facewear";
	author = "Zabb";
	options[] = {"glasses_type", "facewear_type", "glasses_color", "facewear_color"};
	class facewear_type
	{
		label = "Facewear Type";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "balaclava", "bandana"};
		class none
		{
			label = "None";
		};
		class balaclava
		{
			label = "Balaclava";
		};
		class bandana
		{
			label = "Bandana";
		};
	};
	class facewear_color
	{
		label = "Facewear Color";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "black", "tan", "green", "crocodile", "olive", "coyote"};
		class none
		{
			label = "None";
		};
		class black
		{
			label = "Black";
		};
		class tan
		{
			label = "Tan";
		};
		class green
		{
			label = "Green"; // Balaclava Only
		};
		class crocodile
		{
			label = "Crocodile"; // Balaclava Only
		};
		class olive
		{
			label = "Olive"; // Bandana Only
		};
		class coyote
		{
			label = "Coyote"; // Bandana Only
		};
	};
	class glasses_type
	{
		label = "Glasses Type";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "tactical", "ballistic", "6b50"};
		class none
		{
			label = "None";
		};
		class tactical
		{
			label = "Tactical";
		};
		class ballistic
		{
			label = "Ballistic";
		};
		class 6b50
		{
			label = "6B50";
		};
	};
	class glasses_color
	{
		label = "Glasses Color";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "black", "red", "yellow"};
		class none
		{
			label = "None";
		};
		class black
		{
			label = "Black";
		};
		class red
		{
			label = "Red";
		};
		class yellow
		{
			label = "Yellow";
		};
	};
};
