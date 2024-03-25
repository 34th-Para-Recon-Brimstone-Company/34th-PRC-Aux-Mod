class CfgPatches
{
	class 34thPRC_ArmourStandard
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddons[] =
		{
			"A3_Characters_F", // Vanilla
			"A3_Characters_F_EPB", // Vanilla
			"Halo_marine_02", // Misriah Armory Tactical Gear and Equipment
			"MA_Armor",	// Misriah Armory
			"WBK_EpsmSystem", // E.P.S.M ExoMod Remastered
			"PhoenixSystems_Exosuits" // E.P.S.M ExoMod Remastered
		};
	};
};
class CfgVehicles
{
	#include "data\config_vehicles.hpp"
};
class CfgWeapons
{
	#include "data\config_weapons.hpp"
};

class Extended_InitPost_EventHandlers {
    class CAManBase {
        class EPSM_ExoMod_SoldierInit {
			onRespawn="true";
            init = "_unit = _this select 0; if (local _unit) then {_unit setVariable [""WBK_AdvancedArmor"",100,true]; _unit setVariable [""WBK_JumpPackPower"",100]; _unit setVariable [""IMS_SoundObject"",nil,true]; _unit spawn WBK_EPSM_AdvancedArmour_Load;};";
		};
    };
};

class Extended_HitPart_EventHandlers {
    class CAManBase {
        class EPSM_ExoMod_SoldierHitPart {
			onRespawn="true";
            HitPart = "_this spawn WBK_EPSM_AdvancedArmour;";
        };
    };
};

class Extended_PreInit_EventHandlers
{
    class EPSM_PreInit
    {
        init="call compile preprocessFileLineNumbers '\ExoSystem_WBK\scripts\XEH_preInit.sqf'";
    };
};


class Extended_PostInit_EventHandlers
{
    class EPSM_PostInit
	{
        init="call compile preprocessFileLineNumbers '\ExoSystem_WBK\scripts\XEH_postInit.sqf'";
    };
};
