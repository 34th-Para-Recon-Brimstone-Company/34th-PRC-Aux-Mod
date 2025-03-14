class OPTRE_FC_16x65mm_Slug; // OPTRE_FC_Weapons --> /Ammo/cfgAmmo.hpp
class 34thPRC_Overrides_Weapons_Railgun_AP_16x65mm : OPTRE_FC_16x65mm_Slug
{
	caliber=32;
	hit=275;
	indirectHit=15;
	indirectHitRange=0;
	explosive=0.3;
	tracerStartTime=0.5;
	explosionEffects="ExploAmmoExplosion";
	craterEffects="ExploAmmoCrater";
};
class 34thPRC_Overrides_Weapons_Railgun_HE_16x65mm: 34thPRC_Overrides_Weapons_Railgun_AP_16x65mm
{
	caliber=8;
	hit=80;
	indirectHit=15;
	indirectHitRange=1;
	explosive=1;
	deflecting=4;
	ACE_damageType="grenade";
	ace_frag_enabled=1;
	ace_frag_classes[]=
	{
		"ACE_frag_small_HD",
	};
	ace_frag_metal=250;
	ace_frag_charge=800;
	ace_frag_gurney_c=3000;
	ace_frag_gurney_k="3/5";
	ace_vehicle_damage_incendiary=0.75;
	explosionEffects="ExploAmmoExplosion";
	craterEffects="ExploAmmoCrater";
	CraterWaterEffects="ImpactEffectsWaterHE";
};
