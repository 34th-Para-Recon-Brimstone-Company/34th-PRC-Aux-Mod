class OPTRE_Rifle_Base; // OPTRE_FC_Weapons --> /Railgun/cfgWeapons.hpp
class OPTRE_FC_Railgun : OPTRE_Rifle_Base // OPTRE_Weapons --> /ar/cfgWeapons.hpp
{
	magazines[]+=
	{
		"34thPRC_Overrides_Weapons_Railgun_16x65mm_APSlug",
		"34thPRC_Overrides_Weapons_Railgun_16x65mm_3RoundAPSlug",
		"34thPRC_Overrides_Weapons_Railgun_16x65mm_HESlug",
	};
	magazineWell[]=
	{
		"OPTRE_FC_Railgun_Slug",
	};
};
