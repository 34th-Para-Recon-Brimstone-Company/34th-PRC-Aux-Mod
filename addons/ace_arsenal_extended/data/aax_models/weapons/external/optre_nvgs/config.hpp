class OPTRE_NVG
{
	label = "[A2S] OpTre NVG";
	author = "Article 2 Studios, Vespade";
	options[] = {"leftattach", "topattach", "rightattach"};
	class leftattach
	{
		label = "Left Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "cnm", "hul"};
		class none
		{
			label = "NONE";
		};
		class cnm
		{
			label = "CNM";
			description = "Command Network Module";
		};
		class hul
		{
			label = "HUL";
			description = "Hardened Uplink Module";
		};
	};
	class topattach
	{
		label = "Top Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "mvi", "ua", "uab", "command"};
		class none
		{
			label = "NONE";
		};
		class mvi
		{
			label = "MVI";
			description = "Marksman's Visual Interface";
		};
		class ua
		{
			label = "UA";
			description = "Up-Armored (Alpha)";
		};
		class uab
		{
			label = "UA(B)";
			description = "Up-Armored (Bravo)";
		};
		class command
		{
			label = "CNI";
			description = "Command Neural Implant";
		};
	};
	class rightattach
	{
		label = "Right Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "ul", "hurs","hul3","hul3g"};
		class none
		{
			label = "NONE";
		};
		class ul
		{
			label = "UL";
			description = "Command Uplink Module";
		};
		class hurs
		{
			label = "HURS";
			description = "Hardened Uplink/Remote Sensor";
		};
		class hul3
		{
			label = "HUL 3";
			description = "Hardened Uplink Module Gen 3";
		};
		class hul3g
		{
			label = "HUL 3(G)";
			description = "Hardened Uplink Module Gen 3 (Gray)";
		};

	};
};
