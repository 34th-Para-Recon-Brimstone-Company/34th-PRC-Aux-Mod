class CfgPatches
{
	class 34thPRC_OPTRE_Pelican
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"34thPRC_OPTRE_Pelican",
			"OPTRE_Vehicles_SOCOM_Pelican", //[DEV] OPTRE -> Vehicles_Air -> P_SOCOM
		};
		units[]={};
	};
};

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
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class Components;
	};
	class OPTRE_Pelican_F: Helicopter_Base_H
	{
	};
	class OPTRE_Pelican_unarmed: OPTRE_Pelican_F
	{
	};
	class OPTRE_Pelican_armed: OPTRE_Pelican_F
	{
	};

	class OPTRE_Pelican_unarmed_SOCOM: OPTRE_Pelican_unarmed
	{
		irTargetSize=1;
		radarTargetSize=1;
	};

	class OPTRE_Pelican_armed_SOCOM : OPTRE_Pelican_armed
	{
		irTargetSize=1;
		radarTargetSize=1;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: Components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,12000,8000,6000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,12000,8000,6000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
	};
};
