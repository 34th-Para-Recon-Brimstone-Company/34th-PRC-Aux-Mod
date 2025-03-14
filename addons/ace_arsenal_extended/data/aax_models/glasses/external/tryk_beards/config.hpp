class TRYK_Beards
{
	label = "[TRYK] Beards";
	author = "Zabb";
	options[] = {"length", "color", "style"};
	class length
	{
		label = "Length";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"short", "long"};
		class short
		{
			label = "Short";
		};
		class long
		{
			label = "Long";
		};
	};
	class color
	{
		label = "Color";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"ash", "black", "blonde", "brown", "grizzled"};
		class ash
		{
			label = "Ash";
		};
		class black
		{
			label = "Black";
		};
		class blonde
		{
			label = "Blonde";
		};
		class brown
		{
			label = "Brown";
		};
		class grizzled
		{
			label = "Grizzled";
		};
	};
	class style
	{
		label = "Style";
		alwaysSelectable = 0;
		changeingame = 0;
		values[] = {"one", "two", "three", "four", "five", "six"};
		class one
		{
			label = "1";
		};
		class two
		{
			label = "2";
		};
		class three
		{
			label = "3";
		};
		class four
		{
			label = "4";
		};
		class five
		{
			label = "5";
		};
		class six
		{
			label = "6";
		};
	};
};
