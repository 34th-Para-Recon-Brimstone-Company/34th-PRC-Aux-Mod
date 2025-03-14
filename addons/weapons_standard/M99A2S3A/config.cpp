class CfgPatches
{
	class 34thPRC_WeaponsStandard_M99A2S3A
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_WeaponsStandard";
		requiredAddons[]=
		{
			"34thPRC_WeaponsStandard",
		};
		units[]={};
	};
};
class M99A2S3A_Properties_Defualt
{
	fuse_distance_random_min=0;
	fuse_distance_random_max=0;
	fuse_distance_max=300;
	fuse_distance_min=100;
	fuse_explosion="Airburst_Grenade_Explosion";
};
class CfgWeapons
{
	class OPTRE_M99A2S3;
	class Single;
	class 34thPRC_M99A2S3A : OPTRE_M99A2S3
	{
		baseWeapon="34thPRC_M99A2S3A";
		displayName="[34th] M99A2S3A 'Stanchion Airburst'";
		magazines[]=
		{
			"34th_M99A2S3A_mag",
			"OPTRE_7Rnd_20mm_APFSDS_Mag"
		};
		class Single: Single
		{
			reloadTime=1;
			autoFire=0;
		};
		weaponInfoType="RscOptics_airburst";
	};
};
class CfgMagazines
{
	class OPTRE_7Rnd_20mm_APFSDS_Mag;
	class 34th_M99A2S3A_mag : OPTRE_7Rnd_20mm_APFSDS_Mag
	{
		class M99A2S3A_Properties : M99A2S3A_Properties_Defualt
		{
			fuse_distance_random_min=3;
			fuse_distance_random_max=5;
			fuse_distance_max=3000;
			fuse_distance_min=50;
			fuse_explosioon="Airburst_Grenade_Explosion";
		};
		displayName="10rnd Programmable Airburst";
		displaynameshort="3P Airburst";
		descriptionShort="10 round magazine with programmable explosive tipped bullets";
		ammo="34thPRC_3P_Ammo";
		count=10;
		initspeed=500;
		lastRoundsTracer=10;
	};
};
class CfgAmmo
{
	class OPTRE_B_20mm_APFSDS;
	class 34thPRC_3P_Ammo: OPTRE_B_20mm_APFSDS
	{
		caliber=1;
		ACE_caliber=5.6900001;
		ACE_bulletMass=4.0176001;
		ACE_bulletLength=23.011999;
		hit=55;
		indirectHit=15;
		indirectHitRange=4;
		explosive=1;
	};
	class HelicopterExploSmall;
	class Airburst_Grenade_Explosion : HelicopterExploSmall
	{
		hit=35;
		indirectHit=50;
		indirectHitRange=7;
		model="OPTRE_weapons\gl\mag_he.p3d";
		ace_frag_enabled=1;
		ace_frag_metal=10000;
		ace_frag_charge=1000;
		ace_frag_gurney_c=5000;
		ace_frag_gurney_k="3/5";
		ace_frag_classes[]=
		{
			"ACE_frag_medium_HD"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
		dangerRadiusHit=50;
		deflecting=-3;
		deflectionSlowDown=10;
		explosionEffectsRadius=1.5;
		explosionSoundEffect="DefaultExplosion";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01.wss",
			3.1622801,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02.wss",
			3.1622801,
			1,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03.wss",
			3.1622801,
			1,
			1500
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04.wss",
			3.1622801,
			1,
			1500
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		ACE_damageType="explosive";
		CraterEffects="GrenadeCrater";
		CraterWaterEffects="ImpactEffectsWaterExplosion";
		explosionType="explosive";
		simulation="shotGrenade";
	};
};
class RscControlsGroup;
class RscText;
class VScrollbar;
class HScrollbar;
class RscInGameUI
{
	class RscUnitInfo;
	class RscOptics_airburst: RscUnitInfo
	{
		idd=300;
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * (0.01875 * SafezoneH) + (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * (0.025 * SafezoneH) + (SafezoneY)";
			w="53.5 * (0.01875 * SafezoneH)";
			h="40 * (0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc=198;
					style=0;
					sizeEx="0.045*SafezoneH";
					colorText[]={0,1,0,0.5};
					shadow=0;
					font="EtelkaMonospacePro";
					text="- - - -";
					x="38 * (0.01875 * SafezoneH)";
					y="18 * (0.025 * SafezoneH)";
					w="5.6 * (0.01875 * SafezoneH)";
					h="2 * (0.025 * SafezoneH)";
				};
			};
		};
	};
};
