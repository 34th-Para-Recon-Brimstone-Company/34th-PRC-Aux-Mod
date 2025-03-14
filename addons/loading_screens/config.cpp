class CfgPatches
{
	class 34thPRC_LoadingScreens
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddons[]=
		{
			"19th_Fleet_Armor"
		};
	};
};
class RscPicture
{
};
class RscStandardDisplay
{
};
class RscActiveText
{
};
class RscActivePicture: RscActiveText
{
};
class RscText
{
};
class RscTitles
{
	class SplashNoise
	{
		class BackgroundNoise: RscPicture
		{
			text="\34thPRC_LoadingScreens\data\splash_screen.paa";
		};
	};
	class brokenhud: SplashNoise
	{
		duration=100000000;
		class BackgroundNoise: RscPicture
		{
			text="\1st_SEC_main\_textures\Misc\crackedhud.paa";
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture
		{
			text="\34thPRC_LoadingScreens\data\company_emblem.paa";
		};
	};
	enableDisplay=0;
	delete Spotlight;
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\34thPRC_LoadingScreens\data\loading1.jpg";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd=250;
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\34thPRC_LoadingScreens\data\loading2.jpg";
				};
			};
		};
		class Loading_West1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\34thPRC_LoadingScreens\data\loading3.jpg";
				};
			};
		};
		class Loading_West2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\34thPRC_LoadingScreens\data\loading4.jpg";
				};
			};
		};
		class Loading_West3: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\34thPRC_LoadingScreens\data\loading9.jpg";
				};
			};
		};
		class Loading_East1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\34thPRC_LoadingScreens\data\loading1.jpg";
				};
			};
		};
		class Loading_East2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\34thPRC_LoadingScreens\data\loading2.jpg";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\34thPRC_LoadingScreens\data\loading1.jpg";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\34thPRC_LoadingScreens\data\loading2.jpg";
		};
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPic: RscPicture
	{
		idc=1;
		x="SafeZoneX";
		y="SafeZoneY";
		h="SafeZoneH";
		w="SafeZoneW";
		text="\34thPRC_LoadingScreens\data\loading3.jpg";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\34thPRC_LoadingScreens\data\loading4.jpg";
		};
	};
};
class CfgWorlds
{
	//The following define will preprocess to proper code at load where ever it is inserted. Add or remove loading screen texts here
	#define loadText\
	pictureShot="34thPRC_LoadingScreens\data\loading9.jpg";\
	loadingTexts[]=\
	{\
		"'I own a MAC gun for home defence just as the UNSC intended' - Unknown",\
		"'Remember to ask your leadership for your allotted estrogen rations.'",\
		"ONI Scientists would like to reassure you that biofoam is non addictive.",\
		"A brief message from ONI: All UNSC personal are reminded not to leak classified materials on the War Galaxy forums",\
		"'Do not trust Jod!!! They are EVIL!' - Scribbles of the Deranged",\
		"Assigned Goober At Brimstone aka AGAB",\
		"Are your E levels combat ready?",\
		"The Gates of Hell's medical staff have asked us to remind all personnel that latency is not what girls do when they're pregnant.",\
		"The chip implanted upon enlistment is not sour cream & onion flavored do not attempt to eat it.",\
	};\

