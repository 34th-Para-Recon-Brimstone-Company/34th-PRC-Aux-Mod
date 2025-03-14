class MA_Marine_Pouches
{
	label = "[MA] Marine Pouches";
	author = "Misriah Armory";
	options[] = {"role", "style", "variant"};
	class role
	{
		label = "Role";
		alwaysSelectable = 1;
		changeingame = 0;
		values[]= {"basic", "rifleman", "teamleader", "medic", "engineer"};
		class basic
		{
			label = "Basic";
			description = "Basic";
		};
		class rifleman
		{
			label = "Rifleman";
		};
		class teamleader
		{
			label = "Teamleader";
		};
		class medic
		{
			label = "Medic";
		};
		class engineer
		{
			label = "Engineer";
		};
	};
	class style
	{
		label = "Style";
		alwaysSelectable = 1;
		changeingame = 0;
		values[]= {"base", "light", "medium", "heavy"};
		class base
		{
			label = "Base";
		};
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
	};
	class variant
	{
		label = "Variant";
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"a", "b", "c", "d", "zero"};
		class a
		{
			label = "A";
		};
		class b
		{
			label = "B";
		};
		class c
		{
			label = "C";
		};
		class d
		{
			label = "D";
		};
		class zero
		{
			label = "Pouchless";
		};
	};
};
