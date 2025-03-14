class OPTRE_UNSC_falcon_S; // OPTRE_Vehicles_Air
class OPTRE_UNSC_falcon_armed_S: OPTRE_UNSC_falcon_S
{
	magazines[]+=
	{
		""
	};
	class Presets
	{
		class Default
		{
			displayName="AT CAS: ANVIL I";
			attachment[]=
			{
			"OPTRE_16Rnd_Anvil1_missiles",
			"OPTRE_4Rnd_Scorpion_missiles"
			};
		};
		class CAS_Rockets
		{
			displayName="AT CAS: ANVIL II";
			attachment[]=
			{
			"OPTRE_16Rnd_Anvil2_missiles",
			"OPTRE_4Rnd_Scorpion_missiles"
			};
		};
		class CAS_Rockets_Guided
		{
			displayName="AT CAS: ANVIL III";
			attachment[]=
			{
			"OPTRE_16Rnd_Anvil3_missiles",
			"OPTRE_4Rnd_Scorpion_missiles"
			};
		};
		class CAS_AT
		{
			displayName="AT CAS: C2GMLS";
			attachment[]=
			{
			"OPTRE_4Rnd_C2GMLS_missiles",
			"OPTRE_4Rnd_Scorpion_missiles"
			};
		};
	};
};