	class CAWorld; //1st MEU
	class Stratis : CAWorld
	{
		description="Stratis";
		loadText
	};
	class Altis : CAWorld
	{
		description="Altis";
		loadText
	};
	class Anizay : CAWorld
	{
		description="Anizay";
		loadText
	};
		class Bariga : CAWorld
	{
		description="Bariga";
		loadText
	};
	class Blood_OPTRE : CAWorld
	{
		description="Blood Gulch";
		loadText
	};
	class bsoc_brasil : CAWorld
	{
		description="BSOC Brasil";
		loadText
	};
	class Bootcamp_ACR : CAWorld
	{
		description="Bukovina";
		loadText
	};
	class Woodland_ACR : CAWorld
	{
		description="Bystrica";
		loadText
	};
	class chernarus : CAWorld
	{
		description="Chernarus (Autumn)";
		loadText
	};
	class chernarus_summer: CAWorld
	{
		description="Chernarus (Summer)";
		loadText
	};
	class Chernarus_Winter: CAWorld
	{
		description="Chernarus (Winter)";
		loadText
	};
	class clafghan: CAWorld
	{
		description="CLA Clafghan";
		loadText
	};
	class Desert_E: CAWorld
	{
		description="Desert";
		loadText
	};
	class desert_island: CAWorld
	{
		description="Desert Island";
		loadText
	};
	class dingor: CAWorld
	{
		description="Dingor v3.82";
		loadText
	};
	class eladeen_terrain: CAWorld
	{
		description="Eladeen";
		loadText
	};
	class eden: CAWorld
	{
		description="Everon";
		loadText
	};
	class pja310: CAWorld
	{
		description="G.O.S Al Rayak";
		loadText
	};
	class pja308: CAWorld
	{
		description="G.O.S Gunkizli";
		loadText
	};
	class pja314: CAWorld
	{
		description="G.O.S Leskovets";
		loadText
	};
	class pja319: CAWorld
	{
		description="G.O.S N'Djenahoud";
		loadText
	};
	class pja305: CAWorld
	{
		description="G.O.S N'Ziwasogo";
		loadText
	};
	class pja312: CAWorld
	{
		description="G.O.S Song Bin Tanh APEX";
		loadText
	};
	class OPTRE_Gridlock: Stratis
	{
		description="Gridlock";
		loadText
	};
	class hellanmaa: CAWorld
	{
		description="Hellanmaa";
		loadText
	};
	class hellanmaaw: CAWorld
	{
		description="Hellanmaa winter";
		loadText
	};
	class OPTRE_iberius: Stratis
	{
		description="Iberius";
		loadText
	};
	class tem_ihantalaw: CAWorld
	{
		description="Ihantala Winter";
		loadText
	};
	class abramia: CAWorld
	{
		description="Isla Abaramia v3.9";
		loadText
	};
	class isladuala3: CAWorld
	{
		description="Isla Duala v3.9.5";
		loadText
	};
	class OPTRE_Kholo: CAWorld
	{
		description="Kholo";
		loadText
	};
	class cain: CAWorld
	{
		description="Kolgujev";
		loadText
	};
	class lingor3: CAWorld
	{
		description="Lingor v3.9.5";
		loadText
	};
	class Enoch: CAWorld
	{
		description="Livonia";
		loadText
	};
	class OPTRE_Madrigal: CAWorld
	{
		description="Madrigal";
		loadText
	};
	class abel: CAWorld
	{
		description="Malden";
		loadText
	};
	class Malden: CAWorld
	{
		description="Malden 2035";
		loadText
	};
	class Mountain_Wilderness: CAWorld
	{
		description="Mountain Wilderness";
		loadText
	};
	class Nam2: CAWorld
	{
		description="Nam2";
		loadText
	};
	class noe: CAWorld
	{
		description="Nogova";
		loadText
	};
	class Pandora: CAWorld
	{
		description="Pandora";
		loadText
	};
	class Winthera3: CAWorld
	{
		description="Panthera (Winter)v3.9";
		loadText
	};
	class panthera3: CAWorld
	{
		description="Panthera v3.9";
		loadText
	};
	class porto: CAWorld
	{
		description="Porto";
		loadText
	};
	class ProvingGrounds_PMC: CAWorld
	{
		description="Proving Grounds";
		loadText
	};
	class pulau: CAWorld
	{
		description="Pulau";
		loadText
	};
	class intro: CAWorld
	{
		description="Rahmadi";
		loadText
	};
	class ruha: CAWorld
	{
		description="Ruha";
		loadText
	};
	class sara: CAWorld
	{
		description="Sahrani";
		loadText
	};
	class Kapaulio: CAWorld
	{
		description="Saint Kapaulio";
		loadText
	};
	class OPTRE_Sandstorm: Stratis
	{
		description="Sandstorm";
		loadText
	};
	class Shapur_BAF: CAWorld
	{
		description="Shapur";
		loadText
	};
	class saralite: CAWorld
	{
		description="Southern Sahrani";
		loadText
	};
	class tem_summa: CAWorld
	{
		description="Summa";
		loadText
	};
	class tem_summawcup: CAWorld
	{
		description="Summa winter";
		loadText
	};
	class Takistan: CAWorld
	{
		description="Takistan";
		loadText
	};
	class Mountains_ACR: CAWorld
	{
		description="Takistan Mountains";
		loadText
	};
	class Tanoa: CAWorld
	{
		description="Tanoa";
		loadText
	};
	class Todt: CAWorld
	{
		description="Todt";
		loadText
	};
	class jns_tria: CAWorld
	{
		description="Tria";
		loadText
	};
	class United_Sahrani: CAWorld
	{
		description="United Sahrani";
		loadText
	};
	class utes: CAWorld
	{
		description="Utes";
		loadText
	};
	class VR: CAWorld
	{
		description="Virtual Reality";
		loadText
	};
	class zargabad: CAWorld
	{
		description="Zargabad";
		loadText
	};
	class usec_aoraki: CAWorld
	{
		description="Aoraki";
		loadText
	};
	class OPTRE_Arcadia: CAWorld
	{
		description="Arcadia";
		loadText
	};
	class cytech_underground_terrain: CAWorld
	{
		description="Cytech";
		loadText
	};
	class lsb_terrain_endor: CAWorld
	{
		description="Endor";
		loadText
	};
	class OPTRE_EridanusSecundus: Stratis
	{
		description="Eridanus";
		loadText
	};
	class fapovo: CAWorld
	{
		description="Fapovo";
		loadText
	};
	class lsb_terrain_geonosis: CAWorld
	{
		description="Geonosis: Sector 528";
		loadText
	};
	class lsb_terrain_geonosis2: CAWorld
	{
		description="Geonosis: Sector 506";
		loadText
	};
	class pja307: CAWorld
	{
		description="G.O.S Dariyah";
		loadText
	};
	class grassland: CAWorld
	{
		description="Grassland";
		loadText
	};
	class OPTRE_Archipelago: CAWorld
	{
		description="IO4: Archipelago";
	};
	class OPTRE_Snowlands: CAWorld
	{
		description="IO4: Snowlands";
		loadText
	};
	class OPTRE_Installation04: CAWorld
	{
		description="IO4: Highlands";
		loadText
	};
	class OPTRE_Wetlands: CAWorld
	{
		description="I04: Wetlands";
		loadText
	};
	class Jabiim: CAWorld
	{
		description="Jabiim";
		loadText
	};
	class kerama: CAWorld
	{
		description="Kerama";
		loadText
	};
	class OPTRE_Kholo2: CAWorld
	{
		description="Kholo Clear";
		loadText
	};
	class OPTRE_Kholo2s: CAWorld
	{
		description="Kholo Neclear Winter";
		loadText
	};
	class regero: CAWorld
	{
		description="Kingdom of Regero";
		loadText
	};
	class VTF_Lybor: CAWorld
	{
		description="Lybor";
	};
	class lsb_terrain_mimban: CAWorld
	{
		description="Mimban";
		loadText
	};
	class egl_miranda: CAWorld
	{
		description="miranda";
		loadText
	};
	class Napf: CAWorld
	{
		description="Napf Island";
		loadText
	};
	class New_Mombasa: CAWorld
	{
		description="New Mombasa";
		loadText
	};
	class Offworld_Cold: CAWorld
	{
		description="Offworld Cold";
		loadText
	};
	class Offworld_Warm: CAWorld
	{
		description="Offworld Warm";
		loadText
	};
	class OPTRE_Phobos: Altis
	{
		description="Phobos";
		loadText
	};
	class lsb_terrain_scarif: CAWorld
	{
		description="Scarif";
		loadText
	};
	class 126map : CAWorld
	{
		description="St George";
		loadText
	};
	class Tembelan: CAWorld
	{
		description="Tembelan";
		loadText
	};
	class sara_dbe1: CAWorld
	{
		description="United Sahrani";
		loadText
	};
	class tem_vinjesvingenc: CAWorld
	{
		description="Vinjesvingen";
		loadText
	};
	class vt7 : CAWorld
	{
		description="Virolahti";
		loadText
	};
	/*END OF 1ST MEU DEFINED MAPS*/
};
