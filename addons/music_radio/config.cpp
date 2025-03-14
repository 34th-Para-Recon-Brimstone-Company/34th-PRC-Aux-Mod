class CfgPatches
{
	class 34thPRC_music
	{
		units[]={};
		weapons[]={};
		author="34thPRC Mod Dev Team, Over Yander"; //Original config credit to Unsung,
		//requiredVersion=2.04;
		requiredAddons[]=
		{
			"_IO_Blackjack","_lElectronic","_RocknRoll","V_80sRemix","V_80sRemix2", //Romp 2.0
		};
	};
};
class CfgSounds
{
	class Song0
	{
		name="Mountain - Mississipi Queen";
		sound[]=
		{
			"\_IO_Blackjack\Mountain - Mississipi Queen.ogg",
			5, //Volume, 1 is normal and 5 is max
			1, // Pitch, don't change
			15 //Max distance
		};
		titles[]={};
		uns_music_chopper=1;
	};
	class Song1
	{
		name="Nightcall";
		sound[]=
		{
			"\_lElectronic\Nightcall.ogg",
			5,
			1,
			15
		};
		titles[]={};
		uns_music_chopper=1;
	};
	class Song2
	{
		name="Rebel Yell";
		sound[]=
		{
			"\_RocknRoll\Rebel Yell.ogg",
			5,
			1,
			15
		};
		titles[]={};
		uns_music_chopper=1;
	};
	class Song3
	{
		name="That Way";
		sound[]=
		{
			"\V_80sRemix\That Way.ogg",
			5,
			1,
			15
		};
		titles[]={};
		uns_music_chopper=1;
	};
	class Song4
	{
		name="Invisible (Duran Duran) - MSGV";
		sound[]=
		{
			"\V_80sRemix2\Invisible (Duran Duran) - MGSV The Phantom Pain (Original Soundtrack).ogg",
			5,
			1,
			15
		};
		titles[]={};
		uns_music_chopper=1;
	};
};
