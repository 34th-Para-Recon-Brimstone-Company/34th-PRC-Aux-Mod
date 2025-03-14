class MA_NVG
{
	label = "[MA] NVGs";
	author = "Misriah Armory";
	options[] = {"leftattach", "topattach", "rightattach"};
	class leftattach
	{
		label = "Left Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "cnm", "hurs", "cam", "cm", "sens"};
		class none
		{
			label = "None";
		};
		class cnm
		{
			label = "CNM";
			description = "Command Network Module";
		};
		class hurs
		{
			label = "HURS";
			description = "Hardened Uplink/Remote Sensor";
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
		values[] = {"none", "cnm", "hurs", "cam", "cm", "sens"};
		class none
		{
			label = "None";
		};
		class cnm
		{
			label = "CNM";
			description = "Command Network Module";
		};
		class hurs
		{
			label = "HURS";
			description = "Hardened Uplink/Remote Sensor";
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
