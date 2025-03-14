class CfgPatches
{
	class 34thPRC_Functions_M99A2S3A
	{
		author="Unknown";
		addonRootClass="34thPRC_Functions";
		units[]={};
	};
};
class Extended_PreInit_EventHandlers
{
	class 34thPRC_M99A2S3A_A2S3A_preinit
	{
		init="call compile preprocessFileLineNumbers '34thPRC_Functions\M99A2S3A\a2s3a_preinit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class 34thPRC_M99A2S3A_A2S3a_postinit
	{
		init="call compile preprocessFileLineNumbers '34thPRC_Functions\M99A2S3A\a2s3a_postinit.sqf'";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_fcs
	{
		init="call compile preprocessFileLineNumbers '34thPRC_Functions\M99A2S3A\a2s3a__prestart.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class open_airburst
				{
					displayName="set airburst";
					condition="[_player] call aux_34thPRC_fnc_airburst_interaction_condition";
					exceptions[]=
					{
						"isNotSwimming"
					};
					statement="call {_res = CreateDialog '34thPRC_airburst_set_fuse_distance_ui';}";
					showDisabled=0;
					icon="34thPRC_Functions\M99A2S3A\resources\superintendant.paa";
				};
			};
		};
	};
};
class RscText
{
	deletable=0;
	fade=0;
	access=0;
	type=0;
	idc=-1;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	text="";
	fixedWidth=0;
	x=0;
	y=0;
	h=0.037;
	w=0.30000001;
	style=0;
	shadow=1;
	colorShadow[]={0,0,0,0.5};
	font="PuristaMedium";
	SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing=1;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class RscStructuredText
{
	deletable=0;
	fade=0;
	access=0;
	type=13;
	idc=-1;
	style=0;
	colorText[]={1,1,1,1};
	class Attributes
	{
		font="PuristaMedium";
		color="#ffffff";
		colorLink="#D09B43";
		align="left";
		shadow=1;
	};
	x=0;
	y=0;
	h=0.035;
	w=0.1;
	text="";
	size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow=1;
};
class RscEdit
{
	deletable=0;
	fade=0;
	access=0;
	type=2;
	x=0;
	y=0;
	h=0.039999999;
	w=0.2;
	colorBackground[]={0,0,0,0};
	colorText[]={0.94999999,0.94999999,0.94999999,1};
	colorDisabled[]={1,1,1,0.25};
	colorSelection[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	autocomplete="";
	text="";
	size=0.2;
	style="0x00 + 0x40";
	font="PuristaMedium";
	shadow=2;
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify=1;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class RscButton
{
	deletable=0;
	fade=0;
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.25};
	colorBackground[]={0,0,0,0.5};
	colorBackgroundDisabled[]={0,0,0,0.5};
	colorBackgroundActive[]={0,0,0,1};
	colorFocused[]={0,0,0,1};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,1};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter.wss",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush.wss",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick.wss",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape.wss",
		0.090000004,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	shadow=2;
	font="PuristaMedium";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX=0;
	offsetY=0;
	offsetPressedX=0;
	offsetPressedY=0;
	borderSize=0;
};
class RscBox
{
	type=0;
	idc=-1;
	style=2;
	shadow=2;
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0.02;
	colorBackground[]={0.5,0.69999999,0.2,0.89999998};
	text="";
};
class RscFrame
{
	type=0;
	idc=-1;
	style=64;
	shadow=2;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="PuristaMedium";
	sizeEx=0.02;
	text="";
	x=0;
	y=0;
	w=0.30000001;
	h=0.30000001;
};
class RscPicture
{
	deletable=0;
	fade=0;
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.2;
	h=0.15000001;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class 34thPRC_airburst_set_fuse_distance_ui
{
	idd=10846;
	movingenable=1;
	onLoad="_this call aux_34thPRC_fnc_airburst_onload";
	class Controls
	{
		class Menu_Background: RscPicture
		{
			idc=100;
			text="34thPRC_Functions\M99A2S3A\resources\terminal.paa";
			x="safeZoneX + safeZoneW * 0.29375";
			y="safeZoneY + safeZoneH * 0.225";
			w="safeZoneW * 0.4";
			h="safeZoneH * 0.26574075";
			colorText[]={1,1,1,1};
		};
		class Range_Heading: RscStructuredText
		{
			idc=-1;
			text="RANGE (m):";
			x="safeZoneX + safeZoneW * 0.33";
			y="safeZoneY + safeZoneH * 0.275";
			w="safeZoneW * 0.05";
			h="safeZoneH * 0.025";
			colorBackground[]={-1,-1,-1,0};
			colorActive[]={-1,-1,-1,0};
			colorText[]={1,1,1,1};
		};
		class Range_Box: RscEdit
		{
			idc=101;
			text="";
			x="safeZoneX + safeZoneW * 0.38";
			y="safeZoneY + safeZoneH * 0.275";
			w="safeZoneW * 0.0375";
			h="safeZoneW * 0.015";
			colorText[]={1,1,1,1};
			tooltip="Set fuse range";
			size="0.04";
			style="0x40";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class Min_Range_Text: RscStructuredText
		{
			idc=-1;
			text="Min Range (m):";
			x="safeZoneX + safeZoneW * 0.33020834";
			y="safeZoneY + safeZoneH * 0.3";
			w="safeZoneW * 0.075";
			h="safeZoneH * 0.025";
			colorBackground[]={-1,-1,-1,0};
			colorActive[]={-1,-1,-1,0};
			colorText[]={1,1,1,1};
		};
		class Min_Range_Value: RscStructuredText
		{
			idc=103;
			text="min1";
			x="safeZoneX + safeZoneW * 0.4";
			y="safeZoneY + safeZoneH * 0.3";
			w="safeZoneW * 0.0375";
			h="safeZoneH * 0.025";
			colorBackground[]={-1,-1,-1,0};
			colorActive[]={-1,-1,-1,0};
			colorText[]={1,1,1,1};
		};
		class Max_Range_Text: RscStructuredText
		{
			idc=-1;
			text="Max Range (m):";
			x="safeZoneX + safeZoneW * 0.33020834";
			y="safeZoneY + safeZoneH * 0.325";
			w="safeZoneW * 0.075";
			h="safeZoneH * 0.025";
			colorBackground[]={-1,-1,-1,0};
			colorText[]={1,1,1,1};
		};
		class Max_Range_Value: RscStructuredText
		{
			idc=104;
			text="max1";
			x="safeZoneX + safeZoneW * 0.4";
			y="safeZoneY + safeZoneH * 0.325";
			w="safeZoneW * 0.0375";
			h="safeZoneH * 0.025";
			colorBackground[]={-1,-1,-1,0};
			colorActive[]={-1,-1,-1,0};
			colorText[]={1,1,1,1};
		};
		class Range_Random_MinMax_Text: RscStructuredText
		{
			idc=-1;
			text="Delay -/+ (m):";
			x="safeZoneX + safeZoneW * 0.33020834";
			y="safeZoneY + safeZoneH * 0.35";
			w="safeZoneW * 0.075";
			h="safeZoneH * 0.025";
			colorBackground[]={-1,-1,-1,0};
			colorActive[]={-1,-1,-1,0};
			colorText[]={1,1,1,1};
		};
		class Range_Random_MinMax_Value: RscStructuredText
		{
			idc=105;
			text="-/+";
			x="safeZoneX + safeZoneW * 0.4";
			y="safeZoneY + safeZoneH * 0.35";
			w="safeZoneW * 0.08";
			h="safeZoneH * 0.025";
			colorBackground[]={-1,-1,-1,0};
			colorActive[]={-1,-1,-1,0};
			colorText[]={1,1,1,1};
		};
		class Button_Confirm: RscButton
		{
			idc=102;
			text=" CONFIRM";
			x="safeZoneX + safeZoneW * 0.33020834";
			y="safeZoneY + safeZoneH * 0.425";
			w="safeZoneW * 0.0625";
			h="safeZoneH * 0.025";
			tooltip="Set range (can still be changed again).";
			onButtonClick="[_this] call aux_34thPRC_fnc_airburst_onConfirm";
			colorBackground[]={0,0.25,0,1};
			colorBackgroundActive[]={0,0.5,0,1};
		};
		class Button_Exit: RscButton
		{
			idc=1701;
			text="CANCEL";
			x="safeZoneX + safeZoneW * 0.40520834";
			y="safeZoneY + safeZoneH * 0.425";
			w="safeZoneW * 0.0625";
			h="safeZoneH * 0.025";
			tooltip="Exit without adjusting fuse setting.";
			onButtonClick="[_this] call aux_34thPRC_fnc_airburst_onExit";
			colorBackground[]={0.25,0,0,0.5};
			colorBackgroundActive[]={0.5,0,0,1};
		};
	};
};
