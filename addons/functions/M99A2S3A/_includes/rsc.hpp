class 34thPRC_airburst_set_fuse_distance_ui
{
	idd = 10846;
	movingenable = true;
	//onLoad = "uiNamespace setVariable ['MIL_fuseSetting_HE',_this select 0];[] spawn MIL_fnc_fuseSetting_updater;";
	onLoad = MACRO_QUOTE(_this call MACRO_FNC_NAME(airburst_onload));
	class Controls
	{
		class Menu_Background: RscPicture
		{
			idc = 100;
			text = "34thPRC_Functions\M99A2S3A\resources\terminal.paa";
			x = safeZoneX + safeZoneW * 0.29375;	//0.386562
			y = safeZoneY + safeZoneH * 0.225;
			w = safeZoneW * 0.4;
			h = safeZoneH * 0.26574075;
			colorText[] = {1,1,1,1};
		};

		class Range_Heading: RscStructuredText
		{
			idc = -1;
			text = "RANGE (m):"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.33;
			y = safeZoneY + safeZoneH * 0.275;	//0.159133
			w = safeZoneW * 0.05;
			h = safeZoneH * 0.025;
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			colorText[] = {1,1,1,1};
		};
		class Range_Box: RscEdit
		{
			idc = 101;
			text = ""; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.38;//0.385
			y = safeZoneY + safeZoneH * 0.275;//0.273
			w = safeZoneW * 0.0375;
			h = safeZoneW * 0.015; //0.0375
			colorText[] = {1,1,1,1};
			tooltip = "Set fuse range"; //--- ToDo: Localize;
			//sizeEx = 2 * GUI_GRID_H;
			size = "0.04";//"(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			//sizeEx = "0.04";//"(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";

			style="0x40";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};

		class Min_Range_Text: RscStructuredText
		{
			idc = -1;
			text = "Min Range (m):"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.33020834;
			y = safeZoneY + safeZoneH * 0.3;	//0.159133
			w = safeZoneW * 0.075;
			h = safeZoneH * 0.025;
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			colorText[] = {1,1,1,1};
		};
		class Min_Range_Value: RscStructuredText
		{
			idc = 103;
			text = "min1"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.4; //0.4
			y = safeZoneY + safeZoneH * 0.3;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.025;
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			colorText[] = {1,1,1,1};
		};

		class Max_Range_Text: RscStructuredText
		{
			idc = -1;
			text = "Max Range (m):"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.33020834;
			y = safeZoneY + safeZoneH * 0.325;	//0.159133
			w = safeZoneW * 0.075;
			h = safeZoneH * 0.025;
			colorBackground[] = {-1,-1,-1,0};
			colorText[] = {1,1,1,1};
		};
		class Max_Range_Value: RscStructuredText
		{
			idc = 104;
			text = "max1"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.4; //.4
			y = safeZoneY + safeZoneH * 0.325;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.025;
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			colorText[] = {1,1,1,1};
		};

		class Range_Random_MinMax_Text: RscStructuredText
		{
			idc = -1;
			text = "Delay -/+ (m):"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.33020834;
			y = safeZoneY + safeZoneH * 0.35;	//0.159133
			w = safeZoneW * 0.075;
			h = safeZoneH * 0.025;
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			colorText[] = {1,1,1,1};
		};
		class Range_Random_MinMax_Value: RscStructuredText
		{
			idc = 105;
			text = "-/+"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.4; //0.404
			y = safeZoneY + safeZoneH * 0.35; //0.35370371
			w = safeZoneW * 0.08;
			h = safeZoneH * 0.025;
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			colorText[] = {1,1,1,1};
		};

		class Button_Confirm: RscButton
		{
			idc = 102;
			text =" CONFIRM"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.33020834;
			y = safeZoneY + safeZoneH * 0.425;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.025;
			tooltip = "Set range (can still be changed again)."; //--- ToDo: Localize;
			onButtonClick = MACRO_QUOTE([_this] call MACRO_FNC_NAME(airburst_onConfirm));
			colorBackground[] = {0, 0.25, 0, 1};
			colorBackgroundActive[] = {0, 0.5, 0, 1};
		};
		class Button_Exit: RscButton
		{
			idc = 1701;
			text = "CANCEL"; //--- ToDo: Localize;
			x = safeZoneX + safeZoneW * 0.40520834;
			y = safeZoneY + safeZoneH * 0.425;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.025;
			tooltip = Exit without adjusting fuse setting.; //--- ToDo: Localize;
			onButtonClick = MACRO_QUOTE([_this] call MACRO_FNC_NAME(airburst_onExit));
			colorBackground[] = {0.25, 0, 0, 0.5};
			colorBackgroundActive[] = {0.5, 0, 0, 1};
		};
	};
};
