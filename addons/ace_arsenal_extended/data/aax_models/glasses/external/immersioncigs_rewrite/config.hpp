class smokeables_and_suckables
{
	label = "[ICR] Smokeables & Suckables";
	author = "Zorn, Vespade, Kneely, Jenna, Rebel, Facel";
	options[] = {"cigarbox", "crayonbox", "lollipop"};
	class cigarbox
	{
		label  = "Cigar Box";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"blackdevil", "cigar", "craven", "eckstein", "luckystrike", "morely", "mtndew"};
		class blackdevil
		{
			label = "Black Devil";
			description = "Black Devil Pink Cigarette";
		};
		class cigar
		{
			label = "Cigar";
		};
		class craven
		{
			label = "Craven";
			description = "Craven 'A' Cigarette";
		};
		class eckstein
		{
			label = "Eckstein";
			description = "Eckstein No. 5 Cigarette";
		};
		class luckystrike
		{
			label = "Lucky Strike";
			description = "Lucky Strike Cigarette";
		};
		class morley
		{
			label = "Morley";
			description = "Morley Cigarette";
		};
		class mtndew
		{
			label = "Mtn Dew";
			description = "Mtn Dew Baja Blast";
		};
	};
	class crayonbox
	{
		label  = "Crayon Box";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"black", "blue", "brown", "gray", "green", "orange", "pink", "purple", "red", "white", "yellow"};
		class black
		{
			label = "Black";
			image = "#(rgb,8,8,3)color(0,0,0,1)";
		};
		class blue
		{
			label = "Blue";
			image = "#(rgb,8,8,3)color(0.1,0.1,0.5,1)";
		};
		class brown
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.55,0.27,0.07,0.5)";
		};
		class gray
		{
			label = "Gray";
			image = "#(rgb,8,8,3)color(0.5,0.5,0.5,0.75)";
		};
		class green
		{
			label = "Green";
			image = "#(rgb,8,8,3)color(0,0.39,0,1)";
		};
		class orange
		{
			label = "Orange";
			image = "#(rgb,8,8,3)color(1,0.3,0,1)";
		};
		class pink
		{
			label = "Pink";
			image = "#(rgb,8,8,3)color(1,0,1,1)";
		};
		class purple
		{
			label = "Purple";
			image = "#(rgb,8,8,3)color(0.29,0,0.51,1)";
		};
		class red
		{
			label = "Red";
			image = "#(rgb,8,8,3)color(1,0,0,0.5)";
		};
		class white
		{
			label = "White";
			image = "#(rgb,8,8,3)color(1,1,1,1)";
		};
		class yellow
		{
			label = "Yellow";
			image = "#(rgb,8,8,3)color(1,1,0,1)";
		};
	};
	class lollipop
	{
		label = "Lollipop";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"lollipop"};
		class lollipop
		{
			label = "Lollipop";
		};
	};
};
