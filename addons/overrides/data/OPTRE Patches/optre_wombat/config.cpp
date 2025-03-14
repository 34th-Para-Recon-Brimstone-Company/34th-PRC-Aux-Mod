class CfgPatches
{
	class 34thPRC_OPTRE_Wombat
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"OPTRE_Vehicles_Sabre", //[DEV] OPTRE -> Vehicles_Air -> Wombat
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
class DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyML_AA_Missile: ProxyWeapon
	{
		model="\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		simulation="maverickweapon";
	};
};
class CfgVehicles
{
	class Plane;
	class UAV: Plane
	{
		class Turrets;
	};
	class UAV_05_Base_F: UAV
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components;
	};
	class OPTRE_Wombat_Base: UAV_05_Base_F
	{
		fuelCapacity=1550;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class IRSensorComponent: SensorTemplateIR
				{
					class AirTarget
					{
						minRange=500;
						maxRange=10000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=9000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					angleRangeHorizontal=360;
					angleRangeVertical=180;
					maxTrackableSpeed=400;
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					class AirTarget
					{
						minRange=500;
						maxRange=10000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=9000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					angleRangeHorizontal=26;
					angleRangeVertical=20;
					maxTrackableSpeed=100;
					aimDown=1;
					animDirection="mainGun";
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
				{
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange=16000;
						maxRange=16000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget
					{
						minRange=14000;
						maxRange=14000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					typeRecognitionDistance=5000;
					angleRangeHorizontal=180;
					angleRangeVertical=180;
					groundNoiseDistanceCoef=0.2;
				};
				class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
				{
					class AirTarget
					{
						minRange=16000;
						maxRange=16000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget
					{
						minRange=16000;
						maxRange=16000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					maxTrackableATL=100;
					maxTrackableSpeed=60;
					angleRangeHorizontal=60;
					angleRangeVertical=180;
				};
				class LaserSensorComponent: SensorTemplateLaser
				{
				};
				class NVSensorComponent: SensorTemplateNV
				{
				};
			};
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
						range[]={16000,10000,8000,4000,2000};
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
						range[]={16000,10000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
};
