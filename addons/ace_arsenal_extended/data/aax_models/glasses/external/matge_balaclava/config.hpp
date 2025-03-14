class MATGE_Balaclava
{
	label = "[MA:TGE] Balaclava";
	author = "Scarecrow53";
	options[] = {"color", "pattern"};
	class color
	{
		label = "Color";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"black", "brown", "green"};
		class black
		{
			label = "Black";
		};
		class brown
		{
			label = "Brown";
		};
		class green
		{
			label = "Green";
		};
	};
	class pattern
	{
		label = "Pattern";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "gfrs", "sjb", "sm"};
		class none
		{
			label = "None";
		};
		class gfrs
		{
			label = "GFRS";
			description = "Ghost Recon: Future Soldier";
		};
		class sjb
		{
			label = "SJB";
			description = "Sangheili Jawbone";
		};
		class sm
		{
			label = "SM";
			description = "Stitched Smile";
		};
	};
};
