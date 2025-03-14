class OPTRE_FC_Railgun_Slug; // OPTRE_FC_Weapons --> /Ammo/cfgMagazines.hpp
class 34thPRC_Overrides_Weapons_Railgun_16x65mm_APSlug : OPTRE_FC_Railgun_Slug
{
	author="Vasya";
	ammo="34thPRC_Overrides_Weapons_Railgun_AP_16x65mm";
	displayName="1Rnd 16x65mm AP Slug";
	displayNameShort="1rnd 16x65mm Slug";
	descriptionShort="16x65mm Slug with penetrator tip for anti-vehicle capability";
	count=1;
	mass=10;
	tracersEvery=1;
};
class 34thPRC_Overrides_Weapons_Railgun_16x65mm_3RoundAPSlug: 34thPRC_Overrides_Weapons_Railgun_16x65mm_APSlug
{
	author="Vasya";
	displayName="3Rnd 16x65mm AP Slug";
	displayNameShort="3rnd 16x65mm Slug";
	descriptionShort="Three 16x65mm Slugs with penetrator tips for rapid fire, anti-vehicle capability";
	count=3;
	mass=30;
};
class 34thPRC_Overrides_Weapons_Railgun_16x65mm_HESlug: 34thPRC_Overrides_Weapons_Railgun_16x65mm_APSlug
{
	author="Vasya";
	ammo="34thPRC_Overrides_Weapons_Railgun_HE_16x65mm";
	displayName="1Rnd 16x65mm HE Slug";
	displayNameShort="1rnd 16x65mm HE Slug";
	descriptionShort="16x65mm slug packed with High Explosive filler for anti-personnel capability";
	count=1;
	mass=20;
};
