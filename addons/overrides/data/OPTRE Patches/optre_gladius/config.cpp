class CfgPatches
{
	class 34thPRC_OPTRE_Gladius
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"OPTRE_Plus", //Operation Trebuchet Plus
			"34thPRC_Overrides"
		};
		units[]={};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class Components;
	};
	class Plane_CAS_01_base_F: Plane_Base_F{};

	class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F{};
	class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F{};

	class OPTRE_gladius_01 : B_Plane_CAS_01_dynamicLoadout_F
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000,1000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000,1000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class OPTRE_gladius_02 : OPTRE_gladius_01
	{
		displayName="A-84L Gladius (Ins)";
		faction="OPTRE_INS";
		side=0;
		crew="OPTRE_Ins_URF_Pilot";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Plus\data\Gladius\Gladius_02_fuselage_01_co.paa",
			"OPTRE_Plus\data\Gladius\Gladius_02_fuselage_02_co.paa"
		};
	};
	class OPTRE_gladius_01L : OPTRE_gladius_01
	{
		displayName="A-84L Gladius";
		weapons[]=
		{
			"OPTRE_M6_Laser",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Plus\data\Gladius\Gladius_01_fuselage_01_co.paa",
			"OPTRE_Plus\data\Gladius\Gladius_01_fuselage_02_co.paa"
		};
		textureList[]=
		{
			"OPTRE_unscgladius_01L",
			1
		};
		class textureSources
		{
			class OPTRE_unscgladius_01L
			{
				displayName="Gladius camo";
				author="Nightovizard";
				textures[]=
				{
					"OPTRE_Plus\data\Gladius\Gladius_01_fuselage_01_co.paa",
					"OPTRE_Plus\data\Gladius\Gladius_01_fuselage_02_co.paa"
				};
				materials[]={};
				factions[]=
				{
					"BLU_F",
					"BLU_G_F"
				};
			};
		};
	};
	class OPTRE_gladius_02L : OPTRE_gladius_01L
	{
		displayName="A-84L Gladius (Ins)";
		faction="OPTRE_INS";
		side=0;
		crew="OPTRE_Ins_URF_Pilot";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Plus\data\Gladius\Gladius_02_fuselage_01_co.paa",
			"OPTRE_Plus\data\Gladius\Gladius_02_fuselage_02_co.paa"
		};
	};
};
