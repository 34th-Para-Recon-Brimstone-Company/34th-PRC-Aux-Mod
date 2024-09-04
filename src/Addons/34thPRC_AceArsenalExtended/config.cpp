class CfgPatches
{
	class 34thPRC_AceArsenalExtended
	{
		author = "34th PRC Modding Team, J.Koko";
		units[] = {};
		requiredAddons[] = {
			"34thPRC_ArmourStandard", // 34th PRC Aux Mod
			"aceax_gearinfo" // Ace Arsenal Extended
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class cfgWeapons
	{
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light
		{
			label = "[34thPRC] Uniforms";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo", "collar", "variant"};
			class variant
			{
				label = "Variant";
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"light", "medium", "heavy"};
				class light
				{
					label = "Light";
				};
				class medium
				{
					label = "Medium";
				};
				class heavy
				{
					label = "Heavy";
				};
			};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class collar
			{
				label = "Collar";
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"up", "down"};
				class up
				{
					label = "Collar";
				};
				class down
				{
					label = "No Collar";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Urban
		{
			label = "[34thPRC] ODST Armors";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo", "medic"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class medic
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"standard", "isMedic"};
				class standard
				{
					label = "Non-Medic";
				};
				class isMedic
				{
					label = "Medic";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_UrbanRed
		{
			label = "[34thPRC] ODST Uniforms";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urbanRed", "urbanBlue", "arctic", "arid", "tropic", "woodland"};
				class urbanRed
				{
					label = "Red";
				};
				class urbanBlue
				{
					label = "Blue";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};

		// MA CH252 Helmets
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban
		{
			label = "[34thPRC] CH252 Helmets";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo", "eyewear", "medic"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class eyewear
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"standard", "eyepiece", "visor"};
				class standard
				{
					label = "Standard";
				};
				class eyepiece
				{
					label = "Eyepiece";
				};
				class visor
				{
					label = "Visor";
				};
			};
			class medic
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"false", "true"};
				class false
				{
					label = "Non-Medic";
				};
				class true
				{
					label = "Medic";
				};
			};
		};

		// MA ODST Helmets
		class 34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor
		{
			label = "[34thPRC] ODST Helmets";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo", "visor"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class visor
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"white", "maroon"};
				class white
				{
					label = "White";
				};
				class maroon
				{
					label = "Maroon";
				};
			};
		};
	};

	class cfgVehicles
	{
		class 34thPRC_ArmourStandard_ODST_M56S_Urban
		{
			label = "[34thPRC] M56S ODST Rucksack";
			author = "34th PRC Modding Team";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase
		{
			label = "[34thPRC] M56S ODST Guncase";
			author = "34th PRC Modding Team";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Medic
		{
			label = "[34thPRC] M56S ODST Medic Rucksack";
			author = "34th PRC Modding Team";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Radio
		{
			label = "[34thPRC] M56S ODST Radio Rucksack";
			author = "34th PRC Modding Team";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class cfgWeapons
	{
		// MA Marine Uniforms
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urban";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "urban";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "urban";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urban";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "urban";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "urban";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "arctic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "arctic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "arctic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "arctic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "arctic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "arctic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "arid";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "arid";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "arid";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "arid";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "arid";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "arid";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "tropic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "tropic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "tropic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "tropic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "tropic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "tropic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "woodland";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "woodland";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "woodland";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "woodland";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "woodland";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "woodland";
			collar = "down";
		};

		// MA ODST Vests
		class 34thPRC_ArmourStandard_ODST_M56R_Urban
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urban";
			medic = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Arid
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arid";
			medic = "standard";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Arctic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arctic";
			medic = "standard";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Woodland
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "woodland";
			medic = "standard";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Tropic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "tropic";
			medic = "standard";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Urban_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urban";
			medic = "isMedic";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Arctic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arctic";
			medic = "isMedic";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Arid_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arid";
			medic = "isMedic";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Tropic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "tropic";
			medic = "isMedic";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Woodland_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "woodland";
			medic = "isMedic";
		}

		// MA ODST Uniforms
		class 34thPRC_ArmourStandard_ODST_Uniform_UrbanRed
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "urbanRed";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_UrbanBlue
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "urbanBlue";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Arctic
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Arid
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Tropic
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Woodland
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "woodland";
		};

		// MA CH252 Helmets
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "visor";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "visor";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "visor";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "visor";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "visor";
			medic = "true";
		};

		// MA ODST Helmets
		class 34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "urban";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Urban_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "urban";
			visor = "maroon";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Arctic_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "arctic";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Arctic_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "arctic";
			visor = "maroon";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Arid_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "arid";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Arid_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "arid";
			visor = "maroon";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Tropic_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "tropic";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Tropic_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "tropic";
			visor = "maroon";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Woodland_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "woodland";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Woodland_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "woodland";
			visor = "maroon";
		};
	};

	class cfgVehicles
	{
		class 34thPRC_ArmourStandard_ODST_M56S_Urban
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "urban";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arctic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arid
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Tropic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Woodland
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "woodland";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "urban";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arctic_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arid_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Tropic_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Woodland_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "woodland";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "urban";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arctic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arid_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_tropic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Woodland_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "woodland";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "urban";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arctic_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arid_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Tropic_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Woodland_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "woodland";
		};
	};
};
