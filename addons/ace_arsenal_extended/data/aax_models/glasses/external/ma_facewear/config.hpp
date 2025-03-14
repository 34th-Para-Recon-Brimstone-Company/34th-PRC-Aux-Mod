class MA_Facewear
{
	label = "[MA] Facewear";
	author = "Misriah Armory";
	options[] = {"leftattach", "topattach", "rightattach"};
	class leftattach
	{
		label = "Left Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "cam", "cm", "sens"};
		class none
		{
			label = "None";
		};
		class cam
		{
			label = "Camera";
		};
		class cm
		{
			label = "COM";
			description = "Command Module";
		};
		class sens
		{
			label = "Sensor";
		};
	};
	class topattach
	{
		label = "Top Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "nods", "rbr"};
		class none
		{
			label = "None";
		};
		class nods
		{
			label = "NODS";
			description = "Night Optical Device";
		};
		class rbr
		{
			label = "Rebreather";
		};

	};
	class rightattach
	{
		label = "Right Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "cam", "cm", "sens"};
		class none
		{
			label = "None";
		};
		class cam
		{
			label = "Camera";
		};
		class cm
		{
			label = "COM";
			description = "Command Module";
		};
		class sens
		{
			label = "Sensor";
		};
	};
};
